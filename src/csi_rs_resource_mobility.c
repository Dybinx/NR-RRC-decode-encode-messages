/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_rs_resource_mobility.c - codec the message of CSI-RS-Resource-Mobility
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_rs_resource_mobility.h"


void EncodeCSI_RS_Resource_Mobility_slotConfig(
	CSI_RS_Resource_Mobility_slotConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 3, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS4:
		PutBits(buff, i_encoded_field->a.ms4, 5, bits_iter);
		break;

	case CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS5:
		PutBits(buff, i_encoded_field->a.ms5, 6, bits_iter);
		break;

	case CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS10:
		PutBits(buff, i_encoded_field->a.ms10, 7, bits_iter);
		break;

	case CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS20:
		PutBits(buff, i_encoded_field->a.ms20, 8, bits_iter);
		break;

	case CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS40:
		PutBits(buff, i_encoded_field->a.ms40, 9, bits_iter);
		break;

	default:
		break;	}
}

void EncodeCSI_RS_Resource_Mobility_associatedSSB(
	CSI_RS_Resource_Mobility_associatedSSB_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeSSB_Index(&i_encoded_field->ssb_Index, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->isQuasiColocated, 1, bits_iter);

}

void EncodeCSI_RS_Resource_Mobility_row1(
	CSI_RS_Resource_Mobility_row1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_RS_Resource_Mobility_row2(
	CSI_RS_Resource_Mobility_row2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_RS_Resource_Mobility_frequencyDomainAllocation(
	CSI_RS_Resource_Mobility_frequencyDomainAllocation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_RS_RESOURCE_MOBILITY_FREQUENCYDOMAINALLOCATION_ROW1:
		EncodeCSI_RS_Resource_Mobility_row1(&i_encoded_field->a.row1, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCE_MOBILITY_FREQUENCYDOMAINALLOCATION_ROW2:
		EncodeCSI_RS_Resource_Mobility_row2(&i_encoded_field->a.row2, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCSI_RS_Resource_Mobility(
	CSI_RS_Resource_Mobility_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->associatedSSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeCSI_RS_Index(&i_encoded_field->csi_RS_Index, buff, bits_iter, asn_error);

	EncodeCSI_RS_Resource_Mobility_slotConfig(&i_encoded_field->slotConfig, buff, bits_iter, asn_error);

	if(i_encoded_field->associatedSSB_exist == TRUE)
	{
		EncodeCSI_RS_Resource_Mobility_associatedSSB(&i_encoded_field->associatedSSB, buff, bits_iter, asn_error);
	}

	EncodeCSI_RS_Resource_Mobility_frequencyDomainAllocation(&i_encoded_field->frequencyDomainAllocation, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->firstOFDMSymbolInTimeDomain, 4, bits_iter);

	PutBits(buff, i_encoded_field->sequenceGenerationConfig, 10, bits_iter);

}

void DecodeCSI_RS_Resource_Mobility_slotConfig(
	CSI_RS_Resource_Mobility_slotConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 3, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS4:
		o_decoded_field->a.ms4 = Get_bits(buff, 5, bits_iter);
		break;

	case CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS5:
		o_decoded_field->a.ms5 = Get_bits(buff, 6, bits_iter);
		break;

	case CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS10:
		o_decoded_field->a.ms10 = Get_bits(buff, 7, bits_iter);
		break;

	case CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS20:
		o_decoded_field->a.ms20 = Get_bits(buff, 8, bits_iter);
		break;

	case CSI_RS_RESOURCE_MOBILITY_SLOTCONFIG_MS40:
		o_decoded_field->a.ms40 = Get_bits(buff, 9, bits_iter);
		break;

	default:
		break;

	}
}

void DecodeCSI_RS_Resource_Mobility_associatedSSB(
	CSI_RS_Resource_Mobility_associatedSSB_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeSSB_Index(&o_decoded_field->ssb_Index, buff, bits_iter, asn_error);
	o_decoded_field->isQuasiColocated = Get_bits(buff, 1, bits_iter);
}

void DecodeCSI_RS_Resource_Mobility_row1(
	CSI_RS_Resource_Mobility_row1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 4;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCSI_RS_Resource_Mobility_row2(
	CSI_RS_Resource_Mobility_row2_t *o_decoded_field, 
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

void DecodeCSI_RS_Resource_Mobility_frequencyDomainAllocation(
	CSI_RS_Resource_Mobility_frequencyDomainAllocation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_RS_RESOURCE_MOBILITY_FREQUENCYDOMAINALLOCATION_ROW1:
		DecodeCSI_RS_Resource_Mobility_row1(&o_decoded_field->a.row1, buff, bits_iter, asn_error);
		break;

	case CSI_RS_RESOURCE_MOBILITY_FREQUENCYDOMAINALLOCATION_ROW2:
		DecodeCSI_RS_Resource_Mobility_row2(&o_decoded_field->a.row2, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCSI_RS_Resource_Mobility(
	CSI_RS_Resource_Mobility_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->associatedSSB_exist = Get_bits(buff, 1, bits_iter);
	DecodeCSI_RS_Index(&o_decoded_field->csi_RS_Index, buff, bits_iter, asn_error);
	DecodeCSI_RS_Resource_Mobility_slotConfig(&o_decoded_field->slotConfig, buff, bits_iter, asn_error);
	if(o_decoded_field->associatedSSB_exist == TRUE)
	{
		DecodeCSI_RS_Resource_Mobility_associatedSSB(&o_decoded_field->associatedSSB, buff, bits_iter, asn_error);
	}

	DecodeCSI_RS_Resource_Mobility_frequencyDomainAllocation(&o_decoded_field->frequencyDomainAllocation, buff, bits_iter, asn_error);
	o_decoded_field->firstOFDMSymbolInTimeDomain = Get_bits(buff, 4, bits_iter);
	o_decoded_field->sequenceGenerationConfig = Get_bits(buff, 10, bits_iter);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

