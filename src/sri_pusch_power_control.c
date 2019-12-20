/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sri_pusch_power_control.c - codec the message of SRI-PUSCH-PowerControl
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "sri_pusch_power_control.h"


void EncodeSRI_PUSCH_PowerControl_sri_PUSCH_ClosedLoopIndex(
	SRI_PUSCH_PowerControl_sri_PUSCH_ClosedLoopIndex_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSRI_PUSCH_PowerControl(
	SRI_PUSCH_PowerControl_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeSRI_PUSCH_PowerControlId(&i_encoded_field->sri_PUSCH_PowerControlId, buff, bits_iter, asn_error);

	EncodePUSCH_PathlossReferenceRS_Id(&i_encoded_field->sri_PUSCH_PathlossReferenceRS_Id, buff, bits_iter, asn_error);

	EncodeP0_PUSCH_AlphaSetId(&i_encoded_field->sri_P0_PUSCH_AlphaSetId, buff, bits_iter, asn_error);

	EncodeSRI_PUSCH_PowerControl_sri_PUSCH_ClosedLoopIndex(i_encoded_field->sri_PUSCH_ClosedLoopIndex, buff, bits_iter, asn_error);

}

void DecodeSRI_PUSCH_PowerControl_sri_PUSCH_ClosedLoopIndex(
	SRI_PUSCH_PowerControl_sri_PUSCH_ClosedLoopIndex_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSRI_PUSCH_PowerControl(
	SRI_PUSCH_PowerControl_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeSRI_PUSCH_PowerControlId(&o_decoded_field->sri_PUSCH_PowerControlId, buff, bits_iter, asn_error);
	DecodePUSCH_PathlossReferenceRS_Id(&o_decoded_field->sri_PUSCH_PathlossReferenceRS_Id, buff, bits_iter, asn_error);
	DecodeP0_PUSCH_AlphaSetId(&o_decoded_field->sri_P0_PUSCH_AlphaSetId, buff, bits_iter, asn_error);
	DecodeSRI_PUSCH_PowerControl_sri_PUSCH_ClosedLoopIndex(&o_decoded_field->sri_PUSCH_ClosedLoopIndex, buff, bits_iter, asn_error);
}

