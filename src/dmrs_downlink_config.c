/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * dmrs_downlink_config.c - codec the message of DMRS-DownlinkConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "dmrs_downlink_config.h"


void EncodeDMRS_DownlinkConfig_dmrs_Type(
	DMRS_DownlinkConfig_dmrs_Type_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeDMRS_DownlinkConfig_dmrs_AdditionalPosition(
	DMRS_DownlinkConfig_dmrs_AdditionalPosition_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeDMRS_DownlinkConfig_maxLength(
	DMRS_DownlinkConfig_maxLength_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeDMRS_DownlinkConfig_release(
	DMRS_DownlinkConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDMRS_DownlinkConfig_phaseTrackingRS(
	DMRS_DownlinkConfig_phaseTrackingRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case DMRS_DOWNLINKCONFIG_PHASETRACKINGRS_RELEASE:
		EncodeDMRS_DownlinkConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case DMRS_DOWNLINKCONFIG_PHASETRACKINGRS_SETUP:
		EncodePTRS_DownlinkConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeDMRS_DownlinkConfig(
	DMRS_DownlinkConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->dmrs_Type_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dmrs_AdditionalPosition_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxLength_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scramblingID0_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scramblingID1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->phaseTrackingRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dmrs_Type_exist == TRUE)
	{
		EncodeDMRS_DownlinkConfig_dmrs_Type(i_encoded_field->dmrs_Type, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dmrs_AdditionalPosition_exist == TRUE)
	{
		EncodeDMRS_DownlinkConfig_dmrs_AdditionalPosition(i_encoded_field->dmrs_AdditionalPosition, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxLength_exist == TRUE)
	{
		EncodeDMRS_DownlinkConfig_maxLength(i_encoded_field->maxLength, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scramblingID0_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->scramblingID0, 16, bits_iter);
	}

	if(i_encoded_field->scramblingID1_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->scramblingID1, 16, bits_iter);
	}

	if(i_encoded_field->phaseTrackingRS_exist == TRUE)
	{
		EncodeDMRS_DownlinkConfig_phaseTrackingRS(&i_encoded_field->phaseTrackingRS, buff, bits_iter, asn_error);
	}

}

void DecodeDMRS_DownlinkConfig_dmrs_Type(
	DMRS_DownlinkConfig_dmrs_Type_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeDMRS_DownlinkConfig_dmrs_AdditionalPosition(
	DMRS_DownlinkConfig_dmrs_AdditionalPosition_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeDMRS_DownlinkConfig_maxLength(
	DMRS_DownlinkConfig_maxLength_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeDMRS_DownlinkConfig_release(
	DMRS_DownlinkConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDMRS_DownlinkConfig_phaseTrackingRS(
	DMRS_DownlinkConfig_phaseTrackingRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case DMRS_DOWNLINKCONFIG_PHASETRACKINGRS_RELEASE:
		DecodeDMRS_DownlinkConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case DMRS_DOWNLINKCONFIG_PHASETRACKINGRS_SETUP:
		DecodePTRS_DownlinkConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeDMRS_DownlinkConfig(
	DMRS_DownlinkConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->dmrs_Type_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dmrs_AdditionalPosition_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxLength_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scramblingID0_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scramblingID1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->phaseTrackingRS_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->dmrs_Type_exist == TRUE)
	{
		DecodeDMRS_DownlinkConfig_dmrs_Type(&o_decoded_field->dmrs_Type, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dmrs_AdditionalPosition_exist == TRUE)
	{
		DecodeDMRS_DownlinkConfig_dmrs_AdditionalPosition(&o_decoded_field->dmrs_AdditionalPosition, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxLength_exist == TRUE)
	{
		DecodeDMRS_DownlinkConfig_maxLength(&o_decoded_field->maxLength, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scramblingID0_exist == TRUE)
	{
		o_decoded_field->scramblingID0 = Get_bits(buff, 16, bits_iter);
	}

	if(o_decoded_field->scramblingID1_exist == TRUE)
	{
		o_decoded_field->scramblingID1 = Get_bits(buff, 16, bits_iter);
	}

	if(o_decoded_field->phaseTrackingRS_exist == TRUE)
	{
		DecodeDMRS_DownlinkConfig_phaseTrackingRS(&o_decoded_field->phaseTrackingRS, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

