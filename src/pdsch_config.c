/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdsch_config.c - codec the message of PDSCH-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pdsch_config.h"


void EncodePDSCH_Config_release(
	PDSCH_Config_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA(
	PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEA_RELEASE:
		EncodePDSCH_Config_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEA_SETUP:
		EncodeDMRS_DownlinkConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDSCH_Config_release_1(
	PDSCH_Config_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB(
	PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEB_RELEASE:
		EncodePDSCH_Config_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEB_SETUP:
		EncodeDMRS_DownlinkConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDSCH_Config_tci_StatesToAddModList(
	PDSCH_Config_tci_StatesToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTCI_State(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDSCH_Config_tci_StatesToReleaseList(
	PDSCH_Config_tci_StatesToReleaseList_t *i_encoded_field, 
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

void EncodePDSCH_Config_vrb_ToPRB_Interleaver(
	PDSCH_Config_vrb_ToPRB_Interleaver_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePDSCH_Config_resourceAllocation(
	PDSCH_Config_resourceAllocation_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePDSCH_Config_release_2(
	PDSCH_Config_release_2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePDSCH_Config_pdsch_TimeDomainAllocationList(
	PDSCH_Config_pdsch_TimeDomainAllocationList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDSCH_CONFIG_PDSCH_TIMEDOMAINALLOCATIONLIST_RELEASE:
		EncodePDSCH_Config_release_2(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDSCH_CONFIG_PDSCH_TIMEDOMAINALLOCATIONLIST_SETUP:
		EncodePDSCH_TimeDomainResourceAllocationList(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDSCH_Config_pdsch_AggregationFactor(
	PDSCH_Config_pdsch_AggregationFactor_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePDSCH_Config_rateMatchPatternToAddModList(
	PDSCH_Config_rateMatchPatternToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeRateMatchPattern(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDSCH_Config_rateMatchPatternToReleaseList(
	PDSCH_Config_rateMatchPatternToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeRateMatchPatternId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDSCH_Config_rbg_Size(
	PDSCH_Config_rbg_Size_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePDSCH_Config_mcs_Table(
	PDSCH_Config_mcs_Table_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePDSCH_Config_maxNrofCodeWordsScheduledByDCI(
	PDSCH_Config_maxNrofCodeWordsScheduledByDCI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePDSCH_Config_bundleSize(
	PDSCH_Config_bundleSize_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePDSCH_Config_staticBundling(
	PDSCH_Config_staticBundling_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->bundleSize_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->bundleSize_exist == TRUE)
	{
		EncodePDSCH_Config_bundleSize(i_encoded_field->bundleSize, buff, bits_iter, asn_error);
	}

}

void EncodePDSCH_Config_bundleSizeSet1(
	PDSCH_Config_bundleSizeSet1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePDSCH_Config_bundleSizeSet2(
	PDSCH_Config_bundleSizeSet2_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePDSCH_Config_dynamicBundling(
	PDSCH_Config_dynamicBundling_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->bundleSizeSet1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->bundleSizeSet2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->bundleSizeSet1_exist == TRUE)
	{
		EncodePDSCH_Config_bundleSizeSet1(i_encoded_field->bundleSizeSet1, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->bundleSizeSet2_exist == TRUE)
	{
		EncodePDSCH_Config_bundleSizeSet2(i_encoded_field->bundleSizeSet2, buff, bits_iter, asn_error);
	}

}

void EncodePDSCH_Config_prb_BundlingType(
	PDSCH_Config_prb_BundlingType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDSCH_CONFIG_PRB_BUNDLINGTYPE_STATICBUNDLING:
		EncodePDSCH_Config_staticBundling(&i_encoded_field->a.staticBundling, buff, bits_iter, asn_error);
		break;

	case PDSCH_CONFIG_PRB_BUNDLINGTYPE_DYNAMICBUNDLING:
		EncodePDSCH_Config_dynamicBundling(&i_encoded_field->a.dynamicBundling, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDSCH_Config_zp_CSI_RS_ResourceToAddModList(
	PDSCH_Config_zp_CSI_RS_ResourceToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeZP_CSI_RS_Resource(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDSCH_Config_zp_CSI_RS_ResourceToReleaseList(
	PDSCH_Config_zp_CSI_RS_ResourceToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeZP_CSI_RS_ResourceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList(
	PDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeZP_CSI_RS_ResourceSet(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList(
	PDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeZP_CSI_RS_ResourceSetId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToAddModList(
	PDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeZP_CSI_RS_ResourceSet(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToReleaseList(
	PDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeZP_CSI_RS_ResourceSetId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDSCH_Config_release_3(
	PDSCH_Config_release_3_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePDSCH_Config_p_ZP_CSI_RS_ResourceSet(
	PDSCH_Config_p_ZP_CSI_RS_ResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDSCH_CONFIG_P_ZP_CSI_RS_RESOURCESET_RELEASE:
		EncodePDSCH_Config_release_3(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDSCH_CONFIG_P_ZP_CSI_RS_RESOURCESET_SETUP:
		EncodeZP_CSI_RS_ResourceSet(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDSCH_Config(
	PDSCH_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->dataScramblingIdentityPDSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dmrs_DownlinkForPDSCH_MappingTypeA_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dmrs_DownlinkForPDSCH_MappingTypeB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tci_StatesToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tci_StatesToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->vrb_ToPRB_Interleaver_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_TimeDomainAllocationList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_AggregationFactor_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rateMatchPatternToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rateMatchPatternToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rateMatchPatternGroup1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rateMatchPatternGroup2_exist == TRUE)
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

	if(i_encoded_field->maxNrofCodeWordsScheduledByDCI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->zp_CSI_RS_ResourceToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->zp_CSI_RS_ResourceToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sp_ZP_CSI_RS_ResourceSetsToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sp_ZP_CSI_RS_ResourceSetsToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->p_ZP_CSI_RS_ResourceSet_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dataScramblingIdentityPDSCH_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->dataScramblingIdentityPDSCH, 10, bits_iter);
	}

	if(i_encoded_field->dmrs_DownlinkForPDSCH_MappingTypeA_exist == TRUE)
	{
		EncodePDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA(&i_encoded_field->dmrs_DownlinkForPDSCH_MappingTypeA, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dmrs_DownlinkForPDSCH_MappingTypeB_exist == TRUE)
	{
		EncodePDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB(&i_encoded_field->dmrs_DownlinkForPDSCH_MappingTypeB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tci_StatesToAddModList_exist == TRUE)
	{
		EncodePDSCH_Config_tci_StatesToAddModList(&i_encoded_field->tci_StatesToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tci_StatesToReleaseList_exist == TRUE)
	{
		EncodePDSCH_Config_tci_StatesToReleaseList(&i_encoded_field->tci_StatesToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->vrb_ToPRB_Interleaver_exist == TRUE)
	{
		EncodePDSCH_Config_vrb_ToPRB_Interleaver(i_encoded_field->vrb_ToPRB_Interleaver, buff, bits_iter, asn_error);
	}

	EncodePDSCH_Config_resourceAllocation(i_encoded_field->resourceAllocation, buff, bits_iter, asn_error);

	if(i_encoded_field->pdsch_TimeDomainAllocationList_exist == TRUE)
	{
		EncodePDSCH_Config_pdsch_TimeDomainAllocationList(&i_encoded_field->pdsch_TimeDomainAllocationList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_AggregationFactor_exist == TRUE)
	{
		EncodePDSCH_Config_pdsch_AggregationFactor(i_encoded_field->pdsch_AggregationFactor, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rateMatchPatternToAddModList_exist == TRUE)
	{
		EncodePDSCH_Config_rateMatchPatternToAddModList(&i_encoded_field->rateMatchPatternToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rateMatchPatternToReleaseList_exist == TRUE)
	{
		EncodePDSCH_Config_rateMatchPatternToReleaseList(&i_encoded_field->rateMatchPatternToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rateMatchPatternGroup1_exist == TRUE)
	{
		EncodeRateMatchPatternGroup(&i_encoded_field->rateMatchPatternGroup1, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rateMatchPatternGroup2_exist == TRUE)
	{
		EncodeRateMatchPatternGroup(&i_encoded_field->rateMatchPatternGroup2, buff, bits_iter, asn_error);
	}

	EncodePDSCH_Config_rbg_Size(i_encoded_field->rbg_Size, buff, bits_iter, asn_error);

	if(i_encoded_field->mcs_Table_exist == TRUE)
	{
		EncodePDSCH_Config_mcs_Table(i_encoded_field->mcs_Table, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxNrofCodeWordsScheduledByDCI_exist == TRUE)
	{
		EncodePDSCH_Config_maxNrofCodeWordsScheduledByDCI(i_encoded_field->maxNrofCodeWordsScheduledByDCI, buff, bits_iter, asn_error);
	}

	EncodePDSCH_Config_prb_BundlingType(&i_encoded_field->prb_BundlingType, buff, bits_iter, asn_error);

	if(i_encoded_field->zp_CSI_RS_ResourceToAddModList_exist == TRUE)
	{
		EncodePDSCH_Config_zp_CSI_RS_ResourceToAddModList(&i_encoded_field->zp_CSI_RS_ResourceToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->zp_CSI_RS_ResourceToReleaseList_exist == TRUE)
	{
		EncodePDSCH_Config_zp_CSI_RS_ResourceToReleaseList(&i_encoded_field->zp_CSI_RS_ResourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_exist == TRUE)
	{
		EncodePDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList(&i_encoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_exist == TRUE)
	{
		EncodePDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList(&i_encoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sp_ZP_CSI_RS_ResourceSetsToAddModList_exist == TRUE)
	{
		EncodePDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToAddModList(&i_encoded_field->sp_ZP_CSI_RS_ResourceSetsToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sp_ZP_CSI_RS_ResourceSetsToReleaseList_exist == TRUE)
	{
		EncodePDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToReleaseList(&i_encoded_field->sp_ZP_CSI_RS_ResourceSetsToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->p_ZP_CSI_RS_ResourceSet_exist == TRUE)
	{
		EncodePDSCH_Config_p_ZP_CSI_RS_ResourceSet(&i_encoded_field->p_ZP_CSI_RS_ResourceSet, buff, bits_iter, asn_error);
	}

}

void DecodePDSCH_Config_release(
	PDSCH_Config_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA(
	PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEA_RELEASE:
		DecodePDSCH_Config_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEA_SETUP:
		DecodeDMRS_DownlinkConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDSCH_Config_release_1(
	PDSCH_Config_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB(
	PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEB_RELEASE:
		DecodePDSCH_Config_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEB_SETUP:
		DecodeDMRS_DownlinkConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDSCH_Config_tci_StatesToAddModList(
	PDSCH_Config_tci_StatesToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTCI_State(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDSCH_Config_tci_StatesToReleaseList(
	PDSCH_Config_tci_StatesToReleaseList_t *o_decoded_field, 
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

void DecodePDSCH_Config_vrb_ToPRB_Interleaver(
	PDSCH_Config_vrb_ToPRB_Interleaver_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePDSCH_Config_resourceAllocation(
	PDSCH_Config_resourceAllocation_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePDSCH_Config_release_2(
	PDSCH_Config_release_2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePDSCH_Config_pdsch_TimeDomainAllocationList(
	PDSCH_Config_pdsch_TimeDomainAllocationList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PDSCH_CONFIG_PDSCH_TIMEDOMAINALLOCATIONLIST_RELEASE:
		DecodePDSCH_Config_release_2(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDSCH_CONFIG_PDSCH_TIMEDOMAINALLOCATIONLIST_SETUP:
		DecodePDSCH_TimeDomainResourceAllocationList(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDSCH_Config_pdsch_AggregationFactor(
	PDSCH_Config_pdsch_AggregationFactor_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePDSCH_Config_rateMatchPatternToAddModList(
	PDSCH_Config_rateMatchPatternToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeRateMatchPattern(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDSCH_Config_rateMatchPatternToReleaseList(
	PDSCH_Config_rateMatchPatternToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeRateMatchPatternId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDSCH_Config_rbg_Size(
	PDSCH_Config_rbg_Size_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePDSCH_Config_mcs_Table(
	PDSCH_Config_mcs_Table_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePDSCH_Config_maxNrofCodeWordsScheduledByDCI(
	PDSCH_Config_maxNrofCodeWordsScheduledByDCI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePDSCH_Config_bundleSize(
	PDSCH_Config_bundleSize_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePDSCH_Config_staticBundling(
	PDSCH_Config_staticBundling_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->bundleSize_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->bundleSize_exist == TRUE)
	{
		DecodePDSCH_Config_bundleSize(&o_decoded_field->bundleSize, buff, bits_iter, asn_error);
	}

}

void DecodePDSCH_Config_bundleSizeSet1(
	PDSCH_Config_bundleSizeSet1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePDSCH_Config_bundleSizeSet2(
	PDSCH_Config_bundleSizeSet2_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePDSCH_Config_dynamicBundling(
	PDSCH_Config_dynamicBundling_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->bundleSizeSet1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->bundleSizeSet2_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->bundleSizeSet1_exist == TRUE)
	{
		DecodePDSCH_Config_bundleSizeSet1(&o_decoded_field->bundleSizeSet1, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->bundleSizeSet2_exist == TRUE)
	{
		DecodePDSCH_Config_bundleSizeSet2(&o_decoded_field->bundleSizeSet2, buff, bits_iter, asn_error);
	}

}

void DecodePDSCH_Config_prb_BundlingType(
	PDSCH_Config_prb_BundlingType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PDSCH_CONFIG_PRB_BUNDLINGTYPE_STATICBUNDLING:
		DecodePDSCH_Config_staticBundling(&o_decoded_field->a.staticBundling, buff, bits_iter, asn_error);
		break;

	case PDSCH_CONFIG_PRB_BUNDLINGTYPE_DYNAMICBUNDLING:
		DecodePDSCH_Config_dynamicBundling(&o_decoded_field->a.dynamicBundling, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDSCH_Config_zp_CSI_RS_ResourceToAddModList(
	PDSCH_Config_zp_CSI_RS_ResourceToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeZP_CSI_RS_Resource(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDSCH_Config_zp_CSI_RS_ResourceToReleaseList(
	PDSCH_Config_zp_CSI_RS_ResourceToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeZP_CSI_RS_ResourceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList(
	PDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeZP_CSI_RS_ResourceSet(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList(
	PDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeZP_CSI_RS_ResourceSetId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToAddModList(
	PDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeZP_CSI_RS_ResourceSet(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToReleaseList(
	PDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeZP_CSI_RS_ResourceSetId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDSCH_Config_release_3(
	PDSCH_Config_release_3_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePDSCH_Config_p_ZP_CSI_RS_ResourceSet(
	PDSCH_Config_p_ZP_CSI_RS_ResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PDSCH_CONFIG_P_ZP_CSI_RS_RESOURCESET_RELEASE:
		DecodePDSCH_Config_release_3(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDSCH_CONFIG_P_ZP_CSI_RS_RESOURCESET_SETUP:
		DecodeZP_CSI_RS_ResourceSet(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDSCH_Config(
	PDSCH_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->dataScramblingIdentityPDSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dmrs_DownlinkForPDSCH_MappingTypeA_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dmrs_DownlinkForPDSCH_MappingTypeB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tci_StatesToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tci_StatesToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->vrb_ToPRB_Interleaver_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_TimeDomainAllocationList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_AggregationFactor_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rateMatchPatternToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rateMatchPatternToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rateMatchPatternGroup1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rateMatchPatternGroup2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mcs_Table_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNrofCodeWordsScheduledByDCI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->zp_CSI_RS_ResourceToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->zp_CSI_RS_ResourceToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sp_ZP_CSI_RS_ResourceSetsToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sp_ZP_CSI_RS_ResourceSetsToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->p_ZP_CSI_RS_ResourceSet_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->dataScramblingIdentityPDSCH_exist == TRUE)
	{
		o_decoded_field->dataScramblingIdentityPDSCH = Get_bits(buff, 10, bits_iter);
	}

	if(o_decoded_field->dmrs_DownlinkForPDSCH_MappingTypeA_exist == TRUE)
	{
		DecodePDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA(&o_decoded_field->dmrs_DownlinkForPDSCH_MappingTypeA, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dmrs_DownlinkForPDSCH_MappingTypeB_exist == TRUE)
	{
		DecodePDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB(&o_decoded_field->dmrs_DownlinkForPDSCH_MappingTypeB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tci_StatesToAddModList_exist == TRUE)
	{
		DecodePDSCH_Config_tci_StatesToAddModList(&o_decoded_field->tci_StatesToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tci_StatesToReleaseList_exist == TRUE)
	{
		DecodePDSCH_Config_tci_StatesToReleaseList(&o_decoded_field->tci_StatesToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->vrb_ToPRB_Interleaver_exist == TRUE)
	{
		DecodePDSCH_Config_vrb_ToPRB_Interleaver(&o_decoded_field->vrb_ToPRB_Interleaver, buff, bits_iter, asn_error);
	}

	DecodePDSCH_Config_resourceAllocation(&o_decoded_field->resourceAllocation, buff, bits_iter, asn_error);
	if(o_decoded_field->pdsch_TimeDomainAllocationList_exist == TRUE)
	{
		DecodePDSCH_Config_pdsch_TimeDomainAllocationList(&o_decoded_field->pdsch_TimeDomainAllocationList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_AggregationFactor_exist == TRUE)
	{
		DecodePDSCH_Config_pdsch_AggregationFactor(&o_decoded_field->pdsch_AggregationFactor, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rateMatchPatternToAddModList_exist == TRUE)
	{
		DecodePDSCH_Config_rateMatchPatternToAddModList(&o_decoded_field->rateMatchPatternToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rateMatchPatternToReleaseList_exist == TRUE)
	{
		DecodePDSCH_Config_rateMatchPatternToReleaseList(&o_decoded_field->rateMatchPatternToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rateMatchPatternGroup1_exist == TRUE)
	{
		DecodeRateMatchPatternGroup(&o_decoded_field->rateMatchPatternGroup1, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rateMatchPatternGroup2_exist == TRUE)
	{
		DecodeRateMatchPatternGroup(&o_decoded_field->rateMatchPatternGroup2, buff, bits_iter, asn_error);
	}

	DecodePDSCH_Config_rbg_Size(&o_decoded_field->rbg_Size, buff, bits_iter, asn_error);
	if(o_decoded_field->mcs_Table_exist == TRUE)
	{
		DecodePDSCH_Config_mcs_Table(&o_decoded_field->mcs_Table, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxNrofCodeWordsScheduledByDCI_exist == TRUE)
	{
		DecodePDSCH_Config_maxNrofCodeWordsScheduledByDCI(&o_decoded_field->maxNrofCodeWordsScheduledByDCI, buff, bits_iter, asn_error);
	}

	DecodePDSCH_Config_prb_BundlingType(&o_decoded_field->prb_BundlingType, buff, bits_iter, asn_error);
	if(o_decoded_field->zp_CSI_RS_ResourceToAddModList_exist == TRUE)
	{
		DecodePDSCH_Config_zp_CSI_RS_ResourceToAddModList(&o_decoded_field->zp_CSI_RS_ResourceToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->zp_CSI_RS_ResourceToReleaseList_exist == TRUE)
	{
		DecodePDSCH_Config_zp_CSI_RS_ResourceToReleaseList(&o_decoded_field->zp_CSI_RS_ResourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_exist == TRUE)
	{
		DecodePDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList(&o_decoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_exist == TRUE)
	{
		DecodePDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList(&o_decoded_field->aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sp_ZP_CSI_RS_ResourceSetsToAddModList_exist == TRUE)
	{
		DecodePDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToAddModList(&o_decoded_field->sp_ZP_CSI_RS_ResourceSetsToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sp_ZP_CSI_RS_ResourceSetsToReleaseList_exist == TRUE)
	{
		DecodePDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToReleaseList(&o_decoded_field->sp_ZP_CSI_RS_ResourceSetsToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->p_ZP_CSI_RS_ResourceSet_exist == TRUE)
	{
		DecodePDSCH_Config_p_ZP_CSI_RS_ResourceSet(&o_decoded_field->p_ZP_CSI_RS_ResourceSet, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

