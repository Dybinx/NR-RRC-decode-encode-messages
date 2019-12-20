/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pci_range.h - this is the header file for message: PCI-Range
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PCI_RANGE_H_
#define _PCI_RANGE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "phys_cell_id.h"


typedef enum {
	PCI_RANGE_RANGE_N4,
	PCI_RANGE_RANGE_N8,
	PCI_RANGE_RANGE_N12,
	PCI_RANGE_RANGE_N16,
	PCI_RANGE_RANGE_N24,
	PCI_RANGE_RANGE_N32,
	PCI_RANGE_RANGE_N48,
	PCI_RANGE_RANGE_N64,
	PCI_RANGE_RANGE_N84,
	PCI_RANGE_RANGE_N96,
	PCI_RANGE_RANGE_N128,
	PCI_RANGE_RANGE_N168,
	PCI_RANGE_RANGE_N252,
	PCI_RANGE_RANGE_N504,
	PCI_RANGE_RANGE_N1008,
	PCI_RANGE_RANGE_SPARE1,
	PCI_RANGE_RANGE_max = 0x7FFFFFFF
}PCI_Range_range_e;


typedef struct {
	PhysCellId_t                                                       start;
	BOOLEAN                                                            range_exist;
	PCI_Range_range_e                                                  range;
}PCI_Range_t;


extern void EncodePCI_Range(
	PCI_Range_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePCI_Range(
	PCI_Range_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
