/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cfra_csirs_resource.h - this is the header file for message: CFRA-CSIRS-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CFRA_CSIRS_RESOURCE_H_
#define _CFRA_CSIRS_RESOURCE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_rs_index.h"


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[maxRA_OccasionsPerCSIRS];
}CFRA_CSIRS_Resource_ra_OccasionList_t;


typedef struct {
	CSI_RS_Index_t                                                     csi_RS;
	CFRA_CSIRS_Resource_ra_OccasionList_t                              ra_OccasionList;
	uint32                                                             ra_PreambleIndex;
	/* Extension marker start. */
}CFRA_CSIRS_Resource_t;


extern void EncodeCFRA_CSIRS_Resource(
	CFRA_CSIRS_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCFRA_CSIRS_Resource(
	CFRA_CSIRS_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
