/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_trigger_quantity.c - codec the message of MeasTriggerQuantity
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_trigger_quantity.h"


void EncodeMeasTriggerQuantity(
	MeasTriggerQuantity_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case MEASTRIGGERQUANTITY_RSRP:
		EncodeRSRP_Range(&i_encoded_field->a.rsrp, buff, bits_iter, asn_error);
		break;

	case MEASTRIGGERQUANTITY_RSRQ:
		EncodeRSRQ_Range(&i_encoded_field->a.rsrq, buff, bits_iter, asn_error);
		break;

	case MEASTRIGGERQUANTITY_SINR:
		EncodeSINR_Range(&i_encoded_field->a.sinr, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodeMeasTriggerQuantity(
	MeasTriggerQuantity_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case MEASTRIGGERQUANTITY_RSRP:
		DecodeRSRP_Range(&o_decoded_field->a.rsrp, buff, bits_iter, asn_error);
		break;

	case MEASTRIGGERQUANTITY_RSRQ:
		DecodeRSRQ_Range(&o_decoded_field->a.rsrq, buff, bits_iter, asn_error);
		break;

	case MEASTRIGGERQUANTITY_SINR:
		DecodeSINR_Range(&o_decoded_field->a.sinr, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

