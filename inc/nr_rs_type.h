/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * nr_rs_type.h - this is the header file for message: NR-RS-Type
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _NR_RS_TYPE_H_
#define _NR_RS_TYPE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	NR_RS_TYPE_SSB,
	NR_RS_TYPE_CSI_RS,
	NR_RS_TYPE_max = 0x7FFFFFFF
}NR_RS_Type_e;


extern void EncodeNR_RS_Type(
	NR_RS_Type_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeNR_RS_Type(
	NR_RS_Type_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
