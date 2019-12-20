/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * general_parameters_mrdc_xdd_diff.h - this is the header file for message: GeneralParametersMRDC-XDD-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _GENERAL_PARAMETERS_MRDC_XDD_DIFF_H_
#define _GENERAL_PARAMETERS_MRDC_XDD_DIFF_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	GENERALPARAMETERSMRDC_XDD_DIFF_SPLITSRB_WITHONEUL_PATH_SUPPORTED,
	GENERALPARAMETERSMRDC_XDD_DIFF_SPLITSRB_WITHONEUL_PATH_max = 0x7FFFFFFF
}GeneralParametersMRDC_XDD_Diff_splitSRB_WithOneUL_Path_e;


typedef enum {
	GENERALPARAMETERSMRDC_XDD_DIFF_SPLITDRB_WITHUL_BOTH_MCG_SCG_SUPPORTED,
	GENERALPARAMETERSMRDC_XDD_DIFF_SPLITDRB_WITHUL_BOTH_MCG_SCG_max = 0x7FFFFFFF
}GeneralParametersMRDC_XDD_Diff_splitDRB_withUL_Both_MCG_SCG_e;


typedef enum {
	GENERALPARAMETERSMRDC_XDD_DIFF_SRB3_SUPPORTED,
	GENERALPARAMETERSMRDC_XDD_DIFF_SRB3_max = 0x7FFFFFFF
}GeneralParametersMRDC_XDD_Diff_srb3_e;


typedef struct {
	BOOLEAN                                                            splitSRB_WithOneUL_Path_exist;
	GeneralParametersMRDC_XDD_Diff_splitSRB_WithOneUL_Path_e           splitSRB_WithOneUL_Path;
	BOOLEAN                                                            splitDRB_withUL_Both_MCG_SCG_exist;
	GeneralParametersMRDC_XDD_Diff_splitDRB_withUL_Both_MCG_SCG_e      splitDRB_withUL_Both_MCG_SCG;
	BOOLEAN                                                            srb3_exist;
	GeneralParametersMRDC_XDD_Diff_srb3_e                              srb3;
	/* Extension marker start. */
}GeneralParametersMRDC_XDD_Diff_t;


extern void EncodeGeneralParametersMRDC_XDD_Diff(
	GeneralParametersMRDC_XDD_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeGeneralParametersMRDC_XDD_Diff(
	GeneralParametersMRDC_XDD_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
