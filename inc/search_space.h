/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * search_space.h - this is the header file for message: SearchSpace
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SEARCH_SPACE_H_
#define _SEARCH_SPACE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "search_space_id.h"
#include "control_resource_set_id.h"


typedef struct {
	uint32                                                             dummy;
}SearchSpace_sl1_t;


typedef enum {
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL1,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL2,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL4,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL5,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL8,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL10,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL16,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL20,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL40,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL80,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL160,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL320,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL640,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL1280,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL2560,
	SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_max = 0x7FFFFFFF
}SearchSpace_monitoringSlotPeriodicityAndOffset_e;


/* union corresponding asn: SearchSpace_monitoringSlotPeriodicityAndOffset */
typedef union {
	SearchSpace_sl1_t                                                  sl1;
	uint32                                                             sl2;
	uint32                                                             sl4;
	uint32                                                             sl5;
	uint32                                                             sl8;
	uint32                                                             sl10;
	uint32                                                             sl16;
	uint32                                                             sl20;
	uint32                                                             sl40;
	uint32                                                             sl80;
	uint32                                                             sl160;
	uint32                                                             sl320;
	uint32                                                             sl640;
	uint32                                                             sl1280;
	uint32                                                             sl2560;
}SearchSpace_monitoringSlotPeriodicityAndOffset_u;


/* struct corresponding asn: SearchSpace_monitoringSlotPeriodicityAndOffset */
typedef struct {
	SearchSpace_monitoringSlotPeriodicityAndOffset_e                   type;
	SearchSpace_monitoringSlotPeriodicityAndOffset_u                   a;
}SearchSpace_monitoringSlotPeriodicityAndOffset_t;


/* struct corresponding asn: SearchSpace_monitoringSymbolsWithinSlot */
/* ASN: BIT STRING SIZE(14) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}SearchSpace_monitoringSymbolsWithinSlot_t;


typedef enum {
	SEARCHSPACE_AGGREGATIONLEVEL1_N0,
	SEARCHSPACE_AGGREGATIONLEVEL1_N1,
	SEARCHSPACE_AGGREGATIONLEVEL1_N2,
	SEARCHSPACE_AGGREGATIONLEVEL1_N3,
	SEARCHSPACE_AGGREGATIONLEVEL1_N4,
	SEARCHSPACE_AGGREGATIONLEVEL1_N5,
	SEARCHSPACE_AGGREGATIONLEVEL1_N6,
	SEARCHSPACE_AGGREGATIONLEVEL1_N8,
	SEARCHSPACE_AGGREGATIONLEVEL1_max = 0x7FFFFFFF
}SearchSpace_aggregationLevel1_e;


typedef enum {
	SEARCHSPACE_AGGREGATIONLEVEL2_N0,
	SEARCHSPACE_AGGREGATIONLEVEL2_N1,
	SEARCHSPACE_AGGREGATIONLEVEL2_N2,
	SEARCHSPACE_AGGREGATIONLEVEL2_N3,
	SEARCHSPACE_AGGREGATIONLEVEL2_N4,
	SEARCHSPACE_AGGREGATIONLEVEL2_N5,
	SEARCHSPACE_AGGREGATIONLEVEL2_N6,
	SEARCHSPACE_AGGREGATIONLEVEL2_N8,
	SEARCHSPACE_AGGREGATIONLEVEL2_max = 0x7FFFFFFF
}SearchSpace_aggregationLevel2_e;


typedef enum {
	SEARCHSPACE_AGGREGATIONLEVEL4_N0,
	SEARCHSPACE_AGGREGATIONLEVEL4_N1,
	SEARCHSPACE_AGGREGATIONLEVEL4_N2,
	SEARCHSPACE_AGGREGATIONLEVEL4_N3,
	SEARCHSPACE_AGGREGATIONLEVEL4_N4,
	SEARCHSPACE_AGGREGATIONLEVEL4_N5,
	SEARCHSPACE_AGGREGATIONLEVEL4_N6,
	SEARCHSPACE_AGGREGATIONLEVEL4_N8,
	SEARCHSPACE_AGGREGATIONLEVEL4_max = 0x7FFFFFFF
}SearchSpace_aggregationLevel4_e;


typedef enum {
	SEARCHSPACE_AGGREGATIONLEVEL8_N0,
	SEARCHSPACE_AGGREGATIONLEVEL8_N1,
	SEARCHSPACE_AGGREGATIONLEVEL8_N2,
	SEARCHSPACE_AGGREGATIONLEVEL8_N3,
	SEARCHSPACE_AGGREGATIONLEVEL8_N4,
	SEARCHSPACE_AGGREGATIONLEVEL8_N5,
	SEARCHSPACE_AGGREGATIONLEVEL8_N6,
	SEARCHSPACE_AGGREGATIONLEVEL8_N8,
	SEARCHSPACE_AGGREGATIONLEVEL8_max = 0x7FFFFFFF
}SearchSpace_aggregationLevel8_e;


typedef enum {
	SEARCHSPACE_AGGREGATIONLEVEL16_N0,
	SEARCHSPACE_AGGREGATIONLEVEL16_N1,
	SEARCHSPACE_AGGREGATIONLEVEL16_N2,
	SEARCHSPACE_AGGREGATIONLEVEL16_N3,
	SEARCHSPACE_AGGREGATIONLEVEL16_N4,
	SEARCHSPACE_AGGREGATIONLEVEL16_N5,
	SEARCHSPACE_AGGREGATIONLEVEL16_N6,
	SEARCHSPACE_AGGREGATIONLEVEL16_N8,
	SEARCHSPACE_AGGREGATIONLEVEL16_max = 0x7FFFFFFF
}SearchSpace_aggregationLevel16_e;


typedef struct {
	SearchSpace_aggregationLevel1_e                                    aggregationLevel1;
	SearchSpace_aggregationLevel2_e                                    aggregationLevel2;
	SearchSpace_aggregationLevel4_e                                    aggregationLevel4;
	SearchSpace_aggregationLevel8_e                                    aggregationLevel8;
	SearchSpace_aggregationLevel16_e                                   aggregationLevel16;
}SearchSpace_nrofCandidates_t;


typedef struct {
	/* Extension marker start. */
	uint32                                                             dummy;
}SearchSpace_dci_Format0_0_AndFormat1_0_t;


