/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ul_um_rlc.h - this is the header file for message: UL-UM-RLC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UL_UM_RLC_H_
#define _UL_UM_RLC_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "sn_field_length_um.h"


typedef struct {
	BOOLEAN                                                            sn_FieldLength_exist;
	SN_FieldLengthUM_e                                                 sn_FieldLength;
}UL_UM_RLC_t;


extern void EncodeUL_UM_RLC(
	UL_UM_RLC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUL_UM_RLC(
	UL_UM_RLC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
