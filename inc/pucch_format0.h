/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_format0.h - this is the header file for message: PUCCH-format0
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_FORMAT0_H_
#define _PUCCH_FORMAT0_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             initialCyclicShift;
	uint32                                                             nrofSymbols;
	uint32                                                             startingSymbolIndex;
}PUCCH_format0_t;


extern void EncodePUCCH_format0(
	PUCCH_format0_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_format0(
	PUCCH_format0_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
