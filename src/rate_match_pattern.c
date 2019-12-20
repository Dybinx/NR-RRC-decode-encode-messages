/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rate_match_pattern.c - codec the message of RateMatchPattern
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rate_match_pattern.h"


void EncodeRateMatchPattern_resourceBlocks(
	RateMatchPattern_resourceBlocks_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeRateMatchPattern_oneSlot(
	RateMatchPattern_oneSlot_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeRateMatchPattern_twoSlots(
	RateMatchPattern_twoSlots_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeRateMatchPattern_symbolsInResourceBlock(
	RateMatchPattern_symbolsInResourceBlock_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case RATEMATCHPATTERN_SYMBOLSINRESOURCEBLOCK_ONESLOT:
		EncodeRateMatchPattern_oneSlot(&i_encoded_field->a.oneSlot, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_SYMBOLSINRESOURCEBLOCK_TWOSLOTS:
		EncodeRateMatchPattern_twoSlots(&i_encoded_field->a.twoSlots, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeRateMatchPattern_n2(
	RateMatchPattern_n2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeRateMatchPattern_n4(
	RateMatchPattern_n4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeRateMatchPattern_n5(
	RateMatchPattern_n5_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeRateMatchPattern_n8(
	RateMatchPattern_n8_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeRateMatchPattern_n10(
	RateMatchPattern_n10_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeRateMatchPattern_n20(
	RateMatchPattern_n20_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeRateMatchPattern_n40(
	RateMatchPattern_n40_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeRateMatchPattern_periodicityAndPattern(
	RateMatchPattern_periodicityAndPattern_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 3, bits_iter);
	switch (i_encoded_field->type)
	{
	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N2:
		EncodeRateMatchPattern_n2(&i_encoded_field->a.n2, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N4:
		EncodeRateMatchPattern_n4(&i_encoded_field->a.n4, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N5:
		EncodeRateMatchPattern_n5(&i_encoded_field->a.n5, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N8:
		EncodeRateMatchPattern_n8(&i_encoded_field->a.n8, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N10:
		EncodeRateMatchPattern_n10(&i_encoded_field->a.n10, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N20:
		EncodeRateMatchPattern_n20(&i_encoded_field->a.n20, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N40:
		EncodeRateMatchPattern_n40(&i_encoded_field->a.n40, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeRateMatchPattern_bitmaps(
	RateMatchPattern_bitmaps_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->periodicityAndPattern_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeRateMatchPattern_resourceBlocks(&i_encoded_field->resourceBlocks, buff, bits_iter, asn_error);

	EncodeRateMatchPattern_symbolsInResourceBlock(&i_encoded_field->symbolsInResourceBlock, buff, bits_iter, asn_error);

	if(i_encoded_field->periodicityAndPattern_exist == TRUE)
	{
		EncodeRateMatchPattern_periodicityAndPattern(&i_encoded_field->periodicityAndPattern, buff, bits_iter, asn_error);
	}

}

void EncodeRateMatchPattern_patternType(
	RateMatchPattern_patternType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case RATEMATCHPATTERN_PATTERNTYPE_BITMAPS:
		EncodeRateMatchPattern_bitmaps(&i_encoded_field->a.bitmaps, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PATTERNTYPE_CONTROLRESOURCESET:
		EncodeControlResourceSetId(&i_encoded_field->a.controlResourceSet, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeRateMatchPattern_mode(
	RateMatchPattern_mode_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeRateMatchPattern(
	RateMatchPattern_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->subcarrierSpacing_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeRateMatchPatternId(&i_encoded_field->rateMatchPatternId, buff, bits_iter, asn_error);

	EncodeRateMatchPattern_patternType(&i_encoded_field->patternType, buff, bits_iter, asn_error);

	if(i_encoded_field->subcarrierSpacing_exist == TRUE)
	{
		EncodeSubcarrierSpacing(i_encoded_field->subcarrierSpacing, buff, bits_iter, asn_error);
	}

	EncodeRateMatchPattern_mode(i_encoded_field->mode, buff, bits_iter, asn_error);

}

void DecodeRateMatchPattern_resourceBlocks(
	RateMatchPattern_resourceBlocks_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 275;
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

void DecodeRateMatchPattern_oneSlot(
	RateMatchPattern_oneSlot_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 14;
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

void DecodeRateMatchPattern_twoSlots(
	RateMatchPattern_twoSlots_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 28;
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

void DecodeRateMatchPattern_symbolsInResourceBlock(
	RateMatchPattern_symbolsInResourceBlock_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case RATEMATCHPATTERN_SYMBOLSINRESOURCEBLOCK_ONESLOT:
		DecodeRateMatchPattern_oneSlot(&o_decoded_field->a.oneSlot, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_SYMBOLSINRESOURCEBLOCK_TWOSLOTS:
		DecodeRateMatchPattern_twoSlots(&o_decoded_field->a.twoSlots, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeRateMatchPattern_n2(
	RateMatchPattern_n2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 2;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeRateMatchPattern_n4(
	RateMatchPattern_n4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 4;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeRateMatchPattern_n5(
	RateMatchPattern_n5_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 5;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeRateMatchPattern_n8(
	RateMatchPattern_n8_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeRateMatchPattern_n10(
	RateMatchPattern_n10_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 10;
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

void DecodeRateMatchPattern_n20(
	RateMatchPattern_n20_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 20;
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

void DecodeRateMatchPattern_n40(
	RateMatchPattern_n40_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 40;
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

void DecodeRateMatchPattern_periodicityAndPattern(
	RateMatchPattern_periodicityAndPattern_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 3, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N2:
		DecodeRateMatchPattern_n2(&o_decoded_field->a.n2, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N4:
		DecodeRateMatchPattern_n4(&o_decoded_field->a.n4, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N5:
		DecodeRateMatchPattern_n5(&o_decoded_field->a.n5, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N8:
		DecodeRateMatchPattern_n8(&o_decoded_field->a.n8, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N10:
		DecodeRateMatchPattern_n10(&o_decoded_field->a.n10, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N20:
		DecodeRateMatchPattern_n20(&o_decoded_field->a.n20, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PERIODICITYANDPATTERN_N40:
		DecodeRateMatchPattern_n40(&o_decoded_field->a.n40, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeRateMatchPattern_bitmaps(
	RateMatchPattern_bitmaps_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->periodicityAndPattern_exist = Get_bits(buff, 1, bits_iter);
	DecodeRateMatchPattern_resourceBlocks(&o_decoded_field->resourceBlocks, buff, bits_iter, asn_error);
	DecodeRateMatchPattern_symbolsInResourceBlock(&o_decoded_field->symbolsInResourceBlock, buff, bits_iter, asn_error);
	if(o_decoded_field->periodicityAndPattern_exist == TRUE)
	{
		DecodeRateMatchPattern_periodicityAndPattern(&o_decoded_field->periodicityAndPattern, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeRateMatchPattern_patternType(
	RateMatchPattern_patternType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case RATEMATCHPATTERN_PATTERNTYPE_BITMAPS:
		DecodeRateMatchPattern_bitmaps(&o_decoded_field->a.bitmaps, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERN_PATTERNTYPE_CONTROLRESOURCESET:
		DecodeControlResourceSetId(&o_decoded_field->a.controlResourceSet, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeRateMatchPattern_mode(
	RateMatchPattern_mode_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeRateMatchPattern(
	RateMatchPattern_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->subcarrierSpacing_exist = Get_bits(buff, 1, bits_iter);
	DecodeRateMatchPatternId(&o_decoded_field->rateMatchPatternId, buff, bits_iter, asn_error);
	DecodeRateMatchPattern_patternType(&o_decoded_field->patternType, buff, bits_iter, asn_error);
	if(o_decoded_field->subcarrierSpacing_exist == TRUE)
	{
		DecodeSubcarrierSpacing(&o_decoded_field->subcarrierSpacing, buff, bits_iter, asn_error);
	}

	DecodeRateMatchPattern_mode(&o_decoded_field->mode, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

