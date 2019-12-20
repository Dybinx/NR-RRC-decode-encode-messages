/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ssb_to_measure.c - codec the message of SSB-ToMeasure
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ssb_to_measure.h"


void EncodeSSB_ToMeasure_shortBitmap(
	SSB_ToMeasure_shortBitmap_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeSSB_ToMeasure_mediumBitmap(
	SSB_ToMeasure_mediumBitmap_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeSSB_ToMeasure_longBitmap(
	SSB_ToMeasure_longBitmap_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeSSB_ToMeasure(
	SSB_ToMeasure_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case SSB_TOMEASURE_SHORTBITMAP:
		EncodeSSB_ToMeasure_shortBitmap(&i_encoded_field->a.shortBitmap, buff, bits_iter, asn_error);
		break;

	case SSB_TOMEASURE_MEDIUMBITMAP:
		EncodeSSB_ToMeasure_mediumBitmap(&i_encoded_field->a.mediumBitmap, buff, bits_iter, asn_error);
		break;

	case SSB_TOMEASURE_LONGBITMAP:
		EncodeSSB_ToMeasure_longBitmap(&i_encoded_field->a.longBitmap, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodeSSB_ToMeasure_shortBitmap(
	SSB_ToMeasure_shortBitmap_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 4;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeSSB_ToMeasure_mediumBitmap(
	SSB_ToMeasure_mediumBitmap_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeSSB_ToMeasure_longBitmap(
	SSB_ToMeasure_longBitmap_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 64;
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

void DecodeSSB_ToMeasure(
	SSB_ToMeasure_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SSB_TOMEASURE_SHORTBITMAP:
		DecodeSSB_ToMeasure_shortBitmap(&o_decoded_field->a.shortBitmap, buff, bits_iter, asn_error);
		break;

	case SSB_TOMEASURE_MEDIUMBITMAP:
		DecodeSSB_ToMeasure_mediumBitmap(&o_decoded_field->a.mediumBitmap, buff, bits_iter, asn_error);
		break;

	case SSB_TOMEASURE_LONGBITMAP:
		DecodeSSB_ToMeasure_longBitmap(&o_decoded_field->a.longBitmap, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

