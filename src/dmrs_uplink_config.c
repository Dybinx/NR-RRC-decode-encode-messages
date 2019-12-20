/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * dmrs_uplink_config.c - codec the message of DMRS-UplinkConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "dmrs_uplink_config.h"


void EncodeDMRS_UplinkConfig_dmrs_Type(
	DMRS_UplinkConfig_dmrs_Type_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeDMRS_UplinkConfig_dmrs_AdditionalPosition(
	DMRS_UplinkConfig_dmrs_AdditionalPosition_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeDMRS_UplinkConfig_release(
	DMRS_UplinkConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDMRS_UplinkConfig_phaseTrackingRS(
	DMRS_UplinkConfig_phaseTrackingRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case DMRS_UPLINKCONFIG_PHASETRACKINGRS_RELEASE:
		EncodeDMRS_UplinkConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case DMRS_UPLINKCONFIG_PHASETRACKINGRS_SETUP:
		EncodePTRS_UplinkConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeDMRS_UplinkConfig_maxLength(
	DMRS_UplinkConfig_maxLength_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeDMRS_UplinkConfig_transformPrecodingDisabled(
	DMRS_UplinkConfig_transformPrecodingDisabled_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
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

	if(i_encoded_field->scramblingID0_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->scramblingID0, 16, bits_iter);
	}

	if(i_encoded_field->scramblingID1_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->scramblingID1, 16, bits_iter);
	}

}

void EncodeDMRS_UplinkConfig_disableSequenceGroupHopping(
	DMRS_UplinkConfig_disableSequenceGroupHopping_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeDMRS_UplinkConfig_sequenceHoppingEnabled(
	DMRS_UplinkConfig_sequenceHoppingEnabled_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeDMRS_UplinkConfig_transformPrecodingEnabled(
	DMRS_UplinkConfig_transformPrecodingEnabled_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->nPUSCH_Identity_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->disableSequenceGroupHopping_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sequenceHoppingEnabled_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nPUSCH_Identity_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->nPUSCH_Identity, 10, bits_iter);
	}

	if(i_encoded_field->disableSequenceGroupHopping_exist == TRUE)
	{
		EncodeDMRS_UplinkConfig_disableSequenceGroupHopping(i_encoded_field->disableSequenceGroupHopping, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sequenceHoppingEnabled_exist == TRUE)
	{
		EncodeDMRS_UplinkConfig_sequenceHoppingEnabled(i_encoded_field->sequenceHoppingEnabled, buff, bits_iter, asn_error);
	}

}

void EncodeDMRS_UplinkConfig(
	DMRS_UplinkConfig_t *i_encoded_field, 
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

	if(i_encoded_field->phaseTrackingRS_exist == TRUE)
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

	if(i_encoded_field->transformPrecodingDisabled_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->transformPrecodingEnabled_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dmrs_Type_exist == TRUE)
	{
		EncodeDMRS_UplinkConfig_dmrs_Type(i_encoded_field->dmrs_Type, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dmrs_AdditionalPosition_exist == TRUE)
	{
		EncodeDMRS_UplinkConfig_dmrs_AdditionalPosition(i_encoded_field->dmrs_AdditionalPosition, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->phaseTrackingRS_exist == TRUE)
	{
		EncodeDMRS_UplinkConfig_phaseTrackingRS(&i_encoded_field->phaseTrackingRS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxLength_exist == TRUE)
	{
		EncodeDMRS_UplinkConfig_maxLength(i_encoded_field->maxLength, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->transformPrecodingDisabled_exist == TRUE)
	{
		EncodeDMRS_UplinkConfig_transformPrecodingDisabled(&i_encoded_field->transformPrecodingDisabled, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->transformPrecodingEnabled_exist == TRUE)
	{
		EncodeDMRS_UplinkConfig_transformPrecodingEnabled(&i_encoded_field->transformPrecodingEnabled, buff, bits_iter, asn_error);
	}

}

void DecodeDMRS_UplinkConfig_dmrs_Type(
	DMRS_UplinkConfig_dmrs_Type_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeDMRS_UplinkConfig_dmrs_AdditionalPosition(
	DMRS_UplinkConfig_dmrs_AdditionalPosition_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeDMRS_UplinkConfig_release(
	DMRS_UplinkConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDMRS_UplinkConfig_phaseTrackingRS(
	DMRS_UplinkConfig_phaseTrackingRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case DMRS_UPLINKCONFIG_PHASETRACKINGRS_RELEASE:
		DecodeDMRS_UplinkConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case DMRS_UPLINKCONFIG_PHASETRACKINGRS_SETUP:
		DecodePTRS_UplinkConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeDMRS_UplinkConfig_maxLength(
	DMRS_UplinkConfig_maxLength_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeDMRS_UplinkConfig_transformPrecodingDisabled(
	DMRS_UplinkConfig_transformPrecodingDisabled_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->scramblingID0_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scramblingID1_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->scramblingID0_exist == TRUE)
	{
		o_decoded_field->scramblingID0 = Get_bits(buff, 16, bits_iter);
	}

	if(o_decoded_field->scramblingID1_exist == TRUE)
	{
		o_decoded_field->scramblingID1 = Get_bits(buff, 16, bits_iter);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeDMRS_UplinkConfig_disableSequenceGroupHopping(
	DMRS_UplinkConfig_disableSequenceGroupHopping_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeDMRS_UplinkConfig_sequenceHoppingEnabled(
	DMRS_UplinkConfig_sequenceHoppingEnabled_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeDMRS_UplinkConfig_transformPrecodingEnabled(
	DMRS_UplinkConfig_transformPrecodingEnabled_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->nPUSCH_Identity_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->disableSequenceGroupHopping_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sequenceHoppingEnabled_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->nPUSCH_Identity_exist == TRUE)
	{
		o_decoded_field->nPUSCH_Identity = Get_bits(buff, 10, bits_iter);
	}

	if(o_decoded_field->disableSequenceGroupHopping_exist == TRUE)
	{
		DecodeDMRS_UplinkConfig_disableSequenceGroupHopping(&o_decoded_field->disableSequenceGroupHopping, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sequenceHoppingEnabled_exist == TRUE)
	{
		DecodeDMRS_UplinkConfig_sequenceHoppingEnabled(&o_decoded_field->sequenceHoppingEnabled, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeDMRS_UplinkConfig(
	DMRS_UplinkConfig_t *o_decoded_field, 
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
	o_decoded_field->phaseTrackingRS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxLength_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->transformPrecodingDisabled_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->transformPrecodingEnabled_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->dmrs_Type_exist == TRUE)
	{
		DecodeDMRS_UplinkConfig_dmrs_Type(&o_decoded_field->dmrs_Type, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dmrs_AdditionalPosition_exist == TRUE)
	{
		DecodeDMRS_UplinkConfig_dmrs_AdditionalPosition(&o_decoded_field->dmrs_AdditionalPosition, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->phaseTrackingRS_exist == TRUE)
	{
		DecodeDMRS_UplinkConfig_phaseTrackingRS(&o_decoded_field->phaseTrackingRS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxLength_exist == TRUE)
	{
		DecodeDMRS_UplinkConfig_maxLength(&o_decoded_field->maxLength, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->transformPrecodingDisabled_exist == TRUE)
	{
		DecodeDMRS_UplinkConfig_transformPrecodingDisabled(&o_decoded_field->transformPrecodingDisabled, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->transformPrecodingEnabled_exist == TRUE)
	{
		DecodeDMRS_UplinkConfig_transformPrecodingEnabled(&o_decoded_field->transformPrecodingEnabled, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

