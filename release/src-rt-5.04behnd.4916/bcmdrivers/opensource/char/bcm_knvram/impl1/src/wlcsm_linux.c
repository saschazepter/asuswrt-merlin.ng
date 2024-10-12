/*
<:copyright-BRCM:2020:DUAL/GPL:standard

   Copyright (c) 2020 Broadcom 
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
#include <wlcsm_linux.h>
#include <linux/version.h>
#ifdef WLCSM_DEBUG
#include <linux/proc_fs.h>
#include <linux/types.h>
#include <linux/slab.h>

typedef struct {
    char *description;
    unsigned int *pValue;
    struct list_head list;
} WL_DEBUG_FS_LIST;

WL_DEBUG_FS_LIST wlcsm_dbg_fs_list;
/* preallocated 10 numbers for use */
unsigned int g_wlcsm_dbg_items[32]= {0};

#if LINUX_VERSION_CODE > KERNEL_VERSION(3, 7, 0)
static ssize_t  wlcsm_dbg_rd_proc(struct file *file, char __user *buf,
                                  size_t count, loff_t *ppos)
{
    WL_DEBUG_FS_LIST *dbg_list= (WL_DEBUG_FS_LIST*) PDE_DATA(file_inode(file));
    loff_t pos=*ppos;
    WL_DEBUG_FS_LIST *tmp;
    struct list_head *lpos;
    if(pos<0)
        return -EINVAL;
    list_for_each(lpos,&dbg_list->list) {
        tmp=list_entry(lpos,WL_DEBUG_FS_LIST, list);
        printk("%s:%px:%u\n",tmp->description,tmp->pValue,*tmp->pValue);
    }
    return 0 ;
}

static const struct file_operations wlcsm_dbg_proc_fops= {
    .owner =        THIS_MODULE,
    .read =         wlcsm_dbg_rd_proc,
};

#else
static int
wlcsm_dbg_rd_proc(char *buffer, char **start, off_t offset, int length, int *eof, void *data)
{
    WL_DEBUG_FS_LIST *dbg_list= (WL_DEBUG_FS_LIST*) data;
    WL_DEBUG_FS_LIST *tmp;
    struct list_head *pos;
    unsigned int len=0;
    list_for_each(pos,&dbg_list->list) {
        tmp=list_entry(pos,WL_DEBUG_FS_LIST, list);
        len+=sprintf(buffer+len,"%s:%px:%u\n",tmp->description,tmp->pValue,*tmp->pValue);
    }
    return (len);
}

#endif
void wlcsm_dbg_reg_item(char *description, unsigned int *pValue)
{

    WL_DEBUG_FS_LIST *tmp;
    struct list_head *pos;
    WL_DEBUG_FS_LIST *item;

    list_for_each(pos,&wlcsm_dbg_fs_list.list) {
        tmp=list_entry(pos,WL_DEBUG_FS_LIST, list);
        if(tmp->pValue==pValue) {
            return;
        }
    }
    item=(WL_DEBUG_FS_LIST*)kmalloc(sizeof(WL_DEBUG_FS_LIST),GFP_KERNEL);
    INIT_LIST_HEAD(&item->list);
    item->description=description;
    item->pValue=pValue;
    list_add_tail(&(item->list),&wlcsm_dbg_fs_list.list);
}

void wlcsm_dbg_reg(unsigned int index,char *description)
{
    wlcsm_dbg_reg_item(description,(unsigned int *)(g_wlcsm_dbg_items+index));
}

void wlcsm_dbg_inc(unsigned int index,int incr)
{
    g_wlcsm_dbg_items[index]+=incr;
}

void wlcsm_dbg_set(unsigned int index,int val)
{
    g_wlcsm_dbg_items[index]=val;
}

void wlcsm_dbg_dec(unsigned int index,int incr)
{
    g_wlcsm_dbg_items[index]-=incr;
}

void init_wlcsm_debug_fs (void)
{
    INIT_LIST_HEAD(&wlcsm_dbg_fs_list.list);
#if LINUX_VERSION_CODE < KERNEL_VERSION(3, 7, 0)
    create_proc_read_entry("wldbg", 0, 0, wlcsm_dbg_rd_proc, (void*)&wlcsm_dbg_fs_list);
#else
    proc_create_data("wldbg",S_IRUSR,NULL,&wlcsm_dbg_proc_fops,(void*)&wlcsm_dbg_fs_list);
#endif
//	reg_wlcsm_db_item("variable a1",&a1);
//	reg_wlcsm_db_item("variable a2",&a2);

}

void deinit_wlcsm_debug_fs(void)
{
    WL_DEBUG_FS_LIST *tmp;
    struct list_head *pos;
    list_for_each(pos,&wlcsm_dbg_fs_list.list) {
        tmp=list_entry(pos,WL_DEBUG_FS_LIST, list);
        kfree(tmp);
    }
    remove_proc_entry("wldbg",NULL);
}
EXPORT_SYMBOL(wlcsm_dbg_reg);
EXPORT_SYMBOL(wlcsm_dbg_reg_item);
EXPORT_SYMBOL(wlcsm_dbg_inc);
EXPORT_SYMBOL(wlcsm_dbg_dec);

#endif

extern void wlcsm_module_exit(void);
extern int wlcsm_module_init(void);

static int __init
wl_module_init(void)
{
#ifdef WLCSM_DEBUG
    init_wlcsm_debug_fs();
#endif
    return 	wlcsm_module_init();
}

static void __exit
wl_module_exit(void)
{
#ifdef WLCSM_DEBUG
    deinit_wlcsm_debug_fs();
#endif
    wlcsm_module_exit();
}

module_init(wl_module_init);
module_exit(wl_module_exit);
MODULE_LICENSE("GPL");
