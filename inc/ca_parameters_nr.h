/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ca_parameters_nr.h - this is the header file for message: CA-ParametersNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CA_PARAMETERS_NR_H_
#define _CA_PARAMETERS_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	CA_PARAMETERSNR_MULTIPLETIMINGADVANCES_SUPPORTED,
	CA_PARAMETERSNR_MULTIPLETIMINGADVANCES_max = 0x7FFFFFFF
}CA_ParametersNR_multipleTimingAdvances_e;


typedef enum {
	CA_PARAMETERSNR_PARALLELTXSRS_PUCCH_PUSCH_SUPPORTED,
	CA_PARAMETERSNR_PARALLELTXSRS_PUCCH_PUSCH_max = 0x7FFFFFFF
}CA_ParametersNR_parallelTxSRS_PUCCH_PUSCH_e;


typedef enum {
	CA_PARAMETERSNR_PARALLELTXPRACH_SRS_PUCCH_PUSCH_SUPPORTED,
	CA_PARAMETERSNR_PARALLELTXPRACH_SRS_PUCCH_PUSCH_max = 0x7FFFFFFF
}CA_ParametersNR_parallelTxPRACH_SRS_PUCCH_PUSCH_e;


typedef enum {
	CA_PARAMETERSNR_SIMULTANEOUSRXTXINTERBANDCA_SUPPORTED,
	CA_PARAMETERSNR_SIMULTANEOUSRXTXINTERBANDCA_max = 0x7FFFFFFF
}CA_ParametersNR_simultaneousRxTxInterBandCA_e;


typedef enum {
	CA_PARAMETERSNR_SIMULTANEOUSRXTXSUL_SUPPORTED,
	CA_PARAMETERSNR_SIMULTANEOUSRXTXSUL_max = 0x7FFFFFFF
}CA_ParametersNR_simultaneousRxTxSUL_e;


typedef enum {
	CA_PARAMETERSNR_DIFFNUMEROLOGYACROSSPUCCH_GROUP_SUPPORTED,
	CA_PARAMETERSNR_DIFFNUMEROLOGYACROSSPUCCH_GROUP_max = 0x7FFFFFFF
}CA_ParametersNR_diffNumerologyAcrossPUCCH_Group_e;


typedef enum {
	CA_PARAMETERSNR_DIFFNUMEROLOGYWITHINPUCCH_GROUP_SUPPORTED,
	CA_PARAMETERSNR_DIFFNUMEROLOGYWITHINPUCCH_GROUP_max = 0x7FFFFFFF
}CA_ParametersNR_diffNumerologyWithinPUCCH_Group_e;


typedef enum {
	CA_PARAMETERSNR_SUPPORTEDNUMBERTAG_N2,
	CA_PARAMETERSNR_SUPPORTEDNUMBERTAG_N3,
	CA_PARAMETERSNR_SUPPORTEDNUMBERTAG_N4,
	CA_PARAMETERSNR_SUPPORTEDNUMBERTAG_max = 0x7FFFFFFF
}CA_ParametersNR_supportedNumberTAG_e;


typedef struct {
	BOOLEAN                                                            multipleTimingAdvances_exist;
	CA_ParametersNR_multipleTimingAdvances_e                           multipleTimingAdvances;
	BOOLEAN                                                            parallelTxSRS_PUCCH_PUSCH_exist;
	CA_ParametersNR_parallelTxSRS_PUCCH_PUSCH_e                        parallelTxSRS_PUCCH_PUSCH;
	BOOLEAN                                                            parallelTxPRACH_SRS_PUCCH_PUSCH_exist;
	CA_ParametersNR_parallelTxPRACH_SRS_PUCCH_PUSCH_e                  parallelTxPRACH_SRS_PUCCH_PUSCH;
	BOOLEAN                                                            simultaneousRxTxInterBandCA_exist;
	CA_ParametersNR_simultaneousRxTxInterBandCA_e                      simultaneousRxTxInterBandCA;
	BOOLEAN                                                            simultaneousRxTxSUL_exist;
	CA_ParametersNR_simultaneousRxTxSUL_e                              simultaneousRxTxSUL;
	BOOLEAN                                                            diffNumerologyAcrossPUCCH_Group_exist;
	CA_ParametersNR_diffNumerologyAcrossPUCCH_Group_e                  diffNumerologyAcrossPUCCH_Group;
	BOOLEAN                                                            diffNumerologyWithinPUCCH_Group_exist;
	CA_ParametersNR_diffNumerologyWithinPUCCH_Group_e                  diffNumerologyWithinPUCCH_Group;
	BOOLEAN                                                            supportedNumberTAG_exist;
	CA_ParametersNR_supportedNumberTAG_e                               supportedNumberTAG;
	/* Extension marker start. */
}CA_ParametersNR_t;


extern void EncodeCA_ParametersNR(
	CA_ParametersNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCA_ParametersNR(
	CA_ParametersNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
