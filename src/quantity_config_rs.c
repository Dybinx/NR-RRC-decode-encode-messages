/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * quantity_config_rs.c - codec the message of QuantityConfigRS
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "quantity_config_rs.h"


void EncodeQuantityConfigRS(
	QuantityConfigRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeFilterConfig(&i_encoded_field->ssb_FilterConfig, buff, bits_iter, asn_error);

	EncodeFilterConfig(&i_encoded_field->cs_RS_FilterConfig, buff, bits_iter, asn_error);

}

void DecodeQuantityConfigRS(
	QuantityConfigRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeFilterConfig(&o_decoded_field->ssb_FilterConfig, buff, bits_iter, asn_error);
	DecodeFilterConfig(&o_decoded_field->cs_RS_FilterConfig, buff, bits_iter, asn_error);
}

