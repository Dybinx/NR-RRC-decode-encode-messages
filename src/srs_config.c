/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_config.c - codec the message of SRS-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_config.h"


void EncodeSRS_Config_srs_ResourceSetToReleaseList(
	SRS_Config_srs_ResourceSetToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSRS_ResourceSetId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSRS_Config_srs_ResourceSetToAddModList(
	SRS_Config_srs_ResourceSetToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSRS_ResourceSet(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSRS_Config_srs_ResourceToReleaseList(
	SRS_Config_srs_ResourceToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSRS_ResourceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSRS_Config_srs_ResourceToAddModList(
	SRS_Config_srs_ResourceToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSRS_Resource(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSRS_Config_tpc_Accumulation(
	SRS_Config_tpc_Accumulation_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeSRS_Config(
	SRS_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->srs_ResourceSetToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srs_ResourceSetToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srs_ResourceToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srs_ResourceToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_Accumulation_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srs_ResourceSetToReleaseList_exist == TRUE)
	{
		EncodeSRS_Config_srs_ResourceSetToReleaseList(&i_encoded_field->srs_ResourceSetToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->srs_ResourceSetToAddModList_exist == TRUE)
	{
		EncodeSRS_Config_srs_ResourceSetToAddModList(&i_encoded_field->srs_ResourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->srs_ResourceToReleaseList_exist == TRUE)
	{
		EncodeSRS_Config_srs_ResourceToReleaseList(&i_encoded_field->srs_ResourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->srs_ResourceToAddModList_exist == TRUE)
	{
		EncodeSRS_Config_srs_ResourceToAddModList(&i_encoded_field->srs_ResourceToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tpc_Accumulation_exist == TRUE)
	{
		EncodeSRS_Config_tpc_Accumulation(i_encoded_field->tpc_Accumulation, buff, bits_iter, asn_error);
	}

}

void DecodeSRS_Config_srs_ResourceSetToReleaseList(
	SRS_Config_srs_ResourceSetToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSRS_ResourceSetId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSRS_Config_srs_ResourceSetToAddModList(
	SRS_Config_srs_ResourceSetToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSRS_ResourceSet(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSRS_Config_srs_ResourceToReleaseList(
	SRS_Config_srs_ResourceToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSRS_ResourceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSRS_Config_srs_ResourceToAddModList(
	SRS_Config_srs_ResourceToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSRS_Resource(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSRS_Config_tpc_Accumulation(
	SRS_Config_tpc_Accumulation_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeSRS_Config(
	SRS_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->srs_ResourceSetToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->srs_ResourceSetToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->srs_ResourceToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->srs_ResourceToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tpc_Accumulation_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->srs_ResourceSetToReleaseList_exist == TRUE)
	{
		DecodeSRS_Config_srs_ResourceSetToReleaseList(&o_decoded_field->srs_ResourceSetToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->srs_ResourceSetToAddModList_exist == TRUE)
	{
		DecodeSRS_Config_srs_ResourceSetToAddModList(&o_decoded_field->srs_ResourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->srs_ResourceToReleaseList_exist == TRUE)
	{
		DecodeSRS_Config_srs_ResourceToReleaseList(&o_decoded_field->srs_ResourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->srs_ResourceToAddModList_exist == TRUE)
	{
		DecodeSRS_Config_srs_ResourceToAddModList(&o_decoded_field->srs_ResourceToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tpc_Accumulation_exist == TRUE)
	{
		DecodeSRS_Config_tpc_Accumulation(&o_decoded_field->tpc_Accumulation, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

