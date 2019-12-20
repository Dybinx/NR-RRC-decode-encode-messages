/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdcch_config.h - this is the header file for message: PDCCH-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PDCCH_CONFIG_H_
#define _PDCCH_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "control_resource_set.h"
#include "control_resource_set_id.h"
#include "search_space.h"
#include "search_space_id.h"
#include "downlink_preemption.h"
#include "pusch_tpc_command_config.h"
#include "pucch_tpc_command_config.h"
#include "srs_tpc_command_config.h"


typedef struct {
	uint32                                                             length;
	ControlResourceSet_t                                               elm[3];
}PDCCH_Config_controlResourceSetToAddModList_t;


typedef struct {
	uint32                                                             length;
	ControlResourceSetId_t                                             elm[3];
}PDCCH_Config_controlResourceSetToReleaseList_t;


typedef struct {
	uint32                                                             length;
	SearchSpace_t                                                      elm[10];
}PDCCH_Config_searchSpacesToAddModList_t;


typedef struct {
	uint32                                                             length;
	SearchSpaceId_t                                                    elm[10];
}PDCCH_Config_searchSpacesToReleaseList_t;


typedef struct {
	uint32                                                             dummy;
}PDCCH_Config_release_t;


typedef enum {
	PDCCH_CONFIG_DOWNLINKPREEMPTION_RELEASE,
	PDCCH_CONFIG_DOWNLINKPREEMPTION_SETUP,
	PDCCH_CONFIG_DOWNLINKPREEMPTION_max = 0x7FFFFFFF
}PDCCH_Config_downlinkPreemption_e;


/* union corresponding asn: PDCCH_Config_downlinkPreemption */
typedef union {
	PDCCH_Config_release_t                                             release;
	DownlinkPreemption_t                                               setup;
}PDCCH_Config_downlinkPreemption_u;


/* struct corresponding asn: PDCCH_Config_downlinkPreemption */
typedef struct {
	PDCCH_Config_downlinkPreemption_e                                  type;
	PDCCH_Config_downlinkPreemption_u                                  a;
}PDCCH_Config_downlinkPreemption_t;


typedef struct {
	uint32                                                             dummy;
}PDCCH_Config_release_1_t;


typedef enum {
	PDCCH_CONFIG_TPC_PUSCH_RELEASE,
	PDCCH_CONFIG_TPC_PUSCH_SETUP,
	PDCCH_CONFIG_TPC_PUSCH_max = 0x7FFFFFFF
}PDCCH_Config_tpc_PUSCH_e;


/* union corresponding asn: PDCCH_Config_tpc_PUSCH */
typedef union {
	PDCCH_Config_release_1_t                                           release;
	PUSCH_TPC_CommandConfig_t                                          setup;
}PDCCH_Config_tpc_PUSCH_u;


/* struct corresponding asn: PDCCH_Config_tpc_PUSCH */
typedef struct {
	PDCCH_Config_tpc_PUSCH_e                                           type;
	PDCCH_Config_tpc_PUSCH_u                                           a;
}PDCCH_Config_tpc_PUSCH_t;


typedef struct {
	uint32                                                             dummy;
}PDCCH_Config_release_2_t;


typedef enum {
	PDCCH_CONFIG_TPC_PUCCH_RELEASE,
	PDCCH_CONFIG_TPC_PUCCH_SETUP,
	PDCCH_CONFIG_TPC_PUCCH_max = 0x7FFFFFFF
}PDCCH_Config_tpc_PUCCH_e;


/* union corresponding asn: PDCCH_Config_tpc_PUCCH */
typedef union {
	PDCCH_Config_release_2_t                                           release;
	PUCCH_TPC_CommandConfig_t                                          setup;
}PDCCH_Config_tpc_PUCCH_u;


/* struct corresponding asn: PDCCH_Config_tpc_PUCCH */
typedef struct {
	PDCCH_Config_tpc_PUCCH_e                                           type;
	PDCCH_Config_tpc_PUCCH_u                                           a;
}PDCCH_Config_tpc_PUCCH_t;


typedef struct {
	uint32                                                             dummy;
}PDCCH_Config_release_3_t;


typedef enum {
	PDCCH_CONFIG_TPC_SRS_RELEASE,
	PDCCH_CONFIG_TPC_SRS_SETUP,
	PDCCH_CONFIG_TPC_SRS_max = 0x7FFFFFFF
}PDCCH_Config_tpc_SRS_e;


/* union corresponding asn: PDCCH_Config_tpc_SRS */
typedef union {
	PDCCH_Config_release_3_t                                           release;
	SRS_TPC_CommandConfig_t                                            setup;
}PDCCH_Config_tpc_SRS_u;


/* struct corresponding asn: PDCCH_Config_tpc_SRS */
typedef struct {
	PDCCH_Config_tpc_SRS_e                                             type;
	PDCCH_Config_tpc_SRS_u                                             a;
}PDCCH_Config_tpc_SRS_t;


typedef struct {
	BOOLEAN                                                            controlResourceSetToAddModList_exist;
	PDCCH_Config_controlResourceSetToAddModList_t                      controlResourceSetToAddModList;
	BOOLEAN                                                            controlResourceSetToReleaseList_exist;
	PDCCH_Config_controlResourceSetToReleaseList_t                     controlResourceSetToReleaseList;
	BOOLEAN                                                            searchSpacesToAddModList_exist;
	PDCCH_Config_searchSpacesToAddModList_t                            searchSpacesToAddModList;
	BOOLEAN                                                            searchSpacesToReleaseList_exist;
	PDCCH_Config_searchSpacesToReleaseList_t                           searchSpacesToReleaseList;
	BOOLEAN                                                            downlinkPreemption_exist;
	PDCCH_Config_downlinkPreemption_t                                  downlinkPreemption;
	BOOLEAN                                                            tpc_PUSCH_exist;
	PDCCH_Config_tpc_PUSCH_t                                           tpc_PUSCH;
	BOOLEAN                                                            tpc_PUCCH_exist;
	PDCCH_Config_tpc_PUCCH_t                                           tpc_PUCCH;
	BOOLEAN                                                            tpc_SRS_exist;
	PDCCH_Config_tpc_SRS_t                                             tpc_SRS;
	/* Extension marker start. */
}PDCCH_Config_t;


extern void EncodePDCCH_Config(
	PDCCH_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePDCCH_Config(
	PDCCH_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
