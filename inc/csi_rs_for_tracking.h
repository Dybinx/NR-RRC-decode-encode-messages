/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_rs_for_tracking.h - this is the header file for message: CSI-RS-ForTracking
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_RS_FOR_TRACKING_H_
#define _CSI_RS_FOR_TRACKING_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             burstLength;
	uint32                                                             maxSimultaneousResourceSetsPerCC;
	uint32                                                             maxConfiguredResourceSetsPerCC;
	uint32                                                             maxConfiguredResourceSetsAllCC;
}CSI_RS_ForTracking_t;


extern void EncodeCSI_RS_ForTracking(
	CSI_RS_ForTracking_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_RS_ForTracking(
	CSI_RS_ForTracking_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
