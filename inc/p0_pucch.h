/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * p0_pucch.h - this is the header file for message: P0-PUCCH
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _P0_PUCCH_H_
#define _P0_PUCCH_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "p0_pucch_id.h"


typedef struct {
	P0_PUCCH_Id_t                                                      p0_PUCCH_Id;
	int32                                                              p0_PUCCH_Value;
}P0_PUCCH_t;


extern void EncodeP0_PUCCH(
	P0_PUCCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeP0_PUCCH(
	P0_PUCCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
