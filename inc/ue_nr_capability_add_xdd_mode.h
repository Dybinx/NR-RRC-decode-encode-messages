/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_nr_capability_add_xdd_mode.h - this is the header file for message: UE-NR-CapabilityAddXDD-Mode
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UE_NR_CAPABILITY_ADD_XDD_MODE_H_
#define _UE_NR_CAPABILITY_ADD_XDD_MODE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "phy_parameters_xdd_diff.h"
#include "mac_parameters_xdd_diff.h"
#include "meas_parameters_xdd_diff.h"


typedef struct {
	BOOLEAN                                                            phy_ParametersXDD_Diff_exist;
	Phy_ParametersXDD_Diff_t                                           phy_ParametersXDD_Diff;
	BOOLEAN                                                            mac_ParametersXDD_Diff_exist;
	MAC_ParametersXDD_Diff_t                                           mac_ParametersXDD_Diff;
	BOOLEAN                                                            measParametersXDD_Diff_exist;
	MeasParametersXDD_Diff_t                                           measParametersXDD_Diff;
}UE_NR_CapabilityAddXDD_Mode_t;


extern void EncodeUE_NR_CapabilityAddXDD_Mode(
	UE_NR_CapabilityAddXDD_Mode_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUE_NR_CapabilityAddXDD_Mode(
	UE_NR_CapabilityAddXDD_Mode_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
