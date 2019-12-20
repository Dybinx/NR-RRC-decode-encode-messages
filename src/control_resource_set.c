/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * control_resource_set.c - codec the message of ControlResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "control_resource_set.h"


void EncodeControlResourceSet_frequencyDomainResources(
	ControlResourceSet_frequencyDomainResources_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeControlResourceSet_reg_BundleSize(
	ControlResourceSet_reg_BundleSize_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeControlResourceSet_interleaverSize(
	ControlResourceSet_interleaverSize_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeControlResourceSet_interleaved(
	ControlResourceSet_interleaved_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->shiftIndex_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeControlResourceSet_reg_BundleSize(i_encoded_field->reg_BundleSize, buff, bits_iter, asn_error);

	EncodeControlResourceSet_interleaverSize(i_encoded_field->interleaverSize, buff, bits_iter, asn_error);

	if(i_encoded_field->shiftIndex_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->shiftIndex, 9, bits_iter);
	}

}

void EncodeControlResourceSet_nonInterleaved(
	ControlResourceSet_nonInterleaved_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeControlResourceSet_cce_REG_MappingType(
	ControlResourceSet_cce_REG_MappingType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CONTROLRESOURCESET_CCE_REG_MAPPINGTYPE_INTERLEAVED:
		EncodeControlResourceSet_interleaved(&i_encoded_field->a.interleaved, buff, bits_iter, asn_error);
		break;

	case CONTROLRESOURCESET_CCE_REG_MAPPINGTYPE_NONINTERLEAVED:
		EncodeControlResourceSet_nonInterleaved(&i_encoded_field->a.nonInterleaved, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeControlResourceSet_precoderGranularity(
	ControlResourceSet_precoderGranularity_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeControlResourceSet_tci_StatesPDCCH_ToAddList(
	ControlResourceSet_tci_StatesPDCCH_ToAddList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTCI_StateId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeControlResourceSet_tci_StatesPDCCH_ToReleaseList(
	ControlResourceSet_tci_StatesPDCCH_ToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTCI_StateId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeControlResourceSet_tci_PresentInDCI(
	ControlResourceSet_tci_PresentInDCI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeControlResourceSet(
	ControlResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->tci_StatesPDCCH_ToAddList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tci_StatesPDCCH_ToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tci_PresentInDCI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcch_DMRS_ScramblingID_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeControlResourceSetId(&i_encoded_field->controlResourceSetId, buff, bits_iter, asn_error);

	EncodeControlResourceSet_frequencyDomainResources(&i_encoded_field->frequencyDomainResources, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->duration - 1, 2, bits_iter);

	EncodeControlResourceSet_cce_REG_MappingType(&i_encoded_field->cce_REG_MappingType, buff, bits_iter, asn_error);

	EncodeControlResourceSet_precoderGranularity(i_encoded_field->precoderGranularity, buff, bits_iter, asn_error);

	if(i_encoded_field->tci_StatesPDCCH_ToAddList_exist == TRUE)
	{
		EncodeControlResourceSet_tci_StatesPDCCH_ToAddList(&i_encoded_field->tci_StatesPDCCH_ToAddList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tci_StatesPDCCH_ToReleaseList_exist == TRUE)
	{
		EncodeControlResourceSet_tci_StatesPDCCH_ToReleaseList(&i_encoded_field->tci_StatesPDCCH_ToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tci_PresentInDCI_exist == TRUE)
	{
		EncodeControlResourceSet_tci_PresentInDCI(i_encoded_field->tci_PresentInDCI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdcch_DMRS_ScramblingID_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->pdcch_DMRS_ScramblingID, 16, bits_iter);
	}

}

void DecodeControlResourceSet_frequencyDomainResources(
	ControlResourceSet_frequencyDomainResources_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 45;
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

void DecodeControlResourceSet_reg_BundleSize(
	ControlResourceSet_reg_BundleSize_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeControlResourceSet_interleaverSize(
	ControlResourceSet_interleaverSize_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeControlResourceSet_interleaved(
	ControlResourceSet_interleaved_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->shiftIndex_exist = Get_bits(buff, 1, bits_iter);
	DecodeControlResourceSet_reg_BundleSize(&o_decoded_field->reg_BundleSize, buff, bits_iter, asn_error);
	DecodeControlResourceSet_interleaverSize(&o_decoded_field->interleaverSize, buff, bits_iter, asn_error);
	if(o_decoded_field->shiftIndex_exist == TRUE)
	{
		o_decoded_field->shiftIndex = Get_bits(buff, 9, bits_iter);
	}

}

void DecodeControlResourceSet_nonInterleaved(
	ControlResourceSet_nonInterleaved_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeControlResourceSet_cce_REG_MappingType(
	ControlResourceSet_cce_REG_MappingType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CONTROLRESOURCESET_CCE_REG_MAPPINGTYPE_INTERLEAVED:
		DecodeControlResourceSet_interleaved(&o_decoded_field->a.interleaved, buff, bits_iter, asn_error);
		break;

	case CONTROLRESOURCESET_CCE_REG_MAPPINGTYPE_NONINTERLEAVED:
		DecodeControlResourceSet_nonInterleaved(&o_decoded_field->a.nonInterleaved, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeControlResourceSet_precoderGranularity(
	ControlResourceSet_precoderGranularity_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeControlResourceSet_tci_StatesPDCCH_ToAddList(
	ControlResourceSet_tci_StatesPDCCH_ToAddList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTCI_StateId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeControlResourceSet_tci_StatesPDCCH_ToReleaseList(
	ControlResourceSet_tci_StatesPDCCH_ToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTCI_StateId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeControlResourceSet_tci_PresentInDCI(
	ControlResourceSet_tci_PresentInDCI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeControlResourceSet(
	ControlResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->tci_StatesPDCCH_ToAddList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tci_StatesPDCCH_ToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tci_PresentInDCI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdcch_DMRS_ScramblingID_exist = Get_bits(buff, 1, bits_iter);
	DecodeControlResourceSetId(&o_decoded_field->controlResourceSetId, buff, bits_iter, asn_error);
	DecodeControlResourceSet_frequencyDomainResources(&o_decoded_field->frequencyDomainResources, buff, bits_iter, asn_error);
	o_decoded_field->duration = Get_bits(buff, 2, bits_iter) + 1;
	DecodeControlResourceSet_cce_REG_MappingType(&o_decoded_field->cce_REG_MappingType, buff, bits_iter, asn_error);
	DecodeControlResourceSet_precoderGranularity(&o_decoded_field->precoderGranularity, buff, bits_iter, asn_error);
	if(o_decoded_field->tci_StatesPDCCH_ToAddList_exist == TRUE)
	{
		DecodeControlResourceSet_tci_StatesPDCCH_ToAddList(&o_decoded_field->tci_StatesPDCCH_ToAddList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tci_StatesPDCCH_ToReleaseList_exist == TRUE)
	{
		DecodeControlResourceSet_tci_StatesPDCCH_ToReleaseList(&o_decoded_field->tci_StatesPDCCH_ToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tci_PresentInDCI_exist == TRUE)
	{
		DecodeControlResourceSet_tci_PresentInDCI(&o_decoded_field->tci_PresentInDCI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdcch_DMRS_ScramblingID_exist == TRUE)
	{
		o_decoded_field->pdcch_DMRS_ScramblingID = Get_bits(buff, 16, bits_iter);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

