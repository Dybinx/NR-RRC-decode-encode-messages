/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * zp_csi_rs_resource_id.c - codec the message of ZP-CSI-RS-ResourceId
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "zp_csi_rs_resource_id.h"


void EncodeZP_CSI_RS_ResourceId(
	ZP_CSI_RS_ResourceId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->value, 5, bits_iter);
}

void DecodeZP_CSI_RS_ResourceId(
	ZP_CSI_RS_ResourceId_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->value = Get_bits(buff, 5, bits_iter);
}

