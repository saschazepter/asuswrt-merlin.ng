/*
<:copyright-BRCM:2018:DUAL/GPL:standard

   Copyright (c) 2018 Broadcom 
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

#include <linux/module.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/of_device.h>
#include <linux/miscdevice.h>
#include <linux/slab.h> 
#include "opticaldet.h"
#include "pmd.h"
#include "bcm_ioremap_shared.h"
 
extern int try_wan_type_sensing(pmd_calibration_parameters *calibration_parameters_from_json,
    int signal_detect_required,
    wan_type_auto_detect_result *result);
 
void *g_gpon_rcvr_base = NULL;
void *g_epon_top_base = NULL;
void *g_epon_lif_base = NULL;
void *g_epon_xpcsr_base = NULL;
void *g_ngpon_rxgen_base = NULL;
 
static int _file_open(struct inode *inode, struct file *file)
{
    return 0;
}

static int _file_release(struct inode *inode, struct file *file)
{
    return 0;
}

static long _detect_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
    int ret = 0;
    wan_type_auto_detect_info *p_wan_auto_detect = NULL;
    pmd_calibration_parameters *p_calibration_parameters = NULL;

    switch (cmd)
    {
        case OPTICALDET_IOCTL_DETECT:
            {
                p_wan_auto_detect = kmalloc(sizeof(wan_type_auto_detect_info), GFP_KERNEL);
                if (!p_wan_auto_detect)
                {
                    printk(KERN_ERR "\nkmalloc failure.\n");
                    ret = -1;
                    goto exit;
                }

                ret = copy_from_user(p_wan_auto_detect, (void *)arg, sizeof(wan_type_auto_detect_info));
                if (ret)
                {
                    printk(KERN_ERR "\nError in Optical WAN type auto-detection module - OPTICALDET_IOCTL_DETECT.\n");
                    goto exit;
                }

                if (p_wan_auto_detect->pmd_settings.is_calibration_file_valid)
                {
                    p_calibration_parameters = &(p_wan_auto_detect->pmd_settings.calibration_parameters_from_json);
                }

                ret = try_wan_type_sensing(p_calibration_parameters, 
                              p_wan_auto_detect->signal_detect_required,
                              &(p_wan_auto_detect->result));
                if (ret)
                {
                    printk("%s: try_wan_type_sensing failed!\n", __FUNCTION__);
                    goto exit;
                }
            }
            break;
        default:
            printk("%s: ERROR: No such IOCTL", __FILE__);
            return -1;
    }

    ret = copy_to_user((void*)arg, (void*)p_wan_auto_detect, sizeof(wan_type_auto_detect_info));
    if (ret)
    {
        printk(KERN_ERR "%s: failed to copy data to user!\n", __FUNCTION__);
        goto exit;
    }

exit:
    if (p_wan_auto_detect)
        kfree(p_wan_auto_detect);

    return ret;
}

static const struct file_operations detect_file_ops =
{
    .owner = THIS_MODULE,
    .open = _file_open,
    .release = _file_release,
    .unlocked_ioctl = _detect_ioctl,
#if defined(CONFIG_COMPAT)
    .compat_ioctl = _detect_ioctl,
#endif
};

static const struct of_device_id bcmbca_wantypedetect_of_match[] = {
    { .compatible = "brcm,wantypedetect" },
    { },
};
 
MODULE_DEVICE_TABLE(of, bcmbca_wantypedetect_of_match);
 
static int bcmbca_wantypedetect_probe(struct platform_device *pdev)
{
    struct device *dev = &pdev->dev;
    const struct of_device_id *match;
    struct miscdevice *mdev;
    struct resource *r_mem;
    int ret;
 
    match = of_match_device(bcmbca_wantypedetect_of_match, dev);
    if (!match)
    {
        dev_err(dev, "Optical WAN type auto-detection dev: Failed to match\n");
        return -ENODEV;
    }
 
    r_mem = platform_get_resource_byname(pdev, IORESOURCE_MEM, "gpon_general_config");
    if (!r_mem)
    {
        dev_err(dev, "Optical WAN type auto-detection dev unable to get GPON General config register resource.\n");
        return -ENODEV;
    }
   
    g_gpon_rcvr_base = devm_ioremap_shared_resource(dev, r_mem);
    if (IS_ERR(g_gpon_rcvr_base))
    {
        dev_err(dev, "Optical WAN type auto-detection dev unable to remap GPON General config register resource.\n");
        return PTR_ERR(g_gpon_rcvr_base);
    }
    
    r_mem = platform_get_resource_byname(pdev, IORESOURCE_MEM, "epon_top");
    if (!r_mem)
    {
        dev_err(dev, "Optical WAN type auto-detection dev unable to get EPON Top register resource.\n");
        return -ENODEV;
    }
   
    g_epon_top_base = devm_ioremap_shared_resource(dev, r_mem);
    if (IS_ERR(g_epon_top_base))
    {
        dev_err(dev, "Optical WAN type auto-detection dev unable to remap EPON Top register resource.\n");
        return PTR_ERR(g_epon_top_base);
    }
    
    r_mem = platform_get_resource_byname(pdev, IORESOURCE_MEM, "epon_lif");
    if (!r_mem)
    {
        dev_err(dev, "Optical WAN type auto-detection dev unable to get EPON Lif register resource.\n");
        return -ENODEV;
    }
   
    g_epon_lif_base = devm_ioremap_shared_resource(dev, r_mem);
    if (IS_ERR(g_epon_lif_base))
    {
        dev_err(dev, "Optical WAN type auto-detection dev unable to remap EPON Lif register resource.\n");
        return PTR_ERR(g_epon_lif_base);
    }
    
    r_mem = platform_get_resource_byname(pdev, IORESOURCE_MEM, "epon_xpcsr");
    if (r_mem)
    {
        g_epon_xpcsr_base = devm_ioremap_shared_resource(dev, r_mem);
        if (IS_ERR(g_epon_xpcsr_base))
        {
            dev_err(dev, "Optical WAN type auto-detection dev unable to remap EPON Xpcsr register resource.\n");
            return PTR_ERR(g_epon_xpcsr_base);
        }
    }
    
    r_mem = platform_get_resource_byname(pdev, IORESOURCE_MEM, "ngpon_rxgen");
    if (r_mem)
    {
        g_ngpon_rxgen_base = devm_ioremap_shared_resource(dev, r_mem);
        if (IS_ERR(g_ngpon_rxgen_base))
        {
            dev_err(dev, "Optical WAN type auto-detection dev unable to remap NGPON Rx Gen register resource.\n");
            return PTR_ERR(g_ngpon_rxgen_base);
        }
    }
    
    mdev = devm_kzalloc(dev, sizeof(*mdev), GFP_KERNEL);
    if (!mdev)
    {
        dev_err(dev, "Failed to allocate memory for Optical WAN type auto-detection dev\n");
        return -ENOMEM;
    }
 
    platform_set_drvdata(pdev, mdev);
 
    mdev->minor  = MISC_DYNAMIC_MINOR;
    mdev->name   = "wantypedetect";
    mdev->fops   = &detect_file_ops;
    mdev->parent = NULL;
 
    ret = misc_register(mdev);
    if (ret) {
        dev_err(dev, "Failed to register Optical WAN type auto-detection dev\n");
        return ret;
    }

    dev_err(dev, "Optical WAN type auto-detection module loaded succesfully!\n");
 
    return ret;
}
 
static int bcmbca_wantypedetect_remove(struct platform_device *pdev)
{
    struct miscdevice *mdev = platform_get_drvdata(pdev);
 
    misc_deregister(mdev);
    dev_info(&pdev->dev, "Optical WAN type auto-detection module unloaded\n");
 
    return 0;
}
 
static struct platform_driver bcmbca_wantypedetect_drv = {
	.probe = bcmbca_wantypedetect_probe,
	.remove = bcmbca_wantypedetect_remove,
	.driver = {
		.name = "bcmbca-wantypedetect",
		.of_match_table = bcmbca_wantypedetect_of_match,
	},
};
 
module_platform_driver(bcmbca_wantypedetect_drv);
 
MODULE_AUTHOR("Broadcom");
MODULE_DESCRIPTION("Optical WAN type auto-detection driver");
MODULE_LICENSE("GPL v2");
