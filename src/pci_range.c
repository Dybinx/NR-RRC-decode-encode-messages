/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pci_range.c - codec the message of PCI-Range
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pci_range.h"


void EncodePCI_Range_range(
	PCI_Range_range_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodePCI_Range(
	PCI_Range_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->range_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodePhysCellId(&i_encoded_field->start, buff, bits_iter, asn_error);

	if(i_encoded_field->range_exist == TRUE)
	{
		EncodePCI_Range_range(i_encoded_field->range, buff, bits_iter, asn_error);
	}

}

void DecodePCI_Range_range(
	PCI_Range_range_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodePCI_Range(
	PCI_Range_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->range_exist = Get_bits(buff, 1, bits_iter);
	DecodePhysCellId(&o_decoded_field->start, buff, bits_iter, asn_error);
	if(o_decoded_field->range_exist == TRUE)
	{
		DecodePCI_Range_range(&o_decoded_field->range, buff, bits_iter, asn_error);
	}

}

