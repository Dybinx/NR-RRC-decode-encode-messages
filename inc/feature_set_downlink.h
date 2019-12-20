/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set_downlink.h - this is the header file for message: FeatureSetDownlink
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FEATURE_SET_DOWNLINK_H_
#define _FEATURE_SET_DOWNLINK_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "feature_set_downlink_per_cc_id.h"
#include "freq_separation_class.h"
#include "csi_rs_im_reception_for_feedback.h"
#include "type_i_single_panel_codebook.h"
#include "type_i_multi_panel_codebook.h"
#include "type_ii_codebook.h"
#include "type_ii_codebook_port_selection.h"


typedef struct {
	uint32                                                             length;
	FeatureSetDownlinkPerCC_Id_t                                       elm[maxNrofServingCells];
}FeatureSetDownlink_featureSetListPerDownlinkCC_t;


typedef enum {
	FEATURESETDOWNLINK_SCALINGFACTOR_F0P4,
	FEATURESETDOWNLINK_SCALINGFACTOR_F0P75,
	FEATURESETDOWNLINK_SCALINGFACTOR_F0P8,
	FEATURESETDOWNLINK_SCALINGFACTOR_max = 0x7FFFFFFF
}FeatureSetDownlink_scalingFactor_e;


typedef enum {
	FEATURESETDOWNLINK_CROSSCARRIERSCHEDULINGDL_OTHERSCS_SUPPORTED,
	FEATURESETDOWNLINK_CROSSCARRIERSCHEDULINGDL_OTHERSCS_max = 0x7FFFFFFF
}FeatureSetDownlink_crossCarrierSchedulingDL_OtherSCS_e;


typedef enum {
	FEATURESETDOWNLINK_SCELLWITHOUTSSB_SUPPORTED,
	FEATURESETDOWNLINK_SCELLWITHOUTSSB_max = 0x7FFFFFFF
}FeatureSetDownlink_scellWithoutSSB_e;


typedef enum {
	FEATURESETDOWNLINK_CSI_RS_MEASSCELLWITHOUTSSB_SUPPORTED,
	FEATURESETDOWNLINK_CSI_RS_MEASSCELLWITHOUTSSB_max = 0x7FFFFFFF
}FeatureSetDownlink_csi_RS_MeasSCellWithoutSSB_e;


typedef enum {
	FEATURESETDOWNLINK_SRS_ASSOCCSI_RS_SUPPORTED,
	FEATURESETDOWNLINK_SRS_ASSOCCSI_RS_max = 0x7FFFFFFF
}FeatureSetDownlink_srs_AssocCSI_RS_e;


typedef enum {
	FEATURESETDOWNLINK_TYPE1_3_CSS_SUPPORTED,
	FEATURESETDOWNLINK_TYPE1_3_CSS_max = 0x7FFFFFFF
}FeatureSetDownlink_type1_3_CSS_e;


typedef enum {
	FEATURESETDOWNLINK_PDCCHMONITORINGANYOCCASIONS_WITHOUTDCI_GAP,
	FEATURESETDOWNLINK_PDCCHMONITORINGANYOCCASIONS_WITHDCI_GAP,
	FEATURESETDOWNLINK_PDCCHMONITORINGANYOCCASIONS_max = 0x7FFFFFFF
}FeatureSetDownlink_pdcchMonitoringAnyOccasions_e;


typedef enum {
	FEATURESETDOWNLINK_PDCCHMONITORINGANYOCCASIONSWITHSPANGAP_SUPPORTED,
	FEATURESETDOWNLINK_PDCCHMONITORINGANYOCCASIONSWITHSPANGAP_max = 0x7FFFFFFF
}FeatureSetDownlink_pdcchMonitoringAnyOccasionsWithSpanGap_e;


typedef enum {
	FEATURESETDOWNLINK_UE_SPECIFICUL_DL_ASSIGNMENT_SUPPORTED,
	FEATURESETDOWNLINK_UE_SPECIFICUL_DL_ASSIGNMENT_max = 0x7FFFFFFF
}FeatureSetDownlink_ue_SpecificUL_DL_Assignment_e;


