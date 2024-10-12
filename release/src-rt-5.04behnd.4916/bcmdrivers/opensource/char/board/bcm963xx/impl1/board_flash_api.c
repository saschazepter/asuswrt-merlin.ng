/*
    Copyright 2000-2010 Broadcom Corporation
   <:label-BRCM:2012:DUAL/GPL:standard
   
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

/***************************************************************************
 * File Name  : flash_api.c
 *
 * Description: This file contains the implementation of the wrapper functions
 *              for the flash device interface.
 ***************************************************************************/

/** Includes. */
#include <linux/kernel.h>

#include "bcmtypes.h"
#include "bcm_hwdefs.h"
#include "flash_api.h"
#include <bcm_strap_drv.h>

#if defined(CONFIG_MTD_BCM_SPI_NAND) || defined(CONFIG_MTD_SPI_NAND)
extern int spi_nand_init(flash_device_info_t **flash_info);
#else
#define spi_nand_init(x)           FLASH_API_ERROR
#endif

/** Variables. **/
static flash_device_info_t *g_flash_info = NULL;

static flash_device_info_t flash_dummy_dev =
    {
        0xffff,
        FLASH_IFC_UNKNOWN,
        "",
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    };

#if defined(CONFIG_MTD_BCM_SPI_NAND) || defined(CONFIG_MTD_SPI_NAND)
static int strap_check_spinand(void)
{
#if !defined(CONFIG_BCM963148)
    return (bcm_get_boot_device() == SPI_NAND);
#else
    return 0;
#endif
}
#endif

/***************************************************************************
 * Function Name: display_flash_info
 * Description  : Displays information about the flash part.
 * Returns      : None.
 ***************************************************************************/
static void display_flash_info(int ret, flash_device_info_t *flash_info)
{
    switch (flash_info->flash_type) {
    case FLASH_IFC_PARALLEL:
        printk( "Parallel flash device");
        break;

    case FLASH_IFC_SPI:
#if (defined(CONFIG_SPI_BCM63XX_HSSPI) || defined(CONFIG_SPI_BCMBCA_HSSPI)) && defined(CONFIG_MTD_SPI_NOR)
        return;
#else
        printk( "Serial flash device");
        break;
#endif		

    case FLASH_IFC_HS_SPI:
        printk( "HS Serial flash device");
        break;

    case FLASH_IFC_NAND:
        printk( "NAND flash device");
        break;

    case FLASH_IFC_SPINAND:
        printk( "SPI NAND flash device");
        break;

    case FLASH_IFC_UNSUP_EMMC:
        /* Unsupported eMMC device do nothing */
        return;
    }

    if( ret == FLASH_API_OK ) {
        printk(": %s, id 0x%08x",
            flash_info->flash_device_name, flash_info->flash_device_id);
        if ((flash_info->flash_type == FLASH_IFC_NAND) || (flash_info->flash_type == FLASH_IFC_SPINAND))
            printk(" block %dKB", flash_get_sector_size(0) / 1024);
	else
            printk(" sector %dKB", flash_get_sector_size(0) / 1024);
        printk(" size %luKB", flash_get_total_size() / 1024);
        printk("\n");
    }
    else {
        printk( " id %08x is not supported.\n", flash_info->flash_device_id );
    }
} /* display_flash_info */

/***************************************************************************
 * Function Name: flash_init
 * Description  : Initialize flash part.
 * Returns      : FLASH_API_OK or FLASH_API_ERROR
 ***************************************************************************/
int flash_init(void)
{
    int type = FLASH_IFC_UNKNOWN;
    int ret = FLASH_API_ERROR;
    boot_dev_t boot_dev = bcm_get_boot_device();

    /* If available, use bootstrap to decide which flash to use */
#if defined(CONFIG_MTD_BCM_SPI_NAND) || defined(CONFIG_MTD_SPI_NAND)
    if(strap_check_spinand())
        type = FLASH_IFC_SPINAND;
    else
#endif
    {
    if (boot_dev == SPI_NOR)
        type = FLASH_IFC_SPI;
    else if (boot_dev == EMMC)
        type = FLASH_IFC_UNSUP_EMMC;
    else 
        type = FLASH_IFC_NAND;
    }

    switch (type) {
    case FLASH_IFC_SPI:
#if (defined(CONFIG_SPI_BCM63XX_HSSPI) || defined(CONFIG_SPI_BCMBCA_HSSPI)) && defined(CONFIG_MTD_SPI_NOR)
        g_flash_info = &flash_dummy_dev;
        g_flash_info->flash_type = type;
#endif
        break;

    case FLASH_IFC_UNSUP_EMMC:
        g_flash_info = &flash_dummy_dev;
        g_flash_info->flash_type = type;
        break;
    }

    if (g_flash_info != NULL) {
        display_flash_info(ret, g_flash_info);
    }
    else {
    }

    return( ret );
} /* flash_init */

