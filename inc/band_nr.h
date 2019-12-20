/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * band_nr.h - this is the header file for message: BandNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BAND_NR_H_
#define _BAND_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "freq_band_indicator_nr.h"
#include "mimo_parameters_per_band.h"


/* struct corresponding asn: BandNR_modifiedMPR_Behaviour */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}BandNR_modifiedMPR_Behaviour_t;


typedef enum {
	BANDNR_EXTENDEDCP_SUPPORTED,
	BANDNR_EXTENDEDCP_max = 0x7FFFFFFF
}BandNR_extendedCP_e;


typedef enum {
	BANDNR_MULTIPLETCI_SUPPORTED,
	BANDNR_MULTIPLETCI_max = 0x7FFFFFFF
}BandNR_multipleTCI_e;


typedef enum {
	BANDNR_BWP_WITHOUTRESTRICTION_SUPPORTED,
	BANDNR_BWP_WITHOUTRESTRICTION_max = 0x7FFFFFFF
}BandNR_bwp_WithoutRestriction_e;


typedef enum {
	BANDNR_BWP_SAMENUMEROLOGY_UPTO2,
	BANDNR_BWP_SAMENUMEROLOGY_UPTO4,
	BANDNR_BWP_SAMENUMEROLOGY_max = 0x7FFFFFFF
}BandNR_bwp_SameNumerology_e;


typedef enum {
	BANDNR_BWP_DIFFNUMEROLOGY_UPTO4,
	BANDNR_BWP_DIFFNUMEROLOGY_max = 0x7FFFFFFF
}BandNR_bwp_DiffNumerology_e;


typedef enum {
	BANDNR_CROSSCARRIERSCHEDULINGDL_SAMESCS_SUPPORTED,
	BANDNR_CROSSCARRIERSCHEDULINGDL_SAMESCS_max = 0x7FFFFFFF
}BandNR_crossCarrierSchedulingDL_SameSCS_e;


typedef enum {
	BANDNR_CROSSCARRIERSCHEDULINGUL_SAMESCS_SUPPORTED,
	BANDNR_CROSSCARRIERSCHEDULINGUL_SAMESCS_max = 0x7FFFFFFF
}BandNR_crossCarrierSchedulingUL_SameSCS_e;


typedef enum {
	BANDNR_PDSCH_256QAM_FR2_SUPPORTED,
	BANDNR_PDSCH_256QAM_FR2_max = 0x7FFFFFFF
}BandNR_pdsch_256QAM_FR2_e;


typedef enum {
	BANDNR_PUSCH_256QAM_SUPPORTED,
	BANDNR_PUSCH_256QAM_max = 0x7FFFFFFF
}BandNR_pusch_256QAM_e;


typedef enum {
	BANDNR_UE_POWERCLASS_PC2,
	BANDNR_UE_POWERCLASS_PC3,
	BANDNR_UE_POWERCLASS_max = 0x7FFFFFFF
}BandNR_ue_PowerClass_e;


typedef enum {
	BANDNR_RATEMATCHINGLTE_CRS_SUPPORTED,
	BANDNR_RATEMATCHINGLTE_CRS_max = 0x7FFFFFFF
}BandNR_rateMatchingLTE_CRS_e;


typedef struct {
	FreqBandIndicatorNR_t                                              bandNR;
	BOOLEAN                                                            modifiedMPR_Behaviour_exist;
	BandNR_modifiedMPR_Behaviour_t                                     modifiedMPR_Behaviour;
	BOOLEAN                                                            mimo_ParametersPerBand_exist;
	MIMO_ParametersPerBand_t                                           mimo_ParametersPerBand;
	BOOLEAN                                                            extendedCP_exist;
	BandNR_extendedCP_e                                                extendedCP;
	BOOLEAN                                                            multipleTCI_exist;
	BandNR_multipleTCI_e                                               multipleTCI;
	BOOLEAN                                                            bwp_WithoutRestriction_exist;
	BandNR_bwp_WithoutRestriction_e                                    bwp_WithoutRestriction;
	BOOLEAN                                                            bwp_SameNumerology_exist;
	BandNR_bwp_SameNumerology_e                                        bwp_SameNumerology;
	BOOLEAN                                                            bwp_DiffNumerology_exist;
	BandNR_bwp_DiffNumerology_e                                        bwp_DiffNumerology;
	BOOLEAN                                                            crossCarrierSchedulingDL_SameSCS_exist;
	BandNR_crossCarrierSchedulingDL_SameSCS_e                          crossCarrierSchedulingDL_SameSCS;
	BOOLEAN                                                            crossCarrierSchedulingUL_SameSCS_exist;
	BandNR_crossCarrierSchedulingUL_SameSCS_e                          crossCarrierSchedulingUL_SameSCS;
	BOOLEAN                                                            pdsch_256QAM_FR2_exist;
	BandNR_pdsch_256QAM_FR2_e                                          pdsch_256QAM_FR2;
	BOOLEAN                                                            pusch_256QAM_exist;
	BandNR_pusch_256QAM_e                                              pusch_256QAM;
	BOOLEAN                                                            ue_PowerClass_exist;
	BandNR_ue_PowerClass_e                                             ue_PowerClass;
	BOOLEAN                                                            rateMatchingLTE_CRS_exist;
	BandNR_rateMatchingLTE_CRS_e                                       rateMatchingLTE_CRS;
	/* Extension marker start. */
}BandNR_t;


extern void EncodeBandNR(
	BandNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBandNR(
	BandNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
