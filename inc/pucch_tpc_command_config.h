/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_tpc_command_config.h - this is the header file for message: PUCCH-TPC-CommandConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_TPC_COMMAND_CONFIG_H_
#define _PUCCH_TPC_COMMAND_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	BOOLEAN                                                            tpc_IndexPCell_exist;
	uint32                                                             tpc_IndexPCell;
	BOOLEAN                                                            tpc_IndexPUCCH_SCell_exist;
	uint32                                                             tpc_IndexPUCCH_SCell;
	/* Extension marker start. */
}PUCCH_TPC_CommandConfig_t;


extern void EncodePUCCH_TPC_CommandConfig(
	PUCCH_TPC_CommandConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_TPC_CommandConfig(
	PUCCH_TPC_CommandConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
