/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_config.h - this is the header file for message: MeasConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_CONFIG_H_
#define _MEAS_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_object_to_remove_list.h"
#include "meas_object_to_add_mod_list.h"
#include "report_config_to_remove_list.h"
#include "report_config_to_add_mod_list.h"
#include "meas_id_to_remove_list.h"
#include "meas_id_to_add_mod_list.h"
#include "rsrp_range.h"
#include "rsrp_range.h"
#include "quantity_config.h"
#include "meas_gap_config.h"
#include "meas_gap_sharing_config.h"


typedef enum {
	MEASCONFIG_S_MEASURECONFIG_SSB_RSRP,
	MEASCONFIG_S_MEASURECONFIG_CSI_RSRP,
	MEASCONFIG_S_MEASURECONFIG_max = 0x7FFFFFFF
}MeasConfig_s_MeasureConfig_e;


/* union corresponding asn: MeasConfig_s_MeasureConfig */
typedef union {
	RSRP_Range_t                                                       ssb_RSRP;
	RSRP_Range_t                                                       csi_RSRP;
}MeasConfig_s_MeasureConfig_u;


/* struct corresponding asn: MeasConfig_s_MeasureConfig */
typedef struct {
	MeasConfig_s_MeasureConfig_e                                       type;
	MeasConfig_s_MeasureConfig_u                                       a;
}MeasConfig_s_MeasureConfig_t;


typedef struct {
	BOOLEAN                                                            measObjectToRemoveList_exist;
	MeasObjectToRemoveList_t                                           measObjectToRemoveList;
	BOOLEAN                                                            measObjectToAddModList_exist;
	MeasObjectToAddModList_t                                           measObjectToAddModList;
	BOOLEAN                                                            reportConfigToRemoveList_exist;
	ReportConfigToRemoveList_t                                         reportConfigToRemoveList;
	BOOLEAN                                                            reportConfigToAddModList_exist;
	ReportConfigToAddModList_t                                         reportConfigToAddModList;
	BOOLEAN                                                            measIdToRemoveList_exist;
	MeasIdToRemoveList_t                                               measIdToRemoveList;
	BOOLEAN                                                            measIdToAddModList_exist;
	MeasIdToAddModList_t                                               measIdToAddModList;
	BOOLEAN                                                            s_MeasureConfig_exist;
	MeasConfig_s_MeasureConfig_t                                       s_MeasureConfig;
	BOOLEAN                                                            quantityConfig_exist;
	QuantityConfig_t                                                   quantityConfig;
	BOOLEAN                                                            measGapConfig_exist;
	MeasGapConfig_t                                                    measGapConfig;
	BOOLEAN                                                            measGapSharingConfig_exist;
	MeasGapSharingConfig_t                                             measGapSharingConfig;
	/* Extension marker start. */
}MeasConfig_t;


extern void EncodeMeasConfig(
	MeasConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasConfig(
	MeasConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
