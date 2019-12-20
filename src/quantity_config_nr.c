/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * quantity_config_nr.c - codec the message of QuantityConfigNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "quantity_config_nr.h"


void EncodeQuantityConfigNR(
	QuantityConfigNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->quantityConfigRS_Index_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeQuantityConfigRS(&i_encoded_field->quantityConfigCell, buff, bits_iter, asn_error);

	if(i_encoded_field->quantityConfigRS_Index_exist == TRUE)
	{
		EncodeQuantityConfigRS(&i_encoded_field->quantityConfigRS_Index, buff, bits_iter, asn_error);
	}

}

void DecodeQuantityConfigNR(
	QuantityConfigNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->quantityConfigRS_Index_exist = Get_bits(buff, 1, bits_iter);
	DecodeQuantityConfigRS(&o_decoded_field->quantityConfigCell, buff, bits_iter, asn_error);
	if(o_decoded_field->quantityConfigRS_Index_exist == TRUE)
	{
		DecodeQuantityConfigRS(&o_decoded_field->quantityConfigRS_Index, buff, bits_iter, asn_error);
	}

}

