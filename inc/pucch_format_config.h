/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_format_config.h - this is the header file for message: PUCCH-FormatConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_FORMAT_CONFIG_H_
#define _PUCCH_FORMAT_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pucch_max_code_rate.h"


typedef enum {
	PUCCH_FORMATCONFIG_INTERSLOTFREQUENCYHOPPING_ENABLED,
	PUCCH_FORMATCONFIG_INTERSLOTFREQUENCYHOPPING_max = 0x7FFFFFFF
}PUCCH_FormatConfig_interslotFrequencyHopping_e;


typedef enum {
	PUCCH_FORMATCONFIG_ADDITIONALDMRS_TRUE,
	PUCCH_FORMATCONFIG_ADDITIONALDMRS_max = 0x7FFFFFFF
}PUCCH_FormatConfig_additionalDMRS_e;


typedef enum {
	PUCCH_FORMATCONFIG_NROFSLOTS_N2,
	PUCCH_FORMATCONFIG_NROFSLOTS_N4,
	PUCCH_FORMATCONFIG_NROFSLOTS_N8,
	PUCCH_FORMATCONFIG_NROFSLOTS_max = 0x7FFFFFFF
}PUCCH_FormatConfig_nrofSlots_e;


typedef enum {
	PUCCH_FORMATCONFIG_PI2BPSK_ENABLED,
	PUCCH_FORMATCONFIG_PI2BPSK_max = 0x7FFFFFFF
}PUCCH_FormatConfig_pi2BPSK_e;


typedef enum {
	PUCCH_FORMATCONFIG_SIMULTANEOUSHARQ_ACK_CSI_TRUE,
	PUCCH_FORMATCONFIG_SIMULTANEOUSHARQ_ACK_CSI_max = 0x7FFFFFFF
}PUCCH_FormatConfig_simultaneousHARQ_ACK_CSI_e;


typedef struct {
	BOOLEAN                                                            interslotFrequencyHopping_exist;
	PUCCH_FormatConfig_interslotFrequencyHopping_e                     interslotFrequencyHopping;
	BOOLEAN                                                            additionalDMRS_exist;
	PUCCH_FormatConfig_additionalDMRS_e                                additionalDMRS;
	BOOLEAN                                                            maxCodeRate_exist;
	PUCCH_MaxCodeRate_e                                                maxCodeRate;
	BOOLEAN                                                            nrofSlots_exist;
	PUCCH_FormatConfig_nrofSlots_e                                     nrofSlots;
	BOOLEAN                                                            pi2BPSK_exist;
	PUCCH_FormatConfig_pi2BPSK_e                                       pi2BPSK;
	BOOLEAN                                                            simultaneousHARQ_ACK_CSI_exist;
	PUCCH_FormatConfig_simultaneousHARQ_ACK_CSI_e                      simultaneousHARQ_ACK_CSI;
}PUCCH_FormatConfig_t;


extern void EncodePUCCH_FormatConfig(
	PUCCH_FormatConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_FormatConfig(
	PUCCH_FormatConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