/***************************************************************************
 * Function Name: flash_sector_erase_int
 * Description  : Erase the specfied flash sector.
 * Returns      : FLASH_API_OK or FLASH_API_ERROR
 ***************************************************************************/
int flash_sector_erase_int(unsigned short sector)
{
    return( (g_flash_info)
        ? (*g_flash_info->fn_flash_sector_erase_int) (sector)
        : FLASH_API_ERROR );
} /* flash_sector_erase_int */

/***************************************************************************
 * Function Name: flash_read_buf
 * Description  : Reads from flash memory.
 * Returns      : number of bytes read or FLASH_API_ERROR
 ***************************************************************************/
int flash_read_buf(unsigned short sector, int offset, unsigned char *buffer,
    int numbytes)
{
    return( (g_flash_info)
        ? (*g_flash_info->fn_flash_read_buf) (sector, offset, buffer, numbytes)
        : FLASH_API_ERROR );
} /* flash_read_buf */

/***************************************************************************
 * Function Name: flash_write_buf
 * Description  : Writes to flash memory.
 * Returns      : number of bytes written or FLASH_API_ERROR
 ***************************************************************************/
int flash_write_buf(unsigned short sector, int offset, unsigned char *buffer,
    int numbytes)
{
    return( (g_flash_info)
        ? (*g_flash_info->fn_flash_write_buf) (sector, offset, buffer, numbytes)
        : FLASH_API_ERROR );
} /* flash_write_buf */

/***************************************************************************
 * Function Name: flash_get_numsectors
 * Description  : Returns the number of sectors in the flash device.
 * Returns      : Number of sectors in the flash device.
 ***************************************************************************/
int flash_get_numsectors(void)
{
    return( (g_flash_info)
        ? (*g_flash_info->fn_flash_get_numsectors) ()
        : FLASH_API_ERROR );
} /* flash_get_numsectors */

/***************************************************************************
 * Function Name: flash_get_sector_size
 * Description  : Returns the number of bytes in the specfied flash sector.
 * Returns      : Number of bytes in the specfied flash sector.
 ***************************************************************************/
int flash_get_sector_size(unsigned short sector)
{
    return( (g_flash_info)
        ? (*g_flash_info->fn_flash_get_sector_size) (sector)
        : FLASH_API_ERROR );
} /* flash_get_sector_size */

/***************************************************************************
 * Function Name: flash_get_memptr
 * Description  : Returns the base MIPS memory address for the specfied flash
 *                sector.
 * Returns      : Base MIPS memory address for the specfied flash sector.
 ***************************************************************************/
unsigned char *flash_get_memptr(unsigned short sector)
{
    return( (g_flash_info)
        ? (*g_flash_info->fn_flash_get_memptr) (sector)
        : NULL );
} /* flash_get_memptr */

/***************************************************************************
 * Function Name: flash_get_blk
 * Description  : Returns the flash sector for the specfied MIPS address.
 * Returns      : Flash sector for the specfied MIPS address.
 ***************************************************************************/
int flash_get_blk(int addr)
{
    return( (g_flash_info)
        ? (*g_flash_info->fn_flash_get_blk) (addr)
        : FLASH_API_ERROR );
} /* flash_get_blk */

/***************************************************************************
 * Function Name: flash_get_total_size
 * Description  : Returns the number of bytes in the flash device.
 * Returns      : Number of bytes in the flash device.
 ***************************************************************************/
unsigned long flash_get_total_size(void)
{
    return( (g_flash_info)
        ? (unsigned long) (*g_flash_info->fn_flash_get_total_size) ()
        : FLASH_API_ERROR );
} /* flash_get_total_size */

/***************************************************************************
 * Function Name: flash_dev_specific_cmd
 * Description  : Triggers a device specific feature, used to access 
 *                non-standard features.
 * Returns      : Feature specific return code.
 ***************************************************************************/
int flash_dev_specific_cmd(unsigned int command, void * inBuf, void * outBuf)
{
    return( (g_flash_info)
        ? (*g_flash_info->fn_flash_dev_specific_cmd) (command, inBuf, outBuf)
        : FLASH_API_ERROR );
} /* flash_dev_specific_cmd */

/***************************************************************************
 * Function Name: flash_get_flash_type
 * Description  : Returns type of the flash memory.
 * Returns      : Type of the flash memory.
 ***************************************************************************/
int flash_get_flash_type(void)
{
    if(g_flash_info)
       return(g_flash_info->flash_type);
    /* For Linux */
#if defined(CONFIG_MTD_BCM_SPI_NAND) || defined(CONFIG_MTD_SPI_NAND)
    if (strap_check_spinand())
        return(FLASH_IFC_SPINAND);
#endif
    return(FLASH_IFC_NAND);
} /* flash_get_flash_type */
