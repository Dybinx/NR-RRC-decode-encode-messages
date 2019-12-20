/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_power_control.c - codec the message of PUSCH-PowerControl
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pusch_power_control.h"


void EncodePUSCH_PowerControl_tpc_Accumulation(
	PUSCH_PowerControl_tpc_Accumulation_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUSCH_PowerControl_p0_AlphaSets(
	PUSCH_PowerControl_p0_AlphaSets_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeP0_PUSCH_AlphaSet(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUSCH_PowerControl_pathlossReferenceRSToAddModList(
	PUSCH_PowerControl_pathlossReferenceRSToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUSCH_PathlossReferenceRS(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUSCH_PowerControl_pathlossReferenceRSToReleaseList(
	PUSCH_PowerControl_pathlossReferenceRSToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUSCH_PathlossReferenceRS_Id(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUSCH_PowerControl_twoPUSCH_PC_AdjustmentStates(
	PUSCH_PowerControl_twoPUSCH_PC_AdjustmentStates_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUSCH_PowerControl_deltaMCS(
	PUSCH_PowerControl_deltaMCS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUSCH_PowerControl_sri_PUSCH_MappingToAddModList(
	PUSCH_PowerControl_sri_PUSCH_MappingToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSRI_PUSCH_PowerControl(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUSCH_PowerControl_sri_PUSCH_MappingToReleaseList(
	PUSCH_PowerControl_sri_PUSCH_MappingToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSRI_PUSCH_PowerControlId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUSCH_PowerControl(
	PUSCH_PowerControl_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->tpc_Accumulation_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->msg3_Alpha_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->p0_NominalWithoutGrant_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->p0_AlphaSets_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pathlossReferenceRSToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pathlossReferenceRSToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoPUSCH_PC_AdjustmentStates_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->deltaMCS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sri_PUSCH_MappingToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sri_PUSCH_MappingToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_Accumulation_exist == TRUE)
	{
		EncodePUSCH_PowerControl_tpc_Accumulation(i_encoded_field->tpc_Accumulation, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->msg3_Alpha_exist == TRUE)
	{
		EncodeAlpha(i_encoded_field->msg3_Alpha, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->p0_NominalWithoutGrant_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->p0_NominalWithoutGrant + 202, 8, bits_iter);
	}

	if(i_encoded_field->p0_AlphaSets_exist == TRUE)
	{
		EncodePUSCH_PowerControl_p0_AlphaSets(&i_encoded_field->p0_AlphaSets, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pathlossReferenceRSToAddModList_exist == TRUE)
	{
		EncodePUSCH_PowerControl_pathlossReferenceRSToAddModList(&i_encoded_field->pathlossReferenceRSToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pathlossReferenceRSToReleaseList_exist == TRUE)
	{
		EncodePUSCH_PowerControl_pathlossReferenceRSToReleaseList(&i_encoded_field->pathlossReferenceRSToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoPUSCH_PC_AdjustmentStates_exist == TRUE)
	{
		EncodePUSCH_PowerControl_twoPUSCH_PC_AdjustmentStates(i_encoded_field->twoPUSCH_PC_AdjustmentStates, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->deltaMCS_exist == TRUE)
	{
		EncodePUSCH_PowerControl_deltaMCS(i_encoded_field->deltaMCS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sri_PUSCH_MappingToAddModList_exist == TRUE)
	{
		EncodePUSCH_PowerControl_sri_PUSCH_MappingToAddModList(&i_encoded_field->sri_PUSCH_MappingToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sri_PUSCH_MappingToReleaseList_exist == TRUE)
	{
		EncodePUSCH_PowerControl_sri_PUSCH_MappingToReleaseList(&i_encoded_field->sri_PUSCH_MappingToReleaseList, buff, bits_iter, asn_error);
	}

}

void DecodePUSCH_PowerControl_tpc_Accumulation(
	PUSCH_PowerControl_tpc_Accumulation_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUSCH_PowerControl_p0_AlphaSets(
	PUSCH_PowerControl_p0_AlphaSets_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeP0_PUSCH_AlphaSet(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUSCH_PowerControl_pathlossReferenceRSToAddModList(
	PUSCH_PowerControl_pathlossReferenceRSToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUSCH_PathlossReferenceRS(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUSCH_PowerControl_pathlossReferenceRSToReleaseList(
	PUSCH_PowerControl_pathlossReferenceRSToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUSCH_PathlossReferenceRS_Id(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUSCH_PowerControl_twoPUSCH_PC_AdjustmentStates(
	PUSCH_PowerControl_twoPUSCH_PC_AdjustmentStates_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUSCH_PowerControl_deltaMCS(
	PUSCH_PowerControl_deltaMCS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUSCH_PowerControl_sri_PUSCH_MappingToAddModList(
	PUSCH_PowerControl_sri_PUSCH_MappingToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSRI_PUSCH_PowerControl(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUSCH_PowerControl_sri_PUSCH_MappingToReleaseList(
	PUSCH_PowerControl_sri_PUSCH_MappingToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSRI_PUSCH_PowerControlId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUSCH_PowerControl(
	PUSCH_PowerControl_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->tpc_Accumulation_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->msg3_Alpha_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->p0_NominalWithoutGrant_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->p0_AlphaSets_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pathlossReferenceRSToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pathlossReferenceRSToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoPUSCH_PC_AdjustmentStates_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->deltaMCS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sri_PUSCH_MappingToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sri_PUSCH_MappingToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->tpc_Accumulation_exist == TRUE)
	{
		DecodePUSCH_PowerControl_tpc_Accumulation(&o_decoded_field->tpc_Accumulation, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->msg3_Alpha_exist == TRUE)
	{
		DecodeAlpha(&o_decoded_field->msg3_Alpha, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->p0_NominalWithoutGrant_exist == TRUE)
	{
		o_decoded_field->p0_NominalWithoutGrant = Get_bits(buff, 8, bits_iter) - 202;
	}

	if(o_decoded_field->p0_AlphaSets_exist == TRUE)
	{
		DecodePUSCH_PowerControl_p0_AlphaSets(&o_decoded_field->p0_AlphaSets, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pathlossReferenceRSToAddModList_exist == TRUE)
	{
		DecodePUSCH_PowerControl_pathlossReferenceRSToAddModList(&o_decoded_field->pathlossReferenceRSToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pathlossReferenceRSToReleaseList_exist == TRUE)
	{
		DecodePUSCH_PowerControl_pathlossReferenceRSToReleaseList(&o_decoded_field->pathlossReferenceRSToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoPUSCH_PC_AdjustmentStates_exist == TRUE)
	{
		DecodePUSCH_PowerControl_twoPUSCH_PC_AdjustmentStates(&o_decoded_field->twoPUSCH_PC_AdjustmentStates, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->deltaMCS_exist == TRUE)
	{
		DecodePUSCH_PowerControl_deltaMCS(&o_decoded_field->deltaMCS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sri_PUSCH_MappingToAddModList_exist == TRUE)
	{
		DecodePUSCH_PowerControl_sri_PUSCH_MappingToAddModList(&o_decoded_field->sri_PUSCH_MappingToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sri_PUSCH_MappingToReleaseList_exist == TRUE)
	{
		DecodePUSCH_PowerControl_sri_PUSCH_MappingToReleaseList(&o_decoded_field->sri_PUSCH_MappingToReleaseList, buff, bits_iter, asn_error);
	}

}

