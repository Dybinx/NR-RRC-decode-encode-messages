/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_rs_cell_mobility.h - this is the header file for message: CSI-RS-CellMobility
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_RS_CELL_MOBILITY_H_
#define _CSI_RS_CELL_MOBILITY_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "phys_cell_id.h"
#include "csi_rs_resource_mobility.h"


typedef enum {
	CSI_RS_CELLMOBILITY_NROFPRBS_SIZE24,
	CSI_RS_CELLMOBILITY_NROFPRBS_SIZE48,
	CSI_RS_CELLMOBILITY_NROFPRBS_SIZE96,
	CSI_RS_CELLMOBILITY_NROFPRBS_SIZE192,
	CSI_RS_CELLMOBILITY_NROFPRBS_SIZE264,
	CSI_RS_CELLMOBILITY_NROFPRBS_max = 0x7FFFFFFF
}CSI_RS_CellMobility_nrofPRBs_e;


typedef struct {
	CSI_RS_CellMobility_nrofPRBs_e                                     nrofPRBs;
	uint32                                                             startPRB;
}CSI_RS_CellMobility_csi_rs_MeasurementBW_t;


typedef enum {
	CSI_RS_CELLMOBILITY_DENSITY_D1,
	CSI_RS_CELLMOBILITY_DENSITY_D3,
	CSI_RS_CELLMOBILITY_DENSITY_max = 0x7FFFFFFF
}CSI_RS_CellMobility_density_e;


typedef struct {
	uint32                                                             length;
	CSI_RS_Resource_Mobility_t                                         elm[maxNrofCSI_RS_ResourcesRRM];
}CSI_RS_CellMobility_csi_rs_ResourceList_Mobility_t;


typedef struct {
	PhysCellId_t                                                       cellId;
	CSI_RS_CellMobility_csi_rs_MeasurementBW_t                         csi_rs_MeasurementBW;
	BOOLEAN                                                            density_exist;
	CSI_RS_CellMobility_density_e                                      density;
	CSI_RS_CellMobility_csi_rs_ResourceList_Mobility_t                 csi_rs_ResourceList_Mobility;
}CSI_RS_CellMobility_t;


extern void EncodeCSI_RS_CellMobility(
	CSI_RS_CellMobility_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_RS_CellMobility(
	CSI_RS_CellMobility_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
