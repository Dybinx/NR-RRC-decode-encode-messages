/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * serving_cell_config_common.h - this is the header file for message: ServingCellConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SERVING_CELL_CONFIG_COMMON_H_
#define _SERVING_CELL_CONFIG_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "phys_cell_id.h"
#include "downlink_config_common.h"
#include "uplink_config_common.h"
#include "uplink_config_common.h"
#include "rate_match_pattern_lte_crs.h"
#include "rate_match_pattern.h"
#include "rate_match_pattern_id.h"
#include "subcarrier_spacing.h"
#include "tdd_ul_dl_config_common.h"


typedef enum {
	SERVINGCELLCONFIGCOMMON_N_TIMINGADVANCEOFFSET_N0,
	SERVINGCELLCONFIGCOMMON_N_TIMINGADVANCEOFFSET_N25600,
	SERVINGCELLCONFIGCOMMON_N_TIMINGADVANCEOFFSET_N39936,
	SERVINGCELLCONFIGCOMMON_N_TIMINGADVANCEOFFSET_max = 0x7FFFFFFF
}ServingCellConfigCommon_n_TimingAdvanceOffset_e;


/* struct corresponding asn: ServingCellConfigCommon_shortBitmap */
/* ASN: BIT STRING SIZE(4) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}ServingCellConfigCommon_shortBitmap_t;


/* struct corresponding asn: ServingCellConfigCommon_mediumBitmap */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}ServingCellConfigCommon_mediumBitmap_t;


/* struct corresponding asn: ServingCellConfigCommon_longBitmap */
/* ASN: BIT STRING SIZE(64) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[8];
}ServingCellConfigCommon_longBitmap_t;


typedef enum {
	SERVINGCELLCONFIGCOMMON_SSB_POSITIONSINBURST_SHORTBITMAP,
	SERVINGCELLCONFIGCOMMON_SSB_POSITIONSINBURST_MEDIUMBITMAP,
	SERVINGCELLCONFIGCOMMON_SSB_POSITIONSINBURST_LONGBITMAP,
	SERVINGCELLCONFIGCOMMON_SSB_POSITIONSINBURST_max = 0x7FFFFFFF
}ServingCellConfigCommon_ssb_PositionsInBurst_e;


/* union corresponding asn: ServingCellConfigCommon_ssb_PositionsInBurst */
typedef union {
	ServingCellConfigCommon_shortBitmap_t                              shortBitmap;
	ServingCellConfigCommon_mediumBitmap_t                             mediumBitmap;
	ServingCellConfigCommon_longBitmap_t                               longBitmap;
}ServingCellConfigCommon_ssb_PositionsInBurst_u;


/* struct corresponding asn: ServingCellConfigCommon_ssb_PositionsInBurst */
typedef struct {
	ServingCellConfigCommon_ssb_PositionsInBurst_e                     type;
	ServingCellConfigCommon_ssb_PositionsInBurst_u                     a;
}ServingCellConfigCommon_ssb_PositionsInBurst_t;


typedef enum {
	SERVINGCELLCONFIGCOMMON_SSB_PERIODICITYSERVINGCELL_MS5,
	SERVINGCELLCONFIGCOMMON_SSB_PERIODICITYSERVINGCELL_MS10,
	SERVINGCELLCONFIGCOMMON_SSB_PERIODICITYSERVINGCELL_MS20,
	SERVINGCELLCONFIGCOMMON_SSB_PERIODICITYSERVINGCELL_MS40,
	SERVINGCELLCONFIGCOMMON_SSB_PERIODICITYSERVINGCELL_MS80,
	SERVINGCELLCONFIGCOMMON_SSB_PERIODICITYSERVINGCELL_MS160,
	SERVINGCELLCONFIGCOMMON_SSB_PERIODICITYSERVINGCELL_SPARE2,
	SERVINGCELLCONFIGCOMMON_SSB_PERIODICITYSERVINGCELL_SPARE1,
	SERVINGCELLCONFIGCOMMON_SSB_PERIODICITYSERVINGCELL_max = 0x7FFFFFFF
}ServingCellConfigCommon_ssb_periodicityServingCell_e;


