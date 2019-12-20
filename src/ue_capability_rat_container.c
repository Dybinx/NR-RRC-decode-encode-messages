/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_capability_rat_container.c - codec the message of UE-CapabilityRAT-Container
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ue_capability_rat_container.h"


void EncodeUE_CapabilityRAT_Container_ue_CapabilityRAT_Container(
	UE_CapabilityRAT_Container_ue_CapabilityRAT_Container_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->octets_num <= 127)
	{
		PutBits(buff, 0, 1, bits_iter);
		PutBits(buff, i_encoded_field->octets_num, 7, bits_iter);
	}
	else if(i_encoded_field->octets_num < 16 *1024)
	{
		PutBits(buff, 10, 2, bits_iter);
		PutBits(buff, i_encoded_field->octets_num, 14, bits_iter);
	}
	else
	{
		//the octets_num is too long.
	}

	PutOctets(buff, i_encoded_field->value, i_encoded_field->octets_num, bits_iter);
}

void EncodeUE_CapabilityRAT_Container(
	UE_CapabilityRAT_Container_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeRAT_Type(i_encoded_field->rat_Type, buff, bits_iter, asn_error);

	EncodeUE_CapabilityRAT_Container_ue_CapabilityRAT_Container(&i_encoded_field->ue_CapabilityRAT_Container, buff, bits_iter, asn_error);

}

void DecodeUE_CapabilityRAT_Container_ue_CapabilityRAT_Container(
	UE_CapabilityRAT_Container_ue_CapabilityRAT_Container_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint32    octet_num = 0;

	flag = Get_bits(buff, 1, bits_iter);
	if(flag == 0)
	{
		octet_num = Get_bits(buff, 7, bits_iter);
	}
	else
	{
		flag = Get_bits(buff, 1, bits_iter);
		if(flag == 0)
		{
			octet_num = Get_bits(buff, 14, bits_iter);
		}
		else
		{
			//the count is too long.
		}
	}

	o_decoded_field->octets_num = octet_num;
	o_decoded_field->value = AsnMalloc(octet_num);

	for(uint32 i = 0; i < octet_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeUE_CapabilityRAT_Container(
	UE_CapabilityRAT_Container_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeRAT_Type(&o_decoded_field->rat_Type, buff, bits_iter, asn_error);
	DecodeUE_CapabilityRAT_Container_ue_CapabilityRAT_Container(&o_decoded_field->ue_CapabilityRAT_Container, buff, bits_iter, asn_error);
}

