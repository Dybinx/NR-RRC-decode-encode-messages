/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * radio_link_monitoring_rs.h - this is the header file for message: RadioLinkMonitoringRS
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RADIO_LINK_MONITORING_RS_H_
#define _RADIO_LINK_MONITORING_RS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "radio_link_monitoring_rs_id.h"
#include "ssb_index.h"
#include "nzp_csi_rs_resource_id.h"


typedef enum {
	RADIOLINKMONITORINGRS_PURPOSE_BEAMFAILURE,
	RADIOLINKMONITORINGRS_PURPOSE_RLF,
	RADIOLINKMONITORINGRS_PURPOSE_BOTH,
	RADIOLINKMONITORINGRS_PURPOSE_max = 0x7FFFFFFF
}RadioLinkMonitoringRS_purpose_e;


typedef enum {
	RADIOLINKMONITORINGRS_DETECTIONRESOURCE_SSB_INDEX,
	RADIOLINKMONITORINGRS_DETECTIONRESOURCE_CSI_RS_INDEX,
	RADIOLINKMONITORINGRS_DETECTIONRESOURCE_max = 0x7FFFFFFF
}RadioLinkMonitoringRS_detectionResource_e;


/* union corresponding asn: RadioLinkMonitoringRS_detectionResource */
typedef union {
	SSB_Index_t                                                        ssb_Index;
	NZP_CSI_RS_ResourceId_t                                            csi_RS_Index;
}RadioLinkMonitoringRS_detectionResource_u;


/* struct corresponding asn: RadioLinkMonitoringRS_detectionResource */
typedef struct {
	RadioLinkMonitoringRS_detectionResource_e                          type;
	RadioLinkMonitoringRS_detectionResource_u                          a;
}RadioLinkMonitoringRS_detectionResource_t;


typedef struct {
	RadioLinkMonitoringRS_Id_t                                         radioLinkMonitoringRS_Id;
	RadioLinkMonitoringRS_purpose_e                                    purpose;
	RadioLinkMonitoringRS_detectionResource_t                          detectionResource;
	/* Extension marker start. */
}RadioLinkMonitoringRS_t;


extern void EncodeRadioLinkMonitoringRS(
	RadioLinkMonitoringRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRadioLinkMonitoringRS(
	RadioLinkMonitoringRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
