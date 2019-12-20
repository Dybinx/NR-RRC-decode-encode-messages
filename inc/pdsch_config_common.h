/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdsch_config_common.h - this is the header file for message: PDSCH-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PDSCH_CONFIG_COMMON_H_
#define _PDSCH_CONFIG_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pdsch_time_domain_resource_allocation_list.h"


typedef struct {
	BOOLEAN                                                            pdsch_TimeDomainAllocationList_exist;
	PDSCH_TimeDomainResourceAllocationList_t                           pdsch_TimeDomainAllocationList;
	/* Extension marker start. */
}PDSCH_ConfigCommon_t;


extern void EncodePDSCH_ConfigCommon(
	PDSCH_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePDSCH_ConfigCommon(
	PDSCH_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
