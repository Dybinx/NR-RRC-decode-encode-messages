/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_resource_set.h - this is the header file for message: SRS-ResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRS_RESOURCE_SET_H_
#define _SRS_RESOURCE_SET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "srs_resource_set_id.h"
#include "srs_resource_id.h"
#include "nzp_csi_rs_resource_id.h"
#include "nzp_csi_rs_resource_id.h"
#include "nzp_csi_rs_resource_id.h"
#include "alpha.h"
#include "ssb_index.h"
#include "nzp_csi_rs_resource_id.h"


typedef struct {
	uint32                                                             length;
	SRS_ResourceId_t                                                   elm[maxNrofSRS_ResourcesPerSet];
}SRS_ResourceSet_srs_ResourceIdList_t;


typedef struct {
	uint32                                                             aperiodicSRS_ResourceTrigger;
	BOOLEAN                                                            csi_RS_exist;
	NZP_CSI_RS_ResourceId_t                                            csi_RS;
	BOOLEAN                                                            slotOffset_exist;
	uint32                                                             slotOffset;
	/* Extension marker start. */
}SRS_ResourceSet_aperiodic_t;


typedef struct {
	BOOLEAN                                                            associatedCSI_RS_exist;
	NZP_CSI_RS_ResourceId_t                                            associatedCSI_RS;
	/* Extension marker start. */
}SRS_ResourceSet_semi_persistent_t;


typedef struct {
	BOOLEAN                                                            associatedCSI_RS_exist;
	NZP_CSI_RS_ResourceId_t                                            associatedCSI_RS;
	/* Extension marker start. */
}SRS_ResourceSet_periodic_t;


typedef enum {
	SRS_RESOURCESET_RESOURCETYPE_APERIODIC,
	SRS_RESOURCESET_RESOURCETYPE_SEMI_PERSISTENT,
	SRS_RESOURCESET_RESOURCETYPE_PERIODIC,
	SRS_RESOURCESET_RESOURCETYPE_max = 0x7FFFFFFF
}SRS_ResourceSet_resourceType_e;


/* union corresponding asn: SRS_ResourceSet_resourceType */
typedef union {
	SRS_ResourceSet_aperiodic_t                                        aperiodic;
	SRS_ResourceSet_semi_persistent_t                                  semi_persistent;
	SRS_ResourceSet_periodic_t                                         periodic;
}SRS_ResourceSet_resourceType_u;


/* struct corresponding asn: SRS_ResourceSet_resourceType */
typedef struct {
	SRS_ResourceSet_resourceType_e                                     type;
	SRS_ResourceSet_resourceType_u                                     a;
}SRS_ResourceSet_resourceType_t;


typedef enum {
	SRS_RESOURCESET_USAGE_BEAMMANAGEMENT,
	SRS_RESOURCESET_USAGE_CODEBOOK,
	SRS_RESOURCESET_USAGE_NONCODEBOOK,
	SRS_RESOURCESET_USAGE_ANTENNASWITCHING,
	SRS_RESOURCESET_USAGE_max = 0x7FFFFFFF
}SRS_ResourceSet_usage_e;


typedef enum {
	SRS_RESOURCESET_PATHLOSSREFERENCERS_SSB_INDEX,
	SRS_RESOURCESET_PATHLOSSREFERENCERS_CSI_RS_INDEX,
	SRS_RESOURCESET_PATHLOSSREFERENCERS_max = 0x7FFFFFFF
}SRS_ResourceSet_pathlossReferenceRS_e;


/* union corresponding asn: SRS_ResourceSet_pathlossReferenceRS */
typedef union {
	SSB_Index_t                                                        ssb_Index;
	NZP_CSI_RS_ResourceId_t                                            csi_RS_Index;
}SRS_ResourceSet_pathlossReferenceRS_u;


/* struct corresponding asn: SRS_ResourceSet_pathlossReferenceRS */
typedef struct {
	SRS_ResourceSet_pathlossReferenceRS_e                              type;
	SRS_ResourceSet_pathlossReferenceRS_u                              a;
}SRS_ResourceSet_pathlossReferenceRS_t;


typedef enum {
	SRS_RESOURCESET_SRS_POWERCONTROLADJUSTMENTSTATES_SAMEASFCI2,
	SRS_RESOURCESET_SRS_POWERCONTROLADJUSTMENTSTATES_SEPARATECLOSEDLOOP,
	SRS_RESOURCESET_SRS_POWERCONTROLADJUSTMENTSTATES_max = 0x7FFFFFFF
}SRS_ResourceSet_srs_PowerControlAdjustmentStates_e;


typedef struct {
	SRS_ResourceSetId_t                                                srs_ResourceSetId;
	BOOLEAN                                                            srs_ResourceIdList_exist;
	SRS_ResourceSet_srs_ResourceIdList_t                               srs_ResourceIdList;
	SRS_ResourceSet_resourceType_t                                     resourceType;
	SRS_ResourceSet_usage_e                                            usage;
	BOOLEAN                                                            alpha_exist;
	Alpha_e                                                            alpha;
	BOOLEAN                                                            p0_exist;
	int32                                                              p0;
	BOOLEAN                                                            pathlossReferenceRS_exist;
	SRS_ResourceSet_pathlossReferenceRS_t                              pathlossReferenceRS;
	BOOLEAN                                                            srs_PowerControlAdjustmentStates_exist;
	SRS_ResourceSet_srs_PowerControlAdjustmentStates_e                 srs_PowerControlAdjustmentStates;
	/* Extension marker start. */
}SRS_ResourceSet_t;


extern void EncodeSRS_ResourceSet(
	SRS_ResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRS_ResourceSet(
	SRS_ResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
