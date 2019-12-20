/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_resource_set.c - codec the message of PUCCH-ResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_resource_set.h"


void EncodePUCCH_ResourceSet_resourceList(
	PUCCH_ResourceSet_resourceList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUCCH_ResourceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_ResourceSet(
	PUCCH_ResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->maxPayloadMinus1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodePUCCH_ResourceSetId(&i_encoded_field->pucch_ResourceSetId, buff, bits_iter, asn_error);

	EncodePUCCH_ResourceSet_resourceList(&i_encoded_field->resourceList, buff, bits_iter, asn_error);

	if(i_encoded_field->maxPayloadMinus1_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxPayloadMinus1 - 4, 8, bits_iter);
	}

}

void DecodePUCCH_ResourceSet_resourceList(
	PUCCH_ResourceSet_resourceList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUCCH_ResourceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_ResourceSet(
	PUCCH_ResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->maxPayloadMinus1_exist = Get_bits(buff, 1, bits_iter);
	DecodePUCCH_ResourceSetId(&o_decoded_field->pucch_ResourceSetId, buff, bits_iter, asn_error);
	DecodePUCCH_ResourceSet_resourceList(&o_decoded_field->resourceList, buff, bits_iter, asn_error);
	if(o_decoded_field->maxPayloadMinus1_exist == TRUE)
	{
		o_decoded_field->maxPayloadMinus1 = Get_bits(buff, 8, bits_iter) + 4;
	}

}

