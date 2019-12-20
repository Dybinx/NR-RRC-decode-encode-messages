/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * logical_channel_config.h - this is the header file for message: LogicalChannelConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _LOGICAL_CHANNEL_CONFIG_H_
#define _LOGICAL_CHANNEL_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "serv_cell_index.h"
#include "subcarrier_spacing.h"
#include "scheduling_request_id.h"


typedef enum {
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS0,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS8,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS16,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS32,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS64,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS128,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS256,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS512,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS1024,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS2048,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS4096,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS8192,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS16384,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS32768,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_KBPS65536,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_INFINITY,
	LOGICALCHANNELCONFIG_PRIORITISEDBITRATE_max = 0x7FFFFFFF
}LogicalChannelConfig_prioritisedBitRate_e;


typedef enum {
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_MS5,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_MS10,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_MS20,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_MS50,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_MS100,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_MS150,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_MS300,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_MS500,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_MS1000,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_SPARE7,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_SPARE6,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_SPARE5,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_SPARE4,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_SPARE3,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_SPARE2,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_SPARE1,
	LOGICALCHANNELCONFIG_BUCKETSIZEDURATION_max = 0x7FFFFFFF
}LogicalChannelConfig_bucketSizeDuration_e;


typedef struct {
	uint32                                                             length;
	ServCellIndex_t                                                    elm[maxNrofServingCells_1];
}LogicalChannelConfig_allowedServingCells_t;


typedef struct {
	uint32                                                             length;
	SubcarrierSpacing_e                                                elm[maxSCSs];
}LogicalChannelConfig_allowedSCS_List_t;


typedef enum {
	LOGICALCHANNELCONFIG_MAXPUSCH_DURATION_MS0P02,
	LOGICALCHANNELCONFIG_MAXPUSCH_DURATION_MS0P04,
	LOGICALCHANNELCONFIG_MAXPUSCH_DURATION_MS0P0625,
	LOGICALCHANNELCONFIG_MAXPUSCH_DURATION_MS0P125,
	LOGICALCHANNELCONFIG_MAXPUSCH_DURATION_MS0P25,
	LOGICALCHANNELCONFIG_MAXPUSCH_DURATION_MS0P5,
	LOGICALCHANNELCONFIG_MAXPUSCH_DURATION_SPARE2,
	LOGICALCHANNELCONFIG_MAXPUSCH_DURATION_SPARE1,
	LOGICALCHANNELCONFIG_MAXPUSCH_DURATION_max = 0x7FFFFFFF
}LogicalChannelConfig_maxPUSCH_Duration_e;


typedef enum {
	LOGICALCHANNELCONFIG_CONFIGUREDGRANTTYPE1ALLOWED_TRUE,
	LOGICALCHANNELCONFIG_CONFIGUREDGRANTTYPE1ALLOWED_max = 0x7FFFFFFF
}LogicalChannelConfig_configuredGrantType1Allowed_e;


typedef struct {
	uint32                                                             priority;
	LogicalChannelConfig_prioritisedBitRate_e                          prioritisedBitRate;
	LogicalChannelConfig_bucketSizeDuration_e                          bucketSizeDuration;
	BOOLEAN                                                            allowedServingCells_exist;
	LogicalChannelConfig_allowedServingCells_t                         allowedServingCells;
	BOOLEAN                                                            allowedSCS_List_exist;
	LogicalChannelConfig_allowedSCS_List_t                             allowedSCS_List;
	BOOLEAN                                                            maxPUSCH_Duration_exist;
	LogicalChannelConfig_maxPUSCH_Duration_e                           maxPUSCH_Duration;
	BOOLEAN                                                            configuredGrantType1Allowed_exist;
	LogicalChannelConfig_configuredGrantType1Allowed_e                 configuredGrantType1Allowed;
	BOOLEAN                                                            logicalChannelGroup_exist;
	uint32                                                             logicalChannelGroup;
	BOOLEAN                                                            schedulingRequestID_exist;
	SchedulingRequestId_t                                              schedulingRequestID;
	BOOLEAN                                                            logicalChannelSR_Mask;
	BOOLEAN                                                            logicalChannelSR_DelayTimerApplied;
	/* Extension marker start. */
}LogicalChannelConfig_ul_SpecificParameters_t;


typedef struct {
	BOOLEAN                                                            ul_SpecificParameters_exist;
	LogicalChannelConfig_ul_SpecificParameters_t                       ul_SpecificParameters;
	/* Extension marker start. */
}LogicalChannelConfig_t;


extern void EncodeLogicalChannelConfig(
	LogicalChannelConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeLogicalChannelConfig(
	LogicalChannelConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