typedef enum {
	SEARCHSPACE_AGGREGATIONLEVEL1_1_N1,
	SEARCHSPACE_AGGREGATIONLEVEL1_1_N2,
	SEARCHSPACE_AGGREGATIONLEVEL1_1_max = 0x7FFFFFFF
}SearchSpace_aggregationLevel1_1_e;


typedef enum {
	SEARCHSPACE_AGGREGATIONLEVEL2_1_N1,
	SEARCHSPACE_AGGREGATIONLEVEL2_1_N2,
	SEARCHSPACE_AGGREGATIONLEVEL2_1_max = 0x7FFFFFFF
}SearchSpace_aggregationLevel2_1_e;


typedef enum {
	SEARCHSPACE_AGGREGATIONLEVEL4_1_N1,
	SEARCHSPACE_AGGREGATIONLEVEL4_1_N2,
	SEARCHSPACE_AGGREGATIONLEVEL4_1_max = 0x7FFFFFFF
}SearchSpace_aggregationLevel4_1_e;


typedef enum {
	SEARCHSPACE_AGGREGATIONLEVEL8_1_N1,
	SEARCHSPACE_AGGREGATIONLEVEL8_1_N2,
	SEARCHSPACE_AGGREGATIONLEVEL8_1_max = 0x7FFFFFFF
}SearchSpace_aggregationLevel8_1_e;


typedef enum {
	SEARCHSPACE_AGGREGATIONLEVEL16_1_N1,
	SEARCHSPACE_AGGREGATIONLEVEL16_1_N2,
	SEARCHSPACE_AGGREGATIONLEVEL16_1_max = 0x7FFFFFFF
}SearchSpace_aggregationLevel16_1_e;


typedef struct {
	BOOLEAN                                                            aggregationLevel1_exist;
	SearchSpace_aggregationLevel1_1_e                                  aggregationLevel1;
	BOOLEAN                                                            aggregationLevel2_exist;
	SearchSpace_aggregationLevel2_1_e                                  aggregationLevel2;
	BOOLEAN                                                            aggregationLevel4_exist;
	SearchSpace_aggregationLevel4_1_e                                  aggregationLevel4;
	BOOLEAN                                                            aggregationLevel8_exist;
	SearchSpace_aggregationLevel8_1_e                                  aggregationLevel8;
	BOOLEAN                                                            aggregationLevel16_exist;
	SearchSpace_aggregationLevel16_1_e                                 aggregationLevel16;
}SearchSpace_nrofCandidates_SFI_t;


typedef struct {
	SearchSpace_nrofCandidates_SFI_t                                   nrofCandidates_SFI;
	/* Extension marker start. */
}SearchSpace_dci_Format2_0_t;


typedef struct {
	/* Extension marker start. */
	uint32                                                             dummy;
}SearchSpace_dci_Format2_1_t;


typedef struct {
	/* Extension marker start. */
	uint32                                                             dummy;
}SearchSpace_dci_Format2_2_t;


