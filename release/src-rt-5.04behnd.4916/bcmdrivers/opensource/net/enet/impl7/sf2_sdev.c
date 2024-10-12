/*
   <:copyright-BRCM:2015:DUAL/GPL:standard
   
      Copyright (c) 2015 Broadcom 
      All Rights Reserved
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License, version 2, as published by
   the Free Software Foundation (the "GPL").
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   
   A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
   writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
   
   :>
 */

/*
 *  Created on: Mar/2019
 *      Author: steven.hsieh@broadcom.com
 */

#if defined(CONFIG_NET_SWITCHDEV)

#include <bcmnet.h>
#include "port.h"
#include "enet.h"
#include "sf2.h"
#include "sf2_common.h"
#include "linux/if_bridge.h"
#include "linux/netdevice.h"

extern int get_port_by_leaf_dev(struct net_device *leaf_dev, enetx_port_t **port);

#if (LINUX_VERSION_CODE < KERNEL_VERSION(5,1,0))
int sf2_switchdev_port_attr_get(struct net_device *dev,
                                struct switchdev_attr *attr)
{
    enetx_port_t *port = NULL;

    get_port_by_leaf_dev(dev, &port);

    switch (attr->id) {
    case SWITCHDEV_ATTR_ID_PORT_PARENT_ID:
        if (port) {
            attr->u.ppid.id_len = sizeof(port->obj_name) > MAX_PHYS_ITEM_ID_LEN ? MAX_PHYS_ITEM_ID_LEN : sizeof(port->obj_name);
            // if port is hw fwd enabled, use  real switch name
            if (is_netdev_hw_switch(port->dev))
                strncpy(attr->u.ppid.id, port->p.parent_sw->obj_name, attr->u.ppid.id_len-1);
            // otherwise if port is part of bonding group, use bond master name
            else if (port->p.bond_grp && port->p.bond_grp->bond_dev)
                strncpy(attr->u.ppid.id, port->p.bond_grp->bond_dev->name, attr->u.ppid.id_len-1);
            // otherwise use its own name to differentiate from real switch name
            else
                strncpy(attr->u.ppid.id, port->obj_name, attr->u.ppid.id_len-1);
            attr->u.ppid.id[attr->u.ppid.id_len-1]='\0';
            enet_dbgv("dev:%s attr->id:%d PORT_PARENT_ID parenet=%s\n", dev->name, attr->id, attr->u.ppid.id);
        }
        break;
//    case SWITCHDEV_ATTR_ID_PORT_BRIDGE_FLAGS:
//        break;
    case SWITCHDEV_ATTR_ID_PORT_BRIDGE_FLAGS_SUPPORT:
        enet_dbgv("dev:%s attr->id:%d PORT_BRIDGE_FLAGS_SUPPORT\n", dev->name, attr->id);
        attr->u.brport_flags_support = BR_LEARNING;
        break;
    default:
        enet_dbgv("dev:%s attr->id:%d ret -EOPNOTSUPP\n", dev->name, attr->id);
        return -EOPNOTSUPP;
    }

    return 0;
}
#endif // < 5.1.0

#if (LINUX_VERSION_CODE < KERNEL_VERSION(5,1,0))
int sf2_switchdev_port_attr_set(struct net_device *dev,
                                const struct switchdev_attr *attr,
                                struct switchdev_trans *trans)
#else
int sf2_switchdev_port_attr_set(struct net_device *dev,
                                struct switchdev_notifier_port_attr_info *attr_info)
#endif
{
    enetx_port_t *port = NULL;
    int err = 0;
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(5,1,0))
    const struct switchdev_attr *attr = attr_info->attr;
    
    attr_info->handled = true;
#endif

    get_port_by_leaf_dev(dev, &port);

    switch (attr->id) {
    case SWITCHDEV_ATTR_ID_PORT_STP_STATE:
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(5,1,0))
        enet_dbgv("dev:%s attr->id:%d PORT_STP_STATE=%d\n", dev->name, attr->id, attr->u.stp_state);
#else
        enet_dbgv("dev:%s attr->id:%d %s PORT_STP_STATE=%d\n", dev->name, attr->id,  switchdev_trans_ph_commit(trans) ? "commit":"prepare", attr->u.stp_state);
       if (switchdev_trans_ph_prepare(trans)) return 0;
#endif
        if (port)
            err = port_sw_port_stp_set(port, STP_MODE_UNCHANGED, attr->u.stp_state);

        if (attr->u.stp_state == STP_BLOCKING) {
            // update if device has hw fdb when enter STP_BLOCKING (most likely device just join bridge, or link comes up)
            // flag is used to determine if non-hw fdb device learned a MAC and need to clear from hw fdb
            if (port && is_netdev_hw_switch(port->dev))
                netdev_hw_fdb_set(dev);
            else
                netdev_hw_fdb_unset(dev);
        }
        break;
//    case SWITCHDEV_ATTR_ID_PORT_BRIDGE_FLAGS:
//        break;
    default:
#if (LINUX_VERSION_CODE < KERNEL_VERSION(5,1,0))
        enet_dbgv("dev:%s attr->id:%d %s ret -EOPNOTSUPP\n", dev->name, attr->id,  switchdev_trans_ph_commit(trans) ? "commit":"prepare");
#endif
        err = -EOPNOTSUPP;
        break;
    }

    return err;
}

/* Called under rcu_read_lock() */
static int sf2_switchdev_event(struct notifier_block *unused, unsigned long event, void *ptr)
{
    struct net_device *dev = switchdev_notifier_info_to_dev(ptr);
    struct switchdev_notifier_fdb_info *fdb_info = ptr;
    enetx_port_t *port = NULL;

    /* We want to purge ARL entry from SF2 when the learning happened in non SF2 port, so should
       return on board without SF2 */
    if (!sf2_sw)
        return NOTIFY_DONE;

    switch (event) {
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(5,1,0))
    case SWITCHDEV_PORT_ATTR_SET:
        {
            struct net_device *dev = switchdev_notifier_info_to_dev(ptr);
            int err = sf2_switchdev_port_attr_set(dev, ptr);
            return notifier_from_errno(err);
        }
        break;
#endif
    case SWITCHDEV_FDB_ADD_TO_DEVICE:
        // only care about non-sf2 port or sf2 softswitching port learning new mac, need to clear sf2 arl
        get_port_by_leaf_dev(dev, &port);
        if (!(port && is_netdev_hw_switch(port->dev)) && memcmp(fdb_info->addr, dev->dev_addr, ETH_ALEN)) {
            remove_arl_entry_wrapper((void*)(fdb_info->addr));
        }
        break;
    case SWITCHDEV_FDB_DEL_TO_DEVICE:
        break;
    }
    return NOTIFY_DONE;
}

static struct notifier_block sf2_switchdev_notifier = {
    .notifier_call = sf2_switchdev_event,
};

int sf2_switchdev_init(void)
{
    int err;
    err = register_switchdev_notifier(&sf2_switchdev_notifier);
    if (err) {
        enet_err("Failed to register switchdev notifier\n");
        return err;
    }
    
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(5,1,0))
    err = register_switchdev_blocking_notifier(&sf2_switchdev_notifier);
    if (err) {
        enet_err("Failed to register switchdev blocking notifier\n");
        return err;
    }
#endif

    return 0;
}
#endif //CONFIG_NET_SWITCHDEV
