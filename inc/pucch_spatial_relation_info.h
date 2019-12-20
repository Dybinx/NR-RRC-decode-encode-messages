/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_spatial_relation_info.h - this is the header file for message: PUCCH-SpatialRelationInfo
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_SPATIAL_RELATION_INFO_H_
#define _PUCCH_SPATIAL_RELATION_INFO_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pucch_spatial_relation_info_id.h"
#include "serv_cell_index.h"
#include "ssb_index.h"
#include "nzp_csi_rs_resource_id.h"
#include "srs_resource_id.h"
#include "bwp_id.h"
#include "pucch_pathloss_reference_rs_id.h"
#include "p0_pucch_id.h"


typedef struct {
	SRS_ResourceId_t                                                   resource;
	BWP_Id_t                                                           uplinkBWP;
}PUCCH_SpatialRelationInfo_srs_t;


typedef enum {
	PUCCH_SPATIALRELATIONINFO_REFERENCESIGNAL_SSB_INDEX,
	PUCCH_SPATIALRELATIONINFO_REFERENCESIGNAL_CSI_RS_INDEX,
	PUCCH_SPATIALRELATIONINFO_REFERENCESIGNAL_SRS,
	PUCCH_SPATIALRELATIONINFO_REFERENCESIGNAL_max = 0x7FFFFFFF
}PUCCH_SpatialRelationInfo_referenceSignal_e;


/* union corresponding asn: PUCCH_SpatialRelationInfo_referenceSignal */
typedef union {
	SSB_Index_t                                                        ssb_Index;
	NZP_CSI_RS_ResourceId_t                                            csi_RS_Index;
	PUCCH_SpatialRelationInfo_srs_t                                    srs;
}PUCCH_SpatialRelationInfo_referenceSignal_u;


/* struct corresponding asn: PUCCH_SpatialRelationInfo_referenceSignal */
typedef struct {
	PUCCH_SpatialRelationInfo_referenceSignal_e                        type;
	PUCCH_SpatialRelationInfo_referenceSignal_u                        a;
}PUCCH_SpatialRelationInfo_referenceSignal_t;


typedef enum {
	PUCCH_SPATIALRELATIONINFO_CLOSEDLOOPINDEX_I0,
	PUCCH_SPATIALRELATIONINFO_CLOSEDLOOPINDEX_I1,
	PUCCH_SPATIALRELATIONINFO_CLOSEDLOOPINDEX_max = 0x7FFFFFFF
}PUCCH_SpatialRelationInfo_closedLoopIndex_e;


typedef struct {
	PUCCH_SpatialRelationInfoId_t                                      pucch_SpatialRelationInfoId;
	BOOLEAN                                                            servingCellId_exist;
	ServCellIndex_t                                                    servingCellId;
	PUCCH_SpatialRelationInfo_referenceSignal_t                        referenceSignal;
	PUCCH_PathlossReferenceRS_Id_t                                     pucch_PathlossReferenceRS_Id;
	P0_PUCCH_Id_t                                                      p0_PUCCH_Id;
	PUCCH_SpatialRelationInfo_closedLoopIndex_e                        closedLoopIndex;
}PUCCH_SpatialRelationInfo_t;


extern void EncodePUCCH_SpatialRelationInfo(
	PUCCH_SpatialRelationInfo_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_SpatialRelationInfo(
	PUCCH_SpatialRelationInfo_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
