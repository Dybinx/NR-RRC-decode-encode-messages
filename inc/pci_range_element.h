/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pci_range_element.h - this is the header file for message: PCI-RangeElement
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PCI_RANGE_ELEMENT_H_
#define _PCI_RANGE_ELEMENT_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pci_range_index.h"
#include "pci_range.h"


typedef struct {
	PCI_RangeIndex_t                                                   pci_RangeIndex;
	PCI_Range_t                                                        pci_Range;
}PCI_RangeElement_t;


extern void EncodePCI_RangeElement(
	PCI_RangeElement_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePCI_RangeElement(
	PCI_RangeElement_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
