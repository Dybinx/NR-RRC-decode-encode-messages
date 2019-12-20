/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp_downlink_common.c - codec the message of BWP-DownlinkCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "bwp_downlink_common.h"


void EncodeBWP_DownlinkCommon_release(
	BWP_DownlinkCommon_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_DownlinkCommon_pdcch_ConfigCommon(
	BWP_DownlinkCommon_pdcch_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_DOWNLINKCOMMON_PDCCH_CONFIGCOMMON_RELEASE:
		EncodeBWP_DownlinkCommon_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKCOMMON_PDCCH_CONFIGCOMMON_SETUP:
		EncodePDCCH_ConfigCommon(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_DownlinkCommon_release_1(
	BWP_DownlinkCommon_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_DownlinkCommon_pdsch_ConfigCommon(
	BWP_DownlinkCommon_pdsch_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_DOWNLINKCOMMON_PDSCH_CONFIGCOMMON_RELEASE:
		EncodeBWP_DownlinkCommon_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKCOMMON_PDSCH_CONFIGCOMMON_SETUP:
		EncodePDSCH_ConfigCommon(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_DownlinkCommon(
	BWP_DownlinkCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->pdcch_ConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_ConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeBWP(&i_encoded_field->genericParameters, buff, bits_iter, asn_error);

	if(i_encoded_field->pdcch_ConfigCommon_exist == TRUE)
	{
		EncodeBWP_DownlinkCommon_pdcch_ConfigCommon(&i_encoded_field->pdcch_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_ConfigCommon_exist == TRUE)
	{
		EncodeBWP_DownlinkCommon_pdsch_ConfigCommon(&i_encoded_field->pdsch_ConfigCommon, buff, bits_iter, asn_error);
	}

}

void DecodeBWP_DownlinkCommon_release(
	BWP_DownlinkCommon_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_DownlinkCommon_pdcch_ConfigCommon(
	BWP_DownlinkCommon_pdcch_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_DOWNLINKCOMMON_PDCCH_CONFIGCOMMON_RELEASE:
		DecodeBWP_DownlinkCommon_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKCOMMON_PDCCH_CONFIGCOMMON_SETUP:
		DecodePDCCH_ConfigCommon(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_DownlinkCommon_release_1(
	BWP_DownlinkCommon_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_DownlinkCommon_pdsch_ConfigCommon(
	BWP_DownlinkCommon_pdsch_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_DOWNLINKCOMMON_PDSCH_CONFIGCOMMON_RELEASE:
		DecodeBWP_DownlinkCommon_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKCOMMON_PDSCH_CONFIGCOMMON_SETUP:
		DecodePDSCH_ConfigCommon(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_DownlinkCommon(
	BWP_DownlinkCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->pdcch_ConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_ConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	DecodeBWP(&o_decoded_field->genericParameters, buff, bits_iter, asn_error);
	if(o_decoded_field->pdcch_ConfigCommon_exist == TRUE)
	{
		DecodeBWP_DownlinkCommon_pdcch_ConfigCommon(&o_decoded_field->pdcch_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_ConfigCommon_exist == TRUE)
	{
		DecodeBWP_DownlinkCommon_pdsch_ConfigCommon(&o_decoded_field->pdsch_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

