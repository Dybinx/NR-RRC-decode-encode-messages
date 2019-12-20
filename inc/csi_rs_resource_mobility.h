/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_rs_resource_mobility.h - this is the header file for message: CSI-RS-Resource-Mobility
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_RS_RESOURCE_MOBILITY_H_
#define _CSI_RS_RESOURCE_MOBILITY_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_rs_index.h"
#include "ssb_index.h"


typedef enum {
	CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS4,
	CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS5,
	CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS10,
	CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS20,
	CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS40,
	CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_max = 0x7FFFFFFF
}CSI_RS_Resource_Mobility_slotConfig_e;


/* union corresponding asn: CSI_RS_Resource_Mobility_slotConfig */
typedef union {
	uint32                                                             ms4;
	uint32                                                             ms5;
	uint32                                                             ms10;
	uint32                                                             ms20;
	uint32                                                             ms40;
}CSI_RS_Resource_Mobility_slotConfig_u;


/* struct corresponding asn: CSI_RS_Resource_Mobility_slotConfig */
typedef struct {
	CSI_RS_Resource_Mobility_slotConfig_e                              type;
	CSI_RS_Resource_Mobility_slotConfig_u                              a;
}CSI_RS_Resource_Mobility_slotConfig_t;


typedef struct {
	SSB_Index_t                                                        ssb_Index;
	BOOLEAN                                                            isQuasiColocated;
}CSI_RS_Resource_Mobility_associatedSSB_t;


/* struct corresponding asn: CSI_RS_Resource_Mobility_row1 */
/* ASN: BIT STRING SIZE(4) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CSI_RS_Resource_Mobility_row1_t;


/* struct corresponding asn: CSI_RS_Resource_Mobility_row2 */
/* ASN: BIT STRING SIZE(12) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CSI_RS_Resource_Mobility_row2_t;


typedef enum {
	CSI_RS_RESOURCE_MOBILITY_FREQUENCYDOMAINALLOCATION_ROW1,
	CSI_RS_RESOURCE_MOBILITY_FREQUENCYDOMAINALLOCATION_ROW2,
	CSI_RS_RESOURCE_MOBILITY_FREQUENCYDOMAINALLOCATION_max = 0x7FFFFFFF
}CSI_RS_Resource_Mobility_frequencyDomainAllocation_e;


/* union corresponding asn: CSI_RS_Resource_Mobility_frequencyDomainAllocation */
typedef union {
	CSI_RS_Resource_Mobility_row1_t                                    row1;
	CSI_RS_Resource_Mobility_row2_t                                    row2;
}CSI_RS_Resource_Mobility_frequencyDomainAllocation_u;


/* struct corresponding asn: CSI_RS_Resource_Mobility_frequencyDomainAllocation */
typedef struct {
	CSI_RS_Resource_Mobility_frequencyDomainAllocation_e               type;
	CSI_RS_Resource_Mobility_frequencyDomainAllocation_u               a;
}CSI_RS_Resource_Mobility_frequencyDomainAllocation_t;


typedef struct {
	CSI_RS_Index_t                                                     csi_RS_Index;
	CSI_RS_Resource_Mobility_slotConfig_t                              slotConfig;
	BOOLEAN                                                            associatedSSB_exist;
	CSI_RS_Resource_Mobility_associatedSSB_t                           associatedSSB;
	CSI_RS_Resource_Mobility_frequencyDomainAllocation_t               frequencyDomainAllocation;
	uint32                                                             firstOFDMSymbolInTimeDomain;
	uint32                                                             sequenceGenerationConfig;
	/* Extension marker start. */
}CSI_RS_Resource_Mobility_t;


extern void EncodeCSI_RS_Resource_Mobility(
	CSI_RS_Resource_Mobility_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_RS_Resource_Mobility(
	CSI_RS_Resource_Mobility_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
