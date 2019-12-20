/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * frequency_info_dl.h - this is the header file for message: FrequencyInfoDL
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FREQUENCY_INFO_DL_H_
#define _FREQUENCY_INFO_DL_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "arfcn_value_nr.h"
#include "multi_frequency_band_list_nr.h"
#include "arfcn_value_nr.h"
#include "scs_specific_carrier.h"


typedef struct {
	uint32                                                             length;
	SCS_SpecificCarrier_t                                              elm[maxSCSs];
}FrequencyInfoDL_scs_SpecificCarrierList_t;


typedef struct {
	BOOLEAN                                                            absoluteFrequencySSB_exist;
	ARFCN_ValueNR_t                                                    absoluteFrequencySSB;
	MultiFrequencyBandListNR_t                                         frequencyBandList;
	ARFCN_ValueNR_t                                                    absoluteFrequencyPointA;
	FrequencyInfoDL_scs_SpecificCarrierList_t                          scs_SpecificCarrierList;
	/* Extension marker start. */
}FrequencyInfoDL_t;


extern void EncodeFrequencyInfoDL(
	FrequencyInfoDL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFrequencyInfoDL(
	FrequencyInfoDL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
