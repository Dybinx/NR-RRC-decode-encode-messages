/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mimo_parameters_per_band.h - this is the header file for message: MIMO-ParametersPerBand
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MIMO_PARAMETERS_PER_BAND_H_
#define _MIMO_PARAMETERS_PER_BAND_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "beam_management_ssb_csi_rs.h"
#include "srs_resources.h"
#include "srs_tx_switch.h"
#include "ptrs_density_recommendation_dl.h"
#include "ptrs_density_recommendation_dl.h"
#include "ptrs_density_recommendation_dl.h"
#include "ptrs_density_recommendation_dl.h"
#include "ptrs_density_recommendation_ul.h"
#include "ptrs_density_recommendation_ul.h"
#include "ptrs_density_recommendation_ul.h"
#include "ptrs_density_recommendation_ul.h"
#include "csi_rs_for_tracking.h"


typedef enum {
	MIMO_PARAMETERSPERBAND_MAXNUMBERCONFIGUREDTCISTATESPERCC_N4,
	MIMO_PARAMETERSPERBAND_MAXNUMBERCONFIGUREDTCISTATESPERCC_N8,
	MIMO_PARAMETERSPERBAND_MAXNUMBERCONFIGUREDTCISTATESPERCC_N16,
	MIMO_PARAMETERSPERBAND_MAXNUMBERCONFIGUREDTCISTATESPERCC_N32,
	MIMO_PARAMETERSPERBAND_MAXNUMBERCONFIGUREDTCISTATESPERCC_N64,
	MIMO_PARAMETERSPERBAND_MAXNUMBERCONFIGUREDTCISTATESPERCC_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_maxNumberConfiguredTCIstatesPerCC_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_MAXNUMBERACTIVETCI_PERBWP_N1,
	MIMO_PARAMETERSPERBAND_MAXNUMBERACTIVETCI_PERBWP_N2,
	MIMO_PARAMETERSPERBAND_MAXNUMBERACTIVETCI_PERBWP_N4,
	MIMO_PARAMETERSPERBAND_MAXNUMBERACTIVETCI_PERBWP_N8,
	MIMO_PARAMETERSPERBAND_MAXNUMBERACTIVETCI_PERBWP_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_maxNumberActiveTCI_PerBWP_e;


typedef struct {
	BOOLEAN                                                            maxNumberConfiguredTCIstatesPerCC_exist;
	MIMO_ParametersPerBand_maxNumberConfiguredTCIstatesPerCC_e         maxNumberConfiguredTCIstatesPerCC;
	BOOLEAN                                                            maxNumberActiveTCI_PerBWP_exist;
	MIMO_ParametersPerBand_maxNumberActiveTCI_PerBWP_e                 maxNumberActiveTCI_PerBWP;
}MIMO_ParametersPerBand_tci_StatePDSCH_t;


typedef enum {
	MIMO_PARAMETERSPERBAND_ADDITIONALACTIVETCI_STATEPDCCH_SUPPORTED,
	MIMO_PARAMETERSPERBAND_ADDITIONALACTIVETCI_STATEPDCCH_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_additionalActiveTCI_StatePDCCH_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_PUSCH_TRANSCOHERENCE_NONCOHERENT,
	MIMO_PARAMETERSPERBAND_PUSCH_TRANSCOHERENCE_PARTIALNONCOHERENT,
	MIMO_PARAMETERSPERBAND_PUSCH_TRANSCOHERENCE_FULLCOHERENT,
	MIMO_PARAMETERSPERBAND_PUSCH_TRANSCOHERENCE_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_pusch_TransCoherence_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_BEAMCORRESPONDENCE_SUPPORTED,
	MIMO_PARAMETERSPERBAND_BEAMCORRESPONDENCE_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_beamCorrespondence_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_PERIODICBEAMREPORT_SUPPORTED,
	MIMO_PARAMETERSPERBAND_PERIODICBEAMREPORT_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_periodicBeamReport_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_APERIODICBEAMREPORT_SUPPORTED,
	MIMO_PARAMETERSPERBAND_APERIODICBEAMREPORT_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_aperiodicBeamReport_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_SP_BEAMREPORTPUCCH_SUPPORTED,
	MIMO_PARAMETERSPERBAND_SP_BEAMREPORTPUCCH_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_sp_BeamReportPUCCH_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_SP_BEAMREPORTPUSCH_SUPPORTED,
	MIMO_PARAMETERSPERBAND_SP_BEAMREPORTPUSCH_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_sp_BeamReportPUSCH_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_SCS_15KHZ_N4,
	MIMO_PARAMETERSPERBAND_SCS_15KHZ_N7,
	MIMO_PARAMETERSPERBAND_SCS_15KHZ_N14,
	MIMO_PARAMETERSPERBAND_SCS_15KHZ_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_scs_15kHz_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_SCS_30KHZ_N4,
	MIMO_PARAMETERSPERBAND_SCS_30KHZ_N7,
	MIMO_PARAMETERSPERBAND_SCS_30KHZ_N14,
	MIMO_PARAMETERSPERBAND_SCS_30KHZ_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_scs_30kHz_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_SCS_60KHZ_N4,
	MIMO_PARAMETERSPERBAND_SCS_60KHZ_N7,
	MIMO_PARAMETERSPERBAND_SCS_60KHZ_N14,
	MIMO_PARAMETERSPERBAND_SCS_60KHZ_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_scs_60kHz_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_SCS_120KHZ_N4,
	MIMO_PARAMETERSPERBAND_SCS_120KHZ_N7,
	MIMO_PARAMETERSPERBAND_SCS_120KHZ_N14,
	MIMO_PARAMETERSPERBAND_SCS_120KHZ_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_scs_120kHz_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_SCS_240KHZ_N4,
	MIMO_PARAMETERSPERBAND_SCS_240KHZ_N7,
	MIMO_PARAMETERSPERBAND_SCS_240KHZ_N14,
	MIMO_PARAMETERSPERBAND_SCS_240KHZ_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_scs_240kHz_e;


typedef struct {
	BOOLEAN                                                            scs_15kHz_exist;
	MIMO_ParametersPerBand_scs_15kHz_e                                 scs_15kHz;
	BOOLEAN                                                            scs_30kHz_exist;
	MIMO_ParametersPerBand_scs_30kHz_e                                 scs_30kHz;
	BOOLEAN                                                            scs_60kHz_exist;
	MIMO_ParametersPerBand_scs_60kHz_e                                 scs_60kHz;
	BOOLEAN                                                            scs_120kHz_exist;
	MIMO_ParametersPerBand_scs_120kHz_e                                scs_120kHz;
	BOOLEAN                                                            scs_240kHz_exist;
	MIMO_ParametersPerBand_scs_240kHz_e                                scs_240kHz;
}MIMO_ParametersPerBand_maxNumberRxTxBeamSwitchDL_t;


typedef enum {
	MIMO_PARAMETERSPERBAND_MAXNUMBERNONGROUPBEAMREPORTING_N1,
	MIMO_PARAMETERSPERBAND_MAXNUMBERNONGROUPBEAMREPORTING_N2,
	MIMO_PARAMETERSPERBAND_MAXNUMBERNONGROUPBEAMREPORTING_N4,
	MIMO_PARAMETERSPERBAND_MAXNUMBERNONGROUPBEAMREPORTING_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_maxNumberNonGroupBeamReporting_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_GROUPBEAMREPORTING_SUPPORTED,
	MIMO_PARAMETERSPERBAND_GROUPBEAMREPORTING_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_groupBeamReporting_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_MAXNUMBERSRS_RESOURCEPERSET_N2,
	MIMO_PARAMETERSPERBAND_MAXNUMBERSRS_RESOURCEPERSET_N4,
	MIMO_PARAMETERSPERBAND_MAXNUMBERSRS_RESOURCEPERSET_N8,
	MIMO_PARAMETERSPERBAND_MAXNUMBERSRS_RESOURCEPERSET_N16,
	MIMO_PARAMETERSPERBAND_MAXNUMBERSRS_RESOURCEPERSET_N32,
	MIMO_PARAMETERSPERBAND_MAXNUMBERSRS_RESOURCEPERSET_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_maxNumberSRS_ResourcePerSet_e;


typedef struct {
	MIMO_ParametersPerBand_maxNumberSRS_ResourcePerSet_e               maxNumberSRS_ResourcePerSet;
	uint32                                                             maxNumberSRS_ResourceSet;
}MIMO_ParametersPerBand_uplinkBeamManagement_t;


typedef enum {
	MIMO_PARAMETERSPERBAND_TWOPORTSPTRS_DL_SUPPORTED,
	MIMO_PARAMETERSPERBAND_TWOPORTSPTRS_DL_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_twoPortsPTRS_DL_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_TWOPORTSPTRS_UL_SUPPORTED,
	MIMO_PARAMETERSPERBAND_TWOPORTSPTRS_UL_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_twoPortsPTRS_UL_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_SCS_15KHZ_1_SYM2,
	MIMO_PARAMETERSPERBAND_SCS_15KHZ_1_SYM4,
	MIMO_PARAMETERSPERBAND_SCS_15KHZ_1_SYM8,
	MIMO_PARAMETERSPERBAND_SCS_15KHZ_1_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_scs_15kHz_1_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_SCS_30KHZ_1_SYM4,
	MIMO_PARAMETERSPERBAND_SCS_30KHZ_1_SYM8,
	MIMO_PARAMETERSPERBAND_SCS_30KHZ_1_SYM14,
	MIMO_PARAMETERSPERBAND_SCS_30KHZ_1_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_scs_30kHz_1_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_SCS_60KHZ_1_SYM8,
	MIMO_PARAMETERSPERBAND_SCS_60KHZ_1_SYM14,
	MIMO_PARAMETERSPERBAND_SCS_60KHZ_1_SYM28,
	MIMO_PARAMETERSPERBAND_SCS_60KHZ_1_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_scs_60kHz_1_e;


typedef enum {
	MIMO_PARAMETERSPERBAND_SCS_120KHZ_1_SYM14,
	MIMO_PARAMETERSPERBAND_SCS_120KHZ_1_SYM28,
	MIMO_PARAMETERSPERBAND_SCS_120KHZ_1_SYM56,
	MIMO_PARAMETERSPERBAND_SCS_120KHZ_1_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_scs_120kHz_1_e;


typedef struct {
	BOOLEAN                                                            scs_15kHz_exist;
	MIMO_ParametersPerBand_scs_15kHz_1_e                               scs_15kHz;
	BOOLEAN                                                            scs_30kHz_exist;
	MIMO_ParametersPerBand_scs_30kHz_1_e                               scs_30kHz;
	BOOLEAN                                                            scs_60kHz_exist;
	MIMO_ParametersPerBand_scs_60kHz_1_e                               scs_60kHz;
	BOOLEAN                                                            scs_120kHz_exist;
	MIMO_ParametersPerBand_scs_120kHz_1_e                              scs_120kHz;
}MIMO_ParametersPerBand_beamReportTiming_t;


typedef struct {
	BOOLEAN                                                            scs_15kHz_exist;
	PTRS_DensityRecommendationDL_t                                     scs_15kHz;
	BOOLEAN                                                            scs_30kHz_exist;
	PTRS_DensityRecommendationDL_t                                     scs_30kHz;
	BOOLEAN                                                            scs_60kHz_exist;
	PTRS_DensityRecommendationDL_t                                     scs_60kHz;
	BOOLEAN                                                            scs_120kHz_exist;
	PTRS_DensityRecommendationDL_t                                     scs_120kHz;
}MIMO_ParametersPerBand_ptrs_DensityRecommendationSetDL_t;


typedef struct {
	BOOLEAN                                                            scs_15kHz_exist;
	PTRS_DensityRecommendationUL_t                                     scs_15kHz;
	BOOLEAN                                                            scs_30kHz_exist;
	PTRS_DensityRecommendationUL_t                                     scs_30kHz;
	BOOLEAN                                                            scs_60kHz_exist;
	PTRS_DensityRecommendationUL_t                                     scs_60kHz;
	BOOLEAN                                                            scs_120kHz_exist;
	PTRS_DensityRecommendationUL_t                                     scs_120kHz;
}MIMO_ParametersPerBand_ptrs_DensityRecommendationSetUL_t;


typedef enum {
	MIMO_PARAMETERSPERBAND_APERIODICTRS_SUPPORTED,
	MIMO_PARAMETERSPERBAND_APERIODICTRS_max = 0x7FFFFFFF
}MIMO_ParametersPerBand_aperiodicTRS_e;


typedef struct {
	BOOLEAN                                                            tci_StatePDSCH_exist;
	MIMO_ParametersPerBand_tci_StatePDSCH_t                            tci_StatePDSCH;
	BOOLEAN                                                            additionalActiveTCI_StatePDCCH_exist;
	MIMO_ParametersPerBand_additionalActiveTCI_StatePDCCH_e            additionalActiveTCI_StatePDCCH;
	BOOLEAN                                                            pusch_TransCoherence_exist;
	MIMO_ParametersPerBand_pusch_TransCoherence_e                      pusch_TransCoherence;
	BOOLEAN                                                            beamCorrespondence_exist;
	MIMO_ParametersPerBand_beamCorrespondence_e                        beamCorrespondence;
	BOOLEAN                                                            periodicBeamReport_exist;
	MIMO_ParametersPerBand_periodicBeamReport_e                        periodicBeamReport;
	BOOLEAN                                                            aperiodicBeamReport_exist;
	MIMO_ParametersPerBand_aperiodicBeamReport_e                       aperiodicBeamReport;
	BOOLEAN                                                            sp_BeamReportPUCCH_exist;
	MIMO_ParametersPerBand_sp_BeamReportPUCCH_e                        sp_BeamReportPUCCH;
	BOOLEAN                                                            sp_BeamReportPUSCH_exist;
	MIMO_ParametersPerBand_sp_BeamReportPUSCH_e                        sp_BeamReportPUSCH;
	BOOLEAN                                                            beamManagementSSB_CSI_RS_exist;
	BeamManagementSSB_CSI_RS_t                                         beamManagementSSB_CSI_RS;
	BOOLEAN                                                            maxNumberRxBeam_exist;
	uint32                                                             maxNumberRxBeam;
	BOOLEAN                                                            maxNumberRxTxBeamSwitchDL_exist;
	MIMO_ParametersPerBand_maxNumberRxTxBeamSwitchDL_t                 maxNumberRxTxBeamSwitchDL;
	BOOLEAN                                                            maxNumberNonGroupBeamReporting_exist;
	MIMO_ParametersPerBand_maxNumberNonGroupBeamReporting_e            maxNumberNonGroupBeamReporting;
	BOOLEAN                                                            groupBeamReporting_exist;
	MIMO_ParametersPerBand_groupBeamReporting_e                        groupBeamReporting;
	BOOLEAN                                                            uplinkBeamManagement_exist;
	MIMO_ParametersPerBand_uplinkBeamManagement_t                      uplinkBeamManagement;
	BOOLEAN                                                            maxNumberCSI_RS_BFR_exist;
	uint32                                                             maxNumberCSI_RS_BFR;
	BOOLEAN                                                            maxNumberSSB_BFR_exist;
	uint32                                                             maxNumberSSB_BFR;
	BOOLEAN                                                            maxNumberCSI_RS_SSB_BFR_exist;
	uint32                                                             maxNumberCSI_RS_SSB_BFR;
	BOOLEAN                                                            twoPortsPTRS_DL_exist;
	MIMO_ParametersPerBand_twoPortsPTRS_DL_e                           twoPortsPTRS_DL;
	BOOLEAN                                                            twoPortsPTRS_UL_exist;
	MIMO_ParametersPerBand_twoPortsPTRS_UL_e                           twoPortsPTRS_UL;
	BOOLEAN                                                            supportedSRS_Resources_exist;
	SRS_Resources_t                                                    supportedSRS_Resources;
	BOOLEAN                                                            srs_TxSwitch_exist;
	SRS_TxSwitch_t                                                     srs_TxSwitch;
	BOOLEAN                                                            maxNumberSimultaneousSRS_PerCC_exist;
	uint32                                                             maxNumberSimultaneousSRS_PerCC;
	BOOLEAN                                                            beamReportTiming_exist;
	MIMO_ParametersPerBand_beamReportTiming_t                          beamReportTiming;
	BOOLEAN                                                            ptrs_DensityRecommendationSetDL_exist;
	MIMO_ParametersPerBand_ptrs_DensityRecommendationSetDL_t           ptrs_DensityRecommendationSetDL;
	BOOLEAN                                                            ptrs_DensityRecommendationSetUL_exist;
	MIMO_ParametersPerBand_ptrs_DensityRecommendationSetUL_t           ptrs_DensityRecommendationSetUL;
	BOOLEAN                                                            csi_RS_ForTracking_exist;
	CSI_RS_ForTracking_t                                               csi_RS_ForTracking;
	BOOLEAN                                                            aperiodicTRS_exist;
	MIMO_ParametersPerBand_aperiodicTRS_e                              aperiodicTRS;
	/* Extension marker start. */
}MIMO_ParametersPerBand_t;


extern void EncodeMIMO_ParametersPerBand(
	MIMO_ParametersPerBand_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMIMO_ParametersPerBand(
	MIMO_ParametersPerBand_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
