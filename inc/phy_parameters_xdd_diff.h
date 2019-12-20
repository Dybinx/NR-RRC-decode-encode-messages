/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters_xdd_diff.h - this is the header file for message: Phy-ParametersXDD-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PHY_PARAMETERS_XDD_DIFF_H_
#define _PHY_PARAMETERS_XDD_DIFF_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PHY_PARAMETERSXDD_DIFF_DYNAMICSFI_SUPPORTED,
	PHY_PARAMETERSXDD_DIFF_DYNAMICSFI_max = 0x7FFFFFFF
}Phy_ParametersXDD_Diff_dynamicSFI_e;


typedef enum {
	PHY_PARAMETERSXDD_DIFF_TWOPUCCH_F0_2_CONSECSYMBOLS_SUPPORTED,
	PHY_PARAMETERSXDD_DIFF_TWOPUCCH_F0_2_CONSECSYMBOLS_max = 0x7FFFFFFF
}Phy_ParametersXDD_Diff_twoPUCCH_F0_2_ConsecSymbols_e;


typedef enum {
	PHY_PARAMETERSXDD_DIFF_TWODIFFERENTTPC_LOOP_PUSCH_SUPPORTED,
	PHY_PARAMETERSXDD_DIFF_TWODIFFERENTTPC_LOOP_PUSCH_max = 0x7FFFFFFF
}Phy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUSCH_e;


typedef enum {
	PHY_PARAMETERSXDD_DIFF_TWODIFFERENTTPC_LOOP_PUCCH_SUPPORTED,
	PHY_PARAMETERSXDD_DIFF_TWODIFFERENTTPC_LOOP_PUCCH_max = 0x7FFFFFFF
}Phy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUCCH_e;


typedef struct {
	BOOLEAN                                                            dynamicSFI_exist;
	Phy_ParametersXDD_Diff_dynamicSFI_e                                dynamicSFI;
	BOOLEAN                                                            twoPUCCH_F0_2_ConsecSymbols_exist;
	Phy_ParametersXDD_Diff_twoPUCCH_F0_2_ConsecSymbols_e               twoPUCCH_F0_2_ConsecSymbols;
	BOOLEAN                                                            twoDifferentTPC_Loop_PUSCH_exist;
	Phy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUSCH_e                twoDifferentTPC_Loop_PUSCH;
	BOOLEAN                                                            twoDifferentTPC_Loop_PUCCH_exist;
	Phy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUCCH_e                twoDifferentTPC_Loop_PUCCH;
	/* Extension marker start. */
}Phy_ParametersXDD_Diff_t;


extern void EncodePhy_ParametersXDD_Diff(
	Phy_ParametersXDD_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePhy_ParametersXDD_Diff(
	Phy_ParametersXDD_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
