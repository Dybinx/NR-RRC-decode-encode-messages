/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * uci_on_pusch.c - codec the message of UCI-OnPUSCH
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "uci_on_pusch.h"


void EncodeUCI_OnPUSCH_dynamic(
	UCI_OnPUSCH_dynamic_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeBetaOffsets(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeUCI_OnPUSCH_betaOffsets(
	UCI_OnPUSCH_betaOffsets_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case UCI_ONPUSCH_BETAOFFSETS_DYNAMIC:
		EncodeUCI_OnPUSCH_dynamic(&i_encoded_field->a.dynamic, buff, bits_iter, asn_error);
		break;

	case UCI_ONPUSCH_BETAOFFSETS_SEMISTATIC:
		EncodeBetaOffsets(&i_encoded_field->a.semiStatic, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeUCI_OnPUSCH_scaling(
	UCI_OnPUSCH_scaling_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeUCI_OnPUSCH(
	UCI_OnPUSCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->betaOffsets_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->betaOffsets_exist == TRUE)
	{
		EncodeUCI_OnPUSCH_betaOffsets(&i_encoded_field->betaOffsets, buff, bits_iter, asn_error);
	}

	EncodeUCI_OnPUSCH_scaling(i_encoded_field->scaling, buff, bits_iter, asn_error);

}

void DecodeUCI_OnPUSCH_dynamic(
	UCI_OnPUSCH_dynamic_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 4;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeBetaOffsets(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeUCI_OnPUSCH_betaOffsets(
	UCI_OnPUSCH_betaOffsets_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case UCI_ONPUSCH_BETAOFFSETS_DYNAMIC:
		DecodeUCI_OnPUSCH_dynamic(&o_decoded_field->a.dynamic, buff, bits_iter, asn_error);
		break;

	case UCI_ONPUSCH_BETAOFFSETS_SEMISTATIC:
		DecodeBetaOffsets(&o_decoded_field->a.semiStatic, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeUCI_OnPUSCH_scaling(
	UCI_OnPUSCH_scaling_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeUCI_OnPUSCH(
	UCI_OnPUSCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->betaOffsets_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->betaOffsets_exist == TRUE)
	{
		DecodeUCI_OnPUSCH_betaOffsets(&o_decoded_field->betaOffsets, buff, bits_iter, asn_error);
	}

	DecodeUCI_OnPUSCH_scaling(&o_decoded_field->scaling, buff, bits_iter, asn_error);
}

