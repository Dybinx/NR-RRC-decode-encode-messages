/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rach_config_common.h - this is the header file for message: RACH-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RACH_CONFIG_COMMON_H_
#define _RACH_CONFIG_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rach_config_generic.h"
#include "rsrp_range.h"
#include "rsrp_range.h"
#include "subcarrier_spacing.h"


typedef enum {
	RACH_CONFIGCOMMON_ONEEIGHTH_N4,
	RACH_CONFIGCOMMON_ONEEIGHTH_N8,
	RACH_CONFIGCOMMON_ONEEIGHTH_N12,
	RACH_CONFIGCOMMON_ONEEIGHTH_N16,
	RACH_CONFIGCOMMON_ONEEIGHTH_N20,
	RACH_CONFIGCOMMON_ONEEIGHTH_N24,
	RACH_CONFIGCOMMON_ONEEIGHTH_N28,
	RACH_CONFIGCOMMON_ONEEIGHTH_N32,
	RACH_CONFIGCOMMON_ONEEIGHTH_N36,
	RACH_CONFIGCOMMON_ONEEIGHTH_N40,
	RACH_CONFIGCOMMON_ONEEIGHTH_N44,
	RACH_CONFIGCOMMON_ONEEIGHTH_N48,
	RACH_CONFIGCOMMON_ONEEIGHTH_N52,
	RACH_CONFIGCOMMON_ONEEIGHTH_N56,
	RACH_CONFIGCOMMON_ONEEIGHTH_N60,
	RACH_CONFIGCOMMON_ONEEIGHTH_N64,
	RACH_CONFIGCOMMON_ONEEIGHTH_max = 0x7FFFFFFF
}RACH_ConfigCommon_oneEighth_e;


typedef enum {
	RACH_CONFIGCOMMON_ONEFOURTH_N4,
	RACH_CONFIGCOMMON_ONEFOURTH_N8,
	RACH_CONFIGCOMMON_ONEFOURTH_N12,
	RACH_CONFIGCOMMON_ONEFOURTH_N16,
	RACH_CONFIGCOMMON_ONEFOURTH_N20,
	RACH_CONFIGCOMMON_ONEFOURTH_N24,
	RACH_CONFIGCOMMON_ONEFOURTH_N28,
	RACH_CONFIGCOMMON_ONEFOURTH_N32,
	RACH_CONFIGCOMMON_ONEFOURTH_N36,
	RACH_CONFIGCOMMON_ONEFOURTH_N40,
	RACH_CONFIGCOMMON_ONEFOURTH_N44,
	RACH_CONFIGCOMMON_ONEFOURTH_N48,
	RACH_CONFIGCOMMON_ONEFOURTH_N52,
	RACH_CONFIGCOMMON_ONEFOURTH_N56,
	RACH_CONFIGCOMMON_ONEFOURTH_N60,
	RACH_CONFIGCOMMON_ONEFOURTH_N64,
	RACH_CONFIGCOMMON_ONEFOURTH_max = 0x7FFFFFFF
}RACH_ConfigCommon_oneFourth_e;


typedef enum {
	RACH_CONFIGCOMMON_ONEHALF_N4,
	RACH_CONFIGCOMMON_ONEHALF_N8,
	RACH_CONFIGCOMMON_ONEHALF_N12,
	RACH_CONFIGCOMMON_ONEHALF_N16,
	RACH_CONFIGCOMMON_ONEHALF_N20,
	RACH_CONFIGCOMMON_ONEHALF_N24,
	RACH_CONFIGCOMMON_ONEHALF_N28,
	RACH_CONFIGCOMMON_ONEHALF_N32,
	RACH_CONFIGCOMMON_ONEHALF_N36,
	RACH_CONFIGCOMMON_ONEHALF_N40,
	RACH_CONFIGCOMMON_ONEHALF_N44,
	RACH_CONFIGCOMMON_ONEHALF_N48,
	RACH_CONFIGCOMMON_ONEHALF_N52,
	RACH_CONFIGCOMMON_ONEHALF_N56,
	RACH_CONFIGCOMMON_ONEHALF_N60,
	RACH_CONFIGCOMMON_ONEHALF_N64,
	RACH_CONFIGCOMMON_ONEHALF_max = 0x7FFFFFFF
}RACH_ConfigCommon_oneHalf_e;


