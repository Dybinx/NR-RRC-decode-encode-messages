/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_rs_resource_mapping.c - codec the message of CSI-RS-ResourceMapping
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_rs_resource_mapping.h"


void EncodeCSI_RS_ResourceMapping_row1(
	CSI_RS_ResourceMapping_row1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_RS_ResourceMapping_row2(
	CSI_RS_ResourceMapping_row2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_RS_ResourceMapping_row4(
	CSI_RS_ResourceMapping_row4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_RS_ResourceMapping_other(
	CSI_RS_ResourceMapping_other_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_RS_ResourceMapping_frequencyDomainAllocation(
	CSI_RS_ResourceMapping_frequencyDomainAllocation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_ROW1:
		EncodeCSI_RS_ResourceMapping_row1(&i_encoded_field->a.row1, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_ROW2:
		EncodeCSI_RS_ResourceMapping_row2(&i_encoded_field->a.row2, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_ROW4:
		EncodeCSI_RS_ResourceMapping_row4(&i_encoded_field->a.row4, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_OTHER:
		EncodeCSI_RS_ResourceMapping_other(&i_encoded_field->a.other, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCSI_RS_ResourceMapping_nrofPorts(
	CSI_RS_ResourceMapping_nrofPorts_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeCSI_RS_ResourceMapping_cdm_Type(
	CSI_RS_ResourceMapping_cdm_Type_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeCSI_RS_ResourceMapping_dot5(
	CSI_RS_ResourceMapping_dot5_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeCSI_RS_ResourceMapping_one(
	CSI_RS_ResourceMapping_one_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_RS_ResourceMapping_three(
	CSI_RS_ResourceMapping_three_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_RS_ResourceMapping_spare(
	CSI_RS_ResourceMapping_spare_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_RS_ResourceMapping_density(
	CSI_RS_ResourceMapping_density_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_RS_RESOURCEMAPPING_DENSITY_DOT5:
		EncodeCSI_RS_ResourceMapping_dot5(i_encoded_field->a.dot5, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_DENSITY_ONE:
		EncodeCSI_RS_ResourceMapping_one(&i_encoded_field->a.one, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_DENSITY_THREE:
		EncodeCSI_RS_ResourceMapping_three(&i_encoded_field->a.three, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_DENSITY_SPARE:
		EncodeCSI_RS_ResourceMapping_spare(&i_encoded_field->a.spare, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCSI_RS_ResourceMapping(
	CSI_RS_ResourceMapping_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->firstOFDMSymbolInTimeDomain2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeCSI_RS_ResourceMapping_frequencyDomainAllocation(&i_encoded_field->frequencyDomainAllocation, buff, bits_iter, asn_error);

	EncodeCSI_RS_ResourceMapping_nrofPorts(i_encoded_field->nrofPorts, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->firstOFDMSymbolInTimeDomain, 4, bits_iter);

	if(i_encoded_field->firstOFDMSymbolInTimeDomain2_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->firstOFDMSymbolInTimeDomain2 - 2, 4, bits_iter);
	}

	EncodeCSI_RS_ResourceMapping_cdm_Type(i_encoded_field->cdm_Type, buff, bits_iter, asn_error);

	EncodeCSI_RS_ResourceMapping_density(&i_encoded_field->density, buff, bits_iter, asn_error);

	EncodeCSI_FrequencyOccupation(&i_encoded_field->freqBand, buff, bits_iter, asn_error);

}

void DecodeCSI_RS_ResourceMapping_row1(
	CSI_RS_ResourceMapping_row1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 4;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCSI_RS_ResourceMapping_row2(
	CSI_RS_ResourceMapping_row2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 12;
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

void DecodeCSI_RS_ResourceMapping_row4(
	CSI_RS_ResourceMapping_row4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 3;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCSI_RS_ResourceMapping_other(
	CSI_RS_ResourceMapping_other_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 6;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCSI_RS_ResourceMapping_frequencyDomainAllocation(
	CSI_RS_ResourceMapping_frequencyDomainAllocation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_ROW1:
		DecodeCSI_RS_ResourceMapping_row1(&o_decoded_field->a.row1, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_ROW2:
		DecodeCSI_RS_ResourceMapping_row2(&o_decoded_field->a.row2, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_ROW4:
		DecodeCSI_RS_ResourceMapping_row4(&o_decoded_field->a.row4, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_OTHER:
		DecodeCSI_RS_ResourceMapping_other(&o_decoded_field->a.other, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCSI_RS_ResourceMapping_nrofPorts(
	CSI_RS_ResourceMapping_nrofPorts_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeCSI_RS_ResourceMapping_cdm_Type(
	CSI_RS_ResourceMapping_cdm_Type_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeCSI_RS_ResourceMapping_dot5(
	CSI_RS_ResourceMapping_dot5_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeCSI_RS_ResourceMapping_one(
	CSI_RS_ResourceMapping_one_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_RS_ResourceMapping_three(
	CSI_RS_ResourceMapping_three_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_RS_ResourceMapping_spare(
	CSI_RS_ResourceMapping_spare_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_RS_ResourceMapping_density(
	CSI_RS_ResourceMapping_density_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_RS_RESOURCEMAPPING_DENSITY_DOT5:
		DecodeCSI_RS_ResourceMapping_dot5(&o_decoded_field->a.dot5, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_DENSITY_ONE:
		DecodeCSI_RS_ResourceMapping_one(&o_decoded_field->a.one, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_DENSITY_THREE:
		DecodeCSI_RS_ResourceMapping_three(&o_decoded_field->a.three, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCEMAPPING_DENSITY_SPARE:
		DecodeCSI_RS_ResourceMapping_spare(&o_decoded_field->a.spare, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCSI_RS_ResourceMapping(
	CSI_RS_ResourceMapping_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->firstOFDMSymbolInTimeDomain2_exist = Get_bits(buff, 1, bits_iter);
	DecodeCSI_RS_ResourceMapping_frequencyDomainAllocation(&o_decoded_field->frequencyDomainAllocation, buff, bits_iter, asn_error);
	DecodeCSI_RS_ResourceMapping_nrofPorts(&o_decoded_field->nrofPorts, buff, bits_iter, asn_error);
	o_decoded_field->firstOFDMSymbolInTimeDomain = Get_bits(buff, 4, bits_iter);
	if(o_decoded_field->firstOFDMSymbolInTimeDomain2_exist == TRUE)
	{
		o_decoded_field->firstOFDMSymbolInTimeDomain2 = Get_bits(buff, 4, bits_iter) + 2;
	}

	DecodeCSI_RS_ResourceMapping_cdm_Type(&o_decoded_field->cdm_Type, buff, bits_iter, asn_error);
	DecodeCSI_RS_ResourceMapping_density(&o_decoded_field->density, buff, bits_iter, asn_error);
	DecodeCSI_FrequencyOccupation(&o_decoded_field->freqBand, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

