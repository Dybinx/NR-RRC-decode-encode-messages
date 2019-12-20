/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_config.h - this is the header file for message: PUCCH-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_CONFIG_H_
#define _PUCCH_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pucch_resource_set.h"
#include "pucch_resource_set_id.h"
#include "pucch_resource.h"
#include "pucch_resource_id.h"
#include "pucch_format_config.h"
#include "pucch_format_config.h"
#include "pucch_format_config.h"
#include "pucch_format_config.h"
#include "scheduling_request_resource_config.h"
#include "scheduling_request_resource_id.h"
#include "pucch_resource_id.h"
#include "pucch_spatial_relation_info.h"
#include "pucch_spatial_relation_info_id.h"
#include "pucch_power_control.h"


typedef struct {
	uint32                                                             length;
	PUCCH_ResourceSet_t                                                elm[maxNrofPUCCH_ResourceSets];
}PUCCH_Config_resourceSetToAddModList_t;


typedef struct {
	uint32                                                             length;
	PUCCH_ResourceSetId_t                                              elm[maxNrofPUCCH_ResourceSets];
}PUCCH_Config_resourceSetToReleaseList_t;


typedef struct {
	uint32                                                             length;
	PUCCH_Resource_t                                                   elm[maxNrofPUCCH_Resources];
}PUCCH_Config_resourceToAddModList_t;


typedef struct {
	uint32                                                             length;
	PUCCH_ResourceId_t                                                 elm[maxNrofPUCCH_Resources];
}PUCCH_Config_resourceToReleaseList_t;


typedef struct {
	uint32                                                             dummy;
}PUCCH_Config_release_t;


typedef enum {
	PUCCH_CONFIG_FORMAT1_RELEASE,
	PUCCH_CONFIG_FORMAT1_SETUP,
	PUCCH_CONFIG_FORMAT1_max = 0x7FFFFFFF
}PUCCH_Config_format1_e;


/* union corresponding asn: PUCCH_Config_format1 */
typedef union {
	PUCCH_Config_release_t                                             release;
	PUCCH_FormatConfig_t                                               setup;
}PUCCH_Config_format1_u;


/* struct corresponding asn: PUCCH_Config_format1 */
typedef struct {
	PUCCH_Config_format1_e                                             type;
	PUCCH_Config_format1_u                                             a;
}PUCCH_Config_format1_t;


typedef struct {
	uint32                                                             dummy;
}PUCCH_Config_release_1_t;


typedef enum {
	PUCCH_CONFIG_FORMAT2_RELEASE,
	PUCCH_CONFIG_FORMAT2_SETUP,
	PUCCH_CONFIG_FORMAT2_max = 0x7FFFFFFF
}PUCCH_Config_format2_e;


/* union corresponding asn: PUCCH_Config_format2 */
typedef union {
	PUCCH_Config_release_1_t                                           release;
	PUCCH_FormatConfig_t                                               setup;
}PUCCH_Config_format2_u;


/* struct corresponding asn: PUCCH_Config_format2 */
typedef struct {
	PUCCH_Config_format2_e                                             type;
	PUCCH_Config_format2_u                                             a;
}PUCCH_Config_format2_t;


typedef struct {
	uint32                                                             dummy;
}PUCCH_Config_release_2_t;


typedef enum {
	PUCCH_CONFIG_FORMAT3_RELEASE,
	PUCCH_CONFIG_FORMAT3_SETUP,
	PUCCH_CONFIG_FORMAT3_max = 0x7FFFFFFF
}PUCCH_Config_format3_e;


/* union corresponding asn: PUCCH_Config_format3 */
typedef union {
	PUCCH_Config_release_2_t                                           release;
	PUCCH_FormatConfig_t                                               setup;
}PUCCH_Config_format3_u;


/* struct corresponding asn: PUCCH_Config_format3 */
typedef struct {
	PUCCH_Config_format3_e                                             type;
	PUCCH_Config_format3_u                                             a;
}PUCCH_Config_format3_t;


typedef struct {
	uint32                                                             dummy;
}PUCCH_Config_release_3_t;


typedef enum {
	PUCCH_CONFIG_FORMAT4_RELEASE,
	PUCCH_CONFIG_FORMAT4_SETUP,
	PUCCH_CONFIG_FORMAT4_max = 0x7FFFFFFF
}PUCCH_Config_format4_e;


