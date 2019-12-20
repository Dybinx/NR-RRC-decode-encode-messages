/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * filter_config.h - this is the header file for message: FilterConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FILTER_CONFIG_H_
#define _FILTER_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "filter_coefficient.h"
#include "filter_coefficient.h"
#include "filter_coefficient.h"


typedef struct {
	BOOLEAN                                                            filterCoefficientRSRP_exist;
	FilterCoefficient_e                                                filterCoefficientRSRP;
	BOOLEAN                                                            filterCoefficientRSRQ_exist;
	FilterCoefficient_e                                                filterCoefficientRSRQ;
	BOOLEAN                                                            filterCoefficientRS_SINR_exist;
	FilterCoefficient_e                                                filterCoefficientRS_SINR;
}FilterConfig_t;


extern void EncodeFilterConfig(
	FilterConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFilterConfig(
	FilterConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
