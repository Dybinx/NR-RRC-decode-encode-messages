/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pci_range_index_list.c - codec the message of PCI-RangeIndexList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pci_range_index_list.h"


void EncodePCI_RangeIndexList(
	PCI_RangeIndexList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePCI_RangeIndex(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePCI_RangeIndexList(
	PCI_RangeIndexList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePCI_RangeIndex(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

