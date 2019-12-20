/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * alpha.h - this is the header file for message: Alpha
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _ALPHA_H_
#define _ALPHA_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	ALPHA_ALPHA0,
	ALPHA_ALPHA04,
	ALPHA_ALPHA05,
	ALPHA_ALPHA06,
	ALPHA_ALPHA07,
	ALPHA_ALPHA08,
	ALPHA_ALPHA09,
	ALPHA_ALPHA1,
	ALPHA_max = 0x7FFFFFFF
}Alpha_e;


extern void EncodeAlpha(
	Alpha_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeAlpha(
	Alpha_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
