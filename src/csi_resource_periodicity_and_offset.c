/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_resource_periodicity_and_offset.c - codec the message of CSI-ResourcePeriodicityAndOffset
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_resource_periodicity_and_offset.h"


void EncodeCSI_ResourcePeriodicityAndOffset(
	CSI_ResourcePeriodicityAndOffset_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 4, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS4:
		PutBits(buff, i_encoded_field->a.slots4, 2, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS5:
		PutBits(buff, i_encoded_field->a.slots5, 3, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS8:
		PutBits(buff, i_encoded_field->a.slots8, 3, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS10:
		PutBits(buff, i_encoded_field->a.slots10, 4, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS16:
		PutBits(buff, i_encoded_field->a.slots16, 4, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS20:
		PutBits(buff, i_encoded_field->a.slots20, 5, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS32:
		PutBits(buff, i_encoded_field->a.slots32, 5, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS40:
		PutBits(buff, i_encoded_field->a.slots40, 6, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS64:
		PutBits(buff, i_encoded_field->a.slots64, 6, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS80:
		PutBits(buff, i_encoded_field->a.slots80, 7, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS160:
		PutBits(buff, i_encoded_field->a.slots160, 8, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS320:
		PutBits(buff, i_encoded_field->a.slots320, 9, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS640:
		PutBits(buff, i_encoded_field->a.slots640, 10, bits_iter);
		break;

	default:
		break;	}
}

void DecodeCSI_ResourcePeriodicityAndOffset(
	CSI_ResourcePeriodicityAndOffset_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 4, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS4:
		o_decoded_field->a.slots4 = Get_bits(buff, 2, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS5:
		o_decoded_field->a.slots5 = Get_bits(buff, 3, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS8:
		o_decoded_field->a.slots8 = Get_bits(buff, 3, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS10:
		o_decoded_field->a.slots10 = Get_bits(buff, 4, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS16:
		o_decoded_field->a.slots16 = Get_bits(buff, 4, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS20:
		o_decoded_field->a.slots20 = Get_bits(buff, 5, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS32:
		o_decoded_field->a.slots32 = Get_bits(buff, 5, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS40:
		o_decoded_field->a.slots40 = Get_bits(buff, 6, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS64:
		o_decoded_field->a.slots64 = Get_bits(buff, 6, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS80:
		o_decoded_field->a.slots80 = Get_bits(buff, 7, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS160:
		o_decoded_field->a.slots160 = Get_bits(buff, 8, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS320:
		o_decoded_field->a.slots320 = Get_bits(buff, 9, bits_iter);
		break;

	case CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS640:
		o_decoded_field->a.slots640 = Get_bits(buff, 10, bits_iter);
		break;

	default:
		break;

	}
}

