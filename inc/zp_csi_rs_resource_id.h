/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * zp_csi_rs_resource_id.h - this is the header file for message: ZP-CSI-RS-ResourceId
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _ZP_CSI_RS_RESOURCE_ID_H_
#define _ZP_CSI_RS_RESOURCE_ID_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             value;
}ZP_CSI_RS_ResourceId_t;
extern void EncodeZP_CSI_RS_ResourceId(
	ZP_CSI_RS_ResourceId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeZP_CSI_RS_ResourceId(
	ZP_CSI_RS_ResourceId_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
