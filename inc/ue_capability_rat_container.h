/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_capability_rat_container.h - this is the header file for message: UE-CapabilityRAT-Container
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UE_CAPABILITY_RAT_CONTAINER_H_
#define _UE_CAPABILITY_RAT_CONTAINER_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rat_type.h"


/* ASN: OCTET STRING */
typedef struct {
	uint32                                                             octets_num;
	uint8                                                              *value;
}UE_CapabilityRAT_Container_ue_CapabilityRAT_Container_t;
typedef struct {
	RAT_Type_e                                                         rat_Type;
	UE_CapabilityRAT_Container_ue_CapabilityRAT_Container_t            ue_CapabilityRAT_Container;
}UE_CapabilityRAT_Container_t;


extern void EncodeUE_CapabilityRAT_Container(
	UE_CapabilityRAT_Container_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUE_CapabilityRAT_Container(
	UE_CapabilityRAT_Container_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
