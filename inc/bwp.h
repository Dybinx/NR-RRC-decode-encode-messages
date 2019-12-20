/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp.h - this is the header file for message: BWP
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BWP_H_
#define _BWP_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "subcarrier_spacing.h"


typedef enum {
	BWP_CYCLICPREFIX_EXTENDED,
	BWP_CYCLICPREFIX_max = 0x7FFFFFFF
}BWP_cyclicPrefix_e;


typedef struct {
	uint32                                                             locationAndBandwidth;
	SubcarrierSpacing_e                                                subcarrierSpacing;
	BOOLEAN                                                            cyclicPrefix_exist;
	BWP_cyclicPrefix_e                                                 cyclicPrefix;
}BWP_t;


extern void EncodeBWP(
	BWP_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBWP(
	BWP_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
