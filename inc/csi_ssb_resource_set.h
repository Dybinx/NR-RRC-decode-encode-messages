/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_ssb_resource_set.h - this is the header file for message: CSI-SSB-ResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_SSB_RESOURCE_SET_H_
#define _CSI_SSB_RESOURCE_SET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_ssb_resource_set_id.h"
#include "ssb_index.h"


typedef struct {
	uint32                                                             length;
	SSB_Index_t                                                        elm[maxNrofCSI_SSB_ResourcePerSet];
}CSI_SSB_ResourceSet_csi_SSB_ResourceList_t;


typedef struct {
	CSI_SSB_ResourceSetId_t                                            csi_SSB_ResourceSetId;
	CSI_SSB_ResourceSet_csi_SSB_ResourceList_t                         csi_SSB_ResourceList;
	/* Extension marker start. */
}CSI_SSB_ResourceSet_t;


extern void EncodeCSI_SSB_ResourceSet(
	CSI_SSB_ResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_SSB_ResourceSet(
	CSI_SSB_ResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
