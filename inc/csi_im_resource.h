/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_im_resource.h - this is the header file for message: CSI-IM-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_IM_RESOURCE_H_
#define _CSI_IM_RESOURCE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_im_resource_id.h"
#include "csi_frequency_occupation.h"
#include "csi_resource_periodicity_and_offset.h"


typedef enum {
	CSI_IM_RESOURCE_SUBCARRIERLOCATION_P0_S0,
	CSI_IM_RESOURCE_SUBCARRIERLOCATION_P0_S2,
	CSI_IM_RESOURCE_SUBCARRIERLOCATION_P0_S4,
	CSI_IM_RESOURCE_SUBCARRIERLOCATION_P0_S6,
	CSI_IM_RESOURCE_SUBCARRIERLOCATION_P0_S8,
	CSI_IM_RESOURCE_SUBCARRIERLOCATION_P0_S10,
	CSI_IM_RESOURCE_SUBCARRIERLOCATION_P0_max = 0x7FFFFFFF
}CSI_IM_Resource_subcarrierLocation_p0_e;


typedef struct {
	CSI_IM_Resource_subcarrierLocation_p0_e                            subcarrierLocation_p0;
	uint32                                                             symbolLocation_p0;
}CSI_IM_Resource_pattern0_t;


typedef enum {
	CSI_IM_RESOURCE_SUBCARRIERLOCATION_P1_S0,
	CSI_IM_RESOURCE_SUBCARRIERLOCATION_P1_S4,
	CSI_IM_RESOURCE_SUBCARRIERLOCATION_P1_S8,
	CSI_IM_RESOURCE_SUBCARRIERLOCATION_P1_max = 0x7FFFFFFF
}CSI_IM_Resource_subcarrierLocation_p1_e;


typedef struct {
	CSI_IM_Resource_subcarrierLocation_p1_e                            subcarrierLocation_p1;
	uint32                                                             symbolLocation_p1;
}CSI_IM_Resource_pattern1_t;


typedef enum {
	CSI_IM_RESOURCE_CSI_IM_RESOURCEELEMENTPATTERN_PATTERN0,
	CSI_IM_RESOURCE_CSI_IM_RESOURCEELEMENTPATTERN_PATTERN1,
	CSI_IM_RESOURCE_CSI_IM_RESOURCEELEMENTPATTERN_max = 0x7FFFFFFF
}CSI_IM_Resource_csi_IM_ResourceElementPattern_e;


/* union corresponding asn: CSI_IM_Resource_csi_IM_ResourceElementPattern */
typedef union {
	CSI_IM_Resource_pattern0_t                                         pattern0;
	CSI_IM_Resource_pattern1_t                                         pattern1;
}CSI_IM_Resource_csi_IM_ResourceElementPattern_u;


/* struct corresponding asn: CSI_IM_Resource_csi_IM_ResourceElementPattern */
typedef struct {
	CSI_IM_Resource_csi_IM_ResourceElementPattern_e                    type;
	CSI_IM_Resource_csi_IM_ResourceElementPattern_u                    a;
}CSI_IM_Resource_csi_IM_ResourceElementPattern_t;


typedef struct {
	CSI_IM_ResourceId_t                                                csi_IM_ResourceId;
	BOOLEAN                                                            csi_IM_ResourceElementPattern_exist;
	CSI_IM_Resource_csi_IM_ResourceElementPattern_t                    csi_IM_ResourceElementPattern;
	BOOLEAN                                                            freqBand_exist;
	CSI_FrequencyOccupation_t                                          freqBand;
	BOOLEAN                                                            periodicityAndOffset_exist;
	CSI_ResourcePeriodicityAndOffset_t                                 periodicityAndOffset;
	/* Extension marker start. */
}CSI_IM_Resource_t;


extern void EncodeCSI_IM_Resource(
	CSI_IM_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_IM_Resource(
	CSI_IM_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
