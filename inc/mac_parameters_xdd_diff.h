/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mac_parameters_xdd_diff.h - this is the header file for message: MAC-ParametersXDD-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MAC_PARAMETERS_XDD_DIFF_H_
#define _MAC_PARAMETERS_XDD_DIFF_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MAC_PARAMETERSXDD_DIFF_SKIPUPLINKTXDYNAMIC_SUPPORTED,
	MAC_PARAMETERSXDD_DIFF_SKIPUPLINKTXDYNAMIC_max = 0x7FFFFFFF
}MAC_ParametersXDD_Diff_skipUplinkTxDynamic_e;


typedef enum {
	MAC_PARAMETERSXDD_DIFF_LOGICALCHANNELSR_DELAYTIMER_SUPPORTED,
	MAC_PARAMETERSXDD_DIFF_LOGICALCHANNELSR_DELAYTIMER_max = 0x7FFFFFFF
}MAC_ParametersXDD_Diff_logicalChannelSR_DelayTimer_e;


typedef enum {
	MAC_PARAMETERSXDD_DIFF_LONGDRX_CYCLE_SUPPORTED,
	MAC_PARAMETERSXDD_DIFF_LONGDRX_CYCLE_max = 0x7FFFFFFF
}MAC_ParametersXDD_Diff_longDRX_Cycle_e;


typedef enum {
	MAC_PARAMETERSXDD_DIFF_SHORTDRX_CYCLE_SUPPORTED,
	MAC_PARAMETERSXDD_DIFF_SHORTDRX_CYCLE_max = 0x7FFFFFFF
}MAC_ParametersXDD_Diff_shortDRX_Cycle_e;


typedef enum {
	MAC_PARAMETERSXDD_DIFF_MULTIPLESR_CONFIGURATIONS_SUPPORTED,
	MAC_PARAMETERSXDD_DIFF_MULTIPLESR_CONFIGURATIONS_max = 0x7FFFFFFF
}MAC_ParametersXDD_Diff_multipleSR_Configurations_e;


typedef enum {
	MAC_PARAMETERSXDD_DIFF_MULTIPLECONFIGUREDGRANTS_SUPPORTED,
	MAC_PARAMETERSXDD_DIFF_MULTIPLECONFIGUREDGRANTS_max = 0x7FFFFFFF
}MAC_ParametersXDD_Diff_multipleConfiguredGrants_e;


typedef struct {
	BOOLEAN                                                            skipUplinkTxDynamic_exist;
	MAC_ParametersXDD_Diff_skipUplinkTxDynamic_e                       skipUplinkTxDynamic;
	BOOLEAN                                                            logicalChannelSR_DelayTimer_exist;
	MAC_ParametersXDD_Diff_logicalChannelSR_DelayTimer_e               logicalChannelSR_DelayTimer;
	BOOLEAN                                                            longDRX_Cycle_exist;
	MAC_ParametersXDD_Diff_longDRX_Cycle_e                             longDRX_Cycle;
	BOOLEAN                                                            shortDRX_Cycle_exist;
	MAC_ParametersXDD_Diff_shortDRX_Cycle_e                            shortDRX_Cycle;
	BOOLEAN                                                            multipleSR_Configurations_exist;
	MAC_ParametersXDD_Diff_multipleSR_Configurations_e                 multipleSR_Configurations;
	BOOLEAN                                                            multipleConfiguredGrants_exist;
	MAC_ParametersXDD_Diff_multipleConfiguredGrants_e                  multipleConfiguredGrants;
	/* Extension marker start. */
}MAC_ParametersXDD_Diff_t;


extern void EncodeMAC_ParametersXDD_Diff(
	MAC_ParametersXDD_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMAC_ParametersXDD_Diff(
	MAC_ParametersXDD_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
