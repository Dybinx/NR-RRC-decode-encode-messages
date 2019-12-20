/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * short_mac_i.h - this is the header file for message: ShortMAC-I
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SHORT_MAC_I_H_
#define _SHORT_MAC_I_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	SHORTMAC_I_FFSTYPEANDVALUE,
	SHORTMAC_I_max = 0x7FFFFFFF
}ShortMAC_I_e;


extern void EncodeShortMAC_I(
	ShortMAC_I_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeShortMAC_I(
	ShortMAC_I_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
