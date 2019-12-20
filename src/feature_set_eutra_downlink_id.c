/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set_eutra_downlink_id.c - codec the message of FeatureSetEUTRA-DownlinkId
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "feature_set_eutra_downlink_id.h"


void EncodeFeatureSetEUTRA_DownlinkId(
	FeatureSetEUTRA_DownlinkId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->value, 9, bits_iter);
}

void DecodeFeatureSetEUTRA_DownlinkId(
	FeatureSetEUTRA_DownlinkId_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->value = Get_bits(buff, 9, bits_iter);
}

