/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * nzp_csi_rs_resource_set.h - this is the header file for message: NZP-CSI-RS-ResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _NZP_CSI_RS_RESOURCE_SET_H_
#define _NZP_CSI_RS_RESOURCE_SET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "nzp_csi_rs_resource_set_id.h"
#include "nzp_csi_rs_resource_id.h"


typedef struct {
	uint32                                                             length;
	NZP_CSI_RS_ResourceId_t                                            elm[maxNrofNZP_CSI_RS_ResourcesPerSet];
}NZP_CSI_RS_ResourceSet_nzp_CSI_RS_Resources_t;


typedef enum {
	NZP_CSI_RS_RESOURCESET_REPETITION_ON,
	NZP_CSI_RS_RESOURCESET_REPETITION_OFF,
	NZP_CSI_RS_RESOURCESET_REPETITION_max = 0x7FFFFFFF
}NZP_CSI_RS_ResourceSet_repetition_e;


typedef enum {
	NZP_CSI_RS_RESOURCESET_TRS_INFO_TRUE,
	NZP_CSI_RS_RESOURCESET_TRS_INFO_max = 0x7FFFFFFF
}NZP_CSI_RS_ResourceSet_trs_Info_e;


typedef struct {
	NZP_CSI_RS_ResourceSetId_t                                         nzp_CSI_ResourceSetId;
	NZP_CSI_RS_ResourceSet_nzp_CSI_RS_Resources_t                      nzp_CSI_RS_Resources;
	BOOLEAN                                                            repetition_exist;
	NZP_CSI_RS_ResourceSet_repetition_e                                repetition;
	BOOLEAN                                                            aperiodicTriggeringOffset_exist;
	uint32                                                             aperiodicTriggeringOffset;
	BOOLEAN                                                            trs_Info_exist;
	NZP_CSI_RS_ResourceSet_trs_Info_e                                  trs_Info;
	/* Extension marker start. */
}NZP_CSI_RS_ResourceSet_t;


extern void EncodeNZP_CSI_RS_ResourceSet(
	NZP_CSI_RS_ResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeNZP_CSI_RS_ResourceSet(
	NZP_CSI_RS_ResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
