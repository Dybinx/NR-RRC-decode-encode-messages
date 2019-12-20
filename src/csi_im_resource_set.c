/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_im_resource_set.c - codec the message of CSI-IM-ResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_im_resource_set.h"


void EncodeCSI_IM_ResourceSet_csi_IM_Resources(
	CSI_IM_ResourceSet_csi_IM_Resources_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_IM_ResourceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_IM_ResourceSet(
	CSI_IM_ResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeCSI_IM_ResourceSetId(&i_encoded_field->csi_IM_ResourceSetId, buff, bits_iter, asn_error);

	EncodeCSI_IM_ResourceSet_csi_IM_Resources(&i_encoded_field->csi_IM_Resources, buff, bits_iter, asn_error);

}

void DecodeCSI_IM_ResourceSet_csi_IM_Resources(
	CSI_IM_ResourceSet_csi_IM_Resources_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_IM_ResourceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_IM_ResourceSet(
	CSI_IM_ResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeCSI_IM_ResourceSetId(&o_decoded_field->csi_IM_ResourceSetId, buff, bits_iter, asn_error);
	DecodeCSI_IM_ResourceSet_csi_IM_Resources(&o_decoded_field->csi_IM_Resources, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

