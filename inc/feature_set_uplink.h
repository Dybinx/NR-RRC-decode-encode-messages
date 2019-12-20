/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set_uplink.h - this is the header file for message: FeatureSetUplink
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FEATURE_SET_UPLINK_H_
#define _FEATURE_SET_UPLINK_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "feature_set_uplink_per_cc_id.h"
#include "freq_separation_class.h"
#include "srs_tx_switch.h"
#include "srs_resources.h"
#include "csi_report_framework.h"


typedef struct {
	uint32                                                             length;
	FeatureSetUplinkPerCC_Id_t                                         elm[maxNrofServingCells];
}FeatureSetUplink_featureSetListPerUplinkCC_t;


typedef enum {
	FEATURESETUPLINK_SCALINGFACTOR_F0P4,
	FEATURESETUPLINK_SCALINGFACTOR_F0P75,
	FEATURESETUPLINK_SCALINGFACTOR_F0P8,
	FEATURESETUPLINK_SCALINGFACTOR_max = 0x7FFFFFFF
}FeatureSetUplink_scalingFactor_e;


typedef enum {
	FEATURESETUPLINK_CROSSCARRIERSCHEDULINGUL_OTHERSCS_SUPPORTED,
	FEATURESETUPLINK_CROSSCARRIERSCHEDULINGUL_OTHERSCS_max = 0x7FFFFFFF
}FeatureSetUplink_crossCarrierSchedulingUL_OtherSCS_e;


typedef enum {
	FEATURESETUPLINK_SEARCHSPACESHARINGCA_UL_SUPPORTED,
	FEATURESETUPLINK_SEARCHSPACESHARINGCA_UL_max = 0x7FFFFFFF
}FeatureSetUplink_searchSpaceSharingCA_UL_e;


typedef enum {
	FEATURESETUPLINK_TWOPUCCH_GROUP_SUPPORTED,
	FEATURESETUPLINK_TWOPUCCH_GROUP_max = 0x7FFFFFFF
}FeatureSetUplink_twoPUCCH_Group_e;


typedef enum {
	FEATURESETUPLINK_DYNAMICSWITCHSUL_SUPPORTED,
	FEATURESETUPLINK_DYNAMICSWITCHSUL_max = 0x7FFFFFFF
}FeatureSetUplink_dynamicSwitchSUL_e;


typedef enum {
	FEATURESETUPLINK_SCS_15KHZ_UPTO2,
	FEATURESETUPLINK_SCS_15KHZ_UPTO4,
	FEATURESETUPLINK_SCS_15KHZ_UPTO7,
	FEATURESETUPLINK_SCS_15KHZ_max = 0x7FFFFFFF
}FeatureSetUplink_scs_15kHz_e;


typedef enum {
	FEATURESETUPLINK_SCS_30KHZ_UPTO2,
	FEATURESETUPLINK_SCS_30KHZ_UPTO4,
	FEATURESETUPLINK_SCS_30KHZ_UPTO7,
	FEATURESETUPLINK_SCS_30KHZ_max = 0x7FFFFFFF
}FeatureSetUplink_scs_30kHz_e;


typedef enum {
	FEATURESETUPLINK_SCS_60KHZ_UPTO2,
	FEATURESETUPLINK_SCS_60KHZ_UPTO4,
	FEATURESETUPLINK_SCS_60KHZ_UPTO7,
	FEATURESETUPLINK_SCS_60KHZ_max = 0x7FFFFFFF
}FeatureSetUplink_scs_60kHz_e;


typedef enum {
	FEATURESETUPLINK_SCS_120KHZ_UPTO2,
	FEATURESETUPLINK_SCS_120KHZ_UPTO4,
	FEATURESETUPLINK_SCS_120KHZ_UPTO7,
	FEATURESETUPLINK_SCS_120KHZ_max = 0x7FFFFFFF
}FeatureSetUplink_scs_120kHz_e;


typedef struct {
	BOOLEAN                                                            scs_15kHz_exist;
	FeatureSetUplink_scs_15kHz_e                                       scs_15kHz;
	BOOLEAN                                                            scs_30kHz_exist;
	FeatureSetUplink_scs_30kHz_e                                       scs_30kHz;
	BOOLEAN                                                            scs_60kHz_exist;
	FeatureSetUplink_scs_60kHz_e                                       scs_60kHz;
	BOOLEAN                                                            scs_120kHz_exist;
	FeatureSetUplink_scs_120kHz_e                                      scs_120kHz;
}FeatureSetUplink_pusch_DifferentTB_PerSlot_t;


typedef struct {
	FeatureSetUplink_featureSetListPerUplinkCC_t                       featureSetListPerUplinkCC;
	BOOLEAN                                                            scalingFactor_exist;
	FeatureSetUplink_scalingFactor_e                                   scalingFactor;
	BOOLEAN                                                            crossCarrierSchedulingUL_OtherSCS_exist;
	FeatureSetUplink_crossCarrierSchedulingUL_OtherSCS_e               crossCarrierSchedulingUL_OtherSCS;
	BOOLEAN                                                            intraBandFreqSeparationUL_exist;
	FreqSeparationClass_e                                              intraBandFreqSeparationUL;
	BOOLEAN                                                            searchSpaceSharingCA_UL_exist;
	FeatureSetUplink_searchSpaceSharingCA_UL_e                         searchSpaceSharingCA_UL;
	BOOLEAN                                                            srs_TxSwitch_exist;
	SRS_TxSwitch_t                                                     srs_TxSwitch;
	BOOLEAN                                                            supportedSRS_Resources_exist;
	SRS_Resources_t                                                    supportedSRS_Resources;
	BOOLEAN                                                            twoPUCCH_Group_exist;
	FeatureSetUplink_twoPUCCH_Group_e                                  twoPUCCH_Group;
	BOOLEAN                                                            dynamicSwitchSUL_exist;
	FeatureSetUplink_dynamicSwitchSUL_e                                dynamicSwitchSUL;
	BOOLEAN                                                            pusch_DifferentTB_PerSlot_exist;
	FeatureSetUplink_pusch_DifferentTB_PerSlot_t                       pusch_DifferentTB_PerSlot;
	BOOLEAN                                                            csi_ReportFramework_exist;
	CSI_ReportFramework_t                                              csi_ReportFramework;
}FeatureSetUplink_t;


extern void EncodeFeatureSetUplink(
	FeatureSetUplink_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFeatureSetUplink(
	FeatureSetUplink_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
