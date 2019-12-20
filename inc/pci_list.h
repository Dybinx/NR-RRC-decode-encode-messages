/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pci_list.h - this is the header file for message: PCI-List
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PCI_LIST_H_
#define _PCI_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "phys_cell_id.h"


typedef struct {
	uint32                                                             length;
	PhysCellId_t                                                       elm[maxNrofCellMeas];
}PCI_List_t;


extern void EncodePCI_List(
	PCI_List_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePCI_List(
	PCI_List_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
