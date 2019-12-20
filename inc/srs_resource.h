/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_resource.h - this is the header file for message: SRS-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRS_RESOURCE_H_
#define _SRS_RESOURCE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "srs_resource_id.h"
#include "srs_periodicity_and_offset.h"
#include "srs_periodicity_and_offset.h"
#include "srs_spatial_relation_info.h"


typedef enum {
	SRS_RESOURCE_NROFSRS_PORTS_PORT1,
	SRS_RESOURCE_NROFSRS_PORTS_PORTS2,
	SRS_RESOURCE_NROFSRS_PORTS_PORTS4,
	SRS_RESOURCE_NROFSRS_PORTS_max = 0x7FFFFFFF
}SRS_Resource_nrofSRS_Ports_e;


typedef enum {
	SRS_RESOURCE_PTRS_PORTINDEX_N0,
	SRS_RESOURCE_PTRS_PORTINDEX_N1,
	SRS_RESOURCE_PTRS_PORTINDEX_max = 0x7FFFFFFF
}SRS_Resource_ptrs_PortIndex_e;


typedef struct {
	uint32                                                             combOffset_n2;
	uint32                                                             cyclicShift_n2;
}SRS_Resource_n2_t;


typedef struct {
	uint32                                                             combOffset_n4;
	uint32                                                             cyclicShift_n4;
}SRS_Resource_n4_t;


typedef enum {
	SRS_RESOURCE_TRANSMISSIONCOMB_N2,
	SRS_RESOURCE_TRANSMISSIONCOMB_N4,
	SRS_RESOURCE_TRANSMISSIONCOMB_max = 0x7FFFFFFF
}SRS_Resource_transmissionComb_e;


/* union corresponding asn: SRS_Resource_transmissionComb */
typedef union {
	SRS_Resource_n2_t                                                  n2;
	SRS_Resource_n4_t                                                  n4;
}SRS_Resource_transmissionComb_u;


/* struct corresponding asn: SRS_Resource_transmissionComb */
typedef struct {
	SRS_Resource_transmissionComb_e                                    type;
	SRS_Resource_transmissionComb_u                                    a;
}SRS_Resource_transmissionComb_t;


typedef enum {
	SRS_RESOURCE_NROFSYMBOLS_N1,
	SRS_RESOURCE_NROFSYMBOLS_N2,
	SRS_RESOURCE_NROFSYMBOLS_N4,
	SRS_RESOURCE_NROFSYMBOLS_max = 0x7FFFFFFF
}SRS_Resource_nrofSymbols_e;


typedef enum {
	SRS_RESOURCE_REPETITIONFACTOR_N1,
	SRS_RESOURCE_REPETITIONFACTOR_N2,
	SRS_RESOURCE_REPETITIONFACTOR_N4,
	SRS_RESOURCE_REPETITIONFACTOR_max = 0x7FFFFFFF
}SRS_Resource_repetitionFactor_e;


typedef struct {
	uint32                                                             startPosition;
	SRS_Resource_nrofSymbols_e                                         nrofSymbols;
	SRS_Resource_repetitionFactor_e                                    repetitionFactor;
}SRS_Resource_resourceMapping_t;


typedef struct {
	uint32                                                             c_SRS;
	uint32                                                             b_SRS;
	uint32                                                             b_hop;
}SRS_Resource_freqHopping_t;


typedef enum {
	SRS_RESOURCE_GROUPORSEQUENCEHOPPING_NEITHER,
	SRS_RESOURCE_GROUPORSEQUENCEHOPPING_GROUPHOPPING,
	SRS_RESOURCE_GROUPORSEQUENCEHOPPING_SEQUENCEHOPPING,
	SRS_RESOURCE_GROUPORSEQUENCEHOPPING_max = 0x7FFFFFFF
}SRS_Resource_groupOrSequenceHopping_e;


typedef struct {
	/* Extension marker start. */
	uint32                                                             dummy;
}SRS_Resource_aperiodic_t;


typedef struct {
	SRS_PeriodicityAndOffset_t                                         periodicityAndOffset_sp;
	/* Extension marker start. */
}SRS_Resource_semi_persistent_t;


typedef struct {
	SRS_PeriodicityAndOffset_t                                         periodicityAndOffset_p;
	/* Extension marker start. */
}SRS_Resource_periodic_t;


typedef enum {
	SRS_RESOURCE_RESOURCETYPE_APERIODIC,
	SRS_RESOURCE_RESOURCETYPE_SEMI_PERSISTENT,
	SRS_RESOURCE_RESOURCETYPE_PERIODIC,
	SRS_RESOURCE_RESOURCETYPE_max = 0x7FFFFFFF
}SRS_Resource_resourceType_e;


/* union corresponding asn: SRS_Resource_resourceType */
typedef union {
	SRS_Resource_aperiodic_t                                           aperiodic;
	SRS_Resource_semi_persistent_t                                     semi_persistent;
	SRS_Resource_periodic_t                                            periodic;
}SRS_Resource_resourceType_u;


/* struct corresponding asn: SRS_Resource_resourceType */
typedef struct {
	SRS_Resource_resourceType_e                                        type;
	SRS_Resource_resourceType_u                                        a;
}SRS_Resource_resourceType_t;


/* struct corresponding asn: SRS_Resource_sequenceId */
/* ASN: BIT STRING SIZE(10) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}SRS_Resource_sequenceId_t;


typedef struct {
	SRS_ResourceId_t                                                   srs_ResourceId;
	SRS_Resource_nrofSRS_Ports_e                                       nrofSRS_Ports;
	BOOLEAN                                                            ptrs_PortIndex_exist;
	SRS_Resource_ptrs_PortIndex_e                                      ptrs_PortIndex;
	SRS_Resource_transmissionComb_t                                    transmissionComb;
	SRS_Resource_resourceMapping_t                                     resourceMapping;
	uint32                                                             freqDomainPosition;
	uint32                                                             freqDomainShift;
	SRS_Resource_freqHopping_t                                         freqHopping;
	SRS_Resource_groupOrSequenceHopping_e                              groupOrSequenceHopping;
	SRS_Resource_resourceType_t                                        resourceType;
	SRS_Resource_sequenceId_t                                          sequenceId;
	BOOLEAN                                                            spatialRelationInfo_exist;
	SRS_SpatialRelationInfo_t                                          spatialRelationInfo;
	/* Extension marker start. */
}SRS_Resource_t;


extern void EncodeSRS_Resource(
	SRS_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRS_Resource(
	SRS_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
