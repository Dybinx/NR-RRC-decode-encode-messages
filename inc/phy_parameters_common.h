/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters_common.h - this is the header file for message: Phy-ParametersCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PHY_PARAMETERS_COMMON_H_
#define _PHY_PARAMETERS_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PHY_PARAMETERSCOMMON_CSI_RS_CFRA_FORHO_SUPPORTED,
	PHY_PARAMETERSCOMMON_CSI_RS_CFRA_FORHO_max = 0x7FFFFFFF
}Phy_ParametersCommon_csi_RS_CFRA_ForHO_e;


typedef enum {
	PHY_PARAMETERSCOMMON_DYNAMICPRB_BUNDLINGDL_SUPPORTED,
	PHY_PARAMETERSCOMMON_DYNAMICPRB_BUNDLINGDL_max = 0x7FFFFFFF
}Phy_ParametersCommon_dynamicPRB_BundlingDL_e;


typedef enum {
	PHY_PARAMETERSCOMMON_SP_CSI_REPORTPUCCH_SUPPORTED,
	PHY_PARAMETERSCOMMON_SP_CSI_REPORTPUCCH_max = 0x7FFFFFFF
}Phy_ParametersCommon_sp_CSI_ReportPUCCH_e;


typedef enum {
	PHY_PARAMETERSCOMMON_SP_CSI_REPORTPUSCH_SUPPORTED,
	PHY_PARAMETERSCOMMON_SP_CSI_REPORTPUSCH_max = 0x7FFFFFFF
}Phy_ParametersCommon_sp_CSI_ReportPUSCH_e;


typedef enum {
	PHY_PARAMETERSCOMMON_NZP_CSI_RS_INTEFMGMT_SUPPORTED,
	PHY_PARAMETERSCOMMON_NZP_CSI_RS_INTEFMGMT_max = 0x7FFFFFFF
}Phy_ParametersCommon_nzp_CSI_RS_IntefMgmt_e;


typedef enum {
	PHY_PARAMETERSCOMMON_TYPE2_SP_CSI_FEEDBACK_LONGPUCCH_SUPPORTED,
	PHY_PARAMETERSCOMMON_TYPE2_SP_CSI_FEEDBACK_LONGPUCCH_max = 0x7FFFFFFF
}Phy_ParametersCommon_type2_SP_CSI_Feedback_LongPUCCH_e;


typedef enum {
	PHY_PARAMETERSCOMMON_PRECODERGRANULARITYCORESET_SUPPORTED,
	PHY_PARAMETERSCOMMON_PRECODERGRANULARITYCORESET_max = 0x7FFFFFFF
}Phy_ParametersCommon_precoderGranularityCORESET_e;


typedef enum {
	PHY_PARAMETERSCOMMON_DYNAMICHARQ_ACK_CODEBOOK_SUPPORTED,
	PHY_PARAMETERSCOMMON_DYNAMICHARQ_ACK_CODEBOOK_max = 0x7FFFFFFF
}Phy_ParametersCommon_dynamicHARQ_ACK_Codebook_e;


typedef enum {
	PHY_PARAMETERSCOMMON_SEMISTATICHARQ_ACK_CODEBOOK_SUPPORTED,
	PHY_PARAMETERSCOMMON_SEMISTATICHARQ_ACK_CODEBOOK_max = 0x7FFFFFFF
}Phy_ParametersCommon_semiStaticHARQ_ACK_Codebook_e;


typedef enum {
	PHY_PARAMETERSCOMMON_SPATIALBUNDLINGHARQ_ACK_SUPPORTED,
	PHY_PARAMETERSCOMMON_SPATIALBUNDLINGHARQ_ACK_max = 0x7FFFFFFF
}Phy_ParametersCommon_spatialBundlingHARQ_ACK_e;


