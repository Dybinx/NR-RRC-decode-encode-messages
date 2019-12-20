/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rach_config_generic.h - this is the header file for message: RACH-ConfigGeneric
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RACH_CONFIG_GENERIC_H_
#define _RACH_CONFIG_GENERIC_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	RACH_CONFIGGENERIC_MSG1_FDM_ONE,
	RACH_CONFIGGENERIC_MSG1_FDM_TWO,
	RACH_CONFIGGENERIC_MSG1_FDM_FOUR,
	RACH_CONFIGGENERIC_MSG1_FDM_EIGHT,
	RACH_CONFIGGENERIC_MSG1_FDM_max = 0x7FFFFFFF
}RACH_ConfigGeneric_msg1_FDM_e;


typedef enum {
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_N3,
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_N4,
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_N5,
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_N6,
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_N7,
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_N8,
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_N10,
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_N20,
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_N50,
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_N100,
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_N200,
	RACH_CONFIGGENERIC_PREAMBLETRANSMAX_max = 0x7FFFFFFF
}RACH_ConfigGeneric_preambleTransMax_e;


typedef enum {
	RACH_CONFIGGENERIC_POWERRAMPINGSTEP_DB0,
	RACH_CONFIGGENERIC_POWERRAMPINGSTEP_DB2,
	RACH_CONFIGGENERIC_POWERRAMPINGSTEP_DB4,
	RACH_CONFIGGENERIC_POWERRAMPINGSTEP_DB6,
	RACH_CONFIGGENERIC_POWERRAMPINGSTEP_max = 0x7FFFFFFF
}RACH_ConfigGeneric_powerRampingStep_e;


typedef enum {
	RACH_CONFIGGENERIC_RA_RESPONSEWINDOW_SL1,
	RACH_CONFIGGENERIC_RA_RESPONSEWINDOW_SL2,
	RACH_CONFIGGENERIC_RA_RESPONSEWINDOW_SL4,
	RACH_CONFIGGENERIC_RA_RESPONSEWINDOW_SL8,
	RACH_CONFIGGENERIC_RA_RESPONSEWINDOW_SL10,
	RACH_CONFIGGENERIC_RA_RESPONSEWINDOW_SL20,
	RACH_CONFIGGENERIC_RA_RESPONSEWINDOW_SL40,
	RACH_CONFIGGENERIC_RA_RESPONSEWINDOW_SL80,
	RACH_CONFIGGENERIC_RA_RESPONSEWINDOW_max = 0x7FFFFFFF
}RACH_ConfigGeneric_ra_ResponseWindow_e;


typedef struct {
	uint32                                                             prach_ConfigurationIndex;
	RACH_ConfigGeneric_msg1_FDM_e                                      msg1_FDM;
	uint32                                                             msg1_FrequencyStart;
	uint32                                                             zeroCorrelationZoneConfig;
	int32                                                              preambleReceivedTargetPower;
	RACH_ConfigGeneric_preambleTransMax_e                              preambleTransMax;
	RACH_ConfigGeneric_powerRampingStep_e                              powerRampingStep;
	RACH_ConfigGeneric_ra_ResponseWindow_e                             ra_ResponseWindow;
	/* Extension marker start. */
}RACH_ConfigGeneric_t;


extern void EncodeRACH_ConfigGeneric(
	RACH_ConfigGeneric_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRACH_ConfigGeneric(
	RACH_ConfigGeneric_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
