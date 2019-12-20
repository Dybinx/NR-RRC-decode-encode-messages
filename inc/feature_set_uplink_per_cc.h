/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set_uplink_per_cc.h - this is the header file for message: FeatureSetUplinkPerCC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FEATURE_SET_UPLINK_PER_CC_H_
#define _FEATURE_SET_UPLINK_PER_CC_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "subcarrier_spacing.h"
#include "supported_bandwidth.h"
#include "mimo_layers_ul.h"
#include "mimo_layers_ul.h"
#include "modulation_order.h"


typedef enum {
	FEATURESETUPLINKPERCC_CHANNELBW_90MHZ_SUPPORTED,
	FEATURESETUPLINKPERCC_CHANNELBW_90MHZ_max = 0x7FFFFFFF
}FeatureSetUplinkPerCC_channelBW_90mhz_e;


typedef struct {
	BOOLEAN                                                            maxNumberMIMO_LayersCB_PUSCH_exist;
	MIMO_LayersUL_e                                                    maxNumberMIMO_LayersCB_PUSCH;
	uint32                                                             maxNumberSRS_ResourcePerSet;
}FeatureSetUplinkPerCC_mimo_CB_PUSCH_t;


typedef enum {
	FEATURESETUPLINKPERCC_SIMULTANEOUSTXSUL_NONSUL_SUPPORTED,
	FEATURESETUPLINKPERCC_SIMULTANEOUSTXSUL_NONSUL_max = 0x7FFFFFFF
}FeatureSetUplinkPerCC_simultaneousTxSUL_NonSUL_e;


typedef struct {
	SubcarrierSpacing_e                                                supportedSubcarrierSpacingUL;
	SupportedBandwidth_t                                               supportedBandwidthUL;
	BOOLEAN                                                            channelBW_90mhz_exist;
	FeatureSetUplinkPerCC_channelBW_90mhz_e                            channelBW_90mhz;
	BOOLEAN                                                            mimo_CB_PUSCH_exist;
	FeatureSetUplinkPerCC_mimo_CB_PUSCH_t                              mimo_CB_PUSCH;
	BOOLEAN                                                            maxNumberMIMO_LayersNonCB_PUSCH_exist;
	MIMO_LayersUL_e                                                    maxNumberMIMO_LayersNonCB_PUSCH;
	BOOLEAN                                                            supportedModulationOrderUL_exist;
	ModulationOrder_e                                                  supportedModulationOrderUL;
	BOOLEAN                                                            simultaneousTxSUL_NonSUL_exist;
	FeatureSetUplinkPerCC_simultaneousTxSUL_NonSUL_e                   simultaneousTxSUL_NonSUL;
}FeatureSetUplinkPerCC_t;


extern void EncodeFeatureSetUplinkPerCC(
	FeatureSetUplinkPerCC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFeatureSetUplinkPerCC(
	FeatureSetUplinkPerCC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
