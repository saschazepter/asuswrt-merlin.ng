/*---------------------------------------------------------------------------

<:copyright-BRCM:2013:DUAL/GPL:standard 

   Copyright (c) 2013 Broadcom 
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
 ------------------------------------------------------------------------- */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/path.h>
#include <linux/namei.h>
#include <linux/fs.h>
#include <linux/time.h>
#include <bcm_OS_Deps.h>
#include <linux/bcm_log.h>
#include <rdpa_epon.h>
#include "pmd_msg.h"
#include "pmd_op.h"
#include "pmd.h"
#include "pmd_temp_cal.h"

#define DATA_COL_SIZE 150
#define TIME_STR_LEN 9

static uint8_t valid_state = 0;

typedef enum
{
    pmd_bias_min_col,
    pmd_bias_max_col,
    pmd_mod_min_col,
    pmd_mod_max_col,
    pmd_bias_avg_col,
    pmd_mod_avg_col,
    pmd_offset0_col,
    pmd_offset2_col,
    pmd_ext_temperature,
    pmd_die_temperature,
    pmd_max_col
}pmd_data_col_params;

#define PMD_VALID_TRACKING_TEMP pmd_max_col

extern uint8_t pmd_stack_state;


typedef struct
{
    uint8_t time_stamp[DATA_COL_SIZE][TIME_STR_LEN];
    int16_t queue[DATA_COL_SIZE][pmd_max_col];  /* data collection array */
    uint8_t index;
} pmd_data_collection;

static pmd_data_collection pmd_data_col = {0};

static void pmd_data_col_add_entry(int16_t * val)
{
    struct timespec64 tv;
    struct tm tm_ptr;               

    ktime_get_real_ts64(&tv);
    time64_to_tm(tv.tv_sec, 0, &tm_ptr);

    sprintf(pmd_data_col.time_stamp[pmd_data_col.index],"%02d:%02d:%02d", tm_ptr.tm_hour, tm_ptr.tm_min, tm_ptr.tm_sec);  
    memcpy(&pmd_data_col.queue[pmd_data_col.index][0], val, pmd_max_col * sizeof(int16_t));
    pmd_data_col.index++;
    if (pmd_data_col.index == DATA_COL_SIZE)
        pmd_data_col.index = 0;
}

void pmd_data_col_print(void)
{
    int i, parm, index;

    printk("time      bias_min    bias_max     mod_min     mod_max    bias_avg     mod_avg     offset0     offset1    ext_temp    die_temp\n");
    printk("------------------------------------------------------------------------------------------------------------------------------\n");

    index = pmd_data_col.index;

    for (i = 0; i < DATA_COL_SIZE; i++)
    {
        if (strlen(pmd_data_col.time_stamp[index]))
        {
            printk("%s     ", pmd_data_col.time_stamp[index]);

            for (parm = 0; parm < pmd_max_col; parm++)
            {
                printk("%-12x", pmd_data_col.queue[index][parm]);
            }
            printk("\n");
        }

        index = (index ==  DATA_COL_SIZE-1 ? 0 : index+1);
    }
}

int pmd_data_collect(uint8_t valid)
{
    int rc;
    int16_t val[pmd_max_col] = {0};

    if (valid)
    {
        rc = pmd_msg_handler(hmid_cur_state_get, val, pmd_max_col * 2);
        if (rc)
        {
            BCM_LOG_DEBUG(BCM_LOG_ID_PMD,"fail to collect data\n");
            return -1;
        }

        pmd_data_col_add_entry(val);
        valid_state = 1;
    }
    else if (valid_state)
    {
        pmd_data_col_add_entry(val);
        valid_state = 0;
    }


    return 0;
}
