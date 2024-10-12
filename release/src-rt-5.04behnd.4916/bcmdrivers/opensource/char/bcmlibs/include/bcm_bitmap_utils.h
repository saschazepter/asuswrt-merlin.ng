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

/*
 *******************************************************************************
 * File Name  : bcm_bitmap_utils.h
 * This file provides interface for bitmap utitilies.
 *******************************************************************************
 */

#ifndef _BCM_BITMAP_UTILS_H
#define _BCM_BITMAP_UTILS_H

/*
 *------------------------------------------------------------------------------
 *
 * Function     : bcm_bitmap_xxxxx() APIs
 * Description  :
 *
 * A bitmap[n] is made of n 32-bit words, where n >=1.
 * bitmap[0] bits 31:00
 * bitmap[1] bits 63:32
 * ...
 *
 * Init: The bitmap[n] array is initialized as zeros, and means all the bit indices are free.
 *
 * The least-significant bit is position 0, the most-significant is 31
 *
 *  E.g.                         Higher order   -------  Lower order
 *  for a bitmap 0x0F0FF080 = 0b 00001111 00001111 11110000 10000000
 *                               ^                          ^      ^
 *                              31                          7      0
 *       7 = bcm_bitmap_get/find_next_one(0x0F0FF080, 1, 0)
 *       7 = bcm_bitmap_get/find_next_one(0x0F0FF080, 1, 7)
 *      12 = bcm_bitmap_get/find_next_one(0x0F0FF080, 1, 8)
 *       0 = bcm_bitmap_get/find_next_zero(0x0F0FF080, 1, 0)
 *       8 = bcm_bitmap_get/find_next_zero(0x0F0FF080, 1, 7)
 *
 *     bcm_bitmap_set/clear_bit(): Sets/clears the given bit position in the bitmap.
 *
 *     bcm_bitmap_get_bit_index(): Allocates the next free bit index 
 *          starting at index=0 from the bitmap.
 * 
 *     bcm_bitmap_return_bit_index(): Frees the bit index into the bitmap.
 * 
 *     bcm_bitmap_find_next_zero/one(): finds the next matching bit position in bitmap,
 *          starting from the given bit position (does not wrap around)
 * 
 *     bcm_bitmap_get_next_zero/one(): finds and inverts the next matching bit 
 *          position in bitmap starting from the given bit position. (does not wrap around)
 *
 *     bcm_bitmap_get_next_bit_index(): Allocates the next free bit index 
 *          starting at given index from the bitmap. (does not wrap around)
 *------------------------------------------------------------------------------
 */

/* defines */

#define BCM_BYTES_PER_WORD  (sizeof(uint32_t))
#define BCM_BITS_PER_WORD   (BCM_BYTES_PER_WORD * 8)
#define BCM_GET_MASK(b)	    (1ULL<<(b))

int bcm_bitmap_set_bit(uint32_t *bitmap_p, uint32_t num_words, uint32_t bit_num);
int bcm_bitmap_clear_bit(uint32_t *bitmap_p, uint32_t num_words, uint32_t bit_num);
int bcm_bitmap_is_bit_set(uint32_t *bitmap_p, uint32_t num_words, uint32_t bit_num);
int bcm_bitmap_get_bit_index(uint32_t *bitmap_p, uint32_t num_words);
int bcm_bitmap_get_next_bit_index(uint32_t *bitmap_p, uint32_t num_words, uint32_t bit_idx);
int bcm_bitmap_return_bit_index(uint32_t *bitmap_p, uint32_t num_words, uint32_t bit_idx);
int bcm_bitmap_find_next_one(uint32_t *bitmap_p, uint32_t num_words, uint32_t bit_idx);
int bcm_bitmap_get_next_one(uint32_t *bitmap_p, uint32_t num_words, uint32_t bit_idx);
int bcm_bitmap_find_next_zero(uint32_t *bitmap_p, uint32_t num_words, uint32_t bit_idx);
int bcm_bitmap_get_next_zero(uint32_t *bitmap_p, uint32_t num_words, uint32_t bit_idx);
void bcm_bitmap_dump(uint32_t *bitmap_p, uint32_t num_words);

#endif /* _BCM_BITMAP_UTILS_H */
