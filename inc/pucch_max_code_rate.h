/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_max_code_rate.h - this is the header file for message: PUCCH-MaxCodeRate
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_MAX_CODE_RATE_H_
#define _PUCCH_MAX_CODE_RATE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PUCCH_MAXCODERATE_ZERODOT08,
	PUCCH_MAXCODERATE_ZERODOT15,
	PUCCH_MAXCODERATE_ZERODOT25,
	PUCCH_MAXCODERATE_ZERODOT35,
	PUCCH_MAXCODERATE_ZERODOT45,
	PUCCH_MAXCODERATE_ZERODOT60,
	PUCCH_MAXCODERATE_ZERODOT80,
	PUCCH_MAXCODERATE_max = 0x7FFFFFFF
}PUCCH_MaxCodeRate_e;


extern void EncodePUCCH_MaxCodeRate(
	PUCCH_MaxCodeRate_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_MaxCodeRate(
	PUCCH_MaxCodeRate_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
