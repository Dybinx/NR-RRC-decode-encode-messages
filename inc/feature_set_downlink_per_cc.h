/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set_downlink_per_cc.h - this is the header file for message: FeatureSetDownlinkPerCC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FEATURE_SET_DOWNLINK_PER_CC_H_
#define _FEATURE_SET_DOWNLINK_PER_CC_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "subcarrier_spacing.h"
#include "supported_bandwidth.h"
#include "mimo_layers_dl.h"
#include "modulation_order.h"


typedef enum {
	FEATURESETDOWNLINKPERCC_CHANNELBW_90MHZ_SUPPORTED,
	FEATURESETDOWNLINKPERCC_CHANNELBW_90MHZ_max = 0x7FFFFFFF
}FeatureSetDownlinkPerCC_channelBW_90mhz_e;


typedef struct {
	SubcarrierSpacing_e                                                supportedSubcarrierSpacingDL;
	SupportedBandwidth_t                                               supportedBandwidthDL;
	BOOLEAN                                                            channelBW_90mhz_exist;
	FeatureSetDownlinkPerCC_channelBW_90mhz_e                          channelBW_90mhz;
	BOOLEAN                                                            maxNumberMIMO_LayersPDSCH_exist;
	MIMO_LayersDL_e                                                    maxNumberMIMO_LayersPDSCH;
	BOOLEAN                                                            supportedModulationOrderDL_exist;
	ModulationOrder_e                                                  supportedModulationOrderDL;
}FeatureSetDownlinkPerCC_t;


extern void EncodeFeatureSetDownlinkPerCC(
	FeatureSetDownlinkPerCC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFeatureSetDownlinkPerCC(
	FeatureSetDownlinkPerCC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
