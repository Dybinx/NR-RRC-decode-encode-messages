/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bfr_csirs_resource.h - this is the header file for message: BFR-CSIRS-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BFR_CSIRS_RESOURCE_H_
#define _BFR_CSIRS_RESOURCE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "nzp_csi_rs_resource_id.h"


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[maxRA_OccasionsPerCSIRS];
}BFR_CSIRS_Resource_ra_OccasionList_t;


typedef struct {
	NZP_CSI_RS_ResourceId_t                                            csi_RS;
	BOOLEAN                                                            ra_OccasionList_exist;
	BFR_CSIRS_Resource_ra_OccasionList_t                               ra_OccasionList;
	BOOLEAN                                                            ra_PreambleIndex_exist;
	uint32                                                             ra_PreambleIndex;
	/* Extension marker start. */
}BFR_CSIRS_Resource_t;


extern void EncodeBFR_CSIRS_Resource(
	BFR_CSIRS_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBFR_CSIRS_Resource(
	BFR_CSIRS_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
