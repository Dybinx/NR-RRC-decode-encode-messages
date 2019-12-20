/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_spatial_relation_info.h - this is the header file for message: SRS-SpatialRelationInfo
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRS_SPATIAL_RELATION_INFO_H_
#define _SRS_SPATIAL_RELATION_INFO_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "serv_cell_index.h"
#include "ssb_index.h"
#include "nzp_csi_rs_resource_id.h"
#include "srs_resource_id.h"
#include "bwp_id.h"


typedef struct {
	SRS_ResourceId_t                                                   resourceId;
	BWP_Id_t                                                           uplinkBWP;
}SRS_SpatialRelationInfo_srs_t;


typedef enum {
	SRS_SPATIALRELATIONINFO_REFERENCESIGNAL_SSB_INDEX,
	SRS_SPATIALRELATIONINFO_REFERENCESIGNAL_CSI_RS_INDEX,
	SRS_SPATIALRELATIONINFO_REFERENCESIGNAL_SRS,
	SRS_SPATIALRELATIONINFO_REFERENCESIGNAL_max = 0x7FFFFFFF
}SRS_SpatialRelationInfo_referenceSignal_e;


/* union corresponding asn: SRS_SpatialRelationInfo_referenceSignal */
typedef union {
	SSB_Index_t                                                        ssb_Index;
	NZP_CSI_RS_ResourceId_t                                            csi_RS_Index;
	SRS_SpatialRelationInfo_srs_t                                      srs;
}SRS_SpatialRelationInfo_referenceSignal_u;


/* struct corresponding asn: SRS_SpatialRelationInfo_referenceSignal */
typedef struct {
	SRS_SpatialRelationInfo_referenceSignal_e                          type;
	SRS_SpatialRelationInfo_referenceSignal_u                          a;
}SRS_SpatialRelationInfo_referenceSignal_t;


typedef struct {
	BOOLEAN                                                            servingCellId_exist;
	ServCellIndex_t                                                    servingCellId;
	SRS_SpatialRelationInfo_referenceSignal_t                          referenceSignal;
}SRS_SpatialRelationInfo_t;


extern void EncodeSRS_SpatialRelationInfo(
	SRS_SpatialRelationInfo_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRS_SpatialRelationInfo(
	SRS_SpatialRelationInfo_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
