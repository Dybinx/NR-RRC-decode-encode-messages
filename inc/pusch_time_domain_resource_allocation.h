/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_time_domain_resource_allocation.h - this is the header file for message: PUSCH-TimeDomainResourceAllocation
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUSCH_TIME_DOMAIN_RESOURCE_ALLOCATION_H_
#define _PUSCH_TIME_DOMAIN_RESOURCE_ALLOCATION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PUSCH_TIMEDOMAINRESOURCEALLOCATION_MAPPINGTYPE_TYPEA,
	PUSCH_TIMEDOMAINRESOURCEALLOCATION_MAPPINGTYPE_TYPEB,
	PUSCH_TIMEDOMAINRESOURCEALLOCATION_MAPPINGTYPE_max = 0x7FFFFFFF
}PUSCH_TimeDomainResourceAllocation_mappingType_e;


typedef struct {
	BOOLEAN                                                            k2_exist;
	uint32                                                             k2;
	PUSCH_TimeDomainResourceAllocation_mappingType_e                   mappingType;
	uint32                                                             startSymbolAndLength;
}PUSCH_TimeDomainResourceAllocation_t;


extern void EncodePUSCH_TimeDomainResourceAllocation(
	PUSCH_TimeDomainResourceAllocation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUSCH_TimeDomainResourceAllocation(
	PUSCH_TimeDomainResourceAllocation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
