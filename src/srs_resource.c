/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_resource.c - codec the message of SRS-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_resource.h"


void EncodeSRS_Resource_nrofSRS_Ports(
	SRS_Resource_nrofSRS_Ports_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeSRS_Resource_ptrs_PortIndex(
	SRS_Resource_ptrs_PortIndex_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSRS_Resource_n2(
	SRS_Resource_n2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->combOffset_n2, 1, bits_iter);

	PutBits(buff, i_encoded_field->cyclicShift_n2, 3, bits_iter);

}

void EncodeSRS_Resource_n4(
	SRS_Resource_n4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->combOffset_n4, 2, bits_iter);

	PutBits(buff, i_encoded_field->cyclicShift_n4, 4, bits_iter);

}

void EncodeSRS_Resource_transmissionComb(
	SRS_Resource_transmissionComb_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case SRS_RESOURCE_TRANSMISSIONCOMB_N2:
		EncodeSRS_Resource_n2(&i_encoded_field->a.n2, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCE_TRANSMISSIONCOMB_N4:
		EncodeSRS_Resource_n4(&i_encoded_field->a.n4, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeSRS_Resource_nrofSymbols(
	SRS_Resource_nrofSymbols_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeSRS_Resource_repetitionFactor(
	SRS_Resource_repetitionFactor_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeSRS_Resource_resourceMapping(
	SRS_Resource_resourceMapping_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->startPosition, 3, bits_iter);

	EncodeSRS_Resource_nrofSymbols(i_encoded_field->nrofSymbols, buff, bits_iter, asn_error);

	EncodeSRS_Resource_repetitionFactor(i_encoded_field->repetitionFactor, buff, bits_iter, asn_error);

}

void EncodeSRS_Resource_freqHopping(
	SRS_Resource_freqHopping_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->c_SRS, 6, bits_iter);

	PutBits(buff, i_encoded_field->b_SRS, 2, bits_iter);

	PutBits(buff, i_encoded_field->b_hop, 2, bits_iter);

}

void EncodeSRS_Resource_groupOrSequenceHopping(
	SRS_Resource_groupOrSequenceHopping_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeSRS_Resource_aperiodic(
	SRS_Resource_aperiodic_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
}

void EncodeSRS_Resource_semi_persistent(
	SRS_Resource_semi_persistent_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeSRS_PeriodicityAndOffset(&i_encoded_field->periodicityAndOffset_sp, buff, bits_iter, asn_error);

}

void EncodeSRS_Resource_periodic(
	SRS_Resource_periodic_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeSRS_PeriodicityAndOffset(&i_encoded_field->periodicityAndOffset_p, buff, bits_iter, asn_error);

}

void EncodeSRS_Resource_resourceType(
	SRS_Resource_resourceType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case SRS_RESOURCE_RESOURCETYPE_APERIODIC:
		EncodeSRS_Resource_aperiodic(&i_encoded_field->a.aperiodic, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCE_RESOURCETYPE_SEMI_PERSISTENT:
		EncodeSRS_Resource_semi_persistent(&i_encoded_field->a.semi_persistent, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCE_RESOURCETYPE_PERIODIC:
		EncodeSRS_Resource_periodic(&i_encoded_field->a.periodic, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeSRS_Resource_sequenceId(
	SRS_Resource_sequenceId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeSRS_Resource(
	SRS_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->ptrs_PortIndex_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->spatialRelationInfo_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSRS_ResourceId(&i_encoded_field->srs_ResourceId, buff, bits_iter, asn_error);

	EncodeSRS_Resource_nrofSRS_Ports(i_encoded_field->nrofSRS_Ports, buff, bits_iter, asn_error);

	if(i_encoded_field->ptrs_PortIndex_exist == TRUE)
	{
		EncodeSRS_Resource_ptrs_PortIndex(i_encoded_field->ptrs_PortIndex, buff, bits_iter, asn_error);
	}

	EncodeSRS_Resource_transmissionComb(&i_encoded_field->transmissionComb, buff, bits_iter, asn_error);

	EncodeSRS_Resource_resourceMapping(&i_encoded_field->resourceMapping, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->freqDomainPosition, 7, bits_iter);

	PutBits(buff, i_encoded_field->freqDomainShift, 9, bits_iter);

	EncodeSRS_Resource_freqHopping(&i_encoded_field->freqHopping, buff, bits_iter, asn_error);

	EncodeSRS_Resource_groupOrSequenceHopping(i_encoded_field->groupOrSequenceHopping, buff, bits_iter, asn_error);

	EncodeSRS_Resource_resourceType(&i_encoded_field->resourceType, buff, bits_iter, asn_error);

	EncodeSRS_Resource_sequenceId(&i_encoded_field->sequenceId, buff, bits_iter, asn_error);

	if(i_encoded_field->spatialRelationInfo_exist == TRUE)
	{
		EncodeSRS_SpatialRelationInfo(&i_encoded_field->spatialRelationInfo, buff, bits_iter, asn_error);
	}

}

void DecodeSRS_Resource_nrofSRS_Ports(
	SRS_Resource_nrofSRS_Ports_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeSRS_Resource_ptrs_PortIndex(
	SRS_Resource_ptrs_PortIndex_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSRS_Resource_n2(
	SRS_Resource_n2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->combOffset_n2 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->cyclicShift_n2 = Get_bits(buff, 3, bits_iter);
}

void DecodeSRS_Resource_n4(
	SRS_Resource_n4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->combOffset_n4 = Get_bits(buff, 2, bits_iter);
	o_decoded_field->cyclicShift_n4 = Get_bits(buff, 4, bits_iter);
}

void DecodeSRS_Resource_transmissionComb(
	SRS_Resource_transmissionComb_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SRS_RESOURCE_TRANSMISSIONCOMB_N2:
		DecodeSRS_Resource_n2(&o_decoded_field->a.n2, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCE_TRANSMISSIONCOMB_N4:
		DecodeSRS_Resource_n4(&o_decoded_field->a.n4, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeSRS_Resource_nrofSymbols(
	SRS_Resource_nrofSymbols_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeSRS_Resource_repetitionFactor(
	SRS_Resource_repetitionFactor_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeSRS_Resource_resourceMapping(
	SRS_Resource_resourceMapping_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->startPosition = Get_bits(buff, 3, bits_iter);
	DecodeSRS_Resource_nrofSymbols(&o_decoded_field->nrofSymbols, buff, bits_iter, asn_error);
	DecodeSRS_Resource_repetitionFactor(&o_decoded_field->repetitionFactor, buff, bits_iter, asn_error);
}

void DecodeSRS_Resource_freqHopping(
	SRS_Resource_freqHopping_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->c_SRS = Get_bits(buff, 6, bits_iter);
	o_decoded_field->b_SRS = Get_bits(buff, 2, bits_iter);
	o_decoded_field->b_hop = Get_bits(buff, 2, bits_iter);
}

void DecodeSRS_Resource_groupOrSequenceHopping(
	SRS_Resource_groupOrSequenceHopping_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeSRS_Resource_aperiodic(
	SRS_Resource_aperiodic_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSRS_Resource_semi_persistent(
	SRS_Resource_semi_persistent_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeSRS_PeriodicityAndOffset(&o_decoded_field->periodicityAndOffset_sp, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSRS_Resource_periodic(
	SRS_Resource_periodic_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeSRS_PeriodicityAndOffset(&o_decoded_field->periodicityAndOffset_p, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSRS_Resource_resourceType(
	SRS_Resource_resourceType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SRS_RESOURCE_RESOURCETYPE_APERIODIC:
		DecodeSRS_Resource_aperiodic(&o_decoded_field->a.aperiodic, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCE_RESOURCETYPE_SEMI_PERSISTENT:
		DecodeSRS_Resource_semi_persistent(&o_decoded_field->a.semi_persistent, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCE_RESOURCETYPE_PERIODIC:
		DecodeSRS_Resource_periodic(&o_decoded_field->a.periodic, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeSRS_Resource_sequenceId(
	SRS_Resource_sequenceId_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 10;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeSRS_Resource(
	SRS_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->ptrs_PortIndex_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->spatialRelationInfo_exist = Get_bits(buff, 1, bits_iter);
	DecodeSRS_ResourceId(&o_decoded_field->srs_ResourceId, buff, bits_iter, asn_error);
	DecodeSRS_Resource_nrofSRS_Ports(&o_decoded_field->nrofSRS_Ports, buff, bits_iter, asn_error);
	if(o_decoded_field->ptrs_PortIndex_exist == TRUE)
	{
		DecodeSRS_Resource_ptrs_PortIndex(&o_decoded_field->ptrs_PortIndex, buff, bits_iter, asn_error);
	}

	DecodeSRS_Resource_transmissionComb(&o_decoded_field->transmissionComb, buff, bits_iter, asn_error);
	DecodeSRS_Resource_resourceMapping(&o_decoded_field->resourceMapping, buff, bits_iter, asn_error);
	o_decoded_field->freqDomainPosition = Get_bits(buff, 7, bits_iter);
	o_decoded_field->freqDomainShift = Get_bits(buff, 9, bits_iter);
	DecodeSRS_Resource_freqHopping(&o_decoded_field->freqHopping, buff, bits_iter, asn_error);
	DecodeSRS_Resource_groupOrSequenceHopping(&o_decoded_field->groupOrSequenceHopping, buff, bits_iter, asn_error);
	DecodeSRS_Resource_resourceType(&o_decoded_field->resourceType, buff, bits_iter, asn_error);
	DecodeSRS_Resource_sequenceId(&o_decoded_field->sequenceId, buff, bits_iter, asn_error);
	if(o_decoded_field->spatialRelationInfo_exist == TRUE)
	{
		DecodeSRS_SpatialRelationInfo(&o_decoded_field->spatialRelationInfo, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

