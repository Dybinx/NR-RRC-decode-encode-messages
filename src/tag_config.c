/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tag_config.c - codec the message of TAG-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "tag_config.h"


void EncodeTAG_Config_tag_ToReleaseList(
	TAG_Config_tag_ToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTAG_Id(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeTAG_Config_tag_ToAddModList(
	TAG_Config_tag_ToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTAG(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeTAG_Config(
	TAG_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->tag_ToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tag_ToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tag_ToReleaseList_exist == TRUE)
	{
		EncodeTAG_Config_tag_ToReleaseList(&i_encoded_field->tag_ToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tag_ToAddModList_exist == TRUE)
	{
		EncodeTAG_Config_tag_ToAddModList(&i_encoded_field->tag_ToAddModList, buff, bits_iter, asn_error);
	}

}

void DecodeTAG_Config_tag_ToReleaseList(
	TAG_Config_tag_ToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTAG_Id(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeTAG_Config_tag_ToAddModList(
	TAG_Config_tag_ToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTAG(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeTAG_Config(
	TAG_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->tag_ToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tag_ToAddModList_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->tag_ToReleaseList_exist == TRUE)
	{
		DecodeTAG_Config_tag_ToReleaseList(&o_decoded_field->tag_ToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tag_ToAddModList_exist == TRUE)
	{
		DecodeTAG_Config_tag_ToAddModList(&o_decoded_field->tag_ToAddModList, buff, bits_iter, asn_error);
	}

}

