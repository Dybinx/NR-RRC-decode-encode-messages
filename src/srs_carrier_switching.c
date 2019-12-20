/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_carrier_switching.c - codec the message of SRS-CarrierSwitching
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_carrier_switching.h"


void EncodeSRS_CarrierSwitching_srs_SwitchFromCarrier(
	SRS_CarrierSwitching_srs_SwitchFromCarrier_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSRS_CarrierSwitching_typeA(
	SRS_CarrierSwitching_typeA_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSRS_TPC_PDCCH_Config(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSRS_CarrierSwitching_srs_TPC_PDCCH_Group(
	SRS_CarrierSwitching_srs_TPC_PDCCH_Group_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case SRS_CARRIERSWITCHING_SRS_TPC_PDCCH_GROUP_TYPEA:
		EncodeSRS_CarrierSwitching_typeA(&i_encoded_field->a.typeA, buff, bits_iter, asn_error);
		break;

	case SRS_CARRIERSWITCHING_SRS_TPC_PDCCH_GROUP_TYPEB:
		EncodeSRS_TPC_PDCCH_Config(&i_encoded_field->a.typeB, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeSRS_CarrierSwitching_monitoringCells(
	SRS_CarrierSwitching_monitoringCells_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeServCellIndex(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSRS_CarrierSwitching(
	SRS_CarrierSwitching_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->srs_SwitchFromServCellIndex_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srs_TPC_PDCCH_Group_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->monitoringCells_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srs_SwitchFromServCellIndex_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->srs_SwitchFromServCellIndex, 5, bits_iter);
	}

	EncodeSRS_CarrierSwitching_srs_SwitchFromCarrier(i_encoded_field->srs_SwitchFromCarrier, buff, bits_iter, asn_error);

	if(i_encoded_field->srs_TPC_PDCCH_Group_exist == TRUE)
	{
		EncodeSRS_CarrierSwitching_srs_TPC_PDCCH_Group(&i_encoded_field->srs_TPC_PDCCH_Group, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->monitoringCells_exist == TRUE)
	{
		EncodeSRS_CarrierSwitching_monitoringCells(&i_encoded_field->monitoringCells, buff, bits_iter, asn_error);
	}

}

void DecodeSRS_CarrierSwitching_srs_SwitchFromCarrier(
	SRS_CarrierSwitching_srs_SwitchFromCarrier_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSRS_CarrierSwitching_typeA(
	SRS_CarrierSwitching_typeA_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSRS_TPC_PDCCH_Config(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSRS_CarrierSwitching_srs_TPC_PDCCH_Group(
	SRS_CarrierSwitching_srs_TPC_PDCCH_Group_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SRS_CARRIERSWITCHING_SRS_TPC_PDCCH_GROUP_TYPEA:
		DecodeSRS_CarrierSwitching_typeA(&o_decoded_field->a.typeA, buff, bits_iter, asn_error);
		break;

	case SRS_CARRIERSWITCHING_SRS_TPC_PDCCH_GROUP_TYPEB:
		DecodeSRS_TPC_PDCCH_Config(&o_decoded_field->a.typeB, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeSRS_CarrierSwitching_monitoringCells(
	SRS_CarrierSwitching_monitoringCells_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeServCellIndex(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSRS_CarrierSwitching(
	SRS_CarrierSwitching_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->srs_SwitchFromServCellIndex_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->srs_TPC_PDCCH_Group_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->monitoringCells_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->srs_SwitchFromServCellIndex_exist == TRUE)
	{
		o_decoded_field->srs_SwitchFromServCellIndex = Get_bits(buff, 5, bits_iter);
	}

	DecodeSRS_CarrierSwitching_srs_SwitchFromCarrier(&o_decoded_field->srs_SwitchFromCarrier, buff, bits_iter, asn_error);
	if(o_decoded_field->srs_TPC_PDCCH_Group_exist == TRUE)
	{
		DecodeSRS_CarrierSwitching_srs_TPC_PDCCH_Group(&o_decoded_field->srs_TPC_PDCCH_Group, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->monitoringCells_exist == TRUE)
	{
		DecodeSRS_CarrierSwitching_monitoringCells(&o_decoded_field->monitoringCells, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

