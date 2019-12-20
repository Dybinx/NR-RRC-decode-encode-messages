/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_sets_per_band.h - this is the header file for message: FeatureSetsPerBand
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FEATURE_SETS_PER_BAND_H_
#define _FEATURE_SETS_PER_BAND_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "feature_set.h"


typedef struct {
	uint32                                                             length;
	FeatureSet_t                                                       elm[maxFeatureSetsPerBand];
}FeatureSetsPerBand_t;


extern void EncodeFeatureSetsPerBand(
	FeatureSetsPerBand_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFeatureSetsPerBand(
	FeatureSetsPerBand_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