typedef enum {
	FEATURESETDOWNLINK_SEARCHSPACESHARINGCA_DL_SUPPORTED,
	FEATURESETDOWNLINK_SEARCHSPACESHARINGCA_DL_max = 0x7FFFFFFF
}FeatureSetDownlink_searchSpaceSharingCA_DL_e;


typedef enum {
	FEATURESETDOWNLINK_SCS_60KHZ_S7,
	FEATURESETDOWNLINK_SCS_60KHZ_S14,
	FEATURESETDOWNLINK_SCS_60KHZ_S28,
	FEATURESETDOWNLINK_SCS_60KHZ_max = 0x7FFFFFFF
}FeatureSetDownlink_scs_60kHz_e;


typedef enum {
	FEATURESETDOWNLINK_SCH_120KHZ_S14,
	FEATURESETDOWNLINK_SCH_120KHZ_S28,
	FEATURESETDOWNLINK_SCH_120KHZ_max = 0x7FFFFFFF
}FeatureSetDownlink_sch_120kHz_e;


typedef struct {
	BOOLEAN                                                            scs_60kHz_exist;
	FeatureSetDownlink_scs_60kHz_e                                     scs_60kHz;
	BOOLEAN                                                            sch_120kHz_exist;
	FeatureSetDownlink_sch_120kHz_e                                    sch_120kHz;
}FeatureSetDownlink_timeDurationForQCL_t;


typedef enum {
	FEATURESETDOWNLINK_SCS_15KHZ_UPTO2,
	FEATURESETDOWNLINK_SCS_15KHZ_UPTO4,
	FEATURESETDOWNLINK_SCS_15KHZ_UPTO7,
	FEATURESETDOWNLINK_SCS_15KHZ_max = 0x7FFFFFFF
}FeatureSetDownlink_scs_15kHz_e;


typedef enum {
	FEATURESETDOWNLINK_SCS_30KHZ_UPTO2,
	FEATURESETDOWNLINK_SCS_30KHZ_UPTO4,
	FEATURESETDOWNLINK_SCS_30KHZ_UPTO7,
	FEATURESETDOWNLINK_SCS_30KHZ_max = 0x7FFFFFFF
}FeatureSetDownlink_scs_30kHz_e;


typedef enum {
	FEATURESETDOWNLINK_SCS_60KHZ_1_UPTO2,
	FEATURESETDOWNLINK_SCS_60KHZ_1_UPTO4,
	FEATURESETDOWNLINK_SCS_60KHZ_1_UPTO7,
	FEATURESETDOWNLINK_SCS_60KHZ_1_max = 0x7FFFFFFF
}FeatureSetDownlink_scs_60kHz_1_e;


typedef enum {
	FEATURESETDOWNLINK_SCS_120KHZ_UPTO2,
	FEATURESETDOWNLINK_SCS_120KHZ_UPTO4,
	FEATURESETDOWNLINK_SCS_120KHZ_UPTO7,
	FEATURESETDOWNLINK_SCS_120KHZ_max = 0x7FFFFFFF
}FeatureSetDownlink_scs_120kHz_e;


typedef struct {
	BOOLEAN                                                            scs_15kHz_exist;
	FeatureSetDownlink_scs_15kHz_e                                     scs_15kHz;
	BOOLEAN                                                            scs_30kHz_exist;
	FeatureSetDownlink_scs_30kHz_e                                     scs_30kHz;
	BOOLEAN                                                            scs_60kHz_exist;
	FeatureSetDownlink_scs_60kHz_1_e                                   scs_60kHz;
	BOOLEAN                                                            scs_120kHz_exist;
	FeatureSetDownlink_scs_120kHz_e                                    scs_120kHz;
}FeatureSetDownlink_pdsch_DifferentTB_PerSlot_t;


typedef struct {
	uint32                                                             length;
	TypeI_SinglePanelCodebook_t                                        elm[maxNrofCodebooks];
}FeatureSetDownlink_typeI_SinglePanelCodebookList_t;


typedef struct {
	uint32                                                             length;
	TypeI_MultiPanelCodebook_t                                         elm[maxNrofCodebooks];
}FeatureSetDownlink_typeI_MultiPanelCodebookList_t;


