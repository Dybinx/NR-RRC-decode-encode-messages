/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cell_group_config.h - this is the header file for message: CellGroupConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CELL_GROUP_CONFIG_H_
#define _CELL_GROUP_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "cell_group_id.h"
#include "rlc_bearer_config.h"
#include "logical_channel_identity.h"
#include "mac_cell_group_config.h"
#include "physical_cell_group_config.h"
#include "sp_cell_config.h"
#include "s_cell_config.h"
#include "s_cell_index.h"


typedef struct {
	uint32                                                             length;
	RLC_BearerConfig_t                                                 elm[maxLC_ID];
}CellGroupConfig_rlc_BearerToAddModList_t;


typedef struct {
	uint32                                                             length;
	LogicalChannelIdentity_t                                           elm[maxLC_ID];
}CellGroupConfig_rlc_BearerToReleaseList_t;


typedef struct {
	uint32                                                             length;
	SCellConfig_t                                                      elm[maxNrofSCells];
}CellGroupConfig_sCellToAddModList_t;


typedef struct {
	uint32                                                             length;
	SCellIndex_t                                                       elm[maxNrofSCells];
}CellGroupConfig_sCellToReleaseList_t;


typedef struct {
	CellGroupId_t                                                      cellGroupId;
	BOOLEAN                                                            rlc_BearerToAddModList_exist;
	CellGroupConfig_rlc_BearerToAddModList_t                           rlc_BearerToAddModList;
	BOOLEAN                                                            rlc_BearerToReleaseList_exist;
	CellGroupConfig_rlc_BearerToReleaseList_t                          rlc_BearerToReleaseList;
	BOOLEAN                                                            mac_CellGroupConfig_exist;
	MAC_CellGroupConfig_t                                              mac_CellGroupConfig;
	BOOLEAN                                                            physicalCellGroupConfig_exist;
	PhysicalCellGroupConfig_t                                          physicalCellGroupConfig;
	BOOLEAN                                                            spCellConfig_exist;
	SpCellConfig_t                                                     spCellConfig;
	BOOLEAN                                                            sCellToAddModList_exist;
	CellGroupConfig_sCellToAddModList_t                                sCellToAddModList;
	BOOLEAN                                                            sCellToReleaseList_exist;
	CellGroupConfig_sCellToReleaseList_t                               sCellToReleaseList;
	/* Extension marker start. */
}CellGroupConfig_t;


extern void EncodeCellGroupConfig(
	CellGroupConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCellGroupConfig(
	CellGroupConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
