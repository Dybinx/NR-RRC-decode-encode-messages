/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ptrs_uplink_config.c - codec the message of PTRS-UplinkConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ptrs_uplink_config.h"


void EncodePTRS_UplinkConfig_frequencyDensity(
	PTRS_UplinkConfig_frequencyDensity_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		PutBits(buff, i_encoded_field->elm[i] - 1, 9, bits_iter);
	}
}

void EncodePTRS_UplinkConfig_timeDensity(
	PTRS_UplinkConfig_timeDensity_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		PutBits(buff, i_encoded_field->elm[i], 5, bits_iter);
	}
}

void EncodePTRS_UplinkConfig_maxNrofPorts(
	PTRS_UplinkConfig_maxNrofPorts_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePTRS_UplinkConfig_resourceElementOffset(
	PTRS_UplinkConfig_resourceElementOffset_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePTRS_UplinkConfig_ptrs_Power(
	PTRS_UplinkConfig_ptrs_Power_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePTRS_UplinkConfig_cp_OFDM(
	PTRS_UplinkConfig_cp_OFDM_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->frequencyDensity_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->timeDensity_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->resourceElementOffset_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->frequencyDensity_exist == TRUE)
	{
		EncodePTRS_UplinkConfig_frequencyDensity(&i_encoded_field->frequencyDensity, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->timeDensity_exist == TRUE)
	{
		EncodePTRS_UplinkConfig_timeDensity(&i_encoded_field->timeDensity, buff, bits_iter, asn_error);
	}

	EncodePTRS_UplinkConfig_maxNrofPorts(i_encoded_field->maxNrofPorts, buff, bits_iter, asn_error);

	if(i_encoded_field->resourceElementOffset_exist == TRUE)
	{
		EncodePTRS_UplinkConfig_resourceElementOffset(i_encoded_field->resourceElementOffset, buff, bits_iter, asn_error);
	}

	EncodePTRS_UplinkConfig_ptrs_Power(i_encoded_field->ptrs_Power, buff, bits_iter, asn_error);

}

void EncodePTRS_UplinkConfig_sampleDensity(
	PTRS_UplinkConfig_sampleDensity_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		PutBits(buff, i_encoded_field->elm[i] - 1, 9, bits_iter);
	}
}

void EncodePTRS_UplinkConfig_timeDensityTransformPrecoding(
	PTRS_UplinkConfig_timeDensityTransformPrecoding_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePTRS_UplinkConfig_dft_S_OFDM(
	PTRS_UplinkConfig_dft_S_OFDM_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->timeDensityTransformPrecoding_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodePTRS_UplinkConfig_sampleDensity(&i_encoded_field->sampleDensity, buff, bits_iter, asn_error);

	if(i_encoded_field->timeDensityTransformPrecoding_exist == TRUE)
	{
		EncodePTRS_UplinkConfig_timeDensityTransformPrecoding(i_encoded_field->timeDensityTransformPrecoding, buff, bits_iter, asn_error);
	}

}

void EncodePTRS_UplinkConfig_modeSpecificParameters(
	PTRS_UplinkConfig_modeSpecificParameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PTRS_UPLINKCONFIG_MODESPECIFICPARAMETERS_CP_OFDM:
		EncodePTRS_UplinkConfig_cp_OFDM(&i_encoded_field->a.cp_OFDM, buff, bits_iter, asn_error);
		break;

	case PTRS_UPLINKCONFIG_MODESPECIFICPARAMETERS_DFT_S_OFDM:
		EncodePTRS_UplinkConfig_dft_S_OFDM(&i_encoded_field->a.dft_S_OFDM, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePTRS_UplinkConfig(
	PTRS_UplinkConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->modeSpecificParameters_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->modeSpecificParameters_exist == TRUE)
	{
		EncodePTRS_UplinkConfig_modeSpecificParameters(&i_encoded_field->modeSpecificParameters, buff, bits_iter, asn_error);
	}

}

void DecodePTRS_UplinkConfig_frequencyDensity(
	PTRS_UplinkConfig_frequencyDensity_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 2;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		o_decoded_field->elm[i] = Get_bits(buff, 9, bits_iter) + 1;
	}
}

void DecodePTRS_UplinkConfig_timeDensity(
	PTRS_UplinkConfig_timeDensity_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 3;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		o_decoded_field->elm[i] = Get_bits(buff, 5, bits_iter);
	}
}

void DecodePTRS_UplinkConfig_maxNrofPorts(
	PTRS_UplinkConfig_maxNrofPorts_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePTRS_UplinkConfig_resourceElementOffset(
	PTRS_UplinkConfig_resourceElementOffset_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePTRS_UplinkConfig_ptrs_Power(
	PTRS_UplinkConfig_ptrs_Power_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePTRS_UplinkConfig_cp_OFDM(
	PTRS_UplinkConfig_cp_OFDM_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->frequencyDensity_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->timeDensity_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->resourceElementOffset_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->frequencyDensity_exist == TRUE)
	{
		DecodePTRS_UplinkConfig_frequencyDensity(&o_decoded_field->frequencyDensity, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->timeDensity_exist == TRUE)
	{
		DecodePTRS_UplinkConfig_timeDensity(&o_decoded_field->timeDensity, buff, bits_iter, asn_error);
	}

	DecodePTRS_UplinkConfig_maxNrofPorts(&o_decoded_field->maxNrofPorts, buff, bits_iter, asn_error);
	if(o_decoded_field->resourceElementOffset_exist == TRUE)
	{
		DecodePTRS_UplinkConfig_resourceElementOffset(&o_decoded_field->resourceElementOffset, buff, bits_iter, asn_error);
	}

	DecodePTRS_UplinkConfig_ptrs_Power(&o_decoded_field->ptrs_Power, buff, bits_iter, asn_error);
}

void DecodePTRS_UplinkConfig_sampleDensity(
	PTRS_UplinkConfig_sampleDensity_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 5;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		o_decoded_field->elm[i] = Get_bits(buff, 9, bits_iter) + 1;
	}
}

void DecodePTRS_UplinkConfig_timeDensityTransformPrecoding(
	PTRS_UplinkConfig_timeDensityTransformPrecoding_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePTRS_UplinkConfig_dft_S_OFDM(
	PTRS_UplinkConfig_dft_S_OFDM_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->timeDensityTransformPrecoding_exist = Get_bits(buff, 1, bits_iter);
	DecodePTRS_UplinkConfig_sampleDensity(&o_decoded_field->sampleDensity, buff, bits_iter, asn_error);
	if(o_decoded_field->timeDensityTransformPrecoding_exist == TRUE)
	{
		DecodePTRS_UplinkConfig_timeDensityTransformPrecoding(&o_decoded_field->timeDensityTransformPrecoding, buff, bits_iter, asn_error);
	}

}

void DecodePTRS_UplinkConfig_modeSpecificParameters(
	PTRS_UplinkConfig_modeSpecificParameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PTRS_UPLINKCONFIG_MODESPECIFICPARAMETERS_CP_OFDM:
		DecodePTRS_UplinkConfig_cp_OFDM(&o_decoded_field->a.cp_OFDM, buff, bits_iter, asn_error);
		break;

	case PTRS_UPLINKCONFIG_MODESPECIFICPARAMETERS_DFT_S_OFDM:
		DecodePTRS_UplinkConfig_dft_S_OFDM(&o_decoded_field->a.dft_S_OFDM, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePTRS_UplinkConfig(
	PTRS_UplinkConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->modeSpecificParameters_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->modeSpecificParameters_exist == TRUE)
	{
		DecodePTRS_UplinkConfig_modeSpecificParameters(&o_decoded_field->modeSpecificParameters, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

