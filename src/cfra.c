/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cfra.c - codec the message of CFRA
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "cfra.h"


void EncodeCFRA_ssb_perRACH_Occasion(
	CFRA_ssb_perRACH_Occasion_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeCFRA_occasions(
	CFRA_occasions_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->ssb_perRACH_Occasion_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeRACH_ConfigGeneric(&i_encoded_field->rach_ConfigGeneric, buff, bits_iter, asn_error);

	if(i_encoded_field->ssb_perRACH_Occasion_exist == TRUE)
	{
		EncodeCFRA_ssb_perRACH_Occasion(i_encoded_field->ssb_perRACH_Occasion, buff, bits_iter, asn_error);
	}

}

void EncodeCFRA_ssb_ResourceList(
	CFRA_ssb_ResourceList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCFRA_SSB_Resource(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCFRA_ssb(
	CFRA_ssb_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCFRA_ssb_ResourceList(&i_encoded_field->ssb_ResourceList, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->ra_ssb_OccasionMaskIndex, 4, bits_iter);

}

void EncodeCFRA_csirs_ResourceList(
	CFRA_csirs_ResourceList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 7, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCFRA_CSIRS_Resource(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCFRA_csirs(
	CFRA_csirs_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCFRA_csirs_ResourceList(&i_encoded_field->csirs_ResourceList, buff, bits_iter, asn_error);

	EncodeRSRP_Range(&i_encoded_field->rsrp_ThresholdCSI_RS, buff, bits_iter, asn_error);

}

void EncodeCFRA_resources(
	CFRA_resources_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CFRA_RESOURCES_SSB:
		EncodeCFRA_ssb(&i_encoded_field->a.ssb, buff, bits_iter, asn_error);
		break;

	case CFRA_RESOURCES_CSIRS:
		EncodeCFRA_csirs(&i_encoded_field->a.csirs, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCFRA(
	CFRA_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->occasions_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->occasions_exist == TRUE)
	{
		EncodeCFRA_occasions(&i_encoded_field->occasions, buff, bits_iter, asn_error);
	}

	EncodeCFRA_resources(&i_encoded_field->resources, buff, bits_iter, asn_error);

}

void DecodeCFRA_ssb_perRACH_Occasion(
	CFRA_ssb_perRACH_Occasion_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeCFRA_occasions(
	CFRA_occasions_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->ssb_perRACH_Occasion_exist = Get_bits(buff, 1, bits_iter);
	DecodeRACH_ConfigGeneric(&o_decoded_field->rach_ConfigGeneric, buff, bits_iter, asn_error);
	if(o_decoded_field->ssb_perRACH_Occasion_exist == TRUE)
	{
		DecodeCFRA_ssb_perRACH_Occasion(&o_decoded_field->ssb_perRACH_Occasion, buff, bits_iter, asn_error);
	}

}

void DecodeCFRA_ssb_ResourceList(
	CFRA_ssb_ResourceList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCFRA_SSB_Resource(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCFRA_ssb(
	CFRA_ssb_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCFRA_ssb_ResourceList(&o_decoded_field->ssb_ResourceList, buff, bits_iter, asn_error);
	o_decoded_field->ra_ssb_OccasionMaskIndex = Get_bits(buff, 4, bits_iter);
}

void DecodeCFRA_csirs_ResourceList(
	CFRA_csirs_ResourceList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 7, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCFRA_CSIRS_Resource(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCFRA_csirs(
	CFRA_csirs_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCFRA_csirs_ResourceList(&o_decoded_field->csirs_ResourceList, buff, bits_iter, asn_error);
	DecodeRSRP_Range(&o_decoded_field->rsrp_ThresholdCSI_RS, buff, bits_iter, asn_error);
}

void DecodeCFRA_resources(
	CFRA_resources_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CFRA_RESOURCES_SSB:
		DecodeCFRA_ssb(&o_decoded_field->a.ssb, buff, bits_iter, asn_error);
		break;

	case CFRA_RESOURCES_CSIRS:
		DecodeCFRA_csirs(&o_decoded_field->a.csirs, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCFRA(
	CFRA_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->occasions_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->occasions_exist == TRUE)
	{
		DecodeCFRA_occasions(&o_decoded_field->occasions, buff, bits_iter, asn_error);
	}

	DecodeCFRA_resources(&o_decoded_field->resources, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

