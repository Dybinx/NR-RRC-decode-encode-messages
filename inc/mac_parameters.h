/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mac_parameters.h - this is the header file for message: MAC-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MAC_PARAMETERS_H_
#define _MAC_PARAMETERS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "mac_parameters_common.h"
#include "mac_parameters_xdd_diff.h"


typedef struct {
	BOOLEAN                                                            mac_ParametersCommon_exist;
	MAC_ParametersCommon_t                                             mac_ParametersCommon;
	BOOLEAN                                                            mac_ParametersXDD_Diff_exist;
	MAC_ParametersXDD_Diff_t                                           mac_ParametersXDD_Diff;
}MAC_Parameters_t;


extern void EncodeMAC_Parameters(
	MAC_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMAC_Parameters(
	MAC_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
