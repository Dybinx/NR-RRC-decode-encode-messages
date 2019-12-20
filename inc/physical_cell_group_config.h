/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * physical_cell_group_config.h - this is the header file for message: PhysicalCellGroupConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PHYSICAL_CELL_GROUP_CONFIG_H_
#define _PHYSICAL_CELL_GROUP_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "p_max.h"
#include "rnti_value.h"
#include "rnti_value.h"
#include "rnti_value.h"
#include "rnti_value.h"
#include "rnti_value.h"


typedef enum {
	PHYSICALCELLGROUPCONFIG_HARQ_ACK_SPATIALBUNDLINGPUCCH_TRUE,
	PHYSICALCELLGROUPCONFIG_HARQ_ACK_SPATIALBUNDLINGPUCCH_max = 0x7FFFFFFF
}PhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUCCH_e;


typedef enum {
	PHYSICALCELLGROUPCONFIG_HARQ_ACK_SPATIALBUNDLINGPUSCH_TRUE,
	PHYSICALCELLGROUPCONFIG_HARQ_ACK_SPATIALBUNDLINGPUSCH_max = 0x7FFFFFFF
}PhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUSCH_e;


typedef enum {
	PHYSICALCELLGROUPCONFIG_PDSCH_HARQ_ACK_CODEBOOK_SEMISTATIC,
	PHYSICALCELLGROUPCONFIG_PDSCH_HARQ_ACK_CODEBOOK_DYNAMIC,
	PHYSICALCELLGROUPCONFIG_PDSCH_HARQ_ACK_CODEBOOK_max = 0x7FFFFFFF
}PhysicalCellGroupConfig_pdsch_HARQ_ACK_Codebook_e;


typedef struct {
	uint32                                                             dummy;
}PhysicalCellGroupConfig_release_t;


typedef enum {
	PHYSICALCELLGROUPCONFIG_CS_RNTI_RELEASE,
	PHYSICALCELLGROUPCONFIG_CS_RNTI_SETUP,
	PHYSICALCELLGROUPCONFIG_CS_RNTI_max = 0x7FFFFFFF
}PhysicalCellGroupConfig_cs_RNTI_e;


/* union corresponding asn: PhysicalCellGroupConfig_cs_RNTI */
typedef union {
	PhysicalCellGroupConfig_release_t                                  release;
	RNTI_Value_t                                                       setup;
}PhysicalCellGroupConfig_cs_RNTI_u;


/* struct corresponding asn: PhysicalCellGroupConfig_cs_RNTI */
typedef struct {
	PhysicalCellGroupConfig_cs_RNTI_e                                  type;
	PhysicalCellGroupConfig_cs_RNTI_u                                  a;
}PhysicalCellGroupConfig_cs_RNTI_t;


typedef struct {
	BOOLEAN                                                            harq_ACK_SpatialBundlingPUCCH_exist;
	PhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUCCH_e            harq_ACK_SpatialBundlingPUCCH;
	BOOLEAN                                                            harq_ACK_SpatialBundlingPUSCH_exist;
	PhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUSCH_e            harq_ACK_SpatialBundlingPUSCH;
	BOOLEAN                                                            p_NR_exist;
	P_Max_t                                                            p_NR;
	PhysicalCellGroupConfig_pdsch_HARQ_ACK_Codebook_e                  pdsch_HARQ_ACK_Codebook;
	BOOLEAN                                                            tpc_SRS_RNTI_exist;
	RNTI_Value_t                                                       tpc_SRS_RNTI;
	BOOLEAN                                                            tpc_PUCCH_RNTI_exist;
	RNTI_Value_t                                                       tpc_PUCCH_RNTI;
	BOOLEAN                                                            tpc_PUSCH_RNTI_exist;
	RNTI_Value_t                                                       tpc_PUSCH_RNTI;
	BOOLEAN                                                            sp_CSI_RNTI_exist;
	RNTI_Value_t                                                       sp_CSI_RNTI;
	BOOLEAN                                                            cs_RNTI_exist;
	PhysicalCellGroupConfig_cs_RNTI_t                                  cs_RNTI;
	/* Extension marker start. */
}PhysicalCellGroupConfig_t;


extern void EncodePhysicalCellGroupConfig(
	PhysicalCellGroupConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePhysicalCellGroupConfig(
	PhysicalCellGroupConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