typedef enum {
	PHY_PARAMETERSCOMMON_DYNAMICBETAOFFSETIND_HARQ_ACK_CSI_SUPPORTED,
	PHY_PARAMETERSCOMMON_DYNAMICBETAOFFSETIND_HARQ_ACK_CSI_max = 0x7FFFFFFF
}Phy_ParametersCommon_dynamicBetaOffsetInd_HARQ_ACK_CSI_e;


typedef enum {
	PHY_PARAMETERSCOMMON_PUCCH_REPETITION_F1_3_4_SUPPORTED,
	PHY_PARAMETERSCOMMON_PUCCH_REPETITION_F1_3_4_max = 0x7FFFFFFF
}Phy_ParametersCommon_pucch_Repetition_F1_3_4_e;


typedef enum {
	PHY_PARAMETERSCOMMON_RA_TYPE0_PUSCH_SUPPORTED,
	PHY_PARAMETERSCOMMON_RA_TYPE0_PUSCH_max = 0x7FFFFFFF
}Phy_ParametersCommon_ra_Type0_PUSCH_e;


typedef enum {
	PHY_PARAMETERSCOMMON_DYNAMICSWITCHRA_TYPE0_1_PDSCH_SUPPORTED,
	PHY_PARAMETERSCOMMON_DYNAMICSWITCHRA_TYPE0_1_PDSCH_max = 0x7FFFFFFF
}Phy_ParametersCommon_dynamicSwitchRA_Type0_1_PDSCH_e;


typedef enum {
	PHY_PARAMETERSCOMMON_DYNAMICSWITCHRA_TYPE0_1_PUSCH_SUPPORTED,
	PHY_PARAMETERSCOMMON_DYNAMICSWITCHRA_TYPE0_1_PUSCH_max = 0x7FFFFFFF
}Phy_ParametersCommon_dynamicSwitchRA_Type0_1_PUSCH_e;


typedef enum {
	PHY_PARAMETERSCOMMON_PDSCH_MAPPINGTYPEA_SUPPORTED,
	PHY_PARAMETERSCOMMON_PDSCH_MAPPINGTYPEA_max = 0x7FFFFFFF
}Phy_ParametersCommon_pdsch_MappingTypeA_e;


typedef enum {
	PHY_PARAMETERSCOMMON_PDSCH_MAPPINGTYPEB_SUPPORTED,
	PHY_PARAMETERSCOMMON_PDSCH_MAPPINGTYPEB_max = 0x7FFFFFFF
}Phy_ParametersCommon_pdsch_MappingTypeB_e;


typedef enum {
	PHY_PARAMETERSCOMMON_INTERLEAVINGVRB_TOPRB_PDSCH_SUPPORTED,
	PHY_PARAMETERSCOMMON_INTERLEAVINGVRB_TOPRB_PDSCH_max = 0x7FFFFFFF
}Phy_ParametersCommon_interleavingVRB_ToPRB_PDSCH_e;


typedef enum {
	PHY_PARAMETERSCOMMON_INTERSLOTFREQHOPPING_PUSCH_SUPPORTED,
	PHY_PARAMETERSCOMMON_INTERSLOTFREQHOPPING_PUSCH_max = 0x7FFFFFFF
}Phy_ParametersCommon_interSlotFreqHopping_PUSCH_e;


typedef enum {
	PHY_PARAMETERSCOMMON_TYPE1_PUSCH_REPETITIONMULTISLOTS_SUPPORTED,
	PHY_PARAMETERSCOMMON_TYPE1_PUSCH_REPETITIONMULTISLOTS_max = 0x7FFFFFFF
}Phy_ParametersCommon_type1_PUSCH_RepetitionMultiSlots_e;


typedef enum {
	PHY_PARAMETERSCOMMON_TYPE2_PUSCH_REPETITIONMULTISLOTS_SUPPORTED,
	PHY_PARAMETERSCOMMON_TYPE2_PUSCH_REPETITIONMULTISLOTS_max = 0x7FFFFFFF
}Phy_ParametersCommon_type2_PUSCH_RepetitionMultiSlots_e;


