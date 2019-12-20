/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sps_config.h - this is the header file for message: SPS-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SPS_CONFIG_H_
#define _SPS_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pucch_resource_id.h"


typedef enum {
	SPS_CONFIG_PERIODICITY_MS10,
	SPS_CONFIG_PERIODICITY_MS20,
	SPS_CONFIG_PERIODICITY_MS32,
	SPS_CONFIG_PERIODICITY_MS40,
	SPS_CONFIG_PERIODICITY_MS64,
	SPS_CONFIG_PERIODICITY_MS80,
	SPS_CONFIG_PERIODICITY_MS128,
	SPS_CONFIG_PERIODICITY_MS160,
	SPS_CONFIG_PERIODICITY_MS320,
	SPS_CONFIG_PERIODICITY_MS640,
	SPS_CONFIG_PERIODICITY_SPARE6,
	SPS_CONFIG_PERIODICITY_SPARE5,
	SPS_CONFIG_PERIODICITY_SPARE4,
	SPS_CONFIG_PERIODICITY_SPARE3,
	SPS_CONFIG_PERIODICITY_SPARE2,
	SPS_CONFIG_PERIODICITY_SPARE1,
	SPS_CONFIG_PERIODICITY_max = 0x7FFFFFFF
}SPS_Config_periodicity_e;


typedef struct {
	SPS_Config_periodicity_e                                           periodicity;
	uint32                                                             nrofHARQ_Processes;
	BOOLEAN                                                            n1PUCCH_AN_exist;
	PUCCH_ResourceId_t                                                 n1PUCCH_AN;
}SPS_Config_t;


extern void EncodeSPS_Config(
	SPS_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSPS_Config(
	SPS_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