typedef enum {
	RACH_CONFIGCOMMON_ONE_N4,
	RACH_CONFIGCOMMON_ONE_N8,
	RACH_CONFIGCOMMON_ONE_N12,
	RACH_CONFIGCOMMON_ONE_N16,
	RACH_CONFIGCOMMON_ONE_N20,
	RACH_CONFIGCOMMON_ONE_N24,
	RACH_CONFIGCOMMON_ONE_N28,
	RACH_CONFIGCOMMON_ONE_N32,
	RACH_CONFIGCOMMON_ONE_N36,
	RACH_CONFIGCOMMON_ONE_N40,
	RACH_CONFIGCOMMON_ONE_N44,
	RACH_CONFIGCOMMON_ONE_N48,
	RACH_CONFIGCOMMON_ONE_N52,
	RACH_CONFIGCOMMON_ONE_N56,
	RACH_CONFIGCOMMON_ONE_N60,
	RACH_CONFIGCOMMON_ONE_N64,
	RACH_CONFIGCOMMON_ONE_max = 0x7FFFFFFF
}RACH_ConfigCommon_one_e;


typedef enum {
	RACH_CONFIGCOMMON_TWO_N4,
	RACH_CONFIGCOMMON_TWO_N8,
	RACH_CONFIGCOMMON_TWO_N12,
	RACH_CONFIGCOMMON_TWO_N16,
	RACH_CONFIGCOMMON_TWO_N20,
	RACH_CONFIGCOMMON_TWO_N24,
	RACH_CONFIGCOMMON_TWO_N28,
	RACH_CONFIGCOMMON_TWO_N32,
	RACH_CONFIGCOMMON_TWO_max = 0x7FFFFFFF
}RACH_ConfigCommon_two_e;


typedef enum {
	RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONEEIGHTH,
	RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONEFOURTH,
	RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONEHALF,
	RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONE,
	RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_TWO,
	RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_FOUR,
	RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_EIGHT,
	RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_SIXTEEN,
	RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_max = 0x7FFFFFFF
}RACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB_e;


/* union corresponding asn: RACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB */
typedef union {
	RACH_ConfigCommon_oneEighth_e                                      oneEighth;
	RACH_ConfigCommon_oneFourth_e                                      oneFourth;
	RACH_ConfigCommon_oneHalf_e                                        oneHalf;
	RACH_ConfigCommon_one_e                                            one;
	RACH_ConfigCommon_two_e                                            two;
	uint32                                                             four;
	uint32                                                             eight;
	uint32                                                             sixteen;
}RACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB_u;


/* struct corresponding asn: RACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB */
typedef struct {
	RACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB_e      type;
	RACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB_u      a;
}RACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB_t;


typedef enum {
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_B56,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_B144,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_B208,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_B256,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_B282,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_B480,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_B640,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_B800,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_B1000,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_SPARE7,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_SPARE6,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_SPARE5,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_SPARE4,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_SPARE3,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_SPARE2,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_SPARE1,
	RACH_CONFIGCOMMON_RA_MSG3SIZEGROUPA_max = 0x7FFFFFFF
}RACH_ConfigCommon_ra_Msg3SizeGroupA_e;


typedef enum {
	RACH_CONFIGCOMMON_MESSAGEPOWEROFFSETGROUPB_MINUSINFINITY,
	RACH_CONFIGCOMMON_MESSAGEPOWEROFFSETGROUPB_DB0,
	RACH_CONFIGCOMMON_MESSAGEPOWEROFFSETGROUPB_DB5,
	RACH_CONFIGCOMMON_MESSAGEPOWEROFFSETGROUPB_DB8,
	RACH_CONFIGCOMMON_MESSAGEPOWEROFFSETGROUPB_DB10,
	RACH_CONFIGCOMMON_MESSAGEPOWEROFFSETGROUPB_DB12,
	RACH_CONFIGCOMMON_MESSAGEPOWEROFFSETGROUPB_DB15,
	RACH_CONFIGCOMMON_MESSAGEPOWEROFFSETGROUPB_DB18,
	RACH_CONFIGCOMMON_MESSAGEPOWEROFFSETGROUPB_max = 0x7FFFFFFF
}RACH_ConfigCommon_messagePowerOffsetGroupB_e;


typedef struct {
	RACH_ConfigCommon_ra_Msg3SizeGroupA_e                              ra_Msg3SizeGroupA;
	RACH_ConfigCommon_messagePowerOffsetGroupB_e                       messagePowerOffsetGroupB;
	uint32                                                             numberOfRA_PreamblesGroupA;
}RACH_ConfigCommon_groupBconfigured_t;


