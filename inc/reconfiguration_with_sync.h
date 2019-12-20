/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * reconfiguration_with_sync.h - this is the header file for message: ReconfigurationWithSync
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RECONFIGURATION_WITH_SYNC_H_
#define _RECONFIGURATION_WITH_SYNC_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "serving_cell_config_common.h"
#include "rnti_value.h"
#include "rach_config_dedicated.h"
#include "rach_config_dedicated.h"


typedef enum {
	RECONFIGURATIONWITHSYNC_T304_MS50,
	RECONFIGURATIONWITHSYNC_T304_MS100,
	RECONFIGURATIONWITHSYNC_T304_MS150,
	RECONFIGURATIONWITHSYNC_T304_MS200,
	RECONFIGURATIONWITHSYNC_T304_MS500,
	RECONFIGURATIONWITHSYNC_T304_MS1000,
	RECONFIGURATIONWITHSYNC_T304_MS2000,
	RECONFIGURATIONWITHSYNC_T304_MS10000,
	RECONFIGURATIONWITHSYNC_T304_max = 0x7FFFFFFF
}ReconfigurationWithSync_t304_e;


typedef enum {
	RECONFIGURATIONWITHSYNC_RACH_CONFIGDEDICATED_UPLINK,
	RECONFIGURATIONWITHSYNC_RACH_CONFIGDEDICATED_SUPPLEMENTARYUPLINK,
	RECONFIGURATIONWITHSYNC_RACH_CONFIGDEDICATED_max = 0x7FFFFFFF
}ReconfigurationWithSync_rach_ConfigDedicated_e;


/* union corresponding asn: ReconfigurationWithSync_rach_ConfigDedicated */
typedef union {
	RACH_ConfigDedicated_t                                             uplink;
	RACH_ConfigDedicated_t                                             supplementaryUplink;
}ReconfigurationWithSync_rach_ConfigDedicated_u;


/* struct corresponding asn: ReconfigurationWithSync_rach_ConfigDedicated */
typedef struct {
	ReconfigurationWithSync_rach_ConfigDedicated_e                     type;
	ReconfigurationWithSync_rach_ConfigDedicated_u                     a;
}ReconfigurationWithSync_rach_ConfigDedicated_t;


typedef struct {
	BOOLEAN                                                            spCellConfigCommon_exist;
	ServingCellConfigCommon_t                                          spCellConfigCommon;
	RNTI_Value_t                                                       newUE_Identity;
	ReconfigurationWithSync_t304_e                                     t304;
	BOOLEAN                                                            rach_ConfigDedicated_exist;
	ReconfigurationWithSync_rach_ConfigDedicated_t                     rach_ConfigDedicated;
	/* Extension marker start. */
}ReconfigurationWithSync_t;


extern void EncodeReconfigurationWithSync(
	ReconfigurationWithSync_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeReconfigurationWithSync(
	ReconfigurationWithSync_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
