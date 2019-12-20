/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * serving_cell_config.h - this is the header file for message: ServingCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SERVING_CELL_CONFIG_H_
#define _SERVING_CELL_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "tdd_ul_dl_config_dedicated.h"
#include "bwp_downlink_dedicated.h"
#include "bwp_id.h"
#include "bwp_downlink.h"
#include "bwp_id.h"
#include "bwp_id.h"
#include "uplink_config.h"
#include "uplink_config.h"
#include "pdcch_serving_cell_config.h"
#include "pdsch_serving_cell_config.h"
#include "csi_meas_config.h"
#include "cross_carrier_scheduling_config.h"
#include "tag_id.h"
#include "meas_object_id.h"


typedef struct {
	uint32                                                             length;
	BWP_Id_t                                                           elm[maxNrofBWPs];
}ServingCellConfig_downlinkBWP_ToReleaseList_t;


typedef struct {
	uint32                                                             length;
	BWP_Downlink_t                                                     elm[maxNrofBWPs];
}ServingCellConfig_downlinkBWP_ToAddModList_t;


typedef enum {
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS2,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS3,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS4,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS5,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS6,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS8,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS10,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS20,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS30,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS40,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS50,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS60,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS80,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS100,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS200,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS300,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS500,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS750,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS1280,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS1920,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_MS2560,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_SPARE10,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_SPARE9,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_SPARE8,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_SPARE7,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_SPARE6,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_SPARE5,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_SPARE4,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_SPARE3,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_SPARE2,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_SPARE1,
	SERVINGCELLCONFIG_BWP_INACTIVITYTIMER_max = 0x7FFFFFFF
}ServingCellConfig_bwp_InactivityTimer_e;


typedef struct {
	uint32                                                             dummy;
}ServingCellConfig_release_t;


typedef enum {
	SERVINGCELLCONFIG_PDCCH_SERVINGCELLCONFIG_RELEASE,
	SERVINGCELLCONFIG_PDCCH_SERVINGCELLCONFIG_SETUP,
	SERVINGCELLCONFIG_PDCCH_SERVINGCELLCONFIG_max = 0x7FFFFFFF
}ServingCellConfig_pdcch_ServingCellConfig_e;


/* union corresponding asn: ServingCellConfig_pdcch_ServingCellConfig */
typedef union {
	ServingCellConfig_release_t                                        release;
	PDCCH_ServingCellConfig_t                                          setup;
}ServingCellConfig_pdcch_ServingCellConfig_u;


/* struct corresponding asn: ServingCellConfig_pdcch_ServingCellConfig */
typedef struct {
	ServingCellConfig_pdcch_ServingCellConfig_e                        type;
	ServingCellConfig_pdcch_ServingCellConfig_u                        a;
}ServingCellConfig_pdcch_ServingCellConfig_t;


typedef struct {
	uint32                                                             dummy;
}ServingCellConfig_release_1_t;


typedef enum {
	SERVINGCELLCONFIG_PDSCH_SERVINGCELLCONFIG_RELEASE,
	SERVINGCELLCONFIG_PDSCH_SERVINGCELLCONFIG_SETUP,
	SERVINGCELLCONFIG_PDSCH_SERVINGCELLCONFIG_max = 0x7FFFFFFF
}ServingCellConfig_pdsch_ServingCellConfig_e;


/* union corresponding asn: ServingCellConfig_pdsch_ServingCellConfig */
typedef union {
	ServingCellConfig_release_1_t                                      release;
	PDSCH_ServingCellConfig_t                                          setup;
}ServingCellConfig_pdsch_ServingCellConfig_u;


/* struct corresponding asn: ServingCellConfig_pdsch_ServingCellConfig */
typedef struct {
	ServingCellConfig_pdsch_ServingCellConfig_e                        type;
	ServingCellConfig_pdsch_ServingCellConfig_u                        a;
}ServingCellConfig_pdsch_ServingCellConfig_t;


typedef struct {
	uint32                                                             dummy;
}ServingCellConfig_release_2_t;


typedef enum {
	SERVINGCELLCONFIG_CSI_MEASCONFIG_RELEASE,
	SERVINGCELLCONFIG_CSI_MEASCONFIG_SETUP,
	SERVINGCELLCONFIG_CSI_MEASCONFIG_max = 0x7FFFFFFF
}ServingCellConfig_csi_MeasConfig_e;


