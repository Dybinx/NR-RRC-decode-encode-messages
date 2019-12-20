/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_time_domain_resource_allocation.c - codec the message of PUSCH-TimeDomainResourceAllocation
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pusch_time_domain_resource_allocation.h"


void EncodePUSCH_TimeDomainResourceAllocation_mappingType(
	PUSCH_TimeDomainResourceAllocation_mappingType_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePUSCH_TimeDomainResourceAllocation(
	PUSCH_TimeDomainResourceAllocation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->k2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->k2_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->k2, 6, bits_iter);
	}

	EncodePUSCH_TimeDomainResourceAllocation_mappingType(i_encoded_field->mappingType, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->startSymbolAndLength, 7, bits_iter);

}

void DecodePUSCH_TimeDomainResourceAllocation_mappingType(
	PUSCH_TimeDomainResourceAllocation_mappingType_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePUSCH_TimeDomainResourceAllocation(
	PUSCH_TimeDomainResourceAllocation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->k2_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->k2_exist == TRUE)
	{
		o_decoded_field->k2 = Get_bits(buff, 6, bits_iter);
	}

	DecodePUSCH_TimeDomainResourceAllocation_mappingType(&o_decoded_field->mappingType, buff, bits_iter, asn_error);
	o_decoded_field->startSymbolAndLength = Get_bits(buff, 7, bits_iter);
}

