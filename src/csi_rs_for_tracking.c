/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_rs_for_tracking.c - codec the message of CSI-RS-ForTracking
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_rs_for_tracking.h"


void EncodeCSI_RS_ForTracking(
	CSI_RS_ForTracking_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->burstLength - 1, 1, bits_iter);

	PutBits(buff, i_encoded_field->maxSimultaneousResourceSetsPerCC - 1, 3, bits_iter);

	PutBits(buff, i_encoded_field->maxConfiguredResourceSetsPerCC - 1, 6, bits_iter);

	PutBits(buff, i_encoded_field->maxConfiguredResourceSetsAllCC - 1, 7, bits_iter);

}

void DecodeCSI_RS_ForTracking(
	CSI_RS_ForTracking_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->burstLength = Get_bits(buff, 1, bits_iter) + 1;
	o_decoded_field->maxSimultaneousResourceSetsPerCC = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->maxConfiguredResourceSetsPerCC = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->maxConfiguredResourceSetsAllCC = Get_bits(buff, 7, bits_iter) + 1;
}

