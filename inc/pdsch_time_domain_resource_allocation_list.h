/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdsch_time_domain_resource_allocation_list.h - this is the header file for message: PDSCH-TimeDomainResourceAllocationList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PDSCH_TIME_DOMAIN_RESOURCE_ALLOCATION_LIST_H_
#define _PDSCH_TIME_DOMAIN_RESOURCE_ALLOCATION_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pdsch_time_domain_resource_allocation.h"


typedef struct {
	uint32                                                             length;
	PDSCH_TimeDomainResourceAllocation_t                               elm[maxNrofDL_Allocations];
}PDSCH_TimeDomainResourceAllocationList_t;


extern void EncodePDSCH_TimeDomainResourceAllocationList(
	PDSCH_TimeDomainResourceAllocationList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePDSCH_TimeDomainResourceAllocationList(
	PDSCH_TimeDomainResourceAllocationList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
