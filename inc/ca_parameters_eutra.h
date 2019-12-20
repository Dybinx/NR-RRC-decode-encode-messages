/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ca_parameters_eutra.h - this is the header file for message: CA-ParametersEUTRA
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CA_PARAMETERS_EUTRA_H_
#define _CA_PARAMETERS_EUTRA_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	CA_PARAMETERSEUTRA_MULTIPLETIMINGADVANCE_SUPPORTED,
	CA_PARAMETERSEUTRA_MULTIPLETIMINGADVANCE_max = 0x7FFFFFFF
}CA_ParametersEUTRA_multipleTimingAdvance_e;


typedef enum {
	CA_PARAMETERSEUTRA_SIMULTANEOUSRX_TX_SUPPORTED,
	CA_PARAMETERSEUTRA_SIMULTANEOUSRX_TX_max = 0x7FFFFFFF
}CA_ParametersEUTRA_simultaneousRx_Tx_e;


/* struct corresponding asn: CA_ParametersEUTRA_supportedNAICS_2CRS_AP */
/* ASN: BIT STRING SIZE(1, 8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CA_ParametersEUTRA_supportedNAICS_2CRS_AP_t;


typedef enum {
	CA_PARAMETERSEUTRA_ADDITIONALRX_TX_PERFORMANCEREQ_SUPPORTED,
	CA_PARAMETERSEUTRA_ADDITIONALRX_TX_PERFORMANCEREQ_max = 0x7FFFFFFF
}CA_ParametersEUTRA_additionalRx_Tx_PerformanceReq_e;


typedef enum {
	CA_PARAMETERSEUTRA_UE_CA_POWERCLASS_N_CLASS2,
	CA_PARAMETERSEUTRA_UE_CA_POWERCLASS_N_max = 0x7FFFFFFF
}CA_ParametersEUTRA_ue_CA_PowerClass_N_e;


typedef struct {
	BOOLEAN                                                            multipleTimingAdvance_exist;
	CA_ParametersEUTRA_multipleTimingAdvance_e                         multipleTimingAdvance;
	BOOLEAN                                                            simultaneousRx_Tx_exist;
	CA_ParametersEUTRA_simultaneousRx_Tx_e                             simultaneousRx_Tx;
	BOOLEAN                                                            supportedNAICS_2CRS_AP_exist;
	CA_ParametersEUTRA_supportedNAICS_2CRS_AP_t                        supportedNAICS_2CRS_AP;
	BOOLEAN                                                            additionalRx_Tx_PerformanceReq_exist;
	CA_ParametersEUTRA_additionalRx_Tx_PerformanceReq_e                additionalRx_Tx_PerformanceReq;
	BOOLEAN                                                            ue_CA_PowerClass_N_exist;
	CA_ParametersEUTRA_ue_CA_PowerClass_N_e                            ue_CA_PowerClass_N;
	/* Extension marker start. */
}CA_ParametersEUTRA_t;


extern void EncodeCA_ParametersEUTRA(
	CA_ParametersEUTRA_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCA_ParametersEUTRA(
	CA_ParametersEUTRA_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
