/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * dl_dcch_message_type.c - codec the message of DL-DCCH-MessageType
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "dl_dcch_message_type.h"


void EncodeDL_DCCH_MessageType_spare15(
	DL_DCCH_MessageType_spare15_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare14(
	DL_DCCH_MessageType_spare14_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare13(
	DL_DCCH_MessageType_spare13_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare12(
	DL_DCCH_MessageType_spare12_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare11(
	DL_DCCH_MessageType_spare11_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare10(
	DL_DCCH_MessageType_spare10_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare9(
	DL_DCCH_MessageType_spare9_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare8(
	DL_DCCH_MessageType_spare8_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare7(
	DL_DCCH_MessageType_spare7_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare6(
	DL_DCCH_MessageType_spare6_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare5(
	DL_DCCH_MessageType_spare5_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare4(
	DL_DCCH_MessageType_spare4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare3(
	DL_DCCH_MessageType_spare3_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare2(
	DL_DCCH_MessageType_spare2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_spare1(
	DL_DCCH_MessageType_spare1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType_c1(
	DL_DCCH_MessageType_c1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 4, bits_iter);
	switch (i_encoded_field->type)
	{
	case DL_DCCH_MESSAGETYPE_C1_RRCRECONFIGURATION:
		EncodeRRCReconfiguration(&i_encoded_field->a.rrcReconfiguration, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE15:
		EncodeDL_DCCH_MessageType_spare15(&i_encoded_field->a.spare15, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE14:
		EncodeDL_DCCH_MessageType_spare14(&i_encoded_field->a.spare14, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE13:
		EncodeDL_DCCH_MessageType_spare13(&i_encoded_field->a.spare13, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE12:
		EncodeDL_DCCH_MessageType_spare12(&i_encoded_field->a.spare12, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE11:
		EncodeDL_DCCH_MessageType_spare11(&i_encoded_field->a.spare11, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE10:
		EncodeDL_DCCH_MessageType_spare10(&i_encoded_field->a.spare10, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE9:
		EncodeDL_DCCH_MessageType_spare9(&i_encoded_field->a.spare9, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE8:
		EncodeDL_DCCH_MessageType_spare8(&i_encoded_field->a.spare8, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE7:
		EncodeDL_DCCH_MessageType_spare7(&i_encoded_field->a.spare7, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE6:
		EncodeDL_DCCH_MessageType_spare6(&i_encoded_field->a.spare6, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE5:
		EncodeDL_DCCH_MessageType_spare5(&i_encoded_field->a.spare5, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE4:
		EncodeDL_DCCH_MessageType_spare4(&i_encoded_field->a.spare4, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE3:
		EncodeDL_DCCH_MessageType_spare3(&i_encoded_field->a.spare3, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE2:
		EncodeDL_DCCH_MessageType_spare2(&i_encoded_field->a.spare2, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE1:
		EncodeDL_DCCH_MessageType_spare1(&i_encoded_field->a.spare1, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeDL_DCCH_MessageType_messageClassExtension(
	DL_DCCH_MessageType_messageClassExtension_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeDL_DCCH_MessageType(
	DL_DCCH_MessageType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case DL_DCCH_MESSAGETYPE_C1:
		EncodeDL_DCCH_MessageType_c1(&i_encoded_field->a.c1, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_MESSAGECLASSEXTENSION:
		EncodeDL_DCCH_MessageType_messageClassExtension(&i_encoded_field->a.messageClassExtension, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodeDL_DCCH_MessageType_spare15(
	DL_DCCH_MessageType_spare15_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare14(
	DL_DCCH_MessageType_spare14_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare13(
	DL_DCCH_MessageType_spare13_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare12(
	DL_DCCH_MessageType_spare12_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare11(
	DL_DCCH_MessageType_spare11_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare10(
	DL_DCCH_MessageType_spare10_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare9(
	DL_DCCH_MessageType_spare9_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare8(
	DL_DCCH_MessageType_spare8_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare7(
	DL_DCCH_MessageType_spare7_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare6(
	DL_DCCH_MessageType_spare6_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare5(
	DL_DCCH_MessageType_spare5_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare4(
	DL_DCCH_MessageType_spare4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare3(
	DL_DCCH_MessageType_spare3_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare2(
	DL_DCCH_MessageType_spare2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_spare1(
	DL_DCCH_MessageType_spare1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType_c1(
	DL_DCCH_MessageType_c1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 4, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case DL_DCCH_MESSAGETYPE_C1_RRCRECONFIGURATION:
		DecodeRRCReconfiguration(&o_decoded_field->a.rrcReconfiguration, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE15:
		DecodeDL_DCCH_MessageType_spare15(&o_decoded_field->a.spare15, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE14:
		DecodeDL_DCCH_MessageType_spare14(&o_decoded_field->a.spare14, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE13:
		DecodeDL_DCCH_MessageType_spare13(&o_decoded_field->a.spare13, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE12:
		DecodeDL_DCCH_MessageType_spare12(&o_decoded_field->a.spare12, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE11:
		DecodeDL_DCCH_MessageType_spare11(&o_decoded_field->a.spare11, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE10:
		DecodeDL_DCCH_MessageType_spare10(&o_decoded_field->a.spare10, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE9:
		DecodeDL_DCCH_MessageType_spare9(&o_decoded_field->a.spare9, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE8:
		DecodeDL_DCCH_MessageType_spare8(&o_decoded_field->a.spare8, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE7:
		DecodeDL_DCCH_MessageType_spare7(&o_decoded_field->a.spare7, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE6:
		DecodeDL_DCCH_MessageType_spare6(&o_decoded_field->a.spare6, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE5:
		DecodeDL_DCCH_MessageType_spare5(&o_decoded_field->a.spare5, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE4:
		DecodeDL_DCCH_MessageType_spare4(&o_decoded_field->a.spare4, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE3:
		DecodeDL_DCCH_MessageType_spare3(&o_decoded_field->a.spare3, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE2:
		DecodeDL_DCCH_MessageType_spare2(&o_decoded_field->a.spare2, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_C1_SPARE1:
		DecodeDL_DCCH_MessageType_spare1(&o_decoded_field->a.spare1, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeDL_DCCH_MessageType_messageClassExtension(
	DL_DCCH_MessageType_messageClassExtension_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeDL_DCCH_MessageType(
	DL_DCCH_MessageType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case DL_DCCH_MESSAGETYPE_C1:
		DecodeDL_DCCH_MessageType_c1(&o_decoded_field->a.c1, buff, bits_iter, asn_error);
		break;

	case DL_DCCH_MESSAGETYPE_MESSAGECLASSEXTENSION:
		DecodeDL_DCCH_MessageType_messageClassExtension(&o_decoded_field->a.messageClassExtension, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

