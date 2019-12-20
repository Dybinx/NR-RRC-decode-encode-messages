/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * prach_resource_dedicated_bfr.c - codec the message of PRACH-ResourceDedicatedBFR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "prach_resource_dedicated_bfr.h"


void EncodePRACH_ResourceDedicatedBFR(
	PRACH_ResourceDedicatedBFR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PRACH_RESOURCEDEDICATEDBFR_SSB:
		EncodeBFR_SSB_Resource(&i_encoded_field->a.ssb, buff, bits_iter, asn_error);
		break;

	case PRACH_RESOURCEDEDICATEDBFR_CSI_RS:
		EncodeBFR_CSIRS_Resource(&i_encoded_field->a.csi_RS, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodePRACH_ResourceDedicatedBFR(
	PRACH_ResourceDedicatedBFR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PRACH_RESOURCEDEDICATEDBFR_SSB:
		DecodeBFR_SSB_Resource(&o_decoded_field->a.ssb, buff, bits_iter, asn_error);
		break;

	case PRACH_RESOURCEDEDICATEDBFR_CSI_RS:
		DecodeBFR_CSIRS_Resource(&o_decoded_field->a.csi_RS, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

