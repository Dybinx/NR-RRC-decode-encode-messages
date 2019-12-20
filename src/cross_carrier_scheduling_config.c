/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cross_carrier_scheduling_config.c - codec the message of CrossCarrierSchedulingConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "cross_carrier_scheduling_config.h"


void EncodeCrossCarrierSchedulingConfig_own(
	CrossCarrierSchedulingConfig_own_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->cif_Presence, 1, bits_iter);

}

void EncodeCrossCarrierSchedulingConfig_other(
	CrossCarrierSchedulingConfig_other_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeServCellIndex(&i_encoded_field->schedulingCellId, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->cif_InSchedulingCell - 1, 3, bits_iter);

}

void EncodeCrossCarrierSchedulingConfig_schedulingCellInfo(
	CrossCarrierSchedulingConfig_schedulingCellInfo_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CROSSCARRIERSCHEDULINGCONFIG_SCHEDULINGCELLINFO_OWN:
		EncodeCrossCarrierSchedulingConfig_own(&i_encoded_field->a.own, buff, bits_iter, asn_error);
		break;

	case CROSSCARRIERSCHEDULINGCONFIG_SCHEDULINGCELLINFO_OTHER:
		EncodeCrossCarrierSchedulingConfig_other(&i_encoded_field->a.other, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCrossCarrierSchedulingConfig(
	CrossCarrierSchedulingConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeCrossCarrierSchedulingConfig_schedulingCellInfo(&i_encoded_field->schedulingCellInfo, buff, bits_iter, asn_error);

}

void DecodeCrossCarrierSchedulingConfig_own(
	CrossCarrierSchedulingConfig_own_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->cif_Presence = Get_bits(buff, 1, bits_iter);
}

void DecodeCrossCarrierSchedulingConfig_other(
	CrossCarrierSchedulingConfig_other_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeServCellIndex(&o_decoded_field->schedulingCellId, buff, bits_iter, asn_error);
	o_decoded_field->cif_InSchedulingCell = Get_bits(buff, 3, bits_iter) + 1;
}

void DecodeCrossCarrierSchedulingConfig_schedulingCellInfo(
	CrossCarrierSchedulingConfig_schedulingCellInfo_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CROSSCARRIERSCHEDULINGCONFIG_SCHEDULINGCELLINFO_OWN:
		DecodeCrossCarrierSchedulingConfig_own(&o_decoded_field->a.own, buff, bits_iter, asn_error);
		break;

	case CROSSCARRIERSCHEDULINGCONFIG_SCHEDULINGCELLINFO_OTHER:
		DecodeCrossCarrierSchedulingConfig_other(&o_decoded_field->a.other, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCrossCarrierSchedulingConfig(
	CrossCarrierSchedulingConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeCrossCarrierSchedulingConfig_schedulingCellInfo(&o_decoded_field->schedulingCellInfo, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

