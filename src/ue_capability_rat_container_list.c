/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_capability_rat_container_list.c - codec the message of UE-CapabilityRAT-ContainerList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ue_capability_rat_container_list.h"


void EncodeUE_CapabilityRAT_ContainerList(
	UE_CapabilityRAT_ContainerList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeUE_CapabilityRAT_Container(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeUE_CapabilityRAT_ContainerList(
	UE_CapabilityRAT_ContainerList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter);
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeUE_CapabilityRAT_Container(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