typedef enum {
	SERVINGCELLCONFIGCOMMON_DMRS_TYPEA_POSITION_POS2,
	SERVINGCELLCONFIGCOMMON_DMRS_TYPEA_POSITION_POS3,
	SERVINGCELLCONFIGCOMMON_DMRS_TYPEA_POSITION_max = 0x7FFFFFFF
}ServingCellConfigCommon_dmrs_TypeA_Position_e;


typedef struct {
	uint32                                                             dummy;
}ServingCellConfigCommon_release_t;


typedef enum {
	SERVINGCELLCONFIGCOMMON_LTE_CRS_TOMATCHAROUND_RELEASE,
	SERVINGCELLCONFIGCOMMON_LTE_CRS_TOMATCHAROUND_SETUP,
	SERVINGCELLCONFIGCOMMON_LTE_CRS_TOMATCHAROUND_max = 0x7FFFFFFF
}ServingCellConfigCommon_lte_CRS_ToMatchAround_e;


/* union corresponding asn: ServingCellConfigCommon_lte_CRS_ToMatchAround */
typedef union {
	ServingCellConfigCommon_release_t                                  release;
	RateMatchPatternLTE_CRS_t                                          setup;
}ServingCellConfigCommon_lte_CRS_ToMatchAround_u;


/* struct corresponding asn: ServingCellConfigCommon_lte_CRS_ToMatchAround */
typedef struct {
	ServingCellConfigCommon_lte_CRS_ToMatchAround_e                    type;
	ServingCellConfigCommon_lte_CRS_ToMatchAround_u                    a;
}ServingCellConfigCommon_lte_CRS_ToMatchAround_t;


typedef struct {
	uint32                                                             length;
	RateMatchPattern_t                                                 elm[maxNrofRateMatchPatterns];
}ServingCellConfigCommon_rateMatchPatternToAddModList_t;


typedef struct {
	uint32                                                             length;
	RateMatchPatternId_t                                               elm[maxNrofRateMatchPatterns];
}ServingCellConfigCommon_rateMatchPatternToReleaseList_t;


typedef struct {
	BOOLEAN                                                            physCellId_exist;
	PhysCellId_t                                                       physCellId;
	BOOLEAN                                                            downlinkConfigCommon_exist;
	DownlinkConfigCommon_t                                             downlinkConfigCommon;
	BOOLEAN                                                            uplinkConfigCommon_exist;
	UplinkConfigCommon_t                                               uplinkConfigCommon;
	BOOLEAN                                                            supplementaryUplinkConfig_exist;
	UplinkConfigCommon_t                                               supplementaryUplinkConfig;
	BOOLEAN                                                            n_TimingAdvanceOffset_exist;
	ServingCellConfigCommon_n_TimingAdvanceOffset_e                    n_TimingAdvanceOffset;
	BOOLEAN                                                            ssb_PositionsInBurst_exist;
	ServingCellConfigCommon_ssb_PositionsInBurst_t                     ssb_PositionsInBurst;
	BOOLEAN                                                            ssb_periodicityServingCell_exist;
	ServingCellConfigCommon_ssb_periodicityServingCell_e               ssb_periodicityServingCell;
	ServingCellConfigCommon_dmrs_TypeA_Position_e                      dmrs_TypeA_Position;
	BOOLEAN                                                            lte_CRS_ToMatchAround_exist;
	ServingCellConfigCommon_lte_CRS_ToMatchAround_t                    lte_CRS_ToMatchAround;
	BOOLEAN                                                            rateMatchPatternToAddModList_exist;
	ServingCellConfigCommon_rateMatchPatternToAddModList_t             rateMatchPatternToAddModList;
	BOOLEAN                                                            rateMatchPatternToReleaseList_exist;
	ServingCellConfigCommon_rateMatchPatternToReleaseList_t            rateMatchPatternToReleaseList;
	BOOLEAN                                                            subcarrierSpacing_exist;
	SubcarrierSpacing_e                                                subcarrierSpacing;
	BOOLEAN                                                            tdd_UL_DL_ConfigurationCommon_exist;
	TDD_UL_DL_ConfigCommon_t                                           tdd_UL_DL_ConfigurationCommon;
	int32                                                              ss_PBCH_BlockPower;
	/* Extension marker start. */
}ServingCellConfigCommon_t;


extern void EncodeServingCellConfigCommon(
	ServingCellConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeServingCellConfigCommon(
	ServingCellConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
