/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_periodicity_and_offset.c - codec the message of SRS-PeriodicityAndOffset
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_periodicity_and_offset.h"


void EncodeSRS_PeriodicityAndOffset_sl1(
	SRS_PeriodicityAndOffset_sl1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeSRS_PeriodicityAndOffset(
	SRS_PeriodicityAndOffset_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 5, bits_iter);
	switch (i_encoded_field->type)
	{
	case SRS_PERIODICITYANDOFFSET_SL1:
		EncodeSRS_PeriodicityAndOffset_sl1(&i_encoded_field->a.sl1, buff, bits_iter, asn_error);
		break;

	case SRS_PERIODICITYANDOFFSET_SL2:
		PutBits(buff, i_encoded_field->a.sl2, 1, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL4:
		PutBits(buff, i_encoded_field->a.sl4, 2, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL5:
		PutBits(buff, i_encoded_field->a.sl5, 3, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL8:
		PutBits(buff, i_encoded_field->a.sl8, 3, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL10:
		PutBits(buff, i_encoded_field->a.sl10, 4, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL16:
		PutBits(buff, i_encoded_field->a.sl16, 4, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL20:
		PutBits(buff, i_encoded_field->a.sl20, 5, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL32:
		PutBits(buff, i_encoded_field->a.sl32, 5, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL40:
		PutBits(buff, i_encoded_field->a.sl40, 6, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL64:
		PutBits(buff, i_encoded_field->a.sl64, 6, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL80:
		PutBits(buff, i_encoded_field->a.sl80, 7, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL160:
		PutBits(buff, i_encoded_field->a.sl160, 8, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL320:
		PutBits(buff, i_encoded_field->a.sl320, 9, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL640:
		PutBits(buff, i_encoded_field->a.sl640, 10, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL1280:
		PutBits(buff, i_encoded_field->a.sl1280, 11, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL2560:
		PutBits(buff, i_encoded_field->a.sl2560, 12, bits_iter);
		break;

	default:
		break;	}
}

void DecodeSRS_PeriodicityAndOffset_sl1(
	SRS_PeriodicityAndOffset_sl1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeSRS_PeriodicityAndOffset(
	SRS_PeriodicityAndOffset_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 5, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SRS_PERIODICITYANDOFFSET_SL1:
		DecodeSRS_PeriodicityAndOffset_sl1(&o_decoded_field->a.sl1, buff, bits_iter, asn_error);
		break;

	case SRS_PERIODICITYANDOFFSET_SL2:
		o_decoded_field->a.sl2 = Get_bits(buff, 1, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL4:
		o_decoded_field->a.sl4 = Get_bits(buff, 2, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL5:
		o_decoded_field->a.sl5 = Get_bits(buff, 3, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL8:
		o_decoded_field->a.sl8 = Get_bits(buff, 3, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL10:
		o_decoded_field->a.sl10 = Get_bits(buff, 4, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL16:
		o_decoded_field->a.sl16 = Get_bits(buff, 4, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL20:
		o_decoded_field->a.sl20 = Get_bits(buff, 5, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL32:
		o_decoded_field->a.sl32 = Get_bits(buff, 5, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL40:
		o_decoded_field->a.sl40 = Get_bits(buff, 6, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL64:
		o_decoded_field->a.sl64 = Get_bits(buff, 6, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL80:
		o_decoded_field->a.sl80 = Get_bits(buff, 7, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL160:
		o_decoded_field->a.sl160 = Get_bits(buff, 8, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL320:
		o_decoded_field->a.sl320 = Get_bits(buff, 9, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL640:
		o_decoded_field->a.sl640 = Get_bits(buff, 10, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL1280:
		o_decoded_field->a.sl1280 = Get_bits(buff, 11, bits_iter);
		break;

	case SRS_PERIODICITYANDOFFSET_SL2560:
		o_decoded_field->a.sl2560 = Get_bits(buff, 12, bits_iter);
		break;

	default:
		break;

	}
}

