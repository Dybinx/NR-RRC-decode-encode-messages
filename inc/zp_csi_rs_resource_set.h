/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * zp_csi_rs_resource_set.h - this is the header file for message: ZP-CSI-RS-ResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _ZP_CSI_RS_RESOURCE_SET_H_
#define _ZP_CSI_RS_RESOURCE_SET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "zp_csi_rs_resource_set_id.h"
#include "zp_csi_rs_resource_id.h"


typedef struct {
	uint32                                                             length;
	ZP_CSI_RS_ResourceId_t                                             elm[maxNrofZP_CSI_RS_ResourcesPerSet];
}ZP_CSI_RS_ResourceSet_zp_CSI_RS_ResourceIdList_t;


typedef struct {
	ZP_CSI_RS_ResourceSetId_t                                          zp_CSI_RS_ResourceSetId;
	ZP_CSI_RS_ResourceSet_zp_CSI_RS_ResourceIdList_t                   zp_CSI_RS_ResourceIdList;
	/* Extension marker start. */
}ZP_CSI_RS_ResourceSet_t;


extern void EncodeZP_CSI_RS_ResourceSet(
	ZP_CSI_RS_ResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeZP_CSI_RS_ResourceSet(
	ZP_CSI_RS_ResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
