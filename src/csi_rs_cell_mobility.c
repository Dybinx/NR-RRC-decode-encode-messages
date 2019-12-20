/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_rs_cell_mobility.c - codec the message of CSI-RS-CellMobility
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_rs_cell_mobility.h"


void EncodeCSI_RS_CellMobility_nrofPRBs(
	CSI_RS_CellMobility_nrofPRBs_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeCSI_RS_CellMobility_csi_rs_MeasurementBW(
	CSI_RS_CellMobility_csi_rs_MeasurementBW_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCSI_RS_CellMobility_nrofPRBs(i_encoded_field->nrofPRBs, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->startPRB, 12, bits_iter);

}

void EncodeCSI_RS_CellMobility_density(
	CSI_RS_CellMobility_density_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeCSI_RS_CellMobility_csi_rs_ResourceList_Mobility(
	CSI_RS_CellMobility_csi_rs_ResourceList_Mobility_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 7, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_RS_Resource_Mobility(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_RS_CellMobility(
	CSI_RS_CellMobility_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->density_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodePhysCellId(&i_encoded_field->cellId, buff, bits_iter, asn_error);

	EncodeCSI_RS_CellMobility_csi_rs_MeasurementBW(&i_encoded_field->csi_rs_MeasurementBW, buff, bits_iter, asn_error);

	if(i_encoded_field->density_exist == TRUE)
	{
		EncodeCSI_RS_CellMobility_density(i_encoded_field->density, buff, bits_iter, asn_error);
	}

	EncodeCSI_RS_CellMobility_csi_rs_ResourceList_Mobility(&i_encoded_field->csi_rs_ResourceList_Mobility, buff, bits_iter, asn_error);

}

void DecodeCSI_RS_CellMobility_nrofPRBs(
	CSI_RS_CellMobility_nrofPRBs_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeCSI_RS_CellMobility_csi_rs_MeasurementBW(
	CSI_RS_CellMobility_csi_rs_MeasurementBW_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCSI_RS_CellMobility_nrofPRBs(&o_decoded_field->nrofPRBs, buff, bits_iter, asn_error);
	o_decoded_field->startPRB = Get_bits(buff, 12, bits_iter);
}

void DecodeCSI_RS_CellMobility_density(
	CSI_RS_CellMobility_density_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeCSI_RS_CellMobility_csi_rs_ResourceList_Mobility(
	CSI_RS_CellMobility_csi_rs_ResourceList_Mobility_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 7, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_RS_Resource_Mobility(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_RS_CellMobility(
	CSI_RS_CellMobility_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->density_exist = Get_bits(buff, 1, bits_iter);
	DecodePhysCellId(&o_decoded_field->cellId, buff, bits_iter, asn_error);
	DecodeCSI_RS_CellMobility_csi_rs_MeasurementBW(&o_decoded_field->csi_rs_MeasurementBW, buff, bits_iter, asn_error);
	if(o_decoded_field->density_exist == TRUE)
	{
		DecodeCSI_RS_CellMobility_density(&o_decoded_field->density, buff, bits_iter, asn_error);
	}

	DecodeCSI_RS_CellMobility_csi_rs_ResourceList_Mobility(&o_decoded_field->csi_rs_ResourceList_Mobility, buff, bits_iter, asn_error);
}

