/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sdap_config.c - codec the message of SDAP-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "sdap_config.h"


void EncodeSDAP_Config_sdap_HeaderDL(
	SDAP_Config_sdap_HeaderDL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSDAP_Config_sdap_HeaderUL(
	SDAP_Config_sdap_HeaderUL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSDAP_Config_mappedQoS_FlowsToAdd(
	SDAP_Config_mappedQoS_FlowsToAdd_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeQFI(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSDAP_Config_mappedQoS_FlowsToRelease(
	SDAP_Config_mappedQoS_FlowsToRelease_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeQFI(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSDAP_Config(
	SDAP_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->mappedQoS_FlowsToAdd_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->mappedQoS_FlowsToRelease_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodePDU_SessionID(&i_encoded_field->pdu_Session, buff, bits_iter, asn_error);

	EncodeSDAP_Config_sdap_HeaderDL(i_encoded_field->sdap_HeaderDL, buff, bits_iter, asn_error);

	EncodeSDAP_Config_sdap_HeaderUL(i_encoded_field->sdap_HeaderUL, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->defaultDRB, 1, bits_iter);

	if(i_encoded_field->mappedQoS_FlowsToAdd_exist == TRUE)
	{
		EncodeSDAP_Config_mappedQoS_FlowsToAdd(&i_encoded_field->mappedQoS_FlowsToAdd, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mappedQoS_FlowsToRelease_exist == TRUE)
	{
		EncodeSDAP_Config_mappedQoS_FlowsToRelease(&i_encoded_field->mappedQoS_FlowsToRelease, buff, bits_iter, asn_error);
	}

}

void DecodeSDAP_Config_sdap_HeaderDL(
	SDAP_Config_sdap_HeaderDL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSDAP_Config_sdap_HeaderUL(
	SDAP_Config_sdap_HeaderUL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSDAP_Config_mappedQoS_FlowsToAdd(
	SDAP_Config_mappedQoS_FlowsToAdd_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeQFI(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSDAP_Config_mappedQoS_FlowsToRelease(
	SDAP_Config_mappedQoS_FlowsToRelease_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeQFI(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSDAP_Config(
	SDAP_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->mappedQoS_FlowsToAdd_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mappedQoS_FlowsToRelease_exist = Get_bits(buff, 1, bits_iter);
	DecodePDU_SessionID(&o_decoded_field->pdu_Session, buff, bits_iter, asn_error);
	DecodeSDAP_Config_sdap_HeaderDL(&o_decoded_field->sdap_HeaderDL, buff, bits_iter, asn_error);
	DecodeSDAP_Config_sdap_HeaderUL(&o_decoded_field->sdap_HeaderUL, buff, bits_iter, asn_error);
	o_decoded_field->defaultDRB = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->mappedQoS_FlowsToAdd_exist == TRUE)
	{
		DecodeSDAP_Config_mappedQoS_FlowsToAdd(&o_decoded_field->mappedQoS_FlowsToAdd, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mappedQoS_FlowsToRelease_exist == TRUE)
	{
		DecodeSDAP_Config_mappedQoS_FlowsToRelease(&o_decoded_field->mappedQoS_FlowsToRelease, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