typedef enum {
	SEARCHSPACE_MONITORINGPERIODICITY_N1,
	SEARCHSPACE_MONITORINGPERIODICITY_N2,
	SEARCHSPACE_MONITORINGPERIODICITY_N4,
	SEARCHSPACE_MONITORINGPERIODICITY_N5,
	SEARCHSPACE_MONITORINGPERIODICITY_N8,
	SEARCHSPACE_MONITORINGPERIODICITY_N10,
	SEARCHSPACE_MONITORINGPERIODICITY_N16,
	SEARCHSPACE_MONITORINGPERIODICITY_N20,
	SEARCHSPACE_MONITORINGPERIODICITY_max = 0x7FFFFFFF
}SearchSpace_monitoringPeriodicity_e;


typedef enum {
	SEARCHSPACE_NROFPDCCH_CANDIDATES_N1,
	SEARCHSPACE_NROFPDCCH_CANDIDATES_N2,
	SEARCHSPACE_NROFPDCCH_CANDIDATES_max = 0x7FFFFFFF
}SearchSpace_nrofPDCCH_Candidates_e;


typedef struct {
	BOOLEAN                                                            monitoringPeriodicity_exist;
	SearchSpace_monitoringPeriodicity_e                                monitoringPeriodicity;
	SearchSpace_nrofPDCCH_Candidates_e                                 nrofPDCCH_Candidates;
	/* Extension marker start. */
}SearchSpace_dci_Format2_3_t;


typedef struct {
	BOOLEAN                                                            dci_Format0_0_AndFormat1_0_exist;
	SearchSpace_dci_Format0_0_AndFormat1_0_t                           dci_Format0_0_AndFormat1_0;
	BOOLEAN                                                            dci_Format2_0_exist;
	SearchSpace_dci_Format2_0_t                                        dci_Format2_0;
	BOOLEAN                                                            dci_Format2_1_exist;
	SearchSpace_dci_Format2_1_t                                        dci_Format2_1;
	BOOLEAN                                                            dci_Format2_2_exist;
	SearchSpace_dci_Format2_2_t                                        dci_Format2_2;
	BOOLEAN                                                            dci_Format2_3_exist;
	SearchSpace_dci_Format2_3_t                                        dci_Format2_3;
}SearchSpace_common_t;


typedef enum {
	SEARCHSPACE_DCI_FORMATS_FORMATS0_0_AND_1_0,
	SEARCHSPACE_DCI_FORMATS_FORMATS0_1_AND_1_1,
	SEARCHSPACE_DCI_FORMATS_max = 0x7FFFFFFF
}SearchSpace_dci_Formats_e;


typedef struct {
	SearchSpace_dci_Formats_e                                          dci_Formats;
	/* Extension marker start. */
}SearchSpace_ue_Specific_t;


typedef enum {
	SEARCHSPACE_SEARCHSPACETYPE_COMMON,
	SEARCHSPACE_SEARCHSPACETYPE_UE_SPECIFIC,
	SEARCHSPACE_SEARCHSPACETYPE_max = 0x7FFFFFFF
}SearchSpace_searchSpaceType_e;


/* union corresponding asn: SearchSpace_searchSpaceType */
typedef union {
	SearchSpace_common_t                                               common;
	SearchSpace_ue_Specific_t                                          ue_Specific;
}SearchSpace_searchSpaceType_u;


/* struct corresponding asn: SearchSpace_searchSpaceType */
typedef struct {
	SearchSpace_searchSpaceType_e                                      type;
	SearchSpace_searchSpaceType_u                                      a;
}SearchSpace_searchSpaceType_t;


typedef struct {
	SearchSpaceId_t                                                    searchSpaceId;
	BOOLEAN                                                            controlResourceSetId_exist;
	ControlResourceSetId_t                                             controlResourceSetId;
	BOOLEAN                                                            monitoringSlotPeriodicityAndOffset_exist;
	SearchSpace_monitoringSlotPeriodicityAndOffset_t                   monitoringSlotPeriodicityAndOffset;
	BOOLEAN                                                            duration_exist;
	uint32                                                             duration;
	BOOLEAN                                                            monitoringSymbolsWithinSlot_exist;
	SearchSpace_monitoringSymbolsWithinSlot_t                          monitoringSymbolsWithinSlot;
	BOOLEAN                                                            nrofCandidates_exist;
	SearchSpace_nrofCandidates_t                                       nrofCandidates;
	BOOLEAN                                                            searchSpaceType_exist;
	SearchSpace_searchSpaceType_t                                      searchSpaceType;
}SearchSpace_t;


extern void EncodeSearchSpace(
	SearchSpace_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSearchSpace(
	SearchSpace_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
