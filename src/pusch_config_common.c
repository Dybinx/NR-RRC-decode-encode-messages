/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_config_common.c - codec the message of PUSCH-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pusch_config_common.h"


void EncodePUSCH_ConfigCommon_groupHoppingEnabledTransformPrecoding(
	PUSCH_ConfigCommon_groupHoppingEnabledTransformPrecoding_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUSCH_ConfigCommon(
	PUSCH_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->groupHoppingEnabledTransformPrecoding_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pusch_TimeDomainAllocationList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->msg3_DeltaPreamble_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->p0_NominalWithGrant_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->groupHoppingEnabledTransformPrecoding_exist == TRUE)
	{
		EncodePUSCH_ConfigCommon_groupHoppingEnabledTransformPrecoding(i_encoded_field->groupHoppingEnabledTransformPrecoding, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_TimeDomainAllocationList_exist == TRUE)
	{
		EncodePUSCH_TimeDomainResourceAllocationList(&i_encoded_field->pusch_TimeDomainAllocationList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->msg3_DeltaPreamble_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->msg3_DeltaPreamble + 1, 3, bits_iter);
	}

	if(i_encoded_field->p0_NominalWithGrant_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->p0_NominalWithGrant + 202, 8, bits_iter);
	}

}

void DecodePUSCH_ConfigCommon_groupHoppingEnabledTransformPrecoding(
	PUSCH_ConfigCommon_groupHoppingEnabledTransformPrecoding_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUSCH_ConfigCommon(
	PUSCH_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->groupHoppingEnabledTransformPrecoding_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_TimeDomainAllocationList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->msg3_DeltaPreamble_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->p0_NominalWithGrant_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->groupHoppingEnabledTransformPrecoding_exist == TRUE)
	{
		DecodePUSCH_ConfigCommon_groupHoppingEnabledTransformPrecoding(&o_decoded_field->groupHoppingEnabledTransformPrecoding, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_TimeDomainAllocationList_exist == TRUE)
	{
		DecodePUSCH_TimeDomainResourceAllocationList(&o_decoded_field->pusch_TimeDomainAllocationList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->msg3_DeltaPreamble_exist == TRUE)
	{
		o_decoded_field->msg3_DeltaPreamble = Get_bits(buff, 3, bits_iter) - 1;
	}

	if(o_decoded_field->p0_NominalWithGrant_exist == TRUE)
	{
		o_decoded_field->p0_NominalWithGrant = Get_bits(buff, 8, bits_iter) - 202;
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

