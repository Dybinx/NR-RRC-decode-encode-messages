/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * filter_coefficient.h - this is the header file for message: FilterCoefficient
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FILTER_COEFFICIENT_H_
#define _FILTER_COEFFICIENT_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	FILTERCOEFFICIENT_FC0,
	FILTERCOEFFICIENT_FC1,
	FILTERCOEFFICIENT_FC2,
	FILTERCOEFFICIENT_FC3,
	FILTERCOEFFICIENT_FC4,
	FILTERCOEFFICIENT_FC5,
	FILTERCOEFFICIENT_FC6,
	FILTERCOEFFICIENT_FC7,
	FILTERCOEFFICIENT_FC8,
	FILTERCOEFFICIENT_FC9,
	FILTERCOEFFICIENT_FC11,
	FILTERCOEFFICIENT_FC13,
	FILTERCOEFFICIENT_FC15,
	FILTERCOEFFICIENT_FC17,
	FILTERCOEFFICIENT_FC19,
	FILTERCOEFFICIENT_SPARE1,
	/* Extension marker start. */
	FILTERCOEFFICIENT_max = 0x7FFFFFFF
}FilterCoefficient_e;


extern void EncodeFilterCoefficient(
	FilterCoefficient_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFilterCoefficient(
	FilterCoefficient_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
