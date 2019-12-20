/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pci_range_element.c - codec the message of PCI-RangeElement
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pci_range_element.h"


void EncodePCI_RangeElement(
	PCI_RangeElement_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodePCI_RangeIndex(&i_encoded_field->pci_RangeIndex, buff, bits_iter, asn_error);

	EncodePCI_Range(&i_encoded_field->pci_Range, buff, bits_iter, asn_error);

}

void DecodePCI_RangeElement(
	PCI_RangeElement_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodePCI_RangeIndex(&o_decoded_field->pci_RangeIndex, buff, bits_iter, asn_error);
	DecodePCI_Range(&o_decoded_field->pci_Range, buff, bits_iter, asn_error);
}

