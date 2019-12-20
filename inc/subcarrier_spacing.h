/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * subcarrier_spacing.h - this is the header file for message: SubcarrierSpacing
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SUBCARRIER_SPACING_H_
#define _SUBCARRIER_SPACING_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	SUBCARRIERSPACING_KHZ15,
	SUBCARRIERSPACING_KHZ30,
	SUBCARRIERSPACING_KHZ60,
	SUBCARRIERSPACING_KHZ120,
	SUBCARRIERSPACING_KHZ240,
	SUBCARRIERSPACING_SPARE3,
	SUBCARRIERSPACING_SPARE2,
	SUBCARRIERSPACING_SPARE1,
	SUBCARRIERSPACING_max = 0x7FFFFFFF
}SubcarrierSpacing_e;


extern void EncodeSubcarrierSpacing(
	SubcarrierSpacing_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSubcarrierSpacing(
	SubcarrierSpacing_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
