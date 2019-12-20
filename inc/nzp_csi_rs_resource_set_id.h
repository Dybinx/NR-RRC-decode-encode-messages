/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * nzp_csi_rs_resource_set_id.h - this is the header file for message: NZP-CSI-RS-ResourceSetId
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _NZP_CSI_RS_RESOURCE_SET_ID_H_
#define _NZP_CSI_RS_RESOURCE_SET_ID_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             value;
}NZP_CSI_RS_ResourceSetId_t;
extern void EncodeNZP_CSI_RS_ResourceSetId(
	NZP_CSI_RS_ResourceSetId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeNZP_CSI_RS_ResourceSetId(
	NZP_CSI_RS_ResourceSetId_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
