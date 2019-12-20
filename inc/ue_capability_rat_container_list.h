/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_capability_rat_container_list.h - this is the header file for message: UE-CapabilityRAT-ContainerList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UE_CAPABILITY_RAT_CONTAINER_LIST_H_
#define _UE_CAPABILITY_RAT_CONTAINER_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "ue_capability_rat_container.h"


typedef struct {
	uint32                                                             length;
	UE_CapabilityRAT_Container_t                                       elm[maxRAT_CapabilityContainers];
}UE_CapabilityRAT_ContainerList_t;


extern void EncodeUE_CapabilityRAT_ContainerList(
	UE_CapabilityRAT_ContainerList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUE_CapabilityRAT_ContainerList(
	UE_CapabilityRAT_ContainerList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
