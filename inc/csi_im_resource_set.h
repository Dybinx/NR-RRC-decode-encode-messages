/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_im_resource_set.h - this is the header file for message: CSI-IM-ResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_IM_RESOURCE_SET_H_
#define _CSI_IM_RESOURCE_SET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_im_resource_set_id.h"
#include "csi_im_resource_id.h"


typedef struct {
	uint32                                                             length;
	CSI_IM_ResourceId_t                                                elm[maxNrofCSI_IM_ResourcesPerSet];
}CSI_IM_ResourceSet_csi_IM_Resources_t;


typedef struct {
	CSI_IM_ResourceSetId_t                                             csi_IM_ResourceSetId;
	CSI_IM_ResourceSet_csi_IM_Resources_t                              csi_IM_Resources;
	/* Extension marker start. */
}CSI_IM_ResourceSet_t;


extern void EncodeCSI_IM_ResourceSet(
	CSI_IM_ResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_IM_ResourceSet(
	CSI_IM_ResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
