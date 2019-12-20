/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_format4.h - this is the header file for message: PUCCH-format4
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_FORMAT4_H_
#define _PUCCH_FORMAT4_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PUCCH_FORMAT4_OCC_LENGTH_N2,
	PUCCH_FORMAT4_OCC_LENGTH_N4,
	PUCCH_FORMAT4_OCC_LENGTH_max = 0x7FFFFFFF
}PUCCH_format4_occ_Length_e;


typedef enum {
	PUCCH_FORMAT4_OCC_INDEX_N0,
	PUCCH_FORMAT4_OCC_INDEX_N1,
	PUCCH_FORMAT4_OCC_INDEX_N2,
	PUCCH_FORMAT4_OCC_INDEX_N3,
	PUCCH_FORMAT4_OCC_INDEX_max = 0x7FFFFFFF
}PUCCH_format4_occ_Index_e;


typedef struct {
	uint32                                                             nrofSymbols;
	PUCCH_format4_occ_Length_e                                         occ_Length;
	PUCCH_format4_occ_Index_e                                          occ_Index;
	uint32                                                             startingSymbolIndex;
}PUCCH_format4_t;


extern void EncodePUCCH_format4(
	PUCCH_format4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_format4(
	PUCCH_format4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
