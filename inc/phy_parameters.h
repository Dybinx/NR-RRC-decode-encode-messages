/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters.h - this is the header file for message: Phy-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PHY_PARAMETERS_H_
#define _PHY_PARAMETERS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "phy_parameters_common.h"
#include "phy_parameters_xdd_diff.h"
#include "phy_parameters_frx_diff.h"
#include "phy_parameters_fr1.h"
#include "phy_parameters_fr2.h"


typedef struct {
	BOOLEAN                                                            phy_ParametersCommon_exist;
	Phy_ParametersCommon_t                                             phy_ParametersCommon;
	BOOLEAN                                                            phy_ParametersXDD_Diff_exist;
	Phy_ParametersXDD_Diff_t                                           phy_ParametersXDD_Diff;
	BOOLEAN                                                            phy_ParametersFRX_Diff_exist;
	Phy_ParametersFRX_Diff_t                                           phy_ParametersFRX_Diff;
	BOOLEAN                                                            phy_ParametersFR1_exist;
	Phy_ParametersFR1_t                                                phy_ParametersFR1;
	BOOLEAN                                                            phy_ParametersFR2_exist;
	Phy_ParametersFR2_t                                                phy_ParametersFR2;
}Phy_Parameters_t;


extern void EncodePhy_Parameters(
	Phy_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePhy_Parameters(
	Phy_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
