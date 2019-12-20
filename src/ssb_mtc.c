/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ssb_mtc.c - codec the message of SSB-MTC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ssb_mtc.h"


void EncodeSSB_MTC_periodicityAndOffset(
	SSB_MTC_periodicityAndOffset_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 3, bits_iter);
	switch (i_encoded_field->type)
	{
	case SSB_MTC_PERIODICITYANDOFFSET_SF5:
		PutBits(buff, i_encoded_field->a.sf5, 3, bits_iter);
		break;

	case SSB_MTC_PERIODICITYANDOFFSET_SF10:
		PutBits(buff, i_encoded_field->a.sf10, 4, bits_iter);
		break;

	case SSB_MTC_PERIODICITYANDOFFSET_SF20:
		PutBits(buff, i_encoded_field->a.sf20, 5, bits_iter);
		break;

	case SSB_MTC_PERIODICITYANDOFFSET_SF40:
		PutBits(buff, i_encoded_field->a.sf40, 6, bits_iter);
		break;

	case SSB_MTC_PERIODICITYANDOFFSET_SF80:
		PutBits(buff, i_encoded_field->a.sf80, 7, bits_iter);
		break;

	case SSB_MTC_PERIODICITYANDOFFSET_SF160:
		PutBits(buff, i_encoded_field->a.sf160, 8, bits_iter);
		break;

	default:
		break;	}
}

void EncodeSSB_MTC_duration(
	SSB_MTC_duration_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSSB_MTC(
	SSB_MTC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeSSB_MTC_periodicityAndOffset(&i_encoded_field->periodicityAndOffset, buff, bits_iter, asn_error);

	EncodeSSB_MTC_duration(i_encoded_field->duration, buff, bits_iter, asn_error);

}

void DecodeSSB_MTC_periodicityAndOffset(
	SSB_MTC_periodicityAndOffset_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 3, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SSB_MTC_PERIODICITYANDOFFSET_SF5:
		o_decoded_field->a.sf5 = Get_bits(buff, 3, bits_iter);
		break;

	case SSB_MTC_PERIODICITYANDOFFSET_SF10:
		o_decoded_field->a.sf10 = Get_bits(buff, 4, bits_iter);
		break;

	case SSB_MTC_PERIODICITYANDOFFSET_SF20:
		o_decoded_field->a.sf20 = Get_bits(buff, 5, bits_iter);
		break;

	case SSB_MTC_PERIODICITYANDOFFSET_SF40:
		o_decoded_field->a.sf40 = Get_bits(buff, 6, bits_iter);
		break;

	case SSB_MTC_PERIODICITYANDOFFSET_SF80:
		o_decoded_field->a.sf80 = Get_bits(buff, 7, bits_iter);
		break;

	case SSB_MTC_PERIODICITYANDOFFSET_SF160:
		o_decoded_field->a.sf160 = Get_bits(buff, 8, bits_iter);
		break;

	default:
		break;

	}
}

void DecodeSSB_MTC_duration(
	SSB_MTC_duration_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSSB_MTC(
	SSB_MTC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeSSB_MTC_periodicityAndOffset(&o_decoded_field->periodicityAndOffset, buff, bits_iter, asn_error);
	DecodeSSB_MTC_duration(&o_decoded_field->duration, buff, bits_iter, asn_error);
}

