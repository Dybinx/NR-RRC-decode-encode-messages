/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_sets.h - this is the header file for message: FeatureSets
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FEATURE_SETS_H_
#define _FEATURE_SETS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "feature_set_downlink.h"
#include "feature_set_downlink_per_cc.h"
#include "feature_set_uplink.h"
#include "feature_set_uplink_per_cc.h"


typedef struct {
	uint32                                                             length;
	FeatureSetDownlink_t                                               elm[maxDownlinkFeatureSets];
}FeatureSets_featureSetsDownlink_t;


typedef struct {
	uint32                                                             length;
	FeatureSetDownlinkPerCC_t                                          elm[maxPerCC_FeatureSets];
}FeatureSets_featureSetsDownlinkPerCC_t;


typedef struct {
	uint32                                                             length;
	FeatureSetUplink_t                                                 elm[maxUplinkFeatureSets];
}FeatureSets_featureSetsUplink_t;


typedef struct {
	uint32                                                             length;
	FeatureSetUplinkPerCC_t                                            elm[maxPerCC_FeatureSets];
}FeatureSets_featureSetsUplinkPerCC_t;


typedef struct {
	BOOLEAN                                                            featureSetsDownlink_exist;
	FeatureSets_featureSetsDownlink_t                                  featureSetsDownlink;
	BOOLEAN                                                            featureSetsDownlinkPerCC_exist;
	FeatureSets_featureSetsDownlinkPerCC_t                             featureSetsDownlinkPerCC;
	BOOLEAN                                                            featureSetsUplink_exist;
	FeatureSets_featureSetsUplink_t                                    featureSetsUplink;
	BOOLEAN                                                            featureSetsUplinkPerCC_exist;
	FeatureSets_featureSetsUplinkPerCC_t                               featureSetsUplinkPerCC;
	/* Extension marker start. */
}FeatureSets_t;


extern void EncodeFeatureSets(
	FeatureSets_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFeatureSets(
	FeatureSets_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
