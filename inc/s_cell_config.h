/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * s_cell_config.h - this is the header file for message: SCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _S_CELL_CONFIG_H_
#define _S_CELL_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "s_cell_index.h"
#include "serving_cell_config_common.h"
#include "serving_cell_config.h"


typedef struct {
	SCellIndex_t                                                       sCellIndex;
	BOOLEAN                                                            sCellConfigCommon_exist;
	ServingCellConfigCommon_t                                          sCellConfigCommon;
	BOOLEAN                                                            sCellConfigDedicated_exist;
	ServingCellConfig_t                                                sCellConfigDedicated;
	/* Extension marker start. */
}SCellConfig_t;


extern void EncodeSCellConfig(
	SCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSCellConfig(
	SCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
