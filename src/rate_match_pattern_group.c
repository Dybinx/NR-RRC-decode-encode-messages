/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rate_match_pattern_group.c - codec the message of RateMatchPatternGroup
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rate_match_pattern_group.h"


void EncodeRateMatchPatternGroup_1(
	RateMatchPatternGroup_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case RATEMATCHPATTERNGROUP_1_CELLLEVEL:
		EncodeRateMatchPatternId(&i_encoded_field->a.cellLevel, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERNGROUP_1_BWPLEVEL:
		EncodeRateMatchPatternId(&i_encoded_field->a.bwpLevel, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeRateMatchPatternGroup(
	RateMatchPatternGroup_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeRateMatchPatternGroup_1(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeRateMatchPatternGroup_1(
	RateMatchPatternGroup_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case RATEMATCHPATTERNGROUP_1_CELLLEVEL:
		DecodeRateMatchPatternId(&o_decoded_field->a.cellLevel, buff, bits_iter, asn_error);
		break;

	case RATEMATCHPATTERNGROUP_1_BWPLEVEL:
		DecodeRateMatchPatternId(&o_decoded_field->a.bwpLevel, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeRateMatchPatternGroup(
	RateMatchPatternGroup_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeRateMatchPatternGroup_1(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