/* union corresponding asn: PUCCH_Config_format4 */
typedef union {
	PUCCH_Config_release_3_t                                           release;
	PUCCH_FormatConfig_t                                               setup;
}PUCCH_Config_format4_u;


/* struct corresponding asn: PUCCH_Config_format4 */
typedef struct {
	PUCCH_Config_format4_e                                             type;
	PUCCH_Config_format4_u                                             a;
}PUCCH_Config_format4_t;


typedef struct {
	uint32                                                             length;
	SchedulingRequestResourceConfig_t                                  elm[maxNrofSR_Resources];
}PUCCH_Config_schedulingRequestResourceToAddModList_t;


typedef struct {
	uint32                                                             length;
	SchedulingRequestResourceId_t                                      elm[maxNrofSR_Resources];
}PUCCH_Config_schedulingRequestResourceToReleaseList_t;


typedef struct {
	uint32                                                             length;
	PUCCH_ResourceId_t                                                 elm[2];
}PUCCH_Config_multi_CSI_PUCCH_ResourceList_t;


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[8];
}PUCCH_Config_dl_DataToUL_ACK_t;


typedef struct {
	uint32                                                             length;
	PUCCH_SpatialRelationInfo_t                                        elm[maxNrofSpatialRelationInfos];
}PUCCH_Config_spatialRelationInfoToAddModList_t;


typedef struct {
	uint32                                                             length;
	PUCCH_SpatialRelationInfoId_t                                      elm[maxNrofSpatialRelationInfos];
}PUCCH_Config_spatialRelationInfoToReleaseList_t;


typedef struct {
	BOOLEAN                                                            resourceSetToAddModList_exist;
	PUCCH_Config_resourceSetToAddModList_t                             resourceSetToAddModList;
	BOOLEAN                                                            resourceSetToReleaseList_exist;
	PUCCH_Config_resourceSetToReleaseList_t                            resourceSetToReleaseList;
	BOOLEAN                                                            resourceToAddModList_exist;
	PUCCH_Config_resourceToAddModList_t                                resourceToAddModList;
	BOOLEAN                                                            resourceToReleaseList_exist;
	PUCCH_Config_resourceToReleaseList_t                               resourceToReleaseList;
	BOOLEAN                                                            format1_exist;
	PUCCH_Config_format1_t                                             format1;
	BOOLEAN                                                            format2_exist;
	PUCCH_Config_format2_t                                             format2;
	BOOLEAN                                                            format3_exist;
	PUCCH_Config_format3_t                                             format3;
	BOOLEAN                                                            format4_exist;
	PUCCH_Config_format4_t                                             format4;
	BOOLEAN                                                            schedulingRequestResourceToAddModList_exist;
	PUCCH_Config_schedulingRequestResourceToAddModList_t               schedulingRequestResourceToAddModList;
	BOOLEAN                                                            schedulingRequestResourceToReleaseList_exist;
	PUCCH_Config_schedulingRequestResourceToReleaseList_t              schedulingRequestResourceToReleaseList;
	BOOLEAN                                                            multi_CSI_PUCCH_ResourceList_exist;
	PUCCH_Config_multi_CSI_PUCCH_ResourceList_t                        multi_CSI_PUCCH_ResourceList;
	BOOLEAN                                                            dl_DataToUL_ACK_exist;
	PUCCH_Config_dl_DataToUL_ACK_t                                     dl_DataToUL_ACK;
	BOOLEAN                                                            spatialRelationInfoToAddModList_exist;
	PUCCH_Config_spatialRelationInfoToAddModList_t                     spatialRelationInfoToAddModList;
	BOOLEAN                                                            spatialRelationInfoToReleaseList_exist;
	PUCCH_Config_spatialRelationInfoToReleaseList_t                    spatialRelationInfoToReleaseList;
	BOOLEAN                                                            pucch_PowerControl_exist;
	PUCCH_PowerControl_t                                               pucch_PowerControl;
	/* Extension marker start. */
}PUCCH_Config_t;


extern void EncodePUCCH_Config(
	PUCCH_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_Config(
	PUCCH_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
