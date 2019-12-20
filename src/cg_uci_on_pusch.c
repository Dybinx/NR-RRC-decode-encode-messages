/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cg_uci_on_pusch.c - codec the message of CG-UCI-OnPUSCH
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "cg_uci_on_pusch.h"


void EncodeCG_UCI_OnPUSCH_dynamic(
	CG_UCI_OnPUSCH_dynamic_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeBetaOffsets(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCG_UCI_OnPUSCH(
	CG_UCI_OnPUSCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CG_UCI_ONPUSCH_DYNAMIC:
		EncodeCG_UCI_OnPUSCH_dynamic(&i_encoded_field->a.dynamic, buff, bits_iter, asn_error);
		break;

	case CG_UCI_ONPUSCH_SEMISTATIC:
		EncodeBetaOffsets(&i_encoded_field->a.semiStatic, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodeCG_UCI_OnPUSCH_dynamic(
	CG_UCI_OnPUSCH_dynamic_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeBetaOffsets(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCG_UCI_OnPUSCH(
	CG_UCI_OnPUSCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CG_UCI_ONPUSCH_DYNAMIC:
		DecodeCG_UCI_OnPUSCH_dynamic(&o_decoded_field->a.dynamic, buff, bits_iter, asn_error);
		break;

	case CG_UCI_ONPUSCH_SEMISTATIC:
		DecodeBetaOffsets(&o_decoded_field->a.semiStatic, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

