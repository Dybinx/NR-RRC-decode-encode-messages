/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_resource_set.h - this is the header file for message: PUCCH-ResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_RESOURCE_SET_H_
#define _PUCCH_RESOURCE_SET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pucch_resource_set_id.h"
#include "pucch_resource_id.h"


typedef struct {
	uint32                                                             length;
	PUCCH_ResourceId_t                                                 elm[maxNrofPUCCH_ResourcesPerSet];
}PUCCH_ResourceSet_resourceList_t;


typedef struct {
	PUCCH_ResourceSetId_t                                              pucch_ResourceSetId;
	PUCCH_ResourceSet_resourceList_t                                   resourceList;
	BOOLEAN                                                            maxPayloadMinus1_exist;
	uint32                                                             maxPayloadMinus1;
}PUCCH_ResourceSet_t;


extern void EncodePUCCH_ResourceSet(
	PUCCH_ResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_ResourceSet(
	PUCCH_ResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
