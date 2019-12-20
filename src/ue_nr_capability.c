/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_nr_capability.c - codec the message of UE-NR-Capability
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ue_nr_capability.h"


void EncodeUE_NR_Capability_featureSetCombinations(
	UE_NR_Capability_featureSetCombinations_t *i_encoded_field, 
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

void EncodeUE_NR_Capability_lateNonCriticalExtension(
	UE_NR_Capability_lateNonCriticalExtension_t *i_encoded_field, 
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

void EncodeUE_NR_Capability_nonCriticalExtension(
	UE_NR_Capability_nonCriticalExtension_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeUE_NR_Capability(
	UE_NR_Capability_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->rlc_Parameters_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->mac_Parameters_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measParameters_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->fdd_Add_UE_NR_Capabilities_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tdd_Add_UE_NR_Capabilities_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->fr1_Add_UE_NR_Capabilities_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->fr2_Add_UE_NR_Capabilities_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->featureSets_exist == TRUE)
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

	EncodeAccessStratumRelease(i_encoded_field->accessStratumRelease, buff, bits_iter, asn_error);

	EncodePDCP_Parameters(&i_encoded_field->pdcp_Parameters, buff, bits_iter, asn_error);

	if(i_encoded_field->rlc_Parameters_exist == TRUE)
	{
		EncodeRLC_Parameters(&i_encoded_field->rlc_Parameters, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mac_Parameters_exist == TRUE)
	{
		EncodeMAC_Parameters(&i_encoded_field->mac_Parameters, buff, bits_iter, asn_error);
	}

	EncodePhy_Parameters(&i_encoded_field->phy_Parameters, buff, bits_iter, asn_error);

	EncodeRF_Parameters(&i_encoded_field->rf_Parameters, buff, bits_iter, asn_error);

	if(i_encoded_field->measParameters_exist == TRUE)
	{
		EncodeMeasParameters(&i_encoded_field->measParameters, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->fdd_Add_UE_NR_Capabilities_exist == TRUE)
	{
		EncodeUE_NR_CapabilityAddXDD_Mode(&i_encoded_field->fdd_Add_UE_NR_Capabilities, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tdd_Add_UE_NR_Capabilities_exist == TRUE)
	{
		EncodeUE_NR_CapabilityAddXDD_Mode(&i_encoded_field->tdd_Add_UE_NR_Capabilities, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->fr1_Add_UE_NR_Capabilities_exist == TRUE)
	{
		EncodeUE_NR_CapabilityAddFRX_Mode(&i_encoded_field->fr1_Add_UE_NR_Capabilities, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->fr2_Add_UE_NR_Capabilities_exist == TRUE)
	{
		EncodeUE_NR_CapabilityAddFRX_Mode(&i_encoded_field->fr2_Add_UE_NR_Capabilities, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->featureSets_exist == TRUE)
	{
		EncodeFeatureSets(&i_encoded_field->featureSets, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->featureSetCombinations_exist == TRUE)
	{
		EncodeUE_NR_Capability_featureSetCombinations(&i_encoded_field->featureSetCombinations, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->lateNonCriticalExtension_exist == TRUE)
	{
		EncodeUE_NR_Capability_lateNonCriticalExtension(&i_encoded_field->lateNonCriticalExtension, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nonCriticalExtension_exist == TRUE)
	{
	}

}

void DecodeUE_NR_Capability_featureSetCombinations(
	UE_NR_Capability_featureSetCombinations_t *o_decoded_field, 
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

void DecodeUE_NR_Capability_lateNonCriticalExtension(
	UE_NR_Capability_lateNonCriticalExtension_t *o_decoded_field, 
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

void DecodeUE_NR_Capability_nonCriticalExtension(
	UE_NR_Capability_nonCriticalExtension_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeUE_NR_Capability(
	UE_NR_Capability_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->rlc_Parameters_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mac_Parameters_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measParameters_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->fdd_Add_UE_NR_Capabilities_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tdd_Add_UE_NR_Capabilities_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->fr1_Add_UE_NR_Capabilities_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->fr2_Add_UE_NR_Capabilities_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->featureSets_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->featureSetCombinations_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->lateNonCriticalExtension_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nonCriticalExtension_exist = Get_bits(buff, 1, bits_iter);
	DecodeAccessStratumRelease(&o_decoded_field->accessStratumRelease, buff, bits_iter, asn_error);
	DecodePDCP_Parameters(&o_decoded_field->pdcp_Parameters, buff, bits_iter, asn_error);
	if(o_decoded_field->rlc_Parameters_exist == TRUE)
	{
		DecodeRLC_Parameters(&o_decoded_field->rlc_Parameters, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mac_Parameters_exist == TRUE)
	{
		DecodeMAC_Parameters(&o_decoded_field->mac_Parameters, buff, bits_iter, asn_error);
	}

	DecodePhy_Parameters(&o_decoded_field->phy_Parameters, buff, bits_iter, asn_error);
	DecodeRF_Parameters(&o_decoded_field->rf_Parameters, buff, bits_iter, asn_error);
	if(o_decoded_field->measParameters_exist == TRUE)
	{
		DecodeMeasParameters(&o_decoded_field->measParameters, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->fdd_Add_UE_NR_Capabilities_exist == TRUE)
	{
		DecodeUE_NR_CapabilityAddXDD_Mode(&o_decoded_field->fdd_Add_UE_NR_Capabilities, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tdd_Add_UE_NR_Capabilities_exist == TRUE)
	{
		DecodeUE_NR_CapabilityAddXDD_Mode(&o_decoded_field->tdd_Add_UE_NR_Capabilities, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->fr1_Add_UE_NR_Capabilities_exist == TRUE)
	{
		DecodeUE_NR_CapabilityAddFRX_Mode(&o_decoded_field->fr1_Add_UE_NR_Capabilities, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->fr2_Add_UE_NR_Capabilities_exist == TRUE)
	{
		DecodeUE_NR_CapabilityAddFRX_Mode(&o_decoded_field->fr2_Add_UE_NR_Capabilities, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->featureSets_exist == TRUE)
	{
		DecodeFeatureSets(&o_decoded_field->featureSets, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->featureSetCombinations_exist == TRUE)
	{
		DecodeUE_NR_Capability_featureSetCombinations(&o_decoded_field->featureSetCombinations, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->lateNonCriticalExtension_exist == TRUE)
	{
		DecodeUE_NR_Capability_lateNonCriticalExtension(&o_decoded_field->lateNonCriticalExtension, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nonCriticalExtension_exist == TRUE)
	{
	}

}

