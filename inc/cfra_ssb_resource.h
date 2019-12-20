/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cfra_ssb_resource.h - this is the header file for message: CFRA-SSB-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CFRA_SSB_RESOURCE_H_
#define _CFRA_SSB_RESOURCE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "ssb_index.h"


typedef struct {
	SSB_Index_t                                                        ssb;
	uint32                                                             ra_PreambleIndex;
	/* Extension marker start. */
}CFRA_SSB_Resource_t;


extern void EncodeCFRA_SSB_Resource(
	CFRA_SSB_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCFRA_SSB_Resource(
	CFRA_SSB_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
