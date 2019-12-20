/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdsch_time_domain_resource_allocation.h - this is the header file for message: PDSCH-TimeDomainResourceAllocation
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PDSCH_TIME_DOMAIN_RESOURCE_ALLOCATION_H_
#define _PDSCH_TIME_DOMAIN_RESOURCE_ALLOCATION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PDSCH_TIMEDOMAINRESOURCEALLOCATION_MAPPINGTYPE_TYPEA,
	PDSCH_TIMEDOMAINRESOURCEALLOCATION_MAPPINGTYPE_TYPEB,
	PDSCH_TIMEDOMAINRESOURCEALLOCATION_MAPPINGTYPE_max = 0x7FFFFFFF
}PDSCH_TimeDomainResourceAllocation_mappingType_e;


typedef struct {
	BOOLEAN                                                            k0_exist;
	uint32                                                             k0;
	PDSCH_TimeDomainResourceAllocation_mappingType_e                   mappingType;
	uint32                                                             startSymbolAndLength;
}PDSCH_TimeDomainResourceAllocation_t;


extern void EncodePDSCH_TimeDomainResourceAllocation(
	PDSCH_TimeDomainResourceAllocation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePDSCH_TimeDomainResourceAllocation(
	PDSCH_TimeDomainResourceAllocation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
