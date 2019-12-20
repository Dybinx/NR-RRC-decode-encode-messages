/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rat_type.h - this is the header file for message: RAT-Type
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RAT_TYPE_H_
#define _RAT_TYPE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	RAT_TYPE_NR,
	RAT_TYPE_EUTRA_NR,
	RAT_TYPE_SPARE2,
	RAT_TYPE_SPARE1,
	/* Extension marker start. */
	RAT_TYPE_max = 0x7FFFFFFF
}RAT_Type_e;


extern void EncodeRAT_Type(
	RAT_Type_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRAT_Type(
	RAT_Type_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
