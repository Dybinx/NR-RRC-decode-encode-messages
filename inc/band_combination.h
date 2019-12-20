/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * band_combination.h - this is the header file for message: BandCombination
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BAND_COMBINATION_H_
#define _BAND_COMBINATION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "band_parameters.h"
#include "feature_set_combination_id.h"
#include "ca_parameters_eutra.h"
#include "ca_parameters_nr.h"
#include "mrdc_parameters.h"


typedef struct {
	uint32                                                             length;
	BandParameters_t                                                   elm[maxSimultaneousBands];
}BandCombination_bandList_t;


/* struct corresponding asn: BandCombination_supportedBandwidthCombinationSet */
/* ASN: BIT STRING SIZE(1, 32) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[4];
}BandCombination_supportedBandwidthCombinationSet_t;


typedef struct {
	BandCombination_bandList_t                                         bandList;
	FeatureSetCombinationId_t                                          featureSetCombination;
	BOOLEAN                                                            ca_ParametersEUTRA_exist;
	CA_ParametersEUTRA_t                                               ca_ParametersEUTRA;
	BOOLEAN                                                            ca_ParametersNR_exist;
	CA_ParametersNR_t                                                  ca_ParametersNR;
	BOOLEAN                                                            mrdc_Parameters_exist;
	MRDC_Parameters_t                                                  mrdc_Parameters;
	BOOLEAN                                                            supportedBandwidthCombinationSet_exist;
	BandCombination_supportedBandwidthCombinationSet_t                 supportedBandwidthCombinationSet;
}BandCombination_t;


extern void EncodeBandCombination(
	BandCombination_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBandCombination(
	BandCombination_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
