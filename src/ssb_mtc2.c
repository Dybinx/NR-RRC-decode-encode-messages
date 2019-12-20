/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ssb_mtc2.c - codec the message of SSB-MTC2
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ssb_mtc2.h"


void EncodeSSB_MTC2_pci_List(
	SSB_MTC2_pci_List_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePhysCellId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSSB_MTC2_periodicity(
	SSB_MTC2_periodicity_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSSB_MTC2(
	SSB_MTC2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->pci_List_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pci_List_exist == TRUE)
	{
		EncodeSSB_MTC2_pci_List(&i_encoded_field->pci_List, buff, bits_iter, asn_error);
	}

	EncodeSSB_MTC2_periodicity(i_encoded_field->periodicity, buff, bits_iter, asn_error);

}

void DecodeSSB_MTC2_pci_List(
	SSB_MTC2_pci_List_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePhysCellId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSSB_MTC2_periodicity(
	SSB_MTC2_periodicity_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSSB_MTC2(
	SSB_MTC2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->pci_List_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->pci_List_exist == TRUE)
	{
		DecodeSSB_MTC2_pci_List(&o_decoded_field->pci_List, buff, bits_iter, asn_error);
	}

	DecodeSSB_MTC2_periodicity(&o_decoded_field->periodicity, buff, bits_iter, asn_error);
}

