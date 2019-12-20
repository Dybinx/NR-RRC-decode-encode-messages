/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_mrdc_capability.h - this is the header file for message: UE-MRDC-Capability
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UE_MRDC_CAPABILITY_H_
#define _UE_MRDC_CAPABILITY_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_parameters_mrdc.h"
#include "rf_parameters_mrdc.h"
#include "general_parameters_mrdc_xdd_diff.h"
#include "ue_mrdc_capability_add_xdd_mode.h"
#include "ue_mrdc_capability_add_xdd_mode.h"
#include "ue_mrdc_capability_add_frx_mode.h"
#include "ue_mrdc_capability_add_frx_mode.h"
#include "feature_set_combination.h"


typedef struct {
	uint32                                                             length;
	FeatureSetCombination_t                                            elm[maxFeatureSetCombinations];
}UE_MRDC_Capability_featureSetCombinations_t;


/* ASN: OCTET STRING */
typedef struct {
	uint32                                                             octets_num;
	uint8                                                              *value;
}UE_MRDC_Capability_lateNonCriticalExtension_t;
typedef struct {
	uint32                                                             dummy;
}UE_MRDC_Capability_nonCriticalExtension_t;


typedef struct {
	BOOLEAN                                                            measParametersMRDC_exist;
	MeasParametersMRDC_t                                               measParametersMRDC;
	RF_ParametersMRDC_t                                                rf_ParametersMRDC;
	BOOLEAN                                                            generalParametersMRDC_exist;
	GeneralParametersMRDC_XDD_Diff_t                                   generalParametersMRDC;
	BOOLEAN                                                            fdd_Add_UE_MRDC_Capabilities_exist;
	UE_MRDC_CapabilityAddXDD_Mode_t                                    fdd_Add_UE_MRDC_Capabilities;
	BOOLEAN                                                            tdd_Add_UE_MRDC_Capabilities_exist;
	UE_MRDC_CapabilityAddXDD_Mode_t                                    tdd_Add_UE_MRDC_Capabilities;
	BOOLEAN                                                            fr1_Add_UE_MRDC_Capabilities_exist;
	UE_MRDC_CapabilityAddFRX_Mode_t                                    fr1_Add_UE_MRDC_Capabilities;
	BOOLEAN                                                            fr2_Add_UE_MRDC_Capabilities_exist;
	UE_MRDC_CapabilityAddFRX_Mode_t                                    fr2_Add_UE_MRDC_Capabilities;
	BOOLEAN                                                            featureSetCombinations_exist;
	UE_MRDC_Capability_featureSetCombinations_t                        featureSetCombinations;
	BOOLEAN                                                            lateNonCriticalExtension_exist;
	UE_MRDC_Capability_lateNonCriticalExtension_t                      lateNonCriticalExtension;
	BOOLEAN                                                            nonCriticalExtension_exist;
	UE_MRDC_Capability_nonCriticalExtension_t                          nonCriticalExtension;
}UE_MRDC_Capability_t;


extern void EncodeUE_MRDC_Capability(
	UE_MRDC_Capability_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUE_MRDC_Capability(
	UE_MRDC_Capability_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
