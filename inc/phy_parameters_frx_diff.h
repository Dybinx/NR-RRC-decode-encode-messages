/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters_frx_diff.h - this is the header file for message: Phy-ParametersFRX-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PHY_PARAMETERS_FRX_DIFF_H_
#define _PHY_PARAMETERS_FRX_DIFF_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PHY_PARAMETERSFRX_DIFF_DYNAMICSFI_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_DYNAMICSFI_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_dynamicSFI_e;


/* struct corresponding asn: Phy_ParametersFRX_Diff_oneFL_DMRS_TwoAdditionalDMRS */
/* ASN: BIT STRING SIZE(2) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}Phy_ParametersFRX_Diff_oneFL_DMRS_TwoAdditionalDMRS_t;


/* struct corresponding asn: Phy_ParametersFRX_Diff_twoFL_DMRS */
/* ASN: BIT STRING SIZE(2) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}Phy_ParametersFRX_Diff_twoFL_DMRS_t;


/* struct corresponding asn: Phy_ParametersFRX_Diff_twoFL_DMRS_TwoAdditionalDMRS */
/* ASN: BIT STRING SIZE(2) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}Phy_ParametersFRX_Diff_twoFL_DMRS_TwoAdditionalDMRS_t;


/* struct corresponding asn: Phy_ParametersFRX_Diff_oneFL_DMRS_ThreeAdditionalDMRS */
/* ASN: BIT STRING SIZE(2) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}Phy_ParametersFRX_Diff_oneFL_DMRS_ThreeAdditionalDMRS_t;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_SUPPORTEDDMRS_TYPEDL_TYPE1,
	PHY_PARAMETERSFRX_DIFF_SUPPORTEDDMRS_TYPEDL_TYPE2,
	PHY_PARAMETERSFRX_DIFF_SUPPORTEDDMRS_TYPEDL_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_supportedDMRS_TypeDL_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_SUPPORTEDDMRS_TYPEUL_TYPE1,
	PHY_PARAMETERSFRX_DIFF_SUPPORTEDDMRS_TYPEUL_TYPE2,
	PHY_PARAMETERSFRX_DIFF_SUPPORTEDDMRS_TYPEUL_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_supportedDMRS_TypeUL_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_SEMIOPENLOOPCSI_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_SEMIOPENLOOPCSI_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_semiOpenLoopCSI_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_CSI_REPORTWITHOUTPMI_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_CSI_REPORTWITHOUTPMI_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_csi_ReportWithoutPMI_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_CSI_REPORTWITHOUTCQI_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_CSI_REPORTWITHOUTCQI_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_csi_ReportWithoutCQI_e;


/* struct corresponding asn: Phy_ParametersFRX_Diff_onePortsPTRS */
/* ASN: BIT STRING SIZE(2) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}Phy_ParametersFRX_Diff_onePortsPTRS_t;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_TWOPUCCH_F0_2_CONSECSYMBOLS_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_TWOPUCCH_F0_2_CONSECSYMBOLS_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_twoPUCCH_F0_2_ConsecSymbols_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_PUCCH_F2_WITHFH_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_PUCCH_F2_WITHFH_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_pucch_F2_WithFH_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_PUCCH_F3_WITHFH_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_PUCCH_F3_WITHFH_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_pucch_F3_WithFH_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_PUCCH_F4_WITHFH_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_PUCCH_F4_WITHFH_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_pucch_F4_WithFH_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_FREQHOPPINGPUCCH_F0_2_NOTSUPPORTED,
	PHY_PARAMETERSFRX_DIFF_FREQHOPPINGPUCCH_F0_2_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_freqHoppingPUCCH_F0_2_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_FREQHOPPINGPUCCH_F1_3_4_NOTSUPPORTED,
	PHY_PARAMETERSFRX_DIFF_FREQHOPPINGPUCCH_F1_3_4_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_freqHoppingPUCCH_F1_3_4_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_MUX_SR_HARQ_ACK_CSI_PUCCH_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_MUX_SR_HARQ_ACK_CSI_PUCCH_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_mux_SR_HARQ_ACK_CSI_PUCCH_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_UCI_CODEBLOCKSEGMENTATION_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_UCI_CODEBLOCKSEGMENTATION_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_uci_CodeBlockSegmentation_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_ONEPUCCH_LONGANDSHORTFORMAT_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_ONEPUCCH_LONGANDSHORTFORMAT_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_onePUCCH_LongAndShortFormat_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_TWOPUCCH_ANYOTHERSINSLOT_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_TWOPUCCH_ANYOTHERSINSLOT_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_twoPUCCH_AnyOthersInSlot_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_INTRASLOTFREQHOPPING_PUSCH_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_INTRASLOTFREQHOPPING_PUSCH_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_intraSlotFreqHopping_PUSCH_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_PUSCH_LBRM_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_PUSCH_LBRM_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_pusch_LBRM_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_PDCCH_BLINDDETECTIONCA_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_PDCCH_BLINDDETECTIONCA_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_pdcch_BlindDetectionCA_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_TPC_PUSCH_RNTI_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_TPC_PUSCH_RNTI_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_tpc_PUSCH_RNTI_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_TPC_PUCCH_RNTI_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_TPC_PUCCH_RNTI_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_tpc_PUCCH_RNTI_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_TPC_SRS_RNTI_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_TPC_SRS_RNTI_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_tpc_SRS_RNTI_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_ABSOLUTETPC_COMMAND_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_ABSOLUTETPC_COMMAND_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_absoluteTPC_Command_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_TWODIFFERENTTPC_LOOP_PUSCH_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_TWODIFFERENTTPC_LOOP_PUSCH_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUSCH_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_TWODIFFERENTTPC_LOOP_PUCCH_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_TWODIFFERENTTPC_LOOP_PUCCH_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUCCH_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_PUSCH_HALFPI_BPSK_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_PUSCH_HALFPI_BPSK_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_pusch_HalfPi_BPSK_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_PUCCH_F3_4_HALFPI_BPSK_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_PUCCH_F3_4_HALFPI_BPSK_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_pucch_F3_4_HalfPi_BPSK_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_ALMOSTCONTIGUOUSCP_OFDM_UL_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_ALMOSTCONTIGUOUSCP_OFDM_UL_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_almostContiguousCP_OFDM_UL_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_SP_CSI_RS_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_SP_CSI_RS_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_sp_CSI_RS_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_SP_CSI_IM_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_SP_CSI_IM_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_sp_CSI_IM_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_TDD_MULTIDL_UL_SWITCHPERSLOT_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_TDD_MULTIDL_UL_SWITCHPERSLOT_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_tdd_MultiDL_UL_SwitchPerSlot_e;


typedef enum {
	PHY_PARAMETERSFRX_DIFF_MULTIPLECORESET_SUPPORTED,
	PHY_PARAMETERSFRX_DIFF_MULTIPLECORESET_max = 0x7FFFFFFF
}Phy_ParametersFRX_Diff_multipleCORESET_e;


typedef struct {
	BOOLEAN                                                            dynamicSFI_exist;
	Phy_ParametersFRX_Diff_dynamicSFI_e                                dynamicSFI;
	BOOLEAN                                                            oneFL_DMRS_TwoAdditionalDMRS_exist;
	Phy_ParametersFRX_Diff_oneFL_DMRS_TwoAdditionalDMRS_t              oneFL_DMRS_TwoAdditionalDMRS;
	BOOLEAN                                                            twoFL_DMRS_exist;
	Phy_ParametersFRX_Diff_twoFL_DMRS_t                                twoFL_DMRS;
	BOOLEAN                                                            twoFL_DMRS_TwoAdditionalDMRS_exist;
	Phy_ParametersFRX_Diff_twoFL_DMRS_TwoAdditionalDMRS_t              twoFL_DMRS_TwoAdditionalDMRS;
	BOOLEAN                                                            oneFL_DMRS_ThreeAdditionalDMRS_exist;
	Phy_ParametersFRX_Diff_oneFL_DMRS_ThreeAdditionalDMRS_t            oneFL_DMRS_ThreeAdditionalDMRS;
	BOOLEAN                                                            supportedDMRS_TypeDL_exist;
	Phy_ParametersFRX_Diff_supportedDMRS_TypeDL_e                      supportedDMRS_TypeDL;
	BOOLEAN                                                            supportedDMRS_TypeUL_exist;
	Phy_ParametersFRX_Diff_supportedDMRS_TypeUL_e                      supportedDMRS_TypeUL;
	BOOLEAN                                                            semiOpenLoopCSI_exist;
	Phy_ParametersFRX_Diff_semiOpenLoopCSI_e                           semiOpenLoopCSI;
	BOOLEAN                                                            csi_ReportWithoutPMI_exist;
	Phy_ParametersFRX_Diff_csi_ReportWithoutPMI_e                      csi_ReportWithoutPMI;
	BOOLEAN                                                            csi_ReportWithoutCQI_exist;
	Phy_ParametersFRX_Diff_csi_ReportWithoutCQI_e                      csi_ReportWithoutCQI;
	BOOLEAN                                                            onePortsPTRS_exist;
	Phy_ParametersFRX_Diff_onePortsPTRS_t                              onePortsPTRS;
	BOOLEAN                                                            twoPUCCH_F0_2_ConsecSymbols_exist;
	Phy_ParametersFRX_Diff_twoPUCCH_F0_2_ConsecSymbols_e               twoPUCCH_F0_2_ConsecSymbols;
	BOOLEAN                                                            pucch_F2_WithFH_exist;
	Phy_ParametersFRX_Diff_pucch_F2_WithFH_e                           pucch_F2_WithFH;
	BOOLEAN                                                            pucch_F3_WithFH_exist;
	Phy_ParametersFRX_Diff_pucch_F3_WithFH_e                           pucch_F3_WithFH;
	BOOLEAN                                                            pucch_F4_WithFH_exist;
	Phy_ParametersFRX_Diff_pucch_F4_WithFH_e                           pucch_F4_WithFH;
	BOOLEAN                                                            freqHoppingPUCCH_F0_2_exist;
	Phy_ParametersFRX_Diff_freqHoppingPUCCH_F0_2_e                     freqHoppingPUCCH_F0_2;
	BOOLEAN                                                            freqHoppingPUCCH_F1_3_4_exist;
	Phy_ParametersFRX_Diff_freqHoppingPUCCH_F1_3_4_e                   freqHoppingPUCCH_F1_3_4;
	BOOLEAN                                                            mux_SR_HARQ_ACK_CSI_PUCCH_exist;
	Phy_ParametersFRX_Diff_mux_SR_HARQ_ACK_CSI_PUCCH_e                 mux_SR_HARQ_ACK_CSI_PUCCH;
	BOOLEAN                                                            uci_CodeBlockSegmentation_exist;
	Phy_ParametersFRX_Diff_uci_CodeBlockSegmentation_e                 uci_CodeBlockSegmentation;
	BOOLEAN                                                            onePUCCH_LongAndShortFormat_exist;
	Phy_ParametersFRX_Diff_onePUCCH_LongAndShortFormat_e               onePUCCH_LongAndShortFormat;
	BOOLEAN                                                            twoPUCCH_AnyOthersInSlot_exist;
	Phy_ParametersFRX_Diff_twoPUCCH_AnyOthersInSlot_e                  twoPUCCH_AnyOthersInSlot;
	BOOLEAN                                                            intraSlotFreqHopping_PUSCH_exist;
	Phy_ParametersFRX_Diff_intraSlotFreqHopping_PUSCH_e                intraSlotFreqHopping_PUSCH;
	BOOLEAN                                                            pusch_LBRM_exist;
	Phy_ParametersFRX_Diff_pusch_LBRM_e                                pusch_LBRM;
	BOOLEAN                                                            pdcch_BlindDetectionCA_exist;
	Phy_ParametersFRX_Diff_pdcch_BlindDetectionCA_e                    pdcch_BlindDetectionCA;
	BOOLEAN                                                            tpc_PUSCH_RNTI_exist;
	Phy_ParametersFRX_Diff_tpc_PUSCH_RNTI_e                            tpc_PUSCH_RNTI;
	BOOLEAN                                                            tpc_PUCCH_RNTI_exist;
	Phy_ParametersFRX_Diff_tpc_PUCCH_RNTI_e                            tpc_PUCCH_RNTI;
	BOOLEAN                                                            tpc_SRS_RNTI_exist;
	Phy_ParametersFRX_Diff_tpc_SRS_RNTI_e                              tpc_SRS_RNTI;
	BOOLEAN                                                            absoluteTPC_Command_exist;
	Phy_ParametersFRX_Diff_absoluteTPC_Command_e                       absoluteTPC_Command;
	BOOLEAN                                                            twoDifferentTPC_Loop_PUSCH_exist;
	Phy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUSCH_e                twoDifferentTPC_Loop_PUSCH;
	BOOLEAN                                                            twoDifferentTPC_Loop_PUCCH_exist;
	Phy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUCCH_e                twoDifferentTPC_Loop_PUCCH;
	BOOLEAN                                                            pusch_HalfPi_BPSK_exist;
	Phy_ParametersFRX_Diff_pusch_HalfPi_BPSK_e                         pusch_HalfPi_BPSK;
	BOOLEAN                                                            pucch_F3_4_HalfPi_BPSK_exist;
	Phy_ParametersFRX_Diff_pucch_F3_4_HalfPi_BPSK_e                    pucch_F3_4_HalfPi_BPSK;
	BOOLEAN                                                            almostContiguousCP_OFDM_UL_exist;
	Phy_ParametersFRX_Diff_almostContiguousCP_OFDM_UL_e                almostContiguousCP_OFDM_UL;
	BOOLEAN                                                            sp_CSI_RS_exist;
	Phy_ParametersFRX_Diff_sp_CSI_RS_e                                 sp_CSI_RS;
	BOOLEAN                                                            sp_CSI_IM_exist;
	Phy_ParametersFRX_Diff_sp_CSI_IM_e                                 sp_CSI_IM;
	BOOLEAN                                                            tdd_MultiDL_UL_SwitchPerSlot_exist;
	Phy_ParametersFRX_Diff_tdd_MultiDL_UL_SwitchPerSlot_e              tdd_MultiDL_UL_SwitchPerSlot;
	BOOLEAN                                                            multipleCORESET_exist;
	Phy_ParametersFRX_Diff_multipleCORESET_e                           multipleCORESET;
	/* Extension marker start. */
}Phy_ParametersFRX_Diff_t;


extern void EncodePhy_ParametersFRX_Diff(
	Phy_ParametersFRX_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePhy_ParametersFRX_Diff(
	Phy_ParametersFRX_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
