/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ssb_mtc2.h - this is the header file for message: SSB-MTC2
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SSB_MTC2_H_
#define _SSB_MTC2_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "phys_cell_id.h"


typedef struct {
	uint32                                                             length;
	PhysCellId_t                                                       elm[maxNrofPCIsPerSMTC];
}SSB_MTC2_pci_List_t;


typedef enum {
	SSB_MTC2_PERIODICITY_SF5,
	SSB_MTC2_PERIODICITY_SF10,
	SSB_MTC2_PERIODICITY_SF20,
	SSB_MTC2_PERIODICITY_SF40,
	SSB_MTC2_PERIODICITY_SF80,
	SSB_MTC2_PERIODICITY_SPARE3,
	SSB_MTC2_PERIODICITY_SPARE2,
	SSB_MTC2_PERIODICITY_SPARE1,
	SSB_MTC2_PERIODICITY_max = 0x7FFFFFFF
}SSB_MTC2_periodicity_e;


typedef struct {
	BOOLEAN                                                            pci_List_exist;
	SSB_MTC2_pci_List_t                                                pci_List;
	SSB_MTC2_periodicity_e                                             periodicity;
}SSB_MTC2_t;


extern void EncodeSSB_MTC2(
	SSB_MTC2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSSB_MTC2(
	SSB_MTC2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
