/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_serving_cell_config.c - codec the message of PUSCH-ServingCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pusch_serving_cell_config.h"


void EncodePUSCH_ServingCellConfig_release(
	PUSCH_ServingCellConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePUSCH_ServingCellConfig_codeBlockGroupTransmission(
	PUSCH_ServingCellConfig_codeBlockGroupTransmission_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_RELEASE:
		EncodePUSCH_ServingCellConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_SETUP:
		EncodePUSCH_CodeBlockGroupTransmission(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUSCH_ServingCellConfig_rateMatching(
	PUSCH_ServingCellConfig_rateMatching_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUSCH_ServingCellConfig_xOverhead(
	PUSCH_ServingCellConfig_xOverhead_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePUSCH_ServingCellConfig(
	PUSCH_ServingCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->codeBlockGroupTransmission_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rateMatching_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->xOverhead_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->codeBlockGroupTransmission_exist == TRUE)
	{
		EncodePUSCH_ServingCellConfig_codeBlockGroupTransmission(&i_encoded_field->codeBlockGroupTransmission, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rateMatching_exist == TRUE)
	{
		EncodePUSCH_ServingCellConfig_rateMatching(i_encoded_field->rateMatching, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->xOverhead_exist == TRUE)
	{
		EncodePUSCH_ServingCellConfig_xOverhead(i_encoded_field->xOverhead, buff, bits_iter, asn_error);
	}

}

void DecodePUSCH_ServingCellConfig_release(
	PUSCH_ServingCellConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePUSCH_ServingCellConfig_codeBlockGroupTransmission(
	PUSCH_ServingCellConfig_codeBlockGroupTransmission_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_RELEASE:
		DecodePUSCH_ServingCellConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_SETUP:
		DecodePUSCH_CodeBlockGroupTransmission(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUSCH_ServingCellConfig_rateMatching(
	PUSCH_ServingCellConfig_rateMatching_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUSCH_ServingCellConfig_xOverhead(
	PUSCH_ServingCellConfig_xOverhead_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePUSCH_ServingCellConfig(
	PUSCH_ServingCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->codeBlockGroupTransmission_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rateMatching_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->xOverhead_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->codeBlockGroupTransmission_exist == TRUE)
	{
		DecodePUSCH_ServingCellConfig_codeBlockGroupTransmission(&o_decoded_field->codeBlockGroupTransmission, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rateMatching_exist == TRUE)
	{
		DecodePUSCH_ServingCellConfig_rateMatching(&o_decoded_field->rateMatching, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->xOverhead_exist == TRUE)
	{
		DecodePUSCH_ServingCellConfig_xOverhead(&o_decoded_field->xOverhead, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

