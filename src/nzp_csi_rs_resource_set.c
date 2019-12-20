/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * nzp_csi_rs_resource_set.c - codec the message of NZP-CSI-RS-ResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "nzp_csi_rs_resource_set.h"


void EncodeNZP_CSI_RS_ResourceSet_nzp_CSI_RS_Resources(
	NZP_CSI_RS_ResourceSet_nzp_CSI_RS_Resources_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeNZP_CSI_RS_ResourceSet_repetition(
	NZP_CSI_RS_ResourceSet_repetition_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeNZP_CSI_RS_ResourceSet_trs_Info(
	NZP_CSI_RS_ResourceSet_trs_Info_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeNZP_CSI_RS_ResourceSet(
	NZP_CSI_RS_ResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->repetition_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->aperiodicTriggeringOffset_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->trs_Info_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeNZP_CSI_RS_ResourceSetId(&i_encoded_field->nzp_CSI_ResourceSetId, buff, bits_iter, asn_error);

	EncodeNZP_CSI_RS_ResourceSet_nzp_CSI_RS_Resources(&i_encoded_field->nzp_CSI_RS_Resources, buff, bits_iter, asn_error);

	if(i_encoded_field->repetition_exist == TRUE)
	{
		EncodeNZP_CSI_RS_ResourceSet_repetition(i_encoded_field->repetition, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->aperiodicTriggeringOffset_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->aperiodicTriggeringOffset, 3, bits_iter);
	}

	if(i_encoded_field->trs_Info_exist == TRUE)
	{
		EncodeNZP_CSI_RS_ResourceSet_trs_Info(i_encoded_field->trs_Info, buff, bits_iter, asn_error);
	}

}

void DecodeNZP_CSI_RS_ResourceSet_nzp_CSI_RS_Resources(
	NZP_CSI_RS_ResourceSet_nzp_CSI_RS_Resources_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeNZP_CSI_RS_ResourceSet_repetition(
	NZP_CSI_RS_ResourceSet_repetition_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeNZP_CSI_RS_ResourceSet_trs_Info(
	NZP_CSI_RS_ResourceSet_trs_Info_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeNZP_CSI_RS_ResourceSet(
	NZP_CSI_RS_ResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->repetition_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->aperiodicTriggeringOffset_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->trs_Info_exist = Get_bits(buff, 1, bits_iter);
	DecodeNZP_CSI_RS_ResourceSetId(&o_decoded_field->nzp_CSI_ResourceSetId, buff, bits_iter, asn_error);
	DecodeNZP_CSI_RS_ResourceSet_nzp_CSI_RS_Resources(&o_decoded_field->nzp_CSI_RS_Resources, buff, bits_iter, asn_error);
	if(o_decoded_field->repetition_exist == TRUE)
	{
		DecodeNZP_CSI_RS_ResourceSet_repetition(&o_decoded_field->repetition, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->aperiodicTriggeringOffset_exist == TRUE)
	{
		o_decoded_field->aperiodicTriggeringOffset = Get_bits(buff, 3, bits_iter);
	}

	if(o_decoded_field->trs_Info_exist == TRUE)
	{
		DecodeNZP_CSI_RS_ResourceSet_trs_Info(&o_decoded_field->trs_Info, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

