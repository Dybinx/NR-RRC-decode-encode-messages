/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * quantity_config_nr.h - this is the header file for message: QuantityConfigNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _QUANTITY_CONFIG_NR_H_
#define _QUANTITY_CONFIG_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "quantity_config_rs.h"
#include "quantity_config_rs.h"


typedef struct {
	QuantityConfigRS_t                                                 quantityConfigCell;
	BOOLEAN                                                            quantityConfigRS_Index_exist;
	QuantityConfigRS_t                                                 quantityConfigRS_Index;
}QuantityConfigNR_t;


extern void EncodeQuantityConfigNR(
	QuantityConfigNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeQuantityConfigNR(
	QuantityConfigNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