/* union corresponding asn: ServingCellConfig_csi_MeasConfig */
typedef union {
	ServingCellConfig_release_2_t                                      release;
	CSI_MeasConfig_t                                                   setup;
}ServingCellConfig_csi_MeasConfig_u;


/* struct corresponding asn: ServingCellConfig_csi_MeasConfig */
typedef struct {
	ServingCellConfig_csi_MeasConfig_e                                 type;
	ServingCellConfig_csi_MeasConfig_u                                 a;
}ServingCellConfig_csi_MeasConfig_t;


typedef enum {
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS20,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS40,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS80,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS160,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS200,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS240,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS320,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS400,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS480,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS520,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS640,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS720,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS840,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_MS1280,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_SPARE2,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_SPARE1,
	SERVINGCELLCONFIG_SCELLDEACTIVATIONTIMER_max = 0x7FFFFFFF
}ServingCellConfig_sCellDeactivationTimer_e;


typedef enum {
	SERVINGCELLCONFIG_UE_BEAMLOCKFUNCTION_ENABLED,
	SERVINGCELLCONFIG_UE_BEAMLOCKFUNCTION_max = 0x7FFFFFFF
}ServingCellConfig_ue_BeamLockFunction_e;


typedef enum {
	SERVINGCELLCONFIG_PATHLOSSREFERENCELINKING_PCELL,
	SERVINGCELLCONFIG_PATHLOSSREFERENCELINKING_SCELL,
	SERVINGCELLCONFIG_PATHLOSSREFERENCELINKING_max = 0x7FFFFFFF
}ServingCellConfig_pathlossReferenceLinking_e;


typedef struct {
	BOOLEAN                                                            tdd_UL_DL_ConfigurationDedicated_exist;
	TDD_UL_DL_ConfigDedicated_t                                        tdd_UL_DL_ConfigurationDedicated;
	BOOLEAN                                                            initialDownlinkBWP_exist;
	BWP_DownlinkDedicated_t                                            initialDownlinkBWP;
	BOOLEAN                                                            downlinkBWP_ToReleaseList_exist;
	ServingCellConfig_downlinkBWP_ToReleaseList_t                      downlinkBWP_ToReleaseList;
	BOOLEAN                                                            downlinkBWP_ToAddModList_exist;
	ServingCellConfig_downlinkBWP_ToAddModList_t                       downlinkBWP_ToAddModList;
	BOOLEAN                                                            firstActiveDownlinkBWP_Id_exist;
	BWP_Id_t                                                           firstActiveDownlinkBWP_Id;
	BOOLEAN                                                            bwp_InactivityTimer_exist;
	ServingCellConfig_bwp_InactivityTimer_e                            bwp_InactivityTimer;
	BOOLEAN                                                            defaultDownlinkBWP_Id_exist;
	BWP_Id_t                                                           defaultDownlinkBWP_Id;
	BOOLEAN                                                            uplinkConfig_exist;
	UplinkConfig_t                                                     uplinkConfig;
	BOOLEAN                                                            supplementaryUplink_exist;
	UplinkConfig_t                                                     supplementaryUplink;
	BOOLEAN                                                            pdcch_ServingCellConfig_exist;
	ServingCellConfig_pdcch_ServingCellConfig_t                        pdcch_ServingCellConfig;
	BOOLEAN                                                            pdsch_ServingCellConfig_exist;
	ServingCellConfig_pdsch_ServingCellConfig_t                        pdsch_ServingCellConfig;
	BOOLEAN                                                            csi_MeasConfig_exist;
	ServingCellConfig_csi_MeasConfig_t                                 csi_MeasConfig;
	BOOLEAN                                                            sCellDeactivationTimer_exist;
	ServingCellConfig_sCellDeactivationTimer_e                         sCellDeactivationTimer;
	BOOLEAN                                                            crossCarrierSchedulingConfig_exist;
	CrossCarrierSchedulingConfig_t                                     crossCarrierSchedulingConfig;
	TAG_Id_t                                                           tag_Id;
	BOOLEAN                                                            ue_BeamLockFunction_exist;
	ServingCellConfig_ue_BeamLockFunction_e                            ue_BeamLockFunction;
	BOOLEAN                                                            pathlossReferenceLinking_exist;
	ServingCellConfig_pathlossReferenceLinking_e                       pathlossReferenceLinking;
	BOOLEAN                                                            servingCellMO_exist;
	MeasObjectId_t                                                     servingCellMO;
	/* Extension marker start. */
}ServingCellConfig_t;


extern void EncodeServingCellConfig(
	ServingCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeServingCellConfig(
	ServingCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
