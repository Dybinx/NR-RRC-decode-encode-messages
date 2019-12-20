/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_tpc_command_config.h - this is the header file for message: PUSCH-TPC-CommandConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUSCH_TPC_COMMAND_CONFIG_H_
#define _PUSCH_TPC_COMMAND_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "serv_cell_index.h"


typedef struct {
	BOOLEAN                                                            tpc_Index_exist;
	uint32                                                             tpc_Index;
	BOOLEAN                                                            tpc_IndexSUL_exist;
	uint32                                                             tpc_IndexSUL;
	BOOLEAN                                                            targetCell_exist;
	ServCellIndex_t                                                    targetCell;
	/* Extension marker start. */
}PUSCH_TPC_CommandConfig_t;


extern void EncodePUSCH_TPC_CommandConfig(
	PUSCH_TPC_CommandConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUSCH_TPC_CommandConfig(
	PUSCH_TPC_CommandConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
