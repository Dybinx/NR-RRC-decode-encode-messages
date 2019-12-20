/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * eutra_mbsfn_subframe_config.c - codec the message of EUTRA-MBSFN-SubframeConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "eutra_mbsfn_subframe_config.h"


void EncodeEUTRA_MBSFN_SubframeConfig_radioframeAllocationPeriod(
	EUTRA_MBSFN_SubframeConfig_radioframeAllocationPeriod_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeEUTRA_MBSFN_SubframeConfig_oneFrame(
	EUTRA_MBSFN_SubframeConfig_oneFrame_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeEUTRA_MBSFN_SubframeConfig_fourFrames(
	EUTRA_MBSFN_SubframeConfig_fourFrames_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeEUTRA_MBSFN_SubframeConfig_subframeAllocation(
	EUTRA_MBSFN_SubframeConfig_subframeAllocation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_ONEFRAME:
		EncodeEUTRA_MBSFN_SubframeConfig_oneFrame(&i_encoded_field->a.oneFrame, buff, bits_iter, asn_error);
		break;

	case EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_FOURFRAMES:
		EncodeEUTRA_MBSFN_SubframeConfig_fourFrames(&i_encoded_field->a.fourFrames, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeEUTRA_MBSFN_SubframeConfig_oneFrame_v1430(
	EUTRA_MBSFN_SubframeConfig_oneFrame_v1430_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeEUTRA_MBSFN_SubframeConfig_fourFrames_v1430(
	EUTRA_MBSFN_SubframeConfig_fourFrames_v1430_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeEUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430(
	EUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_V1430_ONEFRAME_V1430:
		EncodeEUTRA_MBSFN_SubframeConfig_oneFrame_v1430(&i_encoded_field->a.oneFrame_v1430, buff, bits_iter, asn_error);
		break;

	case EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_V1430_FOURFRAMES_V1430:
		EncodeEUTRA_MBSFN_SubframeConfig_fourFrames_v1430(&i_encoded_field->a.fourFrames_v1430, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeEUTRA_MBSFN_SubframeConfig(
	EUTRA_MBSFN_SubframeConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->subframeAllocation_v1430_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeEUTRA_MBSFN_SubframeConfig_radioframeAllocationPeriod(i_encoded_field->radioframeAllocationPeriod, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->radioframeAllocationOffset, 3, bits_iter);

	EncodeEUTRA_MBSFN_SubframeConfig_subframeAllocation(&i_encoded_field->subframeAllocation, buff, bits_iter, asn_error);

	if(i_encoded_field->subframeAllocation_v1430_exist == TRUE)
	{
		EncodeEUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430(&i_encoded_field->subframeAllocation_v1430, buff, bits_iter, asn_error);
	}

}

void DecodeEUTRA_MBSFN_SubframeConfig_radioframeAllocationPeriod(
	EUTRA_MBSFN_SubframeConfig_radioframeAllocationPeriod_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeEUTRA_MBSFN_SubframeConfig_oneFrame(
	EUTRA_MBSFN_SubframeConfig_oneFrame_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 6;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeEUTRA_MBSFN_SubframeConfig_fourFrames(
	EUTRA_MBSFN_SubframeConfig_fourFrames_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 24;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeEUTRA_MBSFN_SubframeConfig_subframeAllocation(
	EUTRA_MBSFN_SubframeConfig_subframeAllocation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_ONEFRAME:
		DecodeEUTRA_MBSFN_SubframeConfig_oneFrame(&o_decoded_field->a.oneFrame, buff, bits_iter, asn_error);
		break;

	case EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_FOURFRAMES:
		DecodeEUTRA_MBSFN_SubframeConfig_fourFrames(&o_decoded_field->a.fourFrames, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeEUTRA_MBSFN_SubframeConfig_oneFrame_v1430(
	EUTRA_MBSFN_SubframeConfig_oneFrame_v1430_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 2;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeEUTRA_MBSFN_SubframeConfig_fourFrames_v1430(
	EUTRA_MBSFN_SubframeConfig_fourFrames_v1430_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeEUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430(
	EUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_V1430_ONEFRAME_V1430:
		DecodeEUTRA_MBSFN_SubframeConfig_oneFrame_v1430(&o_decoded_field->a.oneFrame_v1430, buff, bits_iter, asn_error);
		break;

	case EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_V1430_FOURFRAMES_V1430:
		DecodeEUTRA_MBSFN_SubframeConfig_fourFrames_v1430(&o_decoded_field->a.fourFrames_v1430, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeEUTRA_MBSFN_SubframeConfig(
	EUTRA_MBSFN_SubframeConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->subframeAllocation_v1430_exist = Get_bits(buff, 1, bits_iter);
	DecodeEUTRA_MBSFN_SubframeConfig_radioframeAllocationPeriod(&o_decoded_field->radioframeAllocationPeriod, buff, bits_iter, asn_error);
	o_decoded_field->radioframeAllocationOffset = Get_bits(buff, 3, bits_iter);
	DecodeEUTRA_MBSFN_SubframeConfig_subframeAllocation(&o_decoded_field->subframeAllocation, buff, bits_iter, asn_error);
	if(o_decoded_field->subframeAllocation_v1430_exist == TRUE)
	{
		DecodeEUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430(&o_decoded_field->subframeAllocation_v1430, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