typedef enum {
	PHY_PARAMETERSCOMMON_PUSCH_REPETITIONMULTISLOTS_SUPPORTED,
	PHY_PARAMETERSCOMMON_PUSCH_REPETITIONMULTISLOTS_max = 0x7FFFFFFF
}Phy_ParametersCommon_pusch_RepetitionMultiSlots_e;


typedef enum {
	PHY_PARAMETERSCOMMON_PDSCH_REPETITIONMULTISLOTS_SUPPORTED,
	PHY_PARAMETERSCOMMON_PDSCH_REPETITIONMULTISLOTS_max = 0x7FFFFFFF
}Phy_ParametersCommon_pdsch_RepetitionMultiSlots_e;


typedef enum {
	PHY_PARAMETERSCOMMON_DOWNLINKSPS_SUPPORTED,
	PHY_PARAMETERSCOMMON_DOWNLINKSPS_max = 0x7FFFFFFF
}Phy_ParametersCommon_downlinkSPS_e;


typedef enum {
	PHY_PARAMETERSCOMMON_CONFIGUREDUL_GRANTTYPE1_SUPPORTED,
	PHY_PARAMETERSCOMMON_CONFIGUREDUL_GRANTTYPE1_max = 0x7FFFFFFF
}Phy_ParametersCommon_configuredUL_GrantType1_e;


typedef enum {
	PHY_PARAMETERSCOMMON_CONFIGUREDUL_GRANTTYPE2_SUPPORTED,
	PHY_PARAMETERSCOMMON_CONFIGUREDUL_GRANTTYPE2_max = 0x7FFFFFFF
}Phy_ParametersCommon_configuredUL_GrantType2_e;


typedef enum {
	PHY_PARAMETERSCOMMON_PRE_EMPTINDICATION_DL_SUPPORTED,
	PHY_PARAMETERSCOMMON_PRE_EMPTINDICATION_DL_max = 0x7FFFFFFF
}Phy_ParametersCommon_pre_EmptIndication_DL_e;


typedef enum {
	PHY_PARAMETERSCOMMON_CBG_TRANSINDICATION_DL_SUPPORTED,
	PHY_PARAMETERSCOMMON_CBG_TRANSINDICATION_DL_max = 0x7FFFFFFF
}Phy_ParametersCommon_cbg_TransIndication_DL_e;


typedef enum {
	PHY_PARAMETERSCOMMON_CBG_TRANSINDICATION_UL_SUPPORTED,
	PHY_PARAMETERSCOMMON_CBG_TRANSINDICATION_UL_max = 0x7FFFFFFF
}Phy_ParametersCommon_cbg_TransIndication_UL_e;


typedef enum {
	PHY_PARAMETERSCOMMON_CBG_FLUSHINDICATION_DL_SUPPORTED,
	PHY_PARAMETERSCOMMON_CBG_FLUSHINDICATION_DL_max = 0x7FFFFFFF
}Phy_ParametersCommon_cbg_FlushIndication_DL_e;


typedef enum {
	PHY_PARAMETERSCOMMON_DYNAMICHARQ_ACK_CODEB_CBG_RETX_DL_SUPPORTED,
	PHY_PARAMETERSCOMMON_DYNAMICHARQ_ACK_CODEB_CBG_RETX_DL_max = 0x7FFFFFFF
}Phy_ParametersCommon_dynamicHARQ_ACK_CodeB_CBG_Retx_DL_e;


typedef enum {
	PHY_PARAMETERSCOMMON_RATEMATCHINGRESRCSETSEMI_STATIC_SUPPORTED,
	PHY_PARAMETERSCOMMON_RATEMATCHINGRESRCSETSEMI_STATIC_max = 0x7FFFFFFF
}Phy_ParametersCommon_rateMatchingResrcSetSemi_Static_e;


typedef enum {
	PHY_PARAMETERSCOMMON_RATEMATCHINGRESRCSETDYNAMIC_SUPPORTED,
	PHY_PARAMETERSCOMMON_RATEMATCHINGRESRCSETDYNAMIC_max = 0x7FFFFFFF
}Phy_ParametersCommon_rateMatchingResrcSetDynamic_e;


