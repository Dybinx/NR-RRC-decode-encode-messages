/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set.h - this is the header file for message: FeatureSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FEATURE_SET_H_
#define _FEATURE_SET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "feature_set_eutra_downlink_id.h"
#include "feature_set_eutra_uplink_id.h"
#include "feature_set_downlink_id.h"
#include "feature_set_uplink_id.h"


typedef struct {
	FeatureSetEUTRA_DownlinkId_t                                       downlinkSetEUTRA;
	FeatureSetEUTRA_UplinkId_t                                         uplinkSetEUTRA;
}FeatureSet_eutra_t;


typedef struct {
	FeatureSetDownlinkId_t                                             downlinkSetNR;
	FeatureSetUplinkId_t                                               uplinkSetNR;
}FeatureSet_nr_t;


typedef enum {
	FEATURESET_EUTRA,
	FEATURESET_NR,
	FEATURESET_max = 0x7FFFFFFF
}FeatureSet_e;


/* union corresponding asn: FeatureSet */
typedef union {
	FeatureSet_eutra_t                                                 eutra;
	FeatureSet_nr_t                                                    nr;
}FeatureSet_u;


/* struct corresponding asn: FeatureSet */
typedef struct {
	FeatureSet_e                                                       type;
	FeatureSet_u                                                       a;
}FeatureSet_t;


extern void EncodeFeatureSet(
	FeatureSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFeatureSet(
	FeatureSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
