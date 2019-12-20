/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mac_cell_group_config.h - this is the header file for message: MAC-CellGroupConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MAC_CELL_GROUP_CONFIG_H_
#define _MAC_CELL_GROUP_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "drx_config.h"
#include "scheduling_request_config.h"
#include "bsr_config.h"
#include "tag_config.h"
#include "phr_config.h"


typedef struct {
	uint32                                                             dummy;
}MAC_CellGroupConfig_release_t;


typedef enum {
	MAC_CELLGROUPCONFIG_DRX_CONFIG_RELEASE,
	MAC_CELLGROUPCONFIG_DRX_CONFIG_SETUP,
	MAC_CELLGROUPCONFIG_DRX_CONFIG_max = 0x7FFFFFFF
}MAC_CellGroupConfig_drx_Config_e;


/* union corresponding asn: MAC_CellGroupConfig_drx_Config */
typedef union {
	MAC_CellGroupConfig_release_t                                      release;
	DRX_Config_t                                                       setup;
}MAC_CellGroupConfig_drx_Config_u;


/* struct corresponding asn: MAC_CellGroupConfig_drx_Config */
typedef struct {
	MAC_CellGroupConfig_drx_Config_e                                   type;
	MAC_CellGroupConfig_drx_Config_u                                   a;
}MAC_CellGroupConfig_drx_Config_t;


typedef struct {
	uint32                                                             dummy;
}MAC_CellGroupConfig_release_1_t;


typedef enum {
	MAC_CELLGROUPCONFIG_PHR_CONFIG_RELEASE,
	MAC_CELLGROUPCONFIG_PHR_CONFIG_SETUP,
	MAC_CELLGROUPCONFIG_PHR_CONFIG_max = 0x7FFFFFFF
}MAC_CellGroupConfig_phr_Config_e;


/* union corresponding asn: MAC_CellGroupConfig_phr_Config */
typedef union {
	MAC_CellGroupConfig_release_1_t                                    release;
	PHR_Config_t                                                       setup;
}MAC_CellGroupConfig_phr_Config_u;


/* struct corresponding asn: MAC_CellGroupConfig_phr_Config */
typedef struct {
	MAC_CellGroupConfig_phr_Config_e                                   type;
	MAC_CellGroupConfig_phr_Config_u                                   a;
}MAC_CellGroupConfig_phr_Config_t;


typedef struct {
	BOOLEAN                                                            drx_Config_exist;
	MAC_CellGroupConfig_drx_Config_t                                   drx_Config;
	BOOLEAN                                                            schedulingRequestConfig_exist;
	SchedulingRequestConfig_t                                          schedulingRequestConfig;
	BOOLEAN                                                            bsr_Config_exist;
	BSR_Config_t                                                       bsr_Config;
	BOOLEAN                                                            tag_Config_exist;
	TAG_Config_t                                                       tag_Config;
	BOOLEAN                                                            phr_Config_exist;
	MAC_CellGroupConfig_phr_Config_t                                   phr_Config;
	BOOLEAN                                                            skipUplinkTxDynamic;
	/* Extension marker start. */
}MAC_CellGroupConfig_t;


extern void EncodeMAC_CellGroupConfig(
	MAC_CellGroupConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMAC_CellGroupConfig(
	MAC_CellGroupConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
