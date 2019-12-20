/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_csi_resource.h - this is the header file for message: PUCCH-CSI-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_CSI_RESOURCE_H_
#define _PUCCH_CSI_RESOURCE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "bwp_id.h"
#include "pucch_resource_id.h"


typedef struct {
	BWP_Id_t                                                           uplinkBandwidthPartId;
	PUCCH_ResourceId_t                                                 pucch_Resource;
}PUCCH_CSI_Resource_t;


extern void EncodePUCCH_CSI_Resource(
	PUCCH_CSI_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_CSI_Resource(
	PUCCH_CSI_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
