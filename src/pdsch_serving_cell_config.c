/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdsch_serving_cell_config.c - codec the message of PDSCH-ServingCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pdsch_serving_cell_config.h"


void EncodePDSCH_ServingCellConfig_release(
	PDSCH_ServingCellConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePDSCH_ServingCellConfig_codeBlockGroupTransmission(
	PDSCH_ServingCellConfig_codeBlockGroupTransmission_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_RELEASE:
		EncodePDSCH_ServingCellConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_SETUP:
		EncodePDSCH_CodeBlockGroupTransmission(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDSCH_ServingCellConfig_xOverhead(
	PDSCH_ServingCellConfig_xOverhead_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePDSCH_ServingCellConfig_nrofHARQ_ProcessesForPDSCH(
	PDSCH_ServingCellConfig_nrofHARQ_ProcessesForPDSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodePDSCH_ServingCellConfig(
	PDSCH_ServingCellConfig_t *i_encoded_field, 
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

	if(i_encoded_field->xOverhead_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nrofHARQ_ProcessesForPDSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_Cell_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->codeBlockGroupTransmission_exist == TRUE)
	{
		EncodePDSCH_ServingCellConfig_codeBlockGroupTransmission(&i_encoded_field->codeBlockGroupTransmission, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->xOverhead_exist == TRUE)
	{
		EncodePDSCH_ServingCellConfig_xOverhead(i_encoded_field->xOverhead, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nrofHARQ_ProcessesForPDSCH_exist == TRUE)
	{
		EncodePDSCH_ServingCellConfig_nrofHARQ_ProcessesForPDSCH(i_encoded_field->nrofHARQ_ProcessesForPDSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pucch_Cell_exist == TRUE)
	{
		EncodeServCellIndex(&i_encoded_field->pucch_Cell, buff, bits_iter, asn_error);
	}

}

void DecodePDSCH_ServingCellConfig_release(
	PDSCH_ServingCellConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePDSCH_ServingCellConfig_codeBlockGroupTransmission(
	PDSCH_ServingCellConfig_codeBlockGroupTransmission_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PDSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_RELEASE:
		DecodePDSCH_ServingCellConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_SETUP:
		DecodePDSCH_CodeBlockGroupTransmission(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDSCH_ServingCellConfig_xOverhead(
	PDSCH_ServingCellConfig_xOverhead_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePDSCH_ServingCellConfig_nrofHARQ_ProcessesForPDSCH(
	PDSCH_ServingCellConfig_nrofHARQ_ProcessesForPDSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodePDSCH_ServingCellConfig(
	PDSCH_ServingCellConfig_t *o_decoded_field, 
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
	o_decoded_field->xOverhead_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nrofHARQ_ProcessesForPDSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pucch_Cell_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->codeBlockGroupTransmission_exist == TRUE)
	{
		DecodePDSCH_ServingCellConfig_codeBlockGroupTransmission(&o_decoded_field->codeBlockGroupTransmission, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->xOverhead_exist == TRUE)
	{
		DecodePDSCH_ServingCellConfig_xOverhead(&o_decoded_field->xOverhead, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nrofHARQ_ProcessesForPDSCH_exist == TRUE)
	{
		DecodePDSCH_ServingCellConfig_nrofHARQ_ProcessesForPDSCH(&o_decoded_field->nrofHARQ_ProcessesForPDSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pucch_Cell_exist == TRUE)
	{
		DecodeServCellIndex(&o_decoded_field->pucch_Cell, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

