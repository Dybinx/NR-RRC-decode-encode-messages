/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * quantity_config_rs.h - this is the header file for message: QuantityConfigRS
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _QUANTITY_CONFIG_RS_H_
#define _QUANTITY_CONFIG_RS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "filter_config.h"
#include "filter_config.h"


typedef struct {
	FilterConfig_t                                                     ssb_FilterConfig;
	FilterConfig_t                                                     cs_RS_FilterConfig;
}QuantityConfigRS_t;


extern void EncodeQuantityConfigRS(
	QuantityConfigRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeQuantityConfigRS(
	QuantityConfigRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
