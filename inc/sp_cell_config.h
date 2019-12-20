/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sp_cell_config.h - this is the header file for message: SpCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SP_CELL_CONFIG_H_
#define _SP_CELL_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "serv_cell_index.h"
#include "reconfiguration_with_sync.h"
#include "rlf_timers_and_constants.h"
#include "serving_cell_config.h"


typedef struct {
	uint32                                                             dummy;
}SpCellConfig_release_t;


typedef enum {
	SPCELLCONFIG_RLF_TIMERSANDCONSTANTS_RELEASE,
	SPCELLCONFIG_RLF_TIMERSANDCONSTANTS_SETUP,
	SPCELLCONFIG_RLF_TIMERSANDCONSTANTS_max = 0x7FFFFFFF
}SpCellConfig_rlf_TimersAndConstants_e;


/* union corresponding asn: SpCellConfig_rlf_TimersAndConstants */
typedef union {
	SpCellConfig_release_t                                             release;
	RLF_TimersAndConstants_t                                           setup;
}SpCellConfig_rlf_TimersAndConstants_u;


/* struct corresponding asn: SpCellConfig_rlf_TimersAndConstants */
typedef struct {
	SpCellConfig_rlf_TimersAndConstants_e                              type;
	SpCellConfig_rlf_TimersAndConstants_u                              a;
}SpCellConfig_rlf_TimersAndConstants_t;


typedef enum {
	SPCELLCONFIG_RLMINSYNCOUTOFSYNCTHRESHOLD_N1,
	SPCELLCONFIG_RLMINSYNCOUTOFSYNCTHRESHOLD_max = 0x7FFFFFFF
}SpCellConfig_rlmInSyncOutOfSyncThreshold_e;


typedef struct {
	BOOLEAN                                                            servCellIndex_exist;
	ServCellIndex_t                                                    servCellIndex;
	BOOLEAN                                                            reconfigurationWithSync_exist;
	ReconfigurationWithSync_t                                          reconfigurationWithSync;
	BOOLEAN                                                            rlf_TimersAndConstants_exist;
	SpCellConfig_rlf_TimersAndConstants_t                              rlf_TimersAndConstants;
	BOOLEAN                                                            rlmInSyncOutOfSyncThreshold_exist;
	SpCellConfig_rlmInSyncOutOfSyncThreshold_e                         rlmInSyncOutOfSyncThreshold;
	BOOLEAN                                                            spCellConfigDedicated_exist;
	ServingCellConfig_t                                                spCellConfigDedicated;
	/* Extension marker start. */
}SpCellConfig_t;


extern void EncodeSpCellConfig(
	SpCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSpCellConfig(
	SpCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