typedef struct {
	uint32                                                             length;
	TypeII_Codebook_t                                                  elm[maxNrofCodebooks];
}FeatureSetDownlink_typeII_CodebookList_t;


typedef struct {
	uint32                                                             length;
	TypeII_CodebookPortSelection_t                                     elm[maxNrofCodebooks];
}FeatureSetDownlink_typeII_CodebookPortSelectionList_t;


typedef struct {
	FeatureSetDownlink_featureSetListPerDownlinkCC_t                   featureSetListPerDownlinkCC;
	BOOLEAN                                                            intraBandFreqSeparationDL_exist;
	FreqSeparationClass_e                                              intraBandFreqSeparationDL;
	BOOLEAN                                                            scalingFactor_exist;
	FeatureSetDownlink_scalingFactor_e                                 scalingFactor;
	BOOLEAN                                                            crossCarrierSchedulingDL_OtherSCS_exist;
	FeatureSetDownlink_crossCarrierSchedulingDL_OtherSCS_e             crossCarrierSchedulingDL_OtherSCS;
	BOOLEAN                                                            scellWithoutSSB_exist;
	FeatureSetDownlink_scellWithoutSSB_e                               scellWithoutSSB;
	BOOLEAN                                                            csi_RS_MeasSCellWithoutSSB_exist;
	FeatureSetDownlink_csi_RS_MeasSCellWithoutSSB_e                    csi_RS_MeasSCellWithoutSSB;
	BOOLEAN                                                            srs_AssocCSI_RS_exist;
	FeatureSetDownlink_srs_AssocCSI_RS_e                               srs_AssocCSI_RS;
	BOOLEAN                                                            type1_3_CSS_exist;
	FeatureSetDownlink_type1_3_CSS_e                                   type1_3_CSS;
	BOOLEAN                                                            pdcchMonitoringAnyOccasions_exist;
	FeatureSetDownlink_pdcchMonitoringAnyOccasions_e                   pdcchMonitoringAnyOccasions;
	BOOLEAN                                                            pdcchMonitoringAnyOccasionsWithSpanGap_exist;
	FeatureSetDownlink_pdcchMonitoringAnyOccasionsWithSpanGap_e        pdcchMonitoringAnyOccasionsWithSpanGap;
	BOOLEAN                                                            ue_SpecificUL_DL_Assignment_exist;
	FeatureSetDownlink_ue_SpecificUL_DL_Assignment_e                   ue_SpecificUL_DL_Assignment;
	BOOLEAN                                                            searchSpaceSharingCA_DL_exist;
	FeatureSetDownlink_searchSpaceSharingCA_DL_e                       searchSpaceSharingCA_DL;
	BOOLEAN                                                            timeDurationForQCL_exist;
	FeatureSetDownlink_timeDurationForQCL_t                            timeDurationForQCL;
	BOOLEAN                                                            pdsch_DifferentTB_PerSlot_exist;
	FeatureSetDownlink_pdsch_DifferentTB_PerSlot_t                     pdsch_DifferentTB_PerSlot;
	BOOLEAN                                                            csi_RS_IM_ReceptionForFeedback_exist;
	CSI_RS_IM_ReceptionForFeedback_t                                   csi_RS_IM_ReceptionForFeedback;
	BOOLEAN                                                            typeI_SinglePanelCodebookList_exist;
	FeatureSetDownlink_typeI_SinglePanelCodebookList_t                 typeI_SinglePanelCodebookList;
	BOOLEAN                                                            typeI_MultiPanelCodebookList_exist;
	FeatureSetDownlink_typeI_MultiPanelCodebookList_t                  typeI_MultiPanelCodebookList;
	BOOLEAN                                                            typeII_CodebookList_exist;
	FeatureSetDownlink_typeII_CodebookList_t                           typeII_CodebookList;
	BOOLEAN                                                            typeII_CodebookPortSelectionList_exist;
	FeatureSetDownlink_typeII_CodebookPortSelectionList_t              typeII_CodebookPortSelectionList;
}FeatureSetDownlink_t;


extern void EncodeFeatureSetDownlink(
	FeatureSetDownlink_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFeatureSetDownlink(
	FeatureSetDownlink_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
