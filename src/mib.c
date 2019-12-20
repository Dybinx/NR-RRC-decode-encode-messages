/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mib.c - codec the message of MIB
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "mib.h"


void EncodeMIB_systemFrameNumber(
	MIB_systemFrameNumber_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeMIB_subCarrierSpacingCommon(
	MIB_subCarrierSpacingCommon_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeMIB_dmrs_TypeA_Position(
	MIB_dmrs_TypeA_Position_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeMIB_cellBarred(
	MIB_cellBarred_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeMIB_intraFreqReselection(
	MIB_intraFreqReselection_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeMIB_spare(
	MIB_spare_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeMIB(
	MIB_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMIB_systemFrameNumber(&i_encoded_field->systemFrameNumber, buff, bits_iter, asn_error);

	EncodeMIB_subCarrierSpacingCommon(i_encoded_field->subCarrierSpacingCommon, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->ssb_SubcarrierOffset, 4, bits_iter);

	EncodeMIB_dmrs_TypeA_Position(i_encoded_field->dmrs_TypeA_Position, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->pdcch_ConfigSIB1, 8, bits_iter);

	EncodeMIB_cellBarred(i_encoded_field->cellBarred, buff, bits_iter, asn_error);

	EncodeMIB_intraFreqReselection(i_encoded_field->intraFreqReselection, buff, bits_iter, asn_error);

	EncodeMIB_spare(&i_encoded_field->spare, buff, bits_iter, asn_error);

}

void DecodeMIB_systemFrameNumber(
	MIB_systemFrameNumber_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 6;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeMIB_subCarrierSpacingCommon(
	MIB_subCarrierSpacingCommon_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeMIB_dmrs_TypeA_Position(
	MIB_dmrs_TypeA_Position_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeMIB_cellBarred(
	MIB_cellBarred_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeMIB_intraFreqReselection(
	MIB_intraFreqReselection_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeMIB_spare(
	MIB_spare_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 1;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeMIB(
	MIB_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMIB_systemFrameNumber(&o_decoded_field->systemFrameNumber, buff, bits_iter, asn_error);
	DecodeMIB_subCarrierSpacingCommon(&o_decoded_field->subCarrierSpacingCommon, buff, bits_iter, asn_error);
	o_decoded_field->ssb_SubcarrierOffset = Get_bits(buff, 4, bits_iter);
	DecodeMIB_dmrs_TypeA_Position(&o_decoded_field->dmrs_TypeA_Position, buff, bits_iter, asn_error);
	o_decoded_field->pdcch_ConfigSIB1 = Get_bits(buff, 8, bits_iter);
	DecodeMIB_cellBarred(&o_decoded_field->cellBarred, buff, bits_iter, asn_error);
	DecodeMIB_intraFreqReselection(&o_decoded_field->intraFreqReselection, buff, bits_iter, asn_error);
	DecodeMIB_spare(&o_decoded_field->spare, buff, bits_iter, asn_error);
}

