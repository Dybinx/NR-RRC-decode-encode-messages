/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp_uplink_common.c - codec the message of BWP-UplinkCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "bwp_uplink_common.h"


void EncodeBWP_UplinkCommon_release(
	BWP_UplinkCommon_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_UplinkCommon_rach_ConfigCommon(
	BWP_UplinkCommon_rach_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_UPLINKCOMMON_RACH_CONFIGCOMMON_RELEASE:
		EncodeBWP_UplinkCommon_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKCOMMON_RACH_CONFIGCOMMON_SETUP:
		EncodeRACH_ConfigCommon(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_UplinkCommon_release_1(
	BWP_UplinkCommon_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_UplinkCommon_pusch_ConfigCommon(
	BWP_UplinkCommon_pusch_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_UPLINKCOMMON_PUSCH_CONFIGCOMMON_RELEASE:
		EncodeBWP_UplinkCommon_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKCOMMON_PUSCH_CONFIGCOMMON_SETUP:
		EncodePUSCH_ConfigCommon(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_UplinkCommon_release_2(
	BWP_UplinkCommon_release_2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_UplinkCommon_pucch_ConfigCommon(
	BWP_UplinkCommon_pucch_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_UPLINKCOMMON_PUCCH_CONFIGCOMMON_RELEASE:
		EncodeBWP_UplinkCommon_release_2(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKCOMMON_PUCCH_CONFIGCOMMON_SETUP:
		EncodePUCCH_ConfigCommon(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_UplinkCommon(
	BWP_UplinkCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->rach_ConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pusch_ConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_ConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeBWP(&i_encoded_field->genericParameters, buff, bits_iter, asn_error);

	if(i_encoded_field->rach_ConfigCommon_exist == TRUE)
	{
		EncodeBWP_UplinkCommon_rach_ConfigCommon(&i_encoded_field->rach_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_ConfigCommon_exist == TRUE)
	{
		EncodeBWP_UplinkCommon_pusch_ConfigCommon(&i_encoded_field->pusch_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pucch_ConfigCommon_exist == TRUE)
	{
		EncodeBWP_UplinkCommon_pucch_ConfigCommon(&i_encoded_field->pucch_ConfigCommon, buff, bits_iter, asn_error);
	}

}

void DecodeBWP_UplinkCommon_release(
	BWP_UplinkCommon_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_UplinkCommon_rach_ConfigCommon(
	BWP_UplinkCommon_rach_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_UPLINKCOMMON_RACH_CONFIGCOMMON_RELEASE:
		DecodeBWP_UplinkCommon_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKCOMMON_RACH_CONFIGCOMMON_SETUP:
		DecodeRACH_ConfigCommon(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_UplinkCommon_release_1(
	BWP_UplinkCommon_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_UplinkCommon_pusch_ConfigCommon(
	BWP_UplinkCommon_pusch_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_UPLINKCOMMON_PUSCH_CONFIGCOMMON_RELEASE:
		DecodeBWP_UplinkCommon_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKCOMMON_PUSCH_CONFIGCOMMON_SETUP:
		DecodePUSCH_ConfigCommon(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_UplinkCommon_release_2(
	BWP_UplinkCommon_release_2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_UplinkCommon_pucch_ConfigCommon(
	BWP_UplinkCommon_pucch_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_UPLINKCOMMON_PUCCH_CONFIGCOMMON_RELEASE:
		DecodeBWP_UplinkCommon_release_2(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKCOMMON_PUCCH_CONFIGCOMMON_SETUP:
		DecodePUCCH_ConfigCommon(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_UplinkCommon(
	BWP_UplinkCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->rach_ConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_ConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pucch_ConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	DecodeBWP(&o_decoded_field->genericParameters, buff, bits_iter, asn_error);
	if(o_decoded_field->rach_ConfigCommon_exist == TRUE)
	{
		DecodeBWP_UplinkCommon_rach_ConfigCommon(&o_decoded_field->rach_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_ConfigCommon_exist == TRUE)
	{
		DecodeBWP_UplinkCommon_pusch_ConfigCommon(&o_decoded_field->pusch_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pucch_ConfigCommon_exist == TRUE)
	{
		DecodeBWP_UplinkCommon_pucch_ConfigCommon(&o_decoded_field->pucch_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