typedef enum {
	RACH_CONFIGCOMMON_RA_CONTENTIONRESOLUTIONTIMER_SF8,
	RACH_CONFIGCOMMON_RA_CONTENTIONRESOLUTIONTIMER_SF16,
	RACH_CONFIGCOMMON_RA_CONTENTIONRESOLUTIONTIMER_SF24,
	RACH_CONFIGCOMMON_RA_CONTENTIONRESOLUTIONTIMER_SF32,
	RACH_CONFIGCOMMON_RA_CONTENTIONRESOLUTIONTIMER_SF40,
	RACH_CONFIGCOMMON_RA_CONTENTIONRESOLUTIONTIMER_SF48,
	RACH_CONFIGCOMMON_RA_CONTENTIONRESOLUTIONTIMER_SF56,
	RACH_CONFIGCOMMON_RA_CONTENTIONRESOLUTIONTIMER_SF64,
	RACH_CONFIGCOMMON_RA_CONTENTIONRESOLUTIONTIMER_max = 0x7FFFFFFF
}RACH_ConfigCommon_ra_ContentionResolutionTimer_e;


typedef enum {
	RACH_CONFIGCOMMON_PRACH_ROOTSEQUENCEINDEX_L839,
	RACH_CONFIGCOMMON_PRACH_ROOTSEQUENCEINDEX_L139,
	RACH_CONFIGCOMMON_PRACH_ROOTSEQUENCEINDEX_max = 0x7FFFFFFF
}RACH_ConfigCommon_prach_RootSequenceIndex_e;


/* union corresponding asn: RACH_ConfigCommon_prach_RootSequenceIndex */
typedef union {
	uint32                                                             l839;
	uint32                                                             l139;
}RACH_ConfigCommon_prach_RootSequenceIndex_u;


/* struct corresponding asn: RACH_ConfigCommon_prach_RootSequenceIndex */
typedef struct {
	RACH_ConfigCommon_prach_RootSequenceIndex_e                        type;
	RACH_ConfigCommon_prach_RootSequenceIndex_u                        a;
}RACH_ConfigCommon_prach_RootSequenceIndex_t;


typedef enum {
	RACH_CONFIGCOMMON_RESTRICTEDSETCONFIG_UNRESTRICTEDSET,
	RACH_CONFIGCOMMON_RESTRICTEDSETCONFIG_RESTRICTEDSETTYPEA,
	RACH_CONFIGCOMMON_RESTRICTEDSETCONFIG_RESTRICTEDSETTYPEB,
	RACH_CONFIGCOMMON_RESTRICTEDSETCONFIG_max = 0x7FFFFFFF
}RACH_ConfigCommon_restrictedSetConfig_e;


typedef enum {
	RACH_CONFIGCOMMON_MSG3_TRANSFORMPRECODING_ENABLED,
	RACH_CONFIGCOMMON_MSG3_TRANSFORMPRECODING_max = 0x7FFFFFFF
}RACH_ConfigCommon_msg3_transformPrecoding_e;


typedef struct {
	RACH_ConfigGeneric_t                                               rach_ConfigGeneric;
	BOOLEAN                                                            totalNumberOfRA_Preambles_exist;
	uint32                                                             totalNumberOfRA_Preambles;
	BOOLEAN                                                            ssb_perRACH_OccasionAndCB_PreamblesPerSSB_exist;
	RACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB_t      ssb_perRACH_OccasionAndCB_PreamblesPerSSB;
	BOOLEAN                                                            groupBconfigured_exist;
	RACH_ConfigCommon_groupBconfigured_t                               groupBconfigured;
	RACH_ConfigCommon_ra_ContentionResolutionTimer_e                   ra_ContentionResolutionTimer;
	BOOLEAN                                                            rsrp_ThresholdSSB_exist;
	RSRP_Range_t                                                       rsrp_ThresholdSSB;
	BOOLEAN                                                            rsrp_ThresholdSSB_SUL_exist;
	RSRP_Range_t                                                       rsrp_ThresholdSSB_SUL;
	RACH_ConfigCommon_prach_RootSequenceIndex_t                        prach_RootSequenceIndex;
	BOOLEAN                                                            msg1_SubcarrierSpacing_exist;
	SubcarrierSpacing_e                                                msg1_SubcarrierSpacing;
	RACH_ConfigCommon_restrictedSetConfig_e                            restrictedSetConfig;
	BOOLEAN                                                            msg3_transformPrecoding_exist;
	RACH_ConfigCommon_msg3_transformPrecoding_e                        msg3_transformPrecoding;
	/* Extension marker start. */
}RACH_ConfigCommon_t;


extern void EncodeRACH_ConfigCommon(
	RACH_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRACH_ConfigCommon(
	RACH_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
