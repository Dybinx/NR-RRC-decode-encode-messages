/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_spatial_relation_info.c - codec the message of PUCCH-SpatialRelationInfo
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_spatial_relation_info.h"


void EncodePUCCH_SpatialRelationInfo_srs(
	PUCCH_SpatialRelationInfo_srs_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeSRS_ResourceId(&i_encoded_field->resource, buff, bits_iter, asn_error);

	EncodeBWP_Id(&i_encoded_field->uplinkBWP, buff, bits_iter, asn_error);

}

void EncodePUCCH_SpatialRelationInfo_referenceSignal(
	PUCCH_SpatialRelationInfo_referenceSignal_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUCCH_SPATIALRELATIONINFO_REFERENCESIGNAL_SSB_INDEX:
		EncodeSSB_Index(&i_encoded_field->a.ssb_Index, buff, bits_iter, asn_error);
		break;

	case PUCCH_SPATIALRELATIONINFO_REFERENCESIGNAL_CSI_RS_INDEX:
		EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->a.csi_RS_Index, buff, bits_iter, asn_error);
		break;

	case PUCCH_SPATIALRELATIONINFO_REFERENCESIGNAL_SRS:
		EncodePUCCH_SpatialRelationInfo_srs(&i_encoded_field->a.srs, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUCCH_SpatialRelationInfo_closedLoopIndex(
	PUCCH_SpatialRelationInfo_closedLoopIndex_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePUCCH_SpatialRelationInfo(
	PUCCH_SpatialRelationInfo_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->servingCellId_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodePUCCH_SpatialRelationInfoId(&i_encoded_field->pucch_SpatialRelationInfoId, buff, bits_iter, asn_error);

	if(i_encoded_field->servingCellId_exist == TRUE)
	{
		EncodeServCellIndex(&i_encoded_field->servingCellId, buff, bits_iter, asn_error);
	}

	EncodePUCCH_SpatialRelationInfo_referenceSignal(&i_encoded_field->referenceSignal, buff, bits_iter, asn_error);

	EncodePUCCH_PathlossReferenceRS_Id(&i_encoded_field->pucch_PathlossReferenceRS_Id, buff, bits_iter, asn_error);

	EncodeP0_PUCCH_Id(&i_encoded_field->p0_PUCCH_Id, buff, bits_iter, asn_error);

	EncodePUCCH_SpatialRelationInfo_closedLoopIndex(i_encoded_field->closedLoopIndex, buff, bits_iter, asn_error);

}

void DecodePUCCH_SpatialRelationInfo_srs(
	PUCCH_SpatialRelationInfo_srs_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeSRS_ResourceId(&o_decoded_field->resource, buff, bits_iter, asn_error);
	DecodeBWP_Id(&o_decoded_field->uplinkBWP, buff, bits_iter, asn_error);
}

void DecodePUCCH_SpatialRelationInfo_referenceSignal(
	PUCCH_SpatialRelationInfo_referenceSignal_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUCCH_SPATIALRELATIONINFO_REFERENCESIGNAL_SSB_INDEX:
		DecodeSSB_Index(&o_decoded_field->a.ssb_Index, buff, bits_iter, asn_error);
		break;

	case PUCCH_SPATIALRELATIONINFO_REFERENCESIGNAL_CSI_RS_INDEX:
		DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->a.csi_RS_Index, buff, bits_iter, asn_error);
		break;

	case PUCCH_SPATIALRELATIONINFO_REFERENCESIGNAL_SRS:
		DecodePUCCH_SpatialRelationInfo_srs(&o_decoded_field->a.srs, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUCCH_SpatialRelationInfo_closedLoopIndex(
	PUCCH_SpatialRelationInfo_closedLoopIndex_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePUCCH_SpatialRelationInfo(
	PUCCH_SpatialRelationInfo_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->servingCellId_exist = Get_bits(buff, 1, bits_iter);
	DecodePUCCH_SpatialRelationInfoId(&o_decoded_field->pucch_SpatialRelationInfoId, buff, bits_iter, asn_error);
	if(o_decoded_field->servingCellId_exist == TRUE)
	{
		DecodeServCellIndex(&o_decoded_field->servingCellId, buff, bits_iter, asn_error);
	}

	DecodePUCCH_SpatialRelationInfo_referenceSignal(&o_decoded_field->referenceSignal, buff, bits_iter, asn_error);
	DecodePUCCH_PathlossReferenceRS_Id(&o_decoded_field->pucch_PathlossReferenceRS_Id, buff, bits_iter, asn_error);
	DecodeP0_PUCCH_Id(&o_decoded_field->p0_PUCCH_Id, buff, bits_iter, asn_error);
	DecodePUCCH_SpatialRelationInfo_closedLoopIndex(&o_decoded_field->closedLoopIndex, buff, bits_iter, asn_error);
}

