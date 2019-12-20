/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * radio_link_monitoring_config.h - this is the header file for message: RadioLinkMonitoringConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RADIO_LINK_MONITORING_CONFIG_H_
#define _RADIO_LINK_MONITORING_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "radio_link_monitoring_rs.h"
#include "radio_link_monitoring_rs_id.h"


typedef struct {
	uint32                                                             length;
	RadioLinkMonitoringRS_t                                            elm[maxNrofFailureDetectionResources];
}RadioLinkMonitoringConfig_failureDetectionResourcesToAddModList_t;


typedef struct {
	uint32                                                             length;
	RadioLinkMonitoringRS_Id_t                                         elm[maxNrofFailureDetectionResources];
}RadioLinkMonitoringConfig_failureDetectionResourcesToReleaseList_t;


typedef enum {
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREINSTANCEMAXCOUNT_N1,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREINSTANCEMAXCOUNT_N2,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREINSTANCEMAXCOUNT_N3,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREINSTANCEMAXCOUNT_N4,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREINSTANCEMAXCOUNT_N5,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREINSTANCEMAXCOUNT_N6,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREINSTANCEMAXCOUNT_N8,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREINSTANCEMAXCOUNT_N10,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREINSTANCEMAXCOUNT_max = 0x7FFFFFFF
}RadioLinkMonitoringConfig_beamFailureInstanceMaxCount_e;


typedef enum {
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREDETECTIONTIMER_PBFD1,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREDETECTIONTIMER_PBFD2,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREDETECTIONTIMER_PBFD3,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREDETECTIONTIMER_PBFD4,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREDETECTIONTIMER_PBFD5,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREDETECTIONTIMER_PBFD6,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREDETECTIONTIMER_PBFD8,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREDETECTIONTIMER_PBFD10,
	RADIOLINKMONITORINGCONFIG_BEAMFAILUREDETECTIONTIMER_max = 0x7FFFFFFF
}RadioLinkMonitoringConfig_beamFailureDetectionTimer_e;


typedef struct {
	BOOLEAN                                                            failureDetectionResourcesToAddModList_exist;
	RadioLinkMonitoringConfig_failureDetectionResourcesToAddModList_t    failureDetectionResourcesToAddModList;
	BOOLEAN                                                            failureDetectionResourcesToReleaseList_exist;
	RadioLinkMonitoringConfig_failureDetectionResourcesToReleaseList_t    failureDetectionResourcesToReleaseList;
	BOOLEAN                                                            beamFailureInstanceMaxCount_exist;
	RadioLinkMonitoringConfig_beamFailureInstanceMaxCount_e            beamFailureInstanceMaxCount;
	BOOLEAN                                                            beamFailureDetectionTimer_exist;
	RadioLinkMonitoringConfig_beamFailureDetectionTimer_e              beamFailureDetectionTimer;
	/* Extension marker start. */
}RadioLinkMonitoringConfig_t;


extern void EncodeRadioLinkMonitoringConfig(
	RadioLinkMonitoringConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRadioLinkMonitoringConfig(
	RadioLinkMonitoringConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
