/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_nr_capability.h - this is the header file for message: UE-NR-Capability
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UE_NR_CAPABILITY_H_
#define _UE_NR_CAPABILITY_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "access_stratum_release.h"
#include "pdcp_parameters.h"
#include "rlc_parameters.h"
#include "mac_parameters.h"
#include "phy_parameters.h"
#include "rf_parameters.h"
#include "meas_parameters.h"
#include "ue_nr_capability_add_xdd_mode.h"
#include "ue_nr_capability_add_xdd_mode.h"
#include "ue_nr_capability_add_frx_mode.h"
#include "ue_nr_capability_add_frx_mode.h"
#include "feature_sets.h"
#include "feature_set_combination.h"


typedef struct {
	uint32                                                             length;
	FeatureSetCombination_t                                            elm[maxFeatureSetCombinations];
}UE_NR_Capability_featureSetCombinations_t;


/* ASN: OCTET STRING */
typedef struct {
	uint32                                                             octets_num;
	uint8                                                              *value;
}UE_NR_Capability_lateNonCriticalExtension_t;
typedef struct {
	uint32                                                             dummy;
}UE_NR_Capability_nonCriticalExtension_t;


typedef struct {
	AccessStratumRelease_e                                             accessStratumRelease;
	PDCP_Parameters_t                                                  pdcp_Parameters;
	BOOLEAN                                                            rlc_Parameters_exist;
	RLC_Parameters_t                                                   rlc_Parameters;
	BOOLEAN                                                            mac_Parameters_exist;
	MAC_Parameters_t                                                   mac_Parameters;
	Phy_Parameters_t                                                   phy_Parameters;
	RF_Parameters_t                                                    rf_Parameters;
	BOOLEAN                                                            measParameters_exist;
	MeasParameters_t                                                   measParameters;
	BOOLEAN                                                            fdd_Add_UE_NR_Capabilities_exist;
	UE_NR_CapabilityAddXDD_Mode_t                                      fdd_Add_UE_NR_Capabilities;
	BOOLEAN                                                            tdd_Add_UE_NR_Capabilities_exist;
	UE_NR_CapabilityAddXDD_Mode_t                                      tdd_Add_UE_NR_Capabilities;
	BOOLEAN                                                            fr1_Add_UE_NR_Capabilities_exist;
	UE_NR_CapabilityAddFRX_Mode_t                                      fr1_Add_UE_NR_Capabilities;
	BOOLEAN                                                            fr2_Add_UE_NR_Capabilities_exist;
	UE_NR_CapabilityAddFRX_Mode_t                                      fr2_Add_UE_NR_Capabilities;
	BOOLEAN                                                            featureSets_exist;
	FeatureSets_t                                                      featureSets;
	BOOLEAN                                                            featureSetCombinations_exist;
	UE_NR_Capability_featureSetCombinations_t                          featureSetCombinations;
	BOOLEAN                                                            lateNonCriticalExtension_exist;
	UE_NR_Capability_lateNonCriticalExtension_t                        lateNonCriticalExtension;
	BOOLEAN                                                            nonCriticalExtension_exist;
	UE_NR_Capability_nonCriticalExtension_t                            nonCriticalExtension;
}UE_NR_Capability_t;


extern void EncodeUE_NR_Capability(
	UE_NR_Capability_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUE_NR_Capability(
	UE_NR_Capability_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
