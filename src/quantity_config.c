/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * quantity_config.c - codec the message of QuantityConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "quantity_config.h"


void EncodeQuantityConfig_quantityConfigNR_List(
	QuantityConfig_quantityConfigNR_List_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 1, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeQuantityConfigNR(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeQuantityConfig(
	QuantityConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->quantityConfigNR_List_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->quantityConfigNR_List_exist == TRUE)
	{
		EncodeQuantityConfig_quantityConfigNR_List(&i_encoded_field->quantityConfigNR_List, buff, bits_iter, asn_error);
	}

}

void DecodeQuantityConfig_quantityConfigNR_List(
	QuantityConfig_quantityConfigNR_List_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 1, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeQuantityConfigNR(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeQuantityConfig(
	QuantityConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->quantityConfigNR_List_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->quantityConfigNR_List_exist == TRUE)
	{
		DecodeQuantityConfig_quantityConfigNR_List(&o_decoded_field->quantityConfigNR_List, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

