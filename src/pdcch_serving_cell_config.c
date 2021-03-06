/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdcch_serving_cell_config.c - codec the message of PDCCH-ServingCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pdcch_serving_cell_config.h"


void EncodePDCCH_ServingCellConfig_release(
	PDCCH_ServingCellConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePDCCH_ServingCellConfig_slotFormatIndicator(
	PDCCH_ServingCellConfig_slotFormatIndicator_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDCCH_SERVINGCELLCONFIG_SLOTFORMATINDICATOR_RELEASE:
		EncodePDCCH_ServingCellConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDCCH_SERVINGCELLCONFIG_SLOTFORMATINDICATOR_SETUP:
		EncodeSlotFormatIndicator(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDCCH_ServingCellConfig(
	PDCCH_ServingCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->slotFormatIndicator_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->slotFormatIndicator_exist == TRUE)
	{
		EncodePDCCH_ServingCellConfig_slotFormatIndicator(&i_encoded_field->slotFormatIndicator, buff, bits_iter, asn_error);
	}

}

void DecodePDCCH_ServingCellConfig_release(
	PDCCH_ServingCellConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePDCCH_ServingCellConfig_slotFormatIndicator(
	PDCCH_ServingCellConfig_slotFormatIndicator_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PDCCH_SERVINGCELLCONFIG_SLOTFORMATINDICATOR_RELEASE:
		DecodePDCCH_ServingCellConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDCCH_SERVINGCELLCONFIG_SLOTFORMATINDICATOR_SETUP:
		DecodeSlotFormatIndicator(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDCCH_ServingCellConfig(
	PDCCH_ServingCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->slotFormatIndicator_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->slotFormatIndicator_exist == TRUE)
	{
		DecodePDCCH_ServingCellConfig_slotFormatIndicator(&o_decoded_field->slotFormatIndicator, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

