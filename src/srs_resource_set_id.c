/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_resource_set_id.c - codec the message of SRS-ResourceSetId
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_resource_set_id.h"


void EncodeSRS_ResourceSetId(
	SRS_ResourceSetId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->value, 4, bits_iter);
}

void DecodeSRS_ResourceSetId(
	SRS_ResourceSetId_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->value = Get_bits(buff, 4, bits_iter);
}

