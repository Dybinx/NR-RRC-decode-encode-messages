/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ptrs_downlink_config.c - codec the message of PTRS-DownlinkConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ptrs_downlink_config.h"


void EncodePTRS_DownlinkConfig_frequencyDensity(
	PTRS_DownlinkConfig_frequencyDensity_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		PutBits(buff, i_encoded_field->elm[i] - 1, 9, bits_iter);
	}
}

void EncodePTRS_DownlinkConfig_timeDensity(
	PTRS_DownlinkConfig_timeDensity_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		PutBits(buff, i_encoded_field->elm[i], 5, bits_iter);
	}
}

void EncodePTRS_DownlinkConfig_resourceElementOffset(
	PTRS_DownlinkConfig_resourceElementOffset_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePTRS_DownlinkConfig(
	PTRS_DownlinkConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
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

	if(i_encoded_field->epre_Ratio_exist == TRUE)
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
		EncodePTRS_DownlinkConfig_frequencyDensity(&i_encoded_field->frequencyDensity, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->timeDensity_exist == TRUE)
	{
		EncodePTRS_DownlinkConfig_timeDensity(&i_encoded_field->timeDensity, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->epre_Ratio_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->epre_Ratio, 2, bits_iter);
	}

	if(i_encoded_field->resourceElementOffset_exist == TRUE)
	{
		EncodePTRS_DownlinkConfig_resourceElementOffset(i_encoded_field->resourceElementOffset, buff, bits_iter, asn_error);
	}

}

void DecodePTRS_DownlinkConfig_frequencyDensity(
	PTRS_DownlinkConfig_frequencyDensity_t *o_decoded_field, 
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

void DecodePTRS_DownlinkConfig_timeDensity(
	PTRS_DownlinkConfig_timeDensity_t *o_decoded_field, 
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

void DecodePTRS_DownlinkConfig_resourceElementOffset(
	PTRS_DownlinkConfig_resourceElementOffset_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePTRS_DownlinkConfig(
	PTRS_DownlinkConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->frequencyDensity_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->timeDensity_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->epre_Ratio_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->resourceElementOffset_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->frequencyDensity_exist == TRUE)
	{
		DecodePTRS_DownlinkConfig_frequencyDensity(&o_decoded_field->frequencyDensity, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->timeDensity_exist == TRUE)
	{
		DecodePTRS_DownlinkConfig_timeDensity(&o_decoded_field->timeDensity, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->epre_Ratio_exist == TRUE)
	{
		o_decoded_field->epre_Ratio = Get_bits(buff, 2, bits_iter);
	}

	if(o_decoded_field->resourceElementOffset_exist == TRUE)
	{
		DecodePTRS_DownlinkConfig_resourceElementOffset(&o_decoded_field->resourceElementOffset, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

