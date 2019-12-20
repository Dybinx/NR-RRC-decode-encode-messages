/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_resource_config.h - this is the header file for message: CSI-ResourceConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_RESOURCE_CONFIG_H_
#define _CSI_RESOURCE_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_resource_config_id.h"
#include "nzp_csi_rs_resource_set_id.h"
#include "csi_ssb_resource_set_id.h"
#include "csi_im_resource_set_id.h"
#include "bwp_id.h"


typedef struct {
	uint32                                                             length;
	NZP_CSI_RS_ResourceSetId_t                                         elm[maxNrofNZP_CSI_RS_ResourceSetsPerConfig];
}CSI_ResourceConfig_nzp_CSI_RS_ResourceSetList_t;


typedef struct {
	uint32                                                             length;
	CSI_SSB_ResourceSetId_t                                            elm[maxNrofCSI_SSB_ResourceSetsPerConfig];
}CSI_ResourceConfig_csi_SSB_ResourceSetList_t;


typedef struct {
	BOOLEAN                                                            nzp_CSI_RS_ResourceSetList_exist;
	CSI_ResourceConfig_nzp_CSI_RS_ResourceSetList_t                    nzp_CSI_RS_ResourceSetList;
	BOOLEAN                                                            csi_SSB_ResourceSetList_exist;
	CSI_ResourceConfig_csi_SSB_ResourceSetList_t                       csi_SSB_ResourceSetList;
}CSI_ResourceConfig_nzp_CSI_RS_SSB_t;


typedef struct {
	uint32                                                             length;
	CSI_IM_ResourceSetId_t                                             elm[maxNrofCSI_IM_ResourceSetsPerConfig];
}CSI_ResourceConfig_csi_IM_ResourceSetList_t;


typedef enum {
	CSI_RESOURCECONFIG_CSI_RS_RESOURCESETLIST_NZP_CSI_RS_SSB,
	CSI_RESOURCECONFIG_CSI_RS_RESOURCESETLIST_CSI_IM_RESOURCESETLIST,
	CSI_RESOURCECONFIG_CSI_RS_RESOURCESETLIST_max = 0x7FFFFFFF
}CSI_ResourceConfig_csi_RS_ResourceSetList_e;


/* union corresponding asn: CSI_ResourceConfig_csi_RS_ResourceSetList */
typedef union {
	CSI_ResourceConfig_nzp_CSI_RS_SSB_t                                nzp_CSI_RS_SSB;
	CSI_ResourceConfig_csi_IM_ResourceSetList_t                        csi_IM_ResourceSetList;
}CSI_ResourceConfig_csi_RS_ResourceSetList_u;


/* struct corresponding asn: CSI_ResourceConfig_csi_RS_ResourceSetList */
typedef struct {
	CSI_ResourceConfig_csi_RS_ResourceSetList_e                        type;
	CSI_ResourceConfig_csi_RS_ResourceSetList_u                        a;
}CSI_ResourceConfig_csi_RS_ResourceSetList_t;


typedef enum {
	CSI_RESOURCECONFIG_RESOURCETYPE_APERIODIC,
	CSI_RESOURCECONFIG_RESOURCETYPE_SEMIPERSISTENT,
	CSI_RESOURCECONFIG_RESOURCETYPE_PERIODIC,
	CSI_RESOURCECONFIG_RESOURCETYPE_max = 0x7FFFFFFF
}CSI_ResourceConfig_resourceType_e;


typedef struct {
	CSI_ResourceConfigId_t                                             csi_ResourceConfigId;
	CSI_ResourceConfig_csi_RS_ResourceSetList_t                        csi_RS_ResourceSetList;
	BWP_Id_t                                                           bwp_Id;
	CSI_ResourceConfig_resourceType_e                                  resourceType;
	/* Extension marker start. */
}CSI_ResourceConfig_t;


extern void EncodeCSI_ResourceConfig(
	CSI_ResourceConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_ResourceConfig(
	CSI_ResourceConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
