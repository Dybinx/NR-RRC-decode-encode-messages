/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_trigger_quantity_offset.c - codec the message of MeasTriggerQuantityOffset
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_trigger_quantity_offset.h"


void EncodeMeasTriggerQuantityOffset(
	MeasTriggerQuantityOffset_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case MEASTRIGGERQUANTITYOFFSET_RSRP:
		PutBits(buff, i_encoded_field->a.rsrp + 30, 6, bits_iter);
		break;

	case MEASTRIGGERQUANTITYOFFSET_RSRQ:
		PutBits(buff, i_encoded_field->a.rsrq + 30, 6, bits_iter);
		break;

	case MEASTRIGGERQUANTITYOFFSET_SINR:
		PutBits(buff, i_encoded_field->a.sinr + 30, 6, bits_iter);
		break;

	default:
		break;	}
}

void DecodeMeasTriggerQuantityOffset(
	MeasTriggerQuantityOffset_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case MEASTRIGGERQUANTITYOFFSET_RSRP:
		o_decoded_field->a.rsrp = Get_bits(buff, 6, bits_iter) - 30;
		break;

	case MEASTRIGGERQUANTITYOFFSET_RSRQ:
		o_decoded_field->a.rsrq = Get_bits(buff, 6, bits_iter) - 30;
		break;

	case MEASTRIGGERQUANTITYOFFSET_SINR:
		o_decoded_field->a.sinr = Get_bits(buff, 6, bits_iter) - 30;
		break;

	default:
		break;

	}
}

