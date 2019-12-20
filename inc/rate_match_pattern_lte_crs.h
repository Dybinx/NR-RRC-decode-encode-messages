/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rate_match_pattern_lte_crs.h - this is the header file for message: RateMatchPatternLTE-CRS
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RATE_MATCH_PATTERN_LTE_CRS_H_
#define _RATE_MATCH_PATTERN_LTE_CRS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "eutra_mbsfn_subframe_config_list.h"


typedef enum {
	RATEMATCHPATTERNLTE_CRS_CARRIERBANDWIDTHDL_N6,
	RATEMATCHPATTERNLTE_CRS_CARRIERBANDWIDTHDL_N15,
	RATEMATCHPATTERNLTE_CRS_CARRIERBANDWIDTHDL_N25,
	RATEMATCHPATTERNLTE_CRS_CARRIERBANDWIDTHDL_N50,
	RATEMATCHPATTERNLTE_CRS_CARRIERBANDWIDTHDL_N75,
	RATEMATCHPATTERNLTE_CRS_CARRIERBANDWIDTHDL_N100,
	RATEMATCHPATTERNLTE_CRS_CARRIERBANDWIDTHDL_SPARE2,
	RATEMATCHPATTERNLTE_CRS_CARRIERBANDWIDTHDL_SPARE1,
	RATEMATCHPATTERNLTE_CRS_CARRIERBANDWIDTHDL_max = 0x7FFFFFFF
}RateMatchPatternLTE_CRS_carrierBandwidthDL_e;


typedef enum {
	RATEMATCHPATTERNLTE_CRS_NROFCRS_PORTS_N1,
	RATEMATCHPATTERNLTE_CRS_NROFCRS_PORTS_N2,
	RATEMATCHPATTERNLTE_CRS_NROFCRS_PORTS_N4,
	RATEMATCHPATTERNLTE_CRS_NROFCRS_PORTS_max = 0x7FFFFFFF
}RateMatchPatternLTE_CRS_nrofCRS_Ports_e;


typedef enum {
	RATEMATCHPATTERNLTE_CRS_V_SHIFT_N0,
	RATEMATCHPATTERNLTE_CRS_V_SHIFT_N1,
	RATEMATCHPATTERNLTE_CRS_V_SHIFT_N2,
	RATEMATCHPATTERNLTE_CRS_V_SHIFT_N3,
	RATEMATCHPATTERNLTE_CRS_V_SHIFT_N4,
	RATEMATCHPATTERNLTE_CRS_V_SHIFT_N5,
	RATEMATCHPATTERNLTE_CRS_V_SHIFT_max = 0x7FFFFFFF
}RateMatchPatternLTE_CRS_v_Shift_e;


typedef struct {
	uint32                                                             carrierFreqDL;
	RateMatchPatternLTE_CRS_carrierBandwidthDL_e                       carrierBandwidthDL;
	BOOLEAN                                                            mbsfn_SubframeConfigList_exist;
	EUTRA_MBSFN_SubframeConfigList_t                                   mbsfn_SubframeConfigList;
	RateMatchPatternLTE_CRS_nrofCRS_Ports_e                            nrofCRS_Ports;
	RateMatchPatternLTE_CRS_v_Shift_e                                  v_Shift;
}RateMatchPatternLTE_CRS_t;


extern void EncodeRateMatchPatternLTE_CRS(
	RateMatchPatternLTE_CRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRateMatchPatternLTE_CRS(
	RateMatchPatternLTE_CRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
