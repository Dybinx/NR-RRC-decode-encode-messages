/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ul_am_rlc.c - codec the message of UL-AM-RLC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ul_am_rlc.h"


void EncodeUL_AM_RLC_maxRetxThreshold(
	UL_AM_RLC_maxRetxThreshold_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeUL_AM_RLC(
	UL_AM_RLC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->sn_FieldLength_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sn_FieldLength_exist == TRUE)
	{
		EncodeSN_FieldLengthAM(i_encoded_field->sn_FieldLength, buff, bits_iter, asn_error);
	}

	EncodeT_PollRetransmit(i_encoded_field->t_PollRetransmit, buff, bits_iter, asn_error);

	EncodePollPDU(i_encoded_field->pollPDU, buff, bits_iter, asn_error);

	EncodePollByte(i_encoded_field->pollByte, buff, bits_iter, asn_error);

	EncodeUL_AM_RLC_maxRetxThreshold(i_encoded_field->maxRetxThreshold, buff, bits_iter, asn_error);

}

void DecodeUL_AM_RLC_maxRetxThreshold(
	UL_AM_RLC_maxRetxThreshold_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeUL_AM_RLC(
	UL_AM_RLC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->sn_FieldLength_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->sn_FieldLength_exist == TRUE)
	{
		DecodeSN_FieldLengthAM(&o_decoded_field->sn_FieldLength, buff, bits_iter, asn_error);
	}

	DecodeT_PollRetransmit(&o_decoded_field->t_PollRetransmit, buff, bits_iter, asn_error);
	DecodePollPDU(&o_decoded_field->pollPDU, buff, bits_iter, asn_error);
	DecodePollByte(&o_decoded_field->pollByte, buff, bits_iter, asn_error);
	DecodeUL_AM_RLC_maxRetxThreshold(&o_decoded_field->maxRetxThreshold, buff, bits_iter, asn_error);
}

