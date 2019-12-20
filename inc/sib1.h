/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sib1.h - this is the header file for message: SIB1
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SIB1_H_
#define _SIB1_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "uplink_config_common.h"
#include "uplink_config_common.h"
#include "tdd_ul_dl_config_common.h"
#include "tdd_ul_dl_config_common.h"
#include "pdcch_config_common.h"
#include "pucch_config_common.h"


typedef enum {
	SIB1_FREQUENCYOFFSETSSB_KHZ_5,
	SIB1_FREQUENCYOFFSETSSB_KHZ5,
	SIB1_FREQUENCYOFFSETSSB_max = 0x7FFFFFFF
}SIB1_frequencyOffsetSSB_e;


/* struct corresponding asn: SIB1_inOneGroup */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}SIB1_inOneGroup_t;


/* struct corresponding asn: SIB1_groupPresence */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}SIB1_groupPresence_t;


typedef struct {
	SIB1_inOneGroup_t                                                  inOneGroup;
	BOOLEAN                                                            groupPresence_exist;
	SIB1_groupPresence_t                                               groupPresence;
}SIB1_ssb_PositionsInBurst_t;


typedef enum {
	SIB1_SSB_PERIODICITYSERVINGCELL_MS5,
	SIB1_SSB_PERIODICITYSERVINGCELL_MS10,
	SIB1_SSB_PERIODICITYSERVINGCELL_MS20,
	SIB1_SSB_PERIODICITYSERVINGCELL_MS40,
	SIB1_SSB_PERIODICITYSERVINGCELL_MS80,
	SIB1_SSB_PERIODICITYSERVINGCELL_MS160,
	SIB1_SSB_PERIODICITYSERVINGCELL_SPARE1,
	SIB1_SSB_PERIODICITYSERVINGCELL_SPARE2,
	SIB1_SSB_PERIODICITYSERVINGCELL_max = 0x7FFFFFFF
}SIB1_ssb_PeriodicityServingCell_e;


typedef struct {
	BOOLEAN                                                            uplinkConfigCommon_exist;
	UplinkConfigCommon_t                                               uplinkConfigCommon;
}SIB1_supplementaryUplink_t;


/* ASN: OCTET STRING */
typedef struct {
	uint32                                                             octets_num;
	uint8                                                              *value;
}SIB1_lateNonCriticalExtension_t;
typedef struct {
	uint32                                                             dummy;
}SIB1_nonCriticalExtension_t;


typedef struct {
	BOOLEAN                                                            frequencyOffsetSSB_exist;
	SIB1_frequencyOffsetSSB_e                                          frequencyOffsetSSB;
	SIB1_ssb_PositionsInBurst_t                                        ssb_PositionsInBurst;
	SIB1_ssb_PeriodicityServingCell_e                                  ssb_PeriodicityServingCell;
	int32                                                              ss_PBCH_BlockPower;
	BOOLEAN                                                            uplinkConfigCommon_exist;
	UplinkConfigCommon_t                                               uplinkConfigCommon;
	BOOLEAN                                                            supplementaryUplink_exist;
	SIB1_supplementaryUplink_t                                         supplementaryUplink;
	BOOLEAN                                                            tdd_UL_DL_Configuration_exist;
	TDD_UL_DL_ConfigCommon_t                                           tdd_UL_DL_Configuration;
	BOOLEAN                                                            tdd_UL_DL_configurationCommon2_exist;
	TDD_UL_DL_ConfigCommon_t                                           tdd_UL_DL_configurationCommon2;
	BOOLEAN                                                            pdcch_ConfigCommon_exist;
	PDCCH_ConfigCommon_t                                               pdcch_ConfigCommon;
	BOOLEAN                                                            pucch_ConfigCommon_exist;
	PUCCH_ConfigCommon_t                                               pucch_ConfigCommon;
	BOOLEAN                                                            lateNonCriticalExtension_exist;
	SIB1_lateNonCriticalExtension_t                                    lateNonCriticalExtension;
	BOOLEAN                                                            nonCriticalExtension_exist;
	SIB1_nonCriticalExtension_t                                        nonCriticalExtension;
}SIB1_t;


extern void EncodeSIB1(
	SIB1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSIB1(
	SIB1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
