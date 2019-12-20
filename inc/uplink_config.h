/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * uplink_config.h - this is the header file for message: UplinkConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UPLINK_CONFIG_H_
#define _UPLINK_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "bwp_uplink_dedicated.h"
#include "bwp_id.h"
#include "bwp_uplink.h"
#include "bwp_id.h"
#include "pusch_serving_cell_config.h"
#include "srs_carrier_switching.h"


typedef struct {
	uint32                                                             length;
	BWP_Id_t                                                           elm[maxNrofBWPs];
}UplinkConfig_uplinkBWP_ToReleaseList_t;


typedef struct {
	uint32                                                             length;
	BWP_Uplink_t                                                       elm[maxNrofBWPs];
}UplinkConfig_uplinkBWP_ToAddModList_t;


typedef struct {
	uint32                                                             dummy;
}UplinkConfig_release_t;


typedef enum {
	UPLINKCONFIG_PUSCH_SERVINGCELLCONFIG_RELEASE,
	UPLINKCONFIG_PUSCH_SERVINGCELLCONFIG_SETUP,
	UPLINKCONFIG_PUSCH_SERVINGCELLCONFIG_max = 0x7FFFFFFF
}UplinkConfig_pusch_ServingCellConfig_e;


/* union corresponding asn: UplinkConfig_pusch_ServingCellConfig */
typedef union {
	UplinkConfig_release_t                                             release;
	PUSCH_ServingCellConfig_t                                          setup;
}UplinkConfig_pusch_ServingCellConfig_u;


/* struct corresponding asn: UplinkConfig_pusch_ServingCellConfig */
typedef struct {
	UplinkConfig_pusch_ServingCellConfig_e                             type;
	UplinkConfig_pusch_ServingCellConfig_u                             a;
}UplinkConfig_pusch_ServingCellConfig_t;


typedef struct {
	uint32                                                             dummy;
}UplinkConfig_release_1_t;


typedef enum {
	UPLINKCONFIG_CARRIERSWITCHING_RELEASE,
	UPLINKCONFIG_CARRIERSWITCHING_SETUP,
	UPLINKCONFIG_CARRIERSWITCHING_max = 0x7FFFFFFF
}UplinkConfig_carrierSwitching_e;


/* union corresponding asn: UplinkConfig_carrierSwitching */
typedef union {
	UplinkConfig_release_1_t                                           release;
	SRS_CarrierSwitching_t                                             setup;
}UplinkConfig_carrierSwitching_u;


/* struct corresponding asn: UplinkConfig_carrierSwitching */
typedef struct {
	UplinkConfig_carrierSwitching_e                                    type;
	UplinkConfig_carrierSwitching_u                                    a;
}UplinkConfig_carrierSwitching_t;


typedef struct {
	BOOLEAN                                                            initialUplinkBWP_exist;
	BWP_UplinkDedicated_t                                              initialUplinkBWP;
	BOOLEAN                                                            uplinkBWP_ToReleaseList_exist;
	UplinkConfig_uplinkBWP_ToReleaseList_t                             uplinkBWP_ToReleaseList;
	BOOLEAN                                                            uplinkBWP_ToAddModList_exist;
	UplinkConfig_uplinkBWP_ToAddModList_t                              uplinkBWP_ToAddModList;
	BOOLEAN                                                            firstActiveUplinkBWP_Id_exist;
	BWP_Id_t                                                           firstActiveUplinkBWP_Id;
	BOOLEAN                                                            pusch_ServingCellConfig_exist;
	UplinkConfig_pusch_ServingCellConfig_t                             pusch_ServingCellConfig;
	BOOLEAN                                                            carrierSwitching_exist;
	UplinkConfig_carrierSwitching_t                                    carrierSwitching;
	/* Extension marker start. */
}UplinkConfig_t;


extern void EncodeUplinkConfig(
	UplinkConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUplinkConfig(
	UplinkConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
