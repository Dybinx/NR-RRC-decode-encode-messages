/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_csi_resource.c - codec the message of PUCCH-CSI-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_csi_resource.h"


void EncodePUCCH_CSI_Resource(
	PUCCH_CSI_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeBWP_Id(&i_encoded_field->uplinkBandwidthPartId, buff, bits_iter, asn_error);

	EncodePUCCH_ResourceId(&i_encoded_field->pucch_Resource, buff, bits_iter, asn_error);

}

void DecodePUCCH_CSI_Resource(
	PUCCH_CSI_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeBWP_Id(&o_decoded_field->uplinkBandwidthPartId, buff, bits_iter, asn_error);
	DecodePUCCH_ResourceId(&o_decoded_field->pucch_Resource, buff, bits_iter, asn_error);
}

