/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdcch_config_common.h - this is the header file for message: PDCCH-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PDCCH_CONFIG_COMMON_H_
#define _PDCCH_CONFIG_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "control_resource_set.h"
#include "search_space.h"
#include "search_space_id.h"
#include "search_space_id.h"
#include "search_space_id.h"
#include "search_space_id.h"


typedef struct {
	uint32                                                             length;
	SearchSpace_t                                                      elm[4];
}PDCCH_ConfigCommon_commonSearchSpace_t;


typedef struct {
	BOOLEAN                                                            controlResourceSetZero_exist;
	uint32                                                             controlResourceSetZero;
	BOOLEAN                                                            commonControlResourceSet_exist;
	ControlResourceSet_t                                               commonControlResourceSet;
	BOOLEAN                                                            searchSpaceZero_exist;
	uint32                                                             searchSpaceZero;
	BOOLEAN                                                            commonSearchSpace_exist;
	PDCCH_ConfigCommon_commonSearchSpace_t                             commonSearchSpace;
	BOOLEAN                                                            searchSpaceSIB1_exist;
	SearchSpaceId_t                                                    searchSpaceSIB1;
	BOOLEAN                                                            searchSpaceOtherSystemInformation_exist;
	SearchSpaceId_t                                                    searchSpaceOtherSystemInformation;
	BOOLEAN                                                            pagingSearchSpace_exist;
	SearchSpaceId_t                                                    pagingSearchSpace;
	BOOLEAN                                                            ra_SearchSpace_exist;
	SearchSpaceId_t                                                    ra_SearchSpace;
	/* Extension marker start. */
}PDCCH_ConfigCommon_t;


extern void EncodePDCCH_ConfigCommon(
	PDCCH_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePDCCH_ConfigCommon(
	PDCCH_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
