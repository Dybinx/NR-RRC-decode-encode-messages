/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ptrs_density_recommendation_ul.c - codec the message of PTRS-DensityRecommendationUL
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ptrs_density_recommendation_ul.h"


void EncodePTRS_DensityRecommendationUL(
	PTRS_DensityRecommendationUL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->frequencyDensity1 - 1, 9, bits_iter);

	PutBits(buff, i_encoded_field->frequencyDensity2 - 1, 9, bits_iter);

	PutBits(buff, i_encoded_field->timeDensity1, 5, bits_iter);

	PutBits(buff, i_encoded_field->timeDensity2, 5, bits_iter);

	PutBits(buff, i_encoded_field->timeDensity3, 5, bits_iter);

	PutBits(buff, i_encoded_field->sampleDensity1 - 1, 9, bits_iter);

	PutBits(buff, i_encoded_field->sampleDensity2 - 1, 9, bits_iter);

	PutBits(buff, i_encoded_field->sampleDensity3 - 1, 9, bits_iter);

	PutBits(buff, i_encoded_field->sampleDensity4 - 1, 9, bits_iter);

	PutBits(buff, i_encoded_field->sampleDensity5 - 1, 9, bits_iter);

}

void DecodePTRS_DensityRecommendationUL(
	PTRS_DensityRecommendationUL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->frequencyDensity1 = Get_bits(buff, 9, bits_iter) + 1;
	o_decoded_field->frequencyDensity2 = Get_bits(buff, 9, bits_iter) + 1;
	o_decoded_field->timeDensity1 = Get_bits(buff, 5, bits_iter);
	o_decoded_field->timeDensity2 = Get_bits(buff, 5, bits_iter);
	o_decoded_field->timeDensity3 = Get_bits(buff, 5, bits_iter);
	o_decoded_field->sampleDensity1 = Get_bits(buff, 9, bits_iter) + 1;
	o_decoded_field->sampleDensity2 = Get_bits(buff, 9, bits_iter) + 1;
	o_decoded_field->sampleDensity3 = Get_bits(buff, 9, bits_iter) + 1;
	o_decoded_field->sampleDensity4 = Get_bits(buff, 9, bits_iter) + 1;
	o_decoded_field->sampleDensity5 = Get_bits(buff, 9, bits_iter) + 1;
}

