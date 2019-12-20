/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * filter_config.c - codec the message of FilterConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "filter_config.h"


void EncodeFilterConfig(
	FilterConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->filterCoefficientRSRP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->filterCoefficientRSRQ_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->filterCoefficientRS_SINR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->filterCoefficientRSRP_exist == TRUE)
	{
		EncodeFilterCoefficient(i_encoded_field->filterCoefficientRSRP, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->filterCoefficientRSRQ_exist == TRUE)
	{
		EncodeFilterCoefficient(i_encoded_field->filterCoefficientRSRQ, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->filterCoefficientRS_SINR_exist == TRUE)
	{
		EncodeFilterCoefficient(i_encoded_field->filterCoefficientRS_SINR, buff, bits_iter, asn_error);
	}

}

void DecodeFilterConfig(
	FilterConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->filterCoefficientRSRP_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->filterCoefficientRSRQ_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->filterCoefficientRS_SINR_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->filterCoefficientRSRP_exist == TRUE)
	{
		DecodeFilterCoefficient(&o_decoded_field->filterCoefficientRSRP, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->filterCoefficientRSRQ_exist == TRUE)
	{
		DecodeFilterCoefficient(&o_decoded_field->filterCoefficientRSRQ, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->filterCoefficientRS_SINR_exist == TRUE)
	{
		DecodeFilterCoefficient(&o_decoded_field->filterCoefficientRS_SINR, buff, bits_iter, asn_error);
	}

}

