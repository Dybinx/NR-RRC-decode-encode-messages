/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ptrs_density_recommendation_dl.c - codec the message of PTRS-DensityRecommendationDL
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ptrs_density_recommendation_dl.h"


void EncodePTRS_DensityRecommendationDL(
	PTRS_DensityRecommendationDL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->frequencyDensity1 - 1, 9, bits_iter);

	PutBits(buff, i_encoded_field->frequencyDensity2 - 1, 9, bits_iter);

	PutBits(buff, i_encoded_field->timeDensity1, 5, bits_iter);

	PutBits(buff, i_encoded_field->timeDensity2, 5, bits_iter);

	PutBits(buff, i_encoded_field->timeDensity3, 5, bits_iter);

}

void DecodePTRS_DensityRecommendationDL(
	PTRS_DensityRecommendationDL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->frequencyDensity1 = Get_bits(buff, 9, bits_iter) + 1;
	o_decoded_field->frequencyDensity2 = Get_bits(buff, 9, bits_iter) + 1;
	o_decoded_field->timeDensity1 = Get_bits(buff, 5, bits_iter);
	o_decoded_field->timeDensity2 = Get_bits(buff, 5, bits_iter);
	o_decoded_field->timeDensity3 = Get_bits(buff, 5, bits_iter);
}

