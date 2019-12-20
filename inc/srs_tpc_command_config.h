/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_tpc_command_config.h - this is the header file for message: SRS-TPC-CommandConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRS_TPC_COMMAND_CONFIG_H_
#define _SRS_TPC_COMMAND_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	BOOLEAN                                                            startingBitOfFormat2_3_exist;
	uint32                                                             startingBitOfFormat2_3;
	BOOLEAN                                                            fieldTypeFormat2_3_exist;
	uint32                                                             fieldTypeFormat2_3;
	/* Extension marker start. */
}SRS_TPC_CommandConfig_t;


extern void EncodeSRS_TPC_CommandConfig(
	SRS_TPC_CommandConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRS_TPC_CommandConfig(
	SRS_TPC_CommandConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
