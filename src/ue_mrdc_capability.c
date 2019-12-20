/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_mrdc_capability.c - codec the message of UE-MRDC-Capability
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ue_mrdc_capability.h"


void EncodeUE_MRDC_Capability_featureSetCombinations(
	UE_MRDC_Capability_featureSetCombinations_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 10, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeFeatureSetCombination(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeUE_MRDC_Capability_lateNonCriticalExtension(
	UE_MRDC_Capability_lateNonCriticalExtension_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->octets_num <= 127)
	{
		PutBits(buff, 0, 1, bits_iter);
		PutBits(buff, i_encoded_field->octets_num, 7, bits_iter);
	}
	else if(i_encoded_field->octets_num < 16 *1024)
	{
		PutBits(buff, 10, 2, bits_iter);
		PutBits(buff, i_encoded_field->octets_num, 14, bits_iter);
	}
	else
	{
		//the octets_num is too long.
	}

	PutOctets(buff, i_encoded_field->value, i_encoded_field->octets_num, bits_iter);
}

void EncodeUE_MRDC_Capability_nonCriticalExtension(
	UE_MRDC_Capability_nonCriticalExtension_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeUE_MRDC_Capability(
	UE_MRDC_Capability_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->measParametersMRDC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->generalParametersMRDC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->fdd_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tdd_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->fr1_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->fr2_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->featureSetCombinations_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->lateNonCriticalExtension_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nonCriticalExtension_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measParametersMRDC_exist == TRUE)
	{
		EncodeMeasParametersMRDC(&i_encoded_field->measParametersMRDC, buff, bits_iter, asn_error);
	}

	EncodeRF_ParametersMRDC(&i_encoded_field->rf_ParametersMRDC, buff, bits_iter, asn_error);

	if(i_encoded_field->generalParametersMRDC_exist == TRUE)
	{
		EncodeGeneralParametersMRDC_XDD_Diff(&i_encoded_field->generalParametersMRDC, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->fdd_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		EncodeUE_MRDC_CapabilityAddXDD_Mode(&i_encoded_field->fdd_Add_UE_MRDC_Capabilities, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tdd_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		EncodeUE_MRDC_CapabilityAddXDD_Mode(&i_encoded_field->tdd_Add_UE_MRDC_Capabilities, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->fr1_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		EncodeUE_MRDC_CapabilityAddFRX_Mode(&i_encoded_field->fr1_Add_UE_MRDC_Capabilities, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->fr2_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		EncodeUE_MRDC_CapabilityAddFRX_Mode(&i_encoded_field->fr2_Add_UE_MRDC_Capabilities, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->featureSetCombinations_exist == TRUE)
	{
		EncodeUE_MRDC_Capability_featureSetCombinations(&i_encoded_field->featureSetCombinations, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->lateNonCriticalExtension_exist == TRUE)
	{
		EncodeUE_MRDC_Capability_lateNonCriticalExtension(&i_encoded_field->lateNonCriticalExtension, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nonCriticalExtension_exist == TRUE)
	{
	}

}

void DecodeUE_MRDC_Capability_featureSetCombinations(
	UE_MRDC_Capability_featureSetCombinations_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 10, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeFeatureSetCombination(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeUE_MRDC_Capability_lateNonCriticalExtension(
	UE_MRDC_Capability_lateNonCriticalExtension_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint32    octet_num = 0;

	flag = Get_bits(buff, 1, bits_iter);
	if(flag == 0)
	{
		octet_num = Get_bits(buff, 7, bits_iter);
	}
	else
	{
		flag = Get_bits(buff, 1, bits_iter);
		if(flag == 0)
		{
			octet_num = Get_bits(buff, 14, bits_iter);
		}
		else
		{
			//the count is too long.
		}
	}

	o_decoded_field->octets_num = octet_num;
	o_decoded_field->value = AsnMalloc(octet_num);

	for(uint32 i = 0; i < octet_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeUE_MRDC_Capability_nonCriticalExtension(
	UE_MRDC_Capability_nonCriticalExtension_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeUE_MRDC_Capability(
	UE_MRDC_Capability_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->measParametersMRDC_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->generalParametersMRDC_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->fdd_Add_UE_MRDC_Capabilities_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tdd_Add_UE_MRDC_Capabilities_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->fr1_Add_UE_MRDC_Capabilities_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->fr2_Add_UE_MRDC_Capabilities_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->featureSetCombinations_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->lateNonCriticalExtension_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nonCriticalExtension_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->measParametersMRDC_exist == TRUE)
	{
		DecodeMeasParametersMRDC(&o_decoded_field->measParametersMRDC, buff, bits_iter, asn_error);
	}

	DecodeRF_ParametersMRDC(&o_decoded_field->rf_ParametersMRDC, buff, bits_iter, asn_error);
	if(o_decoded_field->generalParametersMRDC_exist == TRUE)
	{
		DecodeGeneralParametersMRDC_XDD_Diff(&o_decoded_field->generalParametersMRDC, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->fdd_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		DecodeUE_MRDC_CapabilityAddXDD_Mode(&o_decoded_field->fdd_Add_UE_MRDC_Capabilities, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tdd_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		DecodeUE_MRDC_CapabilityAddXDD_Mode(&o_decoded_field->tdd_Add_UE_MRDC_Capabilities, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->fr1_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		DecodeUE_MRDC_CapabilityAddFRX_Mode(&o_decoded_field->fr1_Add_UE_MRDC_Capabilities, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->fr2_Add_UE_MRDC_Capabilities_exist == TRUE)
	{
		DecodeUE_MRDC_CapabilityAddFRX_Mode(&o_decoded_field->fr2_Add_UE_MRDC_Capabilities, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->featureSetCombinations_exist == TRUE)
	{
		DecodeUE_MRDC_Capability_featureSetCombinations(&o_decoded_field->featureSetCombinations, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->lateNonCriticalExtension_exist == TRUE)
	{
		DecodeUE_MRDC_Capability_lateNonCriticalExtension(&o_decoded_field->lateNonCriticalExtension, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nonCriticalExtension_exist == TRUE)
	{
	}

}

