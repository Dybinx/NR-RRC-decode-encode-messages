/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_frx_diff.h - this is the header file for message: MeasParametersFRX-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_PARAMETERS_FRX_DIFF_H_
#define _MEAS_PARAMETERS_FRX_DIFF_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MEASPARAMETERSFRX_DIFF_SS_SINR_MEAS_SUPPORTED,
	MEASPARAMETERSFRX_DIFF_SS_SINR_MEAS_max = 0x7FFFFFFF
}MeasParametersFRX_Diff_ss_SINR_Meas_e;


typedef enum {
	MEASPARAMETERSFRX_DIFF_CSI_RSRP_ANDRSRQ_MEASWITHSSB_SUPPORTED,
	MEASPARAMETERSFRX_DIFF_CSI_RSRP_ANDRSRQ_MEASWITHSSB_max = 0x7FFFFFFF
}MeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithSSB_e;


typedef enum {
	MEASPARAMETERSFRX_DIFF_CSI_RSRP_ANDRSRQ_MEASWITHOUTSSB_SUPPORTED,
	MEASPARAMETERSFRX_DIFF_CSI_RSRP_ANDRSRQ_MEASWITHOUTSSB_max = 0x7FFFFFFF
}MeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithoutSSB_e;


typedef enum {
	MEASPARAMETERSFRX_DIFF_CSI_SINR_MEAS_SUPPORTED,
	MEASPARAMETERSFRX_DIFF_CSI_SINR_MEAS_max = 0x7FFFFFFF
}MeasParametersFRX_Diff_csi_SINR_Meas_e;


typedef enum {
	MEASPARAMETERSFRX_DIFF_CSI_RS_RLM_SUPPORTED,
	MEASPARAMETERSFRX_DIFF_CSI_RS_RLM_max = 0x7FFFFFFF
}MeasParametersFRX_Diff_csi_RS_RLM_e;


typedef struct {
	BOOLEAN                                                            ss_SINR_Meas_exist;
	MeasParametersFRX_Diff_ss_SINR_Meas_e                              ss_SINR_Meas;
	BOOLEAN                                                            csi_RSRP_AndRSRQ_MeasWithSSB_exist;
	MeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithSSB_e              csi_RSRP_AndRSRQ_MeasWithSSB;
	BOOLEAN                                                            csi_RSRP_AndRSRQ_MeasWithoutSSB_exist;
	MeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithoutSSB_e           csi_RSRP_AndRSRQ_MeasWithoutSSB;
	BOOLEAN                                                            csi_SINR_Meas_exist;
	MeasParametersFRX_Diff_csi_SINR_Meas_e                             csi_SINR_Meas;
	BOOLEAN                                                            csi_RS_RLM_exist;
	MeasParametersFRX_Diff_csi_RS_RLM_e                                csi_RS_RLM;
	/* Extension marker start. */
}MeasParametersFRX_Diff_t;


extern void EncodeMeasParametersFRX_Diff(
	MeasParametersFRX_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasParametersFRX_Diff(
	MeasParametersFRX_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
