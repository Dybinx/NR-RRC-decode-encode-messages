/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_resource.c - codec the message of PUCCH-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_resource.h"


void EncodePUCCH_Resource_intraSlotFrequencyHopping(
	PUCCH_Resource_intraSlotFrequencyHopping_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUCCH_Resource_format(
	PUCCH_Resource_format_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 3, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUCCH_RESOURCE_FORMAT_FORMAT0:
		EncodePUCCH_format0(&i_encoded_field->a.format0, buff, bits_iter, asn_error);
		break;

	case PUCCH_RESOURCE_FORMAT_FORMAT1:
		EncodePUCCH_format1(&i_encoded_field->a.format1, buff, bits_iter, asn_error);
		break;

	case PUCCH_RESOURCE_FORMAT_FORMAT2:
		EncodePUCCH_format2(&i_encoded_field->a.format2, buff, bits_iter, asn_error);
		break;

	case PUCCH_RESOURCE_FORMAT_FORMAT3:
		EncodePUCCH_format3(&i_encoded_field->a.format3, buff, bits_iter, asn_error);
		break;

	case PUCCH_RESOURCE_FORMAT_FORMAT4:
		EncodePUCCH_format4(&i_encoded_field->a.format4, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUCCH_Resource(
	PUCCH_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->intraSlotFrequencyHopping_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->secondHopPRB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodePUCCH_ResourceId(&i_encoded_field->pucch_ResourceId, buff, bits_iter, asn_error);

	EncodePRB_Id(&i_encoded_field->startingPRB, buff, bits_iter, asn_error);

	if(i_encoded_field->intraSlotFrequencyHopping_exist == TRUE)
	{
		EncodePUCCH_Resource_intraSlotFrequencyHopping(i_encoded_field->intraSlotFrequencyHopping, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->secondHopPRB_exist == TRUE)
	{
		EncodePRB_Id(&i_encoded_field->secondHopPRB, buff, bits_iter, asn_error);
	}

	EncodePUCCH_Resource_format(&i_encoded_field->format, buff, bits_iter, asn_error);

}

void DecodePUCCH_Resource_intraSlotFrequencyHopping(
	PUCCH_Resource_intraSlotFrequencyHopping_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUCCH_Resource_format(
	PUCCH_Resource_format_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 3, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUCCH_RESOURCE_FORMAT_FORMAT0:
		DecodePUCCH_format0(&o_decoded_field->a.format0, buff, bits_iter, asn_error);
		break;

	case PUCCH_RESOURCE_FORMAT_FORMAT1:
		DecodePUCCH_format1(&o_decoded_field->a.format1, buff, bits_iter, asn_error);
		break;

	case PUCCH_RESOURCE_FORMAT_FORMAT2:
		DecodePUCCH_format2(&o_decoded_field->a.format2, buff, bits_iter, asn_error);
		break;

	case PUCCH_RESOURCE_FORMAT_FORMAT3:
		DecodePUCCH_format3(&o_decoded_field->a.format3, buff, bits_iter, asn_error);
		break;

	case PUCCH_RESOURCE_FORMAT_FORMAT4:
		DecodePUCCH_format4(&o_decoded_field->a.format4, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUCCH_Resource(
	PUCCH_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->intraSlotFrequencyHopping_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->secondHopPRB_exist = Get_bits(buff, 1, bits_iter);
	DecodePUCCH_ResourceId(&o_decoded_field->pucch_ResourceId, buff, bits_iter, asn_error);
	DecodePRB_Id(&o_decoded_field->startingPRB, buff, bits_iter, asn_error);
	if(o_decoded_field->intraSlotFrequencyHopping_exist == TRUE)
	{
		DecodePUCCH_Resource_intraSlotFrequencyHopping(&o_decoded_field->intraSlotFrequencyHopping, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->secondHopPRB_exist == TRUE)
	{
		DecodePRB_Id(&o_decoded_field->secondHopPRB, buff, bits_iter, asn_error);
	}

	DecodePUCCH_Resource_format(&o_decoded_field->format, buff, bits_iter, asn_error);
}

