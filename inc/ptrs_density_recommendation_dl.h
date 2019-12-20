/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ptrs_density_recommendation_dl.h - this is the header file for message: PTRS-DensityRecommendationDL
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PTRS_DENSITY_RECOMMENDATION_DL_H_
#define _PTRS_DENSITY_RECOMMENDATION_DL_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             frequencyDensity1;
	uint32                                                             frequencyDensity2;
	uint32                                                             timeDensity1;
	uint32                                                             timeDensity2;
	uint32                                                             timeDensity3;
}PTRS_DensityRecommendationDL_t;


extern void EncodePTRS_DensityRecommendationDL(
	PTRS_DensityRecommendationDL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePTRS_DensityRecommendationDL(
	PTRS_DensityRecommendationDL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