typedef enum {
	PHY_PARAMETERSCOMMON_BWP_SWITCHINGDELAY_TYPE1,
	PHY_PARAMETERSCOMMON_BWP_SWITCHINGDELAY_TYPE2,
	PHY_PARAMETERSCOMMON_BWP_SWITCHINGDELAY_max = 0x7FFFFFFF
}Phy_ParametersCommon_bwp_SwitchingDelay_e;


typedef struct {
	BOOLEAN                                                            csi_RS_CFRA_ForHO_exist;
	Phy_ParametersCommon_csi_RS_CFRA_ForHO_e                           csi_RS_CFRA_ForHO;
	BOOLEAN                                                            dynamicPRB_BundlingDL_exist;
	Phy_ParametersCommon_dynamicPRB_BundlingDL_e                       dynamicPRB_BundlingDL;
	BOOLEAN                                                            sp_CSI_ReportPUCCH_exist;
	Phy_ParametersCommon_sp_CSI_ReportPUCCH_e                          sp_CSI_ReportPUCCH;
	BOOLEAN                                                            sp_CSI_ReportPUSCH_exist;
	Phy_ParametersCommon_sp_CSI_ReportPUSCH_e                          sp_CSI_ReportPUSCH;
	BOOLEAN                                                            nzp_CSI_RS_IntefMgmt_exist;
	Phy_ParametersCommon_nzp_CSI_RS_IntefMgmt_e                        nzp_CSI_RS_IntefMgmt;
	BOOLEAN                                                            type2_SP_CSI_Feedback_LongPUCCH_exist;
	Phy_ParametersCommon_type2_SP_CSI_Feedback_LongPUCCH_e             type2_SP_CSI_Feedback_LongPUCCH;
	BOOLEAN                                                            precoderGranularityCORESET_exist;
	Phy_ParametersCommon_precoderGranularityCORESET_e                  precoderGranularityCORESET;
	BOOLEAN                                                            dynamicHARQ_ACK_Codebook_exist;
	Phy_ParametersCommon_dynamicHARQ_ACK_Codebook_e                    dynamicHARQ_ACK_Codebook;
	BOOLEAN                                                            semiStaticHARQ_ACK_Codebook_exist;
	Phy_ParametersCommon_semiStaticHARQ_ACK_Codebook_e                 semiStaticHARQ_ACK_Codebook;
	BOOLEAN                                                            spatialBundlingHARQ_ACK_exist;
	Phy_ParametersCommon_spatialBundlingHARQ_ACK_e                     spatialBundlingHARQ_ACK;
	BOOLEAN                                                            dynamicBetaOffsetInd_HARQ_ACK_CSI_exist;
	Phy_ParametersCommon_dynamicBetaOffsetInd_HARQ_ACK_CSI_e           dynamicBetaOffsetInd_HARQ_ACK_CSI;
	BOOLEAN                                                            pucch_Repetition_F1_3_4_exist;
	Phy_ParametersCommon_pucch_Repetition_F1_3_4_e                     pucch_Repetition_F1_3_4;
	BOOLEAN                                                            ra_Type0_PUSCH_exist;
	Phy_ParametersCommon_ra_Type0_PUSCH_e                              ra_Type0_PUSCH;
	BOOLEAN                                                            dynamicSwitchRA_Type0_1_PDSCH_exist;
	Phy_ParametersCommon_dynamicSwitchRA_Type0_1_PDSCH_e               dynamicSwitchRA_Type0_1_PDSCH;
	BOOLEAN                                                            dynamicSwitchRA_Type0_1_PUSCH_exist;
	Phy_ParametersCommon_dynamicSwitchRA_Type0_1_PUSCH_e               dynamicSwitchRA_Type0_1_PUSCH;
	BOOLEAN                                                            pdsch_MappingTypeA_exist;
	Phy_ParametersCommon_pdsch_MappingTypeA_e                          pdsch_MappingTypeA;
	BOOLEAN                                                            pdsch_MappingTypeB_exist;
	Phy_ParametersCommon_pdsch_MappingTypeB_e                          pdsch_MappingTypeB;
	BOOLEAN                                                            interleavingVRB_ToPRB_PDSCH_exist;
	Phy_ParametersCommon_interleavingVRB_ToPRB_PDSCH_e                 interleavingVRB_ToPRB_PDSCH;
	BOOLEAN                                                            interSlotFreqHopping_PUSCH_exist;
	Phy_ParametersCommon_interSlotFreqHopping_PUSCH_e                  interSlotFreqHopping_PUSCH;
	BOOLEAN                                                            type1_PUSCH_RepetitionMultiSlots_exist;
	Phy_ParametersCommon_type1_PUSCH_RepetitionMultiSlots_e            type1_PUSCH_RepetitionMultiSlots;
	BOOLEAN                                                            type2_PUSCH_RepetitionMultiSlots_exist;
	Phy_ParametersCommon_type2_PUSCH_RepetitionMultiSlots_e            type2_PUSCH_RepetitionMultiSlots;
	BOOLEAN                                                            pusch_RepetitionMultiSlots_exist;
	Phy_ParametersCommon_pusch_RepetitionMultiSlots_e                  pusch_RepetitionMultiSlots;
	BOOLEAN                                                            pdsch_RepetitionMultiSlots_exist;
	Phy_ParametersCommon_pdsch_RepetitionMultiSlots_e                  pdsch_RepetitionMultiSlots;
	BOOLEAN                                                            downlinkSPS_exist;
	Phy_ParametersCommon_downlinkSPS_e                                 downlinkSPS;
	BOOLEAN                                                            configuredUL_GrantType1_exist;
	Phy_ParametersCommon_configuredUL_GrantType1_e                     configuredUL_GrantType1;
	BOOLEAN                                                            configuredUL_GrantType2_exist;
	Phy_ParametersCommon_configuredUL_GrantType2_e                     configuredUL_GrantType2;
	BOOLEAN                                                            pre_EmptIndication_DL_exist;
	Phy_ParametersCommon_pre_EmptIndication_DL_e                       pre_EmptIndication_DL;
	BOOLEAN                                                            cbg_TransIndication_DL_exist;
	Phy_ParametersCommon_cbg_TransIndication_DL_e                      cbg_TransIndication_DL;
	BOOLEAN                                                            cbg_TransIndication_UL_exist;
	Phy_ParametersCommon_cbg_TransIndication_UL_e                      cbg_TransIndication_UL;
	BOOLEAN                                                            cbg_FlushIndication_DL_exist;
	Phy_ParametersCommon_cbg_FlushIndication_DL_e                      cbg_FlushIndication_DL;
	BOOLEAN                                                            dynamicHARQ_ACK_CodeB_CBG_Retx_DL_exist;
	Phy_ParametersCommon_dynamicHARQ_ACK_CodeB_CBG_Retx_DL_e           dynamicHARQ_ACK_CodeB_CBG_Retx_DL;
	BOOLEAN                                                            rateMatchingResrcSetSemi_Static_exist;
	Phy_ParametersCommon_rateMatchingResrcSetSemi_Static_e             rateMatchingResrcSetSemi_Static;
	BOOLEAN                                                            rateMatchingResrcSetDynamic_exist;
	Phy_ParametersCommon_rateMatchingResrcSetDynamic_e                 rateMatchingResrcSetDynamic;
	BOOLEAN                                                            bwp_SwitchingDelay_exist;
	Phy_ParametersCommon_bwp_SwitchingDelay_e                          bwp_SwitchingDelay;
	/* Extension marker start. */
}Phy_ParametersCommon_t;


extern void EncodePhy_ParametersCommon(
	Phy_ParametersCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePhy_ParametersCommon(
	Phy_ParametersCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
