/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_config.c - codec the message of PUSCH-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pusch_config.h"


void EncodePUSCH_Config_txConfig(
	PUSCH_Config_txConfig_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePUSCH_Config_release(
	PUSCH_Config_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA(
	PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEA_RELEASE:
		EncodePUSCH_Config_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEA_SETUP:
		EncodeDMRS_UplinkConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUSCH_Config_release_1(
	PUSCH_Config_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB(
	PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEB_RELEASE:
		EncodePUSCH_Config_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEB_SETUP:
		EncodeDMRS_UplinkConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUSCH_Config_frequencyHopping(
	PUSCH_Config_frequencyHopping_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePUSCH_Config_frequencyHoppingOffsetLists(
	PUSCH_Config_frequencyHoppingOffsetLists_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		PutBits(buff, i_encoded_field->elm[i] - 1, 9, bits_iter);
	}
}

void EncodePUSCH_Config_resourceAllocation(
	PUSCH_Config_resourceAllocation_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePUSCH_Config_release_2(
	PUSCH_Config_release_2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePUSCH_Config_pusch_TimeDomainAllocationList(
	PUSCH_Config_pusch_TimeDomainAllocationList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUSCH_CONFIG_PUSCH_TIMEDOMAINALLOCATIONLIST_RELEASE:
		EncodePUSCH_Config_release_2(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUSCH_CONFIG_PUSCH_TIMEDOMAINALLOCATIONLIST_SETUP:
		EncodePUSCH_TimeDomainResourceAllocationList(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUSCH_Config_pusch_AggregationFactor(
	PUSCH_Config_pusch_AggregationFactor_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePUSCH_Config_mcs_Table(
	PUSCH_Config_mcs_Table_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePUSCH_Config_mcs_TableTransformPrecoder(
	PUSCH_Config_mcs_TableTransformPrecoder_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePUSCH_Config_transformPrecoder(
	PUSCH_Config_transformPrecoder_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePUSCH_Config_codebookSubset(
	PUSCH_Config_codebookSubset_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePUSCH_Config_rbg_Size(
	PUSCH_Config_rbg_Size_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUSCH_Config_release_3(
	PUSCH_Config_release_3_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePUSCH_Config_uci_OnPUSCH(
	PUSCH_Config_uci_OnPUSCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUSCH_CONFIG_UCI_ONPUSCH_RELEASE:
		EncodePUSCH_Config_release_3(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUSCH_CONFIG_UCI_ONPUSCH_SETUP:
		EncodeUCI_OnPUSCH(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUSCH_Config_tp_pi2BPSK(
	PUSCH_Config_tp_pi2BPSK_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUSCH_Config(
	PUSCH_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->dataScramblingIdentityPUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->txConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dmrs_UplinkForPUSCH_MappingTypeA_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dmrs_UplinkForPUSCH_MappingTypeB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pusch_PowerControl_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->frequencyHopping_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->frequencyHoppingOffsetLists_exist == TRUE)
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

	if(i_encoded_field->pusch_AggregationFactor_exist == TRUE)
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

	if(i_encoded_field->transformPrecoder_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->codebookSubset_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxRank_exist == TRUE)
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

	if(i_encoded_field->uci_OnPUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tp_pi2BPSK_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dataScramblingIdentityPUSCH_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->dataScramblingIdentityPUSCH, 10, bits_iter);
	}

	if(i_encoded_field->txConfig_exist == TRUE)
	{
		EncodePUSCH_Config_txConfig(i_encoded_field->txConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dmrs_UplinkForPUSCH_MappingTypeA_exist == TRUE)
	{
		EncodePUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA(&i_encoded_field->dmrs_UplinkForPUSCH_MappingTypeA, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dmrs_UplinkForPUSCH_MappingTypeB_exist == TRUE)
	{
		EncodePUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB(&i_encoded_field->dmrs_UplinkForPUSCH_MappingTypeB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_PowerControl_exist == TRUE)
	{
		EncodePUSCH_PowerControl(&i_encoded_field->pusch_PowerControl, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->frequencyHopping_exist == TRUE)
	{
		EncodePUSCH_Config_frequencyHopping(i_encoded_field->frequencyHopping, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->frequencyHoppingOffsetLists_exist == TRUE)
	{
		EncodePUSCH_Config_frequencyHoppingOffsetLists(&i_encoded_field->frequencyHoppingOffsetLists, buff, bits_iter, asn_error);
	}

	EncodePUSCH_Config_resourceAllocation(i_encoded_field->resourceAllocation, buff, bits_iter, asn_error);

	if(i_encoded_field->pusch_TimeDomainAllocationList_exist == TRUE)
	{
		EncodePUSCH_Config_pusch_TimeDomainAllocationList(&i_encoded_field->pusch_TimeDomainAllocationList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_AggregationFactor_exist == TRUE)
	{
		EncodePUSCH_Config_pusch_AggregationFactor(i_encoded_field->pusch_AggregationFactor, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mcs_Table_exist == TRUE)
	{
		EncodePUSCH_Config_mcs_Table(i_encoded_field->mcs_Table, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mcs_TableTransformPrecoder_exist == TRUE)
	{
		EncodePUSCH_Config_mcs_TableTransformPrecoder(i_encoded_field->mcs_TableTransformPrecoder, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->transformPrecoder_exist == TRUE)
	{
		EncodePUSCH_Config_transformPrecoder(i_encoded_field->transformPrecoder, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->codebookSubset_exist == TRUE)
	{
		EncodePUSCH_Config_codebookSubset(i_encoded_field->codebookSubset, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxRank_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxRank - 1, 2, bits_iter);
	}

	if(i_encoded_field->rbg_Size_exist == TRUE)
	{
		EncodePUSCH_Config_rbg_Size(i_encoded_field->rbg_Size, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->uci_OnPUSCH_exist == TRUE)
	{
		EncodePUSCH_Config_uci_OnPUSCH(&i_encoded_field->uci_OnPUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tp_pi2BPSK_exist == TRUE)
	{
		EncodePUSCH_Config_tp_pi2BPSK(i_encoded_field->tp_pi2BPSK, buff, bits_iter, asn_error);
	}

}

void DecodePUSCH_Config_txConfig(
	PUSCH_Config_txConfig_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePUSCH_Config_release(
	PUSCH_Config_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA(
	PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEA_RELEASE:
		DecodePUSCH_Config_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEA_SETUP:
		DecodeDMRS_UplinkConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUSCH_Config_release_1(
	PUSCH_Config_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB(
	PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEB_RELEASE:
		DecodePUSCH_Config_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEB_SETUP:
		DecodeDMRS_UplinkConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUSCH_Config_frequencyHopping(
	PUSCH_Config_frequencyHopping_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePUSCH_Config_frequencyHoppingOffsetLists(
	PUSCH_Config_frequencyHoppingOffsetLists_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		o_decoded_field->elm[i] = Get_bits(buff, 9, bits_iter) + 1;
	}
}

void DecodePUSCH_Config_resourceAllocation(
	PUSCH_Config_resourceAllocation_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePUSCH_Config_release_2(
	PUSCH_Config_release_2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePUSCH_Config_pusch_TimeDomainAllocationList(
	PUSCH_Config_pusch_TimeDomainAllocationList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUSCH_CONFIG_PUSCH_TIMEDOMAINALLOCATIONLIST_RELEASE:
		DecodePUSCH_Config_release_2(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUSCH_CONFIG_PUSCH_TIMEDOMAINALLOCATIONLIST_SETUP:
		DecodePUSCH_TimeDomainResourceAllocationList(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUSCH_Config_pusch_AggregationFactor(
	PUSCH_Config_pusch_AggregationFactor_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePUSCH_Config_mcs_Table(
	PUSCH_Config_mcs_Table_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePUSCH_Config_mcs_TableTransformPrecoder(
	PUSCH_Config_mcs_TableTransformPrecoder_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePUSCH_Config_transformPrecoder(
	PUSCH_Config_transformPrecoder_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePUSCH_Config_codebookSubset(
	PUSCH_Config_codebookSubset_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePUSCH_Config_rbg_Size(
	PUSCH_Config_rbg_Size_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUSCH_Config_release_3(
	PUSCH_Config_release_3_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePUSCH_Config_uci_OnPUSCH(
	PUSCH_Config_uci_OnPUSCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUSCH_CONFIG_UCI_ONPUSCH_RELEASE:
		DecodePUSCH_Config_release_3(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUSCH_CONFIG_UCI_ONPUSCH_SETUP:
		DecodeUCI_OnPUSCH(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUSCH_Config_tp_pi2BPSK(
	PUSCH_Config_tp_pi2BPSK_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUSCH_Config(
	PUSCH_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->dataScramblingIdentityPUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->txConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dmrs_UplinkForPUSCH_MappingTypeA_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dmrs_UplinkForPUSCH_MappingTypeB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_PowerControl_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->frequencyHopping_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->frequencyHoppingOffsetLists_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_TimeDomainAllocationList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_AggregationFactor_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mcs_Table_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mcs_TableTransformPrecoder_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->transformPrecoder_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->codebookSubset_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxRank_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rbg_Size_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->uci_OnPUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tp_pi2BPSK_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->dataScramblingIdentityPUSCH_exist == TRUE)
	{
		o_decoded_field->dataScramblingIdentityPUSCH = Get_bits(buff, 10, bits_iter);
	}

	if(o_decoded_field->txConfig_exist == TRUE)
	{
		DecodePUSCH_Config_txConfig(&o_decoded_field->txConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dmrs_UplinkForPUSCH_MappingTypeA_exist == TRUE)
	{
		DecodePUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA(&o_decoded_field->dmrs_UplinkForPUSCH_MappingTypeA, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dmrs_UplinkForPUSCH_MappingTypeB_exist == TRUE)
	{
		DecodePUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB(&o_decoded_field->dmrs_UplinkForPUSCH_MappingTypeB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_PowerControl_exist == TRUE)
	{
		DecodePUSCH_PowerControl(&o_decoded_field->pusch_PowerControl, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->frequencyHopping_exist == TRUE)
	{
		DecodePUSCH_Config_frequencyHopping(&o_decoded_field->frequencyHopping, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->frequencyHoppingOffsetLists_exist == TRUE)
	{
		DecodePUSCH_Config_frequencyHoppingOffsetLists(&o_decoded_field->frequencyHoppingOffsetLists, buff, bits_iter, asn_error);
	}

	DecodePUSCH_Config_resourceAllocation(&o_decoded_field->resourceAllocation, buff, bits_iter, asn_error);
	if(o_decoded_field->pusch_TimeDomainAllocationList_exist == TRUE)
	{
		DecodePUSCH_Config_pusch_TimeDomainAllocationList(&o_decoded_field->pusch_TimeDomainAllocationList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_AggregationFactor_exist == TRUE)
	{
		DecodePUSCH_Config_pusch_AggregationFactor(&o_decoded_field->pusch_AggregationFactor, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mcs_Table_exist == TRUE)
	{
		DecodePUSCH_Config_mcs_Table(&o_decoded_field->mcs_Table, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mcs_TableTransformPrecoder_exist == TRUE)
	{
		DecodePUSCH_Config_mcs_TableTransformPrecoder(&o_decoded_field->mcs_TableTransformPrecoder, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->transformPrecoder_exist == TRUE)
	{
		DecodePUSCH_Config_transformPrecoder(&o_decoded_field->transformPrecoder, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->codebookSubset_exist == TRUE)
	{
		DecodePUSCH_Config_codebookSubset(&o_decoded_field->codebookSubset, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxRank_exist == TRUE)
	{
		o_decoded_field->maxRank = Get_bits(buff, 2, bits_iter) + 1;
	}

	if(o_decoded_field->rbg_Size_exist == TRUE)
	{
		DecodePUSCH_Config_rbg_Size(&o_decoded_field->rbg_Size, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->uci_OnPUSCH_exist == TRUE)
	{
		DecodePUSCH_Config_uci_OnPUSCH(&o_decoded_field->uci_OnPUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tp_pi2BPSK_exist == TRUE)
	{
		DecodePUSCH_Config_tp_pi2BPSK(&o_decoded_field->tp_pi2BPSK, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

