/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * nzp_csi_rs_resource.h - this is the header file for message: NZP-CSI-RS-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _NZP_CSI_RS_RESOURCE_H_
#define _NZP_CSI_RS_RESOURCE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "nzp_csi_rs_resource_id.h"
#include "csi_rs_resource_mapping.h"
#include "scrambling_id.h"
#include "csi_resource_periodicity_and_offset.h"
#include "tci_state_id.h"


typedef enum {
	NZP_CSI_RS_RESOURCE_POWERCONTROLOFFSETSS_DB_3,
	NZP_CSI_RS_RESOURCE_POWERCONTROLOFFSETSS_DB0,
	NZP_CSI_RS_RESOURCE_POWERCONTROLOFFSETSS_DB3,
	NZP_CSI_RS_RESOURCE_POWERCONTROLOFFSETSS_DB6,
	NZP_CSI_RS_RESOURCE_POWERCONTROLOFFSETSS_max = 0x7FFFFFFF
}NZP_CSI_RS_Resource_powerControlOffsetSS_e;


typedef struct {
	NZP_CSI_RS_ResourceId_t                                            nzp_CSI_RS_ResourceId;
	CSI_RS_ResourceMapping_t                                           resourceMapping;
	int32                                                              powerControlOffset;
	BOOLEAN                                                            powerControlOffsetSS_exist;
	NZP_CSI_RS_Resource_powerControlOffsetSS_e                         powerControlOffsetSS;
	ScramblingId_t                                                     scramblingID;
	BOOLEAN                                                            periodicityAndOffset_exist;
	CSI_ResourcePeriodicityAndOffset_t                                 periodicityAndOffset;
	BOOLEAN                                                            qcl_InfoPeriodicCSI_RS_exist;
	TCI_StateId_t                                                      qcl_InfoPeriodicCSI_RS;
	/* Extension marker start. */
}NZP_CSI_RS_Resource_t;


extern void EncodeNZP_CSI_RS_Resource(
	NZP_CSI_RS_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeNZP_CSI_RS_Resource(
	NZP_CSI_RS_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
