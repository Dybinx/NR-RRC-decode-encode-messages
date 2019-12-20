/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_rs_resource_config_mobility.h - this is the header file for message: CSI-RS-ResourceConfigMobility
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_RS_RESOURCE_CONFIG_MOBILITY_H_
#define _CSI_RS_RESOURCE_CONFIG_MOBILITY_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "subcarrier_spacing.h"
#include "csi_rs_cell_mobility.h"


typedef struct {
	uint32                                                             length;
	CSI_RS_CellMobility_t                                              elm[maxNrofCSI_RS_CellsRRM];
}CSI_RS_ResourceConfigMobility_csi_RS_CellList_Mobility_t;


typedef struct {
	SubcarrierSpacing_e                                                subcarrierSpacing;
	CSI_RS_ResourceConfigMobility_csi_RS_CellList_Mobility_t           csi_RS_CellList_Mobility;
	/* Extension marker start. */
}CSI_RS_ResourceConfigMobility_t;


extern void EncodeCSI_RS_ResourceConfigMobility(
	CSI_RS_ResourceConfigMobility_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_RS_ResourceConfigMobility(
	CSI_RS_ResourceConfigMobility_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
