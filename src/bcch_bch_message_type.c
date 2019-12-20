/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bcch_bch_message_type.c - codec the message of BCCH-BCH-MessageType
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "bcch_bch_message_type.h"


void EncodeBCCH_BCH_MessageType_messageClassExtension(
	BCCH_BCH_MessageType_messageClassExtension_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBCCH_BCH_MessageType(
	BCCH_BCH_MessageType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BCCH_BCH_MESSAGETYPE_MIB:
		EncodeMIB(&i_encoded_field->a.mib, buff, bits_iter, asn_error);
		break;

	case BCCH_BCH_MESSAGETYPE_MESSAGECLASSEXTENSION:
		EncodeBCCH_BCH_MessageType_messageClassExtension(&i_encoded_field->a.messageClassExtension, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodeBCCH_BCH_MessageType_messageClassExtension(
	BCCH_BCH_MessageType_messageClassExtension_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBCCH_BCH_MessageType(
	BCCH_BCH_MessageType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BCCH_BCH_MESSAGETYPE_MIB:
		DecodeMIB(&o_decoded_field->a.mib, buff, bits_iter, asn_error);
		break;

	case BCCH_BCH_MESSAGETYPE_MESSAGECLASSEXTENSION:
		DecodeBCCH_BCH_MessageType_messageClassExtension(&o_decoded_field->a.messageClassExtension, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

