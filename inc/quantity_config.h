/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * quantity_config.h - this is the header file for message: QuantityConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _QUANTITY_CONFIG_H_
#define _QUANTITY_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "quantity_config_nr.h"


typedef struct {
	uint32                                                             length;
	QuantityConfigNR_t                                                 elm[maxNrofQuantityConfig];
}QuantityConfig_quantityConfigNR_List_t;


typedef struct {
	BOOLEAN                                                            quantityConfigNR_List_exist;
	QuantityConfig_quantityConfigNR_List_t                             quantityConfigNR_List;
	/* Extension marker start. */
}QuantityConfig_t;


extern void EncodeQuantityConfig(
	QuantityConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeQuantityConfig(
	QuantityConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
