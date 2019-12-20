/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * configured_grant_config.c - codec the message of ConfiguredGrantConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "configured_grant_config.h"


void EncodeConfiguredGrantConfig_frequencyHopping(
	ConfiguredGrantConfig_frequencyHopping_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeConfiguredGrantConfig_mcs_Table(
	ConfiguredGrantConfig_mcs_Table_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeConfiguredGrantConfig_mcs_TableTransformPrecoder(
	ConfiguredGrantConfig_mcs_TableTransformPrecoder_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeConfiguredGrantConfig_release(
	ConfiguredGrantConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeConfiguredGrantConfig_uci_OnPUSCH(
	ConfiguredGrantConfig_uci_OnPUSCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CONFIGUREDGRANTCONFIG_UCI_ONPUSCH_RELEASE:
		EncodeConfiguredGrantConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case CONFIGUREDGRANTCONFIG_UCI_ONPUSCH_SETUP:
		EncodeCG_UCI_OnPUSCH(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeConfiguredGrantConfig_resourceAllocation(
	ConfiguredGrantConfig_resourceAllocation_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeConfiguredGrantConfig_rbg_Size(
	ConfiguredGrantConfig_rbg_Size_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeConfiguredGrantConfig_powerControlLoopToUse(
	ConfiguredGrantConfig_powerControlLoopToUse_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeConfiguredGrantConfig_transformPrecoder(
	ConfiguredGrantConfig_transformPrecoder_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeConfiguredGrantConfig_repK(
	ConfiguredGrantConfig_repK_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeConfiguredGrantConfig_repK_RV(
	ConfiguredGrantConfig_repK_RV_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeConfiguredGrantConfig_periodicity(
	ConfiguredGrantConfig_periodicity_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 6, bits_iter);
}

void EncodeConfiguredGrantConfig_frequencyDomainAllocation(
	ConfiguredGrantConfig_frequencyDomainAllocation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeConfiguredGrantConfig_rrc_ConfiguredUplinkGrant(
	ConfiguredGrantConfig_rrc_ConfiguredUplinkGrant_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->dmrs_SeqInitialization_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->frequencyHoppingOffset_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	PutBits(buff, i_encoded_field->timeDomainOffset, 13, bits_iter);

	PutBits(buff, i_encoded_field->timeDomainAllocation, 4, bits_iter);

	EncodeConfiguredGrantConfig_frequencyDomainAllocation(&i_encoded_field->frequencyDomainAllocation, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->antennaPort, 5, bits_iter);

	if(i_encoded_field->dmrs_SeqInitialization_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->dmrs_SeqInitialization, 1, bits_iter);
	}

	PutBits(buff, i_encoded_field->precodingAndNumberOfLayers, 6, bits_iter);

	PutBits(buff, i_encoded_field->srs_ResourceIndicator, 4, bits_iter);

	PutBits(buff, i_encoded_field->mcsAndTBS, 5, bits_iter);

	if(i_encoded_field->frequencyHoppingOffset_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->frequencyHoppingOffset - 1, 9, bits_iter);
	}

	PutBits(buff, i_encoded_field->pathlossReferenceIndex, 2, bits_iter);

}

void EncodeConfiguredGrantConfig(
	ConfiguredGrantConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->frequencyHopping_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->mcs_Table_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->mcs_TableTransformPrecoder_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rbg_Size_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->transformPrecoder_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->repK_RV_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->configuredGrantTimer_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rrc_ConfiguredUplinkGrant_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->frequencyHopping_exist == TRUE)
	{
		EncodeConfiguredGrantConfig_frequencyHopping(i_encoded_field->frequencyHopping, buff, bits_iter, asn_error);
	}

	EncodeDMRS_UplinkConfig(&i_encoded_field->cg_DMRS_Configuration, buff, bits_iter, asn_error);

	if(i_encoded_field->mcs_Table_exist == TRUE)
	{
		EncodeConfiguredGrantConfig_mcs_Table(i_encoded_field->mcs_Table, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mcs_TableTransformPrecoder_exist == TRUE)
	{
		EncodeConfiguredGrantConfig_mcs_TableTransformPrecoder(i_encoded_field->mcs_TableTransformPrecoder, buff, bits_iter, asn_error);
	}

	EncodeConfiguredGrantConfig_uci_OnPUSCH(&i_encoded_field->uci_OnPUSCH, buff, bits_iter, asn_error);

	EncodeConfiguredGrantConfig_resourceAllocation(i_encoded_field->resourceAllocation, buff, bits_iter, asn_error);

	if(i_encoded_field->rbg_Size_exist == TRUE)
	{
		EncodeConfiguredGrantConfig_rbg_Size(i_encoded_field->rbg_Size, buff, bits_iter, asn_error);
	}

	EncodeConfiguredGrantConfig_powerControlLoopToUse(i_encoded_field->powerControlLoopToUse, buff, bits_iter, asn_error);

	EncodeP0_PUSCH_AlphaSetId(&i_encoded_field->p0_PUSCH_Alpha, buff, bits_iter, asn_error);

	if(i_encoded_field->transformPrecoder_exist == TRUE)
	{
		EncodeConfiguredGrantConfig_transformPrecoder(i_encoded_field->transformPrecoder, buff, bits_iter, asn_error);
	}

	PutBits(buff, i_encoded_field->nrofHARQ_Processes - 1, 4, bits_iter);

	EncodeConfiguredGrantConfig_repK(i_encoded_field->repK, buff, bits_iter, asn_error);

	if(i_encoded_field->repK_RV_exist == TRUE)
	{
		EncodeConfiguredGrantConfig_repK_RV(i_encoded_field->repK_RV, buff, bits_iter, asn_error);
	}

	EncodeConfiguredGrantConfig_periodicity(i_encoded_field->periodicity, buff, bits_iter, asn_error);

	if(i_encoded_field->configuredGrantTimer_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->configuredGrantTimer - 1, 6, bits_iter);
	}

	if(i_encoded_field->rrc_ConfiguredUplinkGrant_exist == TRUE)
	{
		EncodeConfiguredGrantConfig_rrc_ConfiguredUplinkGrant(&i_encoded_field->rrc_ConfiguredUplinkGrant, buff, bits_iter, asn_error);
	}

}

void DecodeConfiguredGrantConfig_frequencyHopping(
	ConfiguredGrantConfig_frequencyHopping_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeConfiguredGrantConfig_mcs_Table(
	ConfiguredGrantConfig_mcs_Table_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeConfiguredGrantConfig_mcs_TableTransformPrecoder(
	ConfiguredGrantConfig_mcs_TableTransformPrecoder_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeConfiguredGrantConfig_release(
	ConfiguredGrantConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeConfiguredGrantConfig_uci_OnPUSCH(
	ConfiguredGrantConfig_uci_OnPUSCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CONFIGUREDGRANTCONFIG_UCI_ONPUSCH_RELEASE:
		DecodeConfiguredGrantConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case CONFIGUREDGRANTCONFIG_UCI_ONPUSCH_SETUP:
		DecodeCG_UCI_OnPUSCH(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeConfiguredGrantConfig_resourceAllocation(
	ConfiguredGrantConfig_resourceAllocation_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeConfiguredGrantConfig_rbg_Size(
	ConfiguredGrantConfig_rbg_Size_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeConfiguredGrantConfig_powerControlLoopToUse(
	ConfiguredGrantConfig_powerControlLoopToUse_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeConfiguredGrantConfig_transformPrecoder(
	ConfiguredGrantConfig_transformPrecoder_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeConfiguredGrantConfig_repK(
	ConfiguredGrantConfig_repK_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeConfiguredGrantConfig_repK_RV(
	ConfiguredGrantConfig_repK_RV_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeConfiguredGrantConfig_periodicity(
	ConfiguredGrantConfig_periodicity_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 6, bits_iter);
}

void DecodeConfiguredGrantConfig_frequencyDomainAllocation(
	ConfiguredGrantConfig_frequencyDomainAllocation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 18;
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

void DecodeConfiguredGrantConfig_rrc_ConfiguredUplinkGrant(
	ConfiguredGrantConfig_rrc_ConfiguredUplinkGrant_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->dmrs_SeqInitialization_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->frequencyHoppingOffset_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->timeDomainOffset = Get_bits(buff, 13, bits_iter);
	o_decoded_field->timeDomainAllocation = Get_bits(buff, 4, bits_iter);
	DecodeConfiguredGrantConfig_frequencyDomainAllocation(&o_decoded_field->frequencyDomainAllocation, buff, bits_iter, asn_error);
	o_decoded_field->antennaPort = Get_bits(buff, 5, bits_iter);
	if(o_decoded_field->dmrs_SeqInitialization_exist == TRUE)
	{
		o_decoded_field->dmrs_SeqInitialization = Get_bits(buff, 1, bits_iter);
	}

	o_decoded_field->precodingAndNumberOfLayers = Get_bits(buff, 6, bits_iter);
	o_decoded_field->srs_ResourceIndicator = Get_bits(buff, 4, bits_iter);
	o_decoded_field->mcsAndTBS = Get_bits(buff, 5, bits_iter);
	if(o_decoded_field->frequencyHoppingOffset_exist == TRUE)
	{
		o_decoded_field->frequencyHoppingOffset = Get_bits(buff, 9, bits_iter) + 1;
	}

	o_decoded_field->pathlossReferenceIndex = Get_bits(buff, 2, bits_iter);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeConfiguredGrantConfig(
	ConfiguredGrantConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->frequencyHopping_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mcs_Table_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mcs_TableTransformPrecoder_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rbg_Size_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->transformPrecoder_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->repK_RV_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->configuredGrantTimer_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rrc_ConfiguredUplinkGrant_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->frequencyHopping_exist == TRUE)
	{
		DecodeConfiguredGrantConfig_frequencyHopping(&o_decoded_field->frequencyHopping, buff, bits_iter, asn_error);
	}

	DecodeDMRS_UplinkConfig(&o_decoded_field->cg_DMRS_Configuration, buff, bits_iter, asn_error);
	if(o_decoded_field->mcs_Table_exist == TRUE)
	{
		DecodeConfiguredGrantConfig_mcs_Table(&o_decoded_field->mcs_Table, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mcs_TableTransformPrecoder_exist == TRUE)
	{
		DecodeConfiguredGrantConfig_mcs_TableTransformPrecoder(&o_decoded_field->mcs_TableTransformPrecoder, buff, bits_iter, asn_error);
	}

	DecodeConfiguredGrantConfig_uci_OnPUSCH(&o_decoded_field->uci_OnPUSCH, buff, bits_iter, asn_error);
	DecodeConfiguredGrantConfig_resourceAllocation(&o_decoded_field->resourceAllocation, buff, bits_iter, asn_error);
	if(o_decoded_field->rbg_Size_exist == TRUE)
	{
		DecodeConfiguredGrantConfig_rbg_Size(&o_decoded_field->rbg_Size, buff, bits_iter, asn_error);
	}

	DecodeConfiguredGrantConfig_powerControlLoopToUse(&o_decoded_field->powerControlLoopToUse, buff, bits_iter, asn_error);
	DecodeP0_PUSCH_AlphaSetId(&o_decoded_field->p0_PUSCH_Alpha, buff, bits_iter, asn_error);
	if(o_decoded_field->transformPrecoder_exist == TRUE)
	{
		DecodeConfiguredGrantConfig_transformPrecoder(&o_decoded_field->transformPrecoder, buff, bits_iter, asn_error);
	}

	o_decoded_field->nrofHARQ_Processes = Get_bits(buff, 4, bits_iter) + 1;
	DecodeConfiguredGrantConfig_repK(&o_decoded_field->repK, buff, bits_iter, asn_error);
	if(o_decoded_field->repK_RV_exist == TRUE)
	{
		DecodeConfiguredGrantConfig_repK_RV(&o_decoded_field->repK_RV, buff, bits_iter, asn_error);
	}

	DecodeConfiguredGrantConfig_periodicity(&o_decoded_field->periodicity, buff, bits_iter, asn_error);
	if(o_decoded_field->configuredGrantTimer_exist == TRUE)
	{
		o_decoded_field->configuredGrantTimer = Get_bits(buff, 6, bits_iter) + 1;
	}

	if(o_decoded_field->rrc_ConfiguredUplinkGrant_exist == TRUE)
	{
		DecodeConfiguredGrantConfig_rrc_ConfiguredUplinkGrant(&o_decoded_field->rrc_ConfiguredUplinkGrant, buff, bits_iter, asn_error);
	}

}

