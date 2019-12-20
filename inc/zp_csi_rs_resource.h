/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * zp_csi_rs_resource.h - this is the header file for message: ZP-CSI-RS-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _ZP_CSI_RS_RESOURCE_H_
#define _ZP_CSI_RS_RESOURCE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "zp_csi_rs_resource_id.h"
#include "csi_rs_resource_mapping.h"
#include "csi_resource_periodicity_and_offset.h"


typedef struct {
	ZP_CSI_RS_ResourceId_t                                             zp_CSI_RS_ResourceId;
	CSI_RS_ResourceMapping_t                                           resourceMapping;
	BOOLEAN                                                            periodicityAndOffset_exist;
	CSI_ResourcePeriodicityAndOffset_t                                 periodicityAndOffset;
	/* Extension marker start. */
}ZP_CSI_RS_Resource_t;


extern void EncodeZP_CSI_RS_Resource(
	ZP_CSI_RS_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeZP_CSI_RS_Resource(
	ZP_CSI_RS_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
