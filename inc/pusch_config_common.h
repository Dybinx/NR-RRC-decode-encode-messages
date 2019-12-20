/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_config_common.h - this is the header file for message: PUSCH-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUSCH_CONFIG_COMMON_H_
#define _PUSCH_CONFIG_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pusch_time_domain_resource_allocation_list.h"


typedef enum {
	PUSCH_CONFIGCOMMON_GROUPHOPPINGENABLEDTRANSFORMPRECODING_ENABLED,
	PUSCH_CONFIGCOMMON_GROUPHOPPINGENABLEDTRANSFORMPRECODING_max = 0x7FFFFFFF
}PUSCH_ConfigCommon_groupHoppingEnabledTransformPrecoding_e;


typedef struct {
	BOOLEAN                                                            groupHoppingEnabledTransformPrecoding_exist;
	PUSCH_ConfigCommon_groupHoppingEnabledTransformPrecoding_e         groupHoppingEnabledTransformPrecoding;
	BOOLEAN                                                            pusch_TimeDomainAllocationList_exist;
	PUSCH_TimeDomainResourceAllocationList_t                           pusch_TimeDomainAllocationList;
	BOOLEAN                                                            msg3_DeltaPreamble_exist;
	int32                                                              msg3_DeltaPreamble;
	BOOLEAN                                                            p0_NominalWithGrant_exist;
	int32                                                              p0_NominalWithGrant;
	/* Extension marker start. */
}PUSCH_ConfigCommon_t;


extern void EncodePUSCH_ConfigCommon(
	PUSCH_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUSCH_ConfigCommon(
	PUSCH_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
