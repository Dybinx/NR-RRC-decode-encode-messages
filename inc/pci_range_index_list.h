/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pci_range_index_list.h - this is the header file for message: PCI-RangeIndexList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PCI_RANGE_INDEX_LIST_H_
#define _PCI_RANGE_INDEX_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pci_range_index.h"


typedef struct {
	uint32                                                             length;
	PCI_RangeIndex_t                                                   elm[maxNrofPCI_Ranges];
}PCI_RangeIndexList_t;


extern void EncodePCI_RangeIndexList(
	PCI_RangeIndexList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePCI_RangeIndexList(
	PCI_RangeIndexList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
