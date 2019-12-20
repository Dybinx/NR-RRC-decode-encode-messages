/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdcch_config.c - codec the message of PDCCH-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pdcch_config.h"


void EncodePDCCH_Config_controlResourceSetToAddModList(
	PDCCH_Config_controlResourceSetToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeControlResourceSet(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDCCH_Config_controlResourceSetToReleaseList(
	PDCCH_Config_controlResourceSetToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeControlResourceSetId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDCCH_Config_searchSpacesToAddModList(
	PDCCH_Config_searchSpacesToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSearchSpace(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDCCH_Config_searchSpacesToReleaseList(
	PDCCH_Config_searchSpacesToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSearchSpaceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDCCH_Config_release(
	PDCCH_Config_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePDCCH_Config_downlinkPreemption(
	PDCCH_Config_downlinkPreemption_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDCCH_CONFIG_DOWNLINKPREEMPTION_RELEASE:
		EncodePDCCH_Config_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDCCH_CONFIG_DOWNLINKPREEMPTION_SETUP:
		EncodeDownlinkPreemption(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDCCH_Config_release_1(
	PDCCH_Config_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePDCCH_Config_tpc_PUSCH(
	PDCCH_Config_tpc_PUSCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDCCH_CONFIG_TPC_PUSCH_RELEASE:
		EncodePDCCH_Config_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDCCH_CONFIG_TPC_PUSCH_SETUP:
		EncodePUSCH_TPC_CommandConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDCCH_Config_release_2(
	PDCCH_Config_release_2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePDCCH_Config_tpc_PUCCH(
	PDCCH_Config_tpc_PUCCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDCCH_CONFIG_TPC_PUCCH_RELEASE:
		EncodePDCCH_Config_release_2(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDCCH_CONFIG_TPC_PUCCH_SETUP:
		EncodePUCCH_TPC_CommandConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDCCH_Config_release_3(
	PDCCH_Config_release_3_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePDCCH_Config_tpc_SRS(
	PDCCH_Config_tpc_SRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDCCH_CONFIG_TPC_SRS_RELEASE:
		EncodePDCCH_Config_release_3(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDCCH_CONFIG_TPC_SRS_SETUP:
		EncodeSRS_TPC_CommandConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDCCH_Config(
	PDCCH_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->controlResourceSetToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->controlResourceSetToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->searchSpacesToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->searchSpacesToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->downlinkPreemption_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_PUCCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_SRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->controlResourceSetToAddModList_exist == TRUE)
	{
		EncodePDCCH_Config_controlResourceSetToAddModList(&i_encoded_field->controlResourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->controlResourceSetToReleaseList_exist == TRUE)
	{
		EncodePDCCH_Config_controlResourceSetToReleaseList(&i_encoded_field->controlResourceSetToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->searchSpacesToAddModList_exist == TRUE)
	{
		EncodePDCCH_Config_searchSpacesToAddModList(&i_encoded_field->searchSpacesToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->searchSpacesToReleaseList_exist == TRUE)
	{
		EncodePDCCH_Config_searchSpacesToReleaseList(&i_encoded_field->searchSpacesToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->downlinkPreemption_exist == TRUE)
	{
		EncodePDCCH_Config_downlinkPreemption(&i_encoded_field->downlinkPreemption, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tpc_PUSCH_exist == TRUE)
	{
		EncodePDCCH_Config_tpc_PUSCH(&i_encoded_field->tpc_PUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tpc_PUCCH_exist == TRUE)
	{
		EncodePDCCH_Config_tpc_PUCCH(&i_encoded_field->tpc_PUCCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tpc_SRS_exist == TRUE)
	{
		EncodePDCCH_Config_tpc_SRS(&i_encoded_field->tpc_SRS, buff, bits_iter, asn_error);
	}

}

void DecodePDCCH_Config_controlResourceSetToAddModList(
	PDCCH_Config_controlResourceSetToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeControlResourceSet(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDCCH_Config_controlResourceSetToReleaseList(
	PDCCH_Config_controlResourceSetToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeControlResourceSetId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDCCH_Config_searchSpacesToAddModList(
	PDCCH_Config_searchSpacesToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSearchSpace(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDCCH_Config_searchSpacesToReleaseList(
	PDCCH_Config_searchSpacesToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSearchSpaceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDCCH_Config_release(
	PDCCH_Config_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePDCCH_Config_downlinkPreemption(
	PDCCH_Config_downlinkPreemption_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PDCCH_CONFIG_DOWNLINKPREEMPTION_RELEASE:
		DecodePDCCH_Config_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDCCH_CONFIG_DOWNLINKPREEMPTION_SETUP:
		DecodeDownlinkPreemption(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDCCH_Config_release_1(
	PDCCH_Config_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePDCCH_Config_tpc_PUSCH(
	PDCCH_Config_tpc_PUSCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PDCCH_CONFIG_TPC_PUSCH_RELEASE:
		DecodePDCCH_Config_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDCCH_CONFIG_TPC_PUSCH_SETUP:
		DecodePUSCH_TPC_CommandConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDCCH_Config_release_2(
	PDCCH_Config_release_2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePDCCH_Config_tpc_PUCCH(
	PDCCH_Config_tpc_PUCCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PDCCH_CONFIG_TPC_PUCCH_RELEASE:
		DecodePDCCH_Config_release_2(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDCCH_CONFIG_TPC_PUCCH_SETUP:
		DecodePUCCH_TPC_CommandConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDCCH_Config_release_3(
	PDCCH_Config_release_3_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePDCCH_Config_tpc_SRS(
	PDCCH_Config_tpc_SRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PDCCH_CONFIG_TPC_SRS_RELEASE:
		DecodePDCCH_Config_release_3(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PDCCH_CONFIG_TPC_SRS_SETUP:
		DecodeSRS_TPC_CommandConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDCCH_Config(
	PDCCH_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->controlResourceSetToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->controlResourceSetToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->searchSpacesToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->searchSpacesToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->downlinkPreemption_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tpc_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tpc_PUCCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tpc_SRS_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->controlResourceSetToAddModList_exist == TRUE)
	{
		DecodePDCCH_Config_controlResourceSetToAddModList(&o_decoded_field->controlResourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->controlResourceSetToReleaseList_exist == TRUE)
	{
		DecodePDCCH_Config_controlResourceSetToReleaseList(&o_decoded_field->controlResourceSetToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->searchSpacesToAddModList_exist == TRUE)
	{
		DecodePDCCH_Config_searchSpacesToAddModList(&o_decoded_field->searchSpacesToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->searchSpacesToReleaseList_exist == TRUE)
	{
		DecodePDCCH_Config_searchSpacesToReleaseList(&o_decoded_field->searchSpacesToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->downlinkPreemption_exist == TRUE)
	{
		DecodePDCCH_Config_downlinkPreemption(&o_decoded_field->downlinkPreemption, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tpc_PUSCH_exist == TRUE)
	{
		DecodePDCCH_Config_tpc_PUSCH(&o_decoded_field->tpc_PUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tpc_PUCCH_exist == TRUE)
	{
		DecodePDCCH_Config_tpc_PUCCH(&o_decoded_field->tpc_PUCCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tpc_SRS_exist == TRUE)
	{
		DecodePDCCH_Config_tpc_SRS(&o_decoded_field->tpc_SRS, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

