/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * physical_cell_group_config.c - codec the message of PhysicalCellGroupConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "physical_cell_group_config.h"


void EncodePhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUCCH(
	PhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUCCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUSCH(
	PhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhysicalCellGroupConfig_pdsch_HARQ_ACK_Codebook(
	PhysicalCellGroupConfig_pdsch_HARQ_ACK_Codebook_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePhysicalCellGroupConfig_release(
	PhysicalCellGroupConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePhysicalCellGroupConfig_cs_RNTI(
	PhysicalCellGroupConfig_cs_RNTI_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PHYSICALCELLGROUPCONFIG_CS_RNTI_RELEASE:
		EncodePhysicalCellGroupConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PHYSICALCELLGROUPCONFIG_CS_RNTI_SETUP:
		EncodeRNTI_Value(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePhysicalCellGroupConfig(
	PhysicalCellGroupConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->harq_ACK_SpatialBundlingPUCCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->harq_ACK_SpatialBundlingPUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->p_NR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_SRS_RNTI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_PUCCH_RNTI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_PUSCH_RNTI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sp_CSI_RNTI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cs_RNTI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->harq_ACK_SpatialBundlingPUCCH_exist == TRUE)
	{
		EncodePhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUCCH(i_encoded_field->harq_ACK_SpatialBundlingPUCCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->harq_ACK_SpatialBundlingPUSCH_exist == TRUE)
	{
		EncodePhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUSCH(i_encoded_field->harq_ACK_SpatialBundlingPUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->p_NR_exist == TRUE)
	{
		EncodeP_Max(&i_encoded_field->p_NR, buff, bits_iter, asn_error);
	}

	EncodePhysicalCellGroupConfig_pdsch_HARQ_ACK_Codebook(i_encoded_field->pdsch_HARQ_ACK_Codebook, buff, bits_iter, asn_error);

	if(i_encoded_field->tpc_SRS_RNTI_exist == TRUE)
	{
		EncodeRNTI_Value(&i_encoded_field->tpc_SRS_RNTI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tpc_PUCCH_RNTI_exist == TRUE)
	{
		EncodeRNTI_Value(&i_encoded_field->tpc_PUCCH_RNTI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tpc_PUSCH_RNTI_exist == TRUE)
	{
		EncodeRNTI_Value(&i_encoded_field->tpc_PUSCH_RNTI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sp_CSI_RNTI_exist == TRUE)
	{
		EncodeRNTI_Value(&i_encoded_field->sp_CSI_RNTI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->cs_RNTI_exist == TRUE)
	{
		EncodePhysicalCellGroupConfig_cs_RNTI(&i_encoded_field->cs_RNTI, buff, bits_iter, asn_error);
	}

}

void DecodePhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUCCH(
	PhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUCCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUSCH(
	PhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhysicalCellGroupConfig_pdsch_HARQ_ACK_Codebook(
	PhysicalCellGroupConfig_pdsch_HARQ_ACK_Codebook_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePhysicalCellGroupConfig_release(
	PhysicalCellGroupConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePhysicalCellGroupConfig_cs_RNTI(
	PhysicalCellGroupConfig_cs_RNTI_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PHYSICALCELLGROUPCONFIG_CS_RNTI_RELEASE:
		DecodePhysicalCellGroupConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PHYSICALCELLGROUPCONFIG_CS_RNTI_SETUP:
		DecodeRNTI_Value(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePhysicalCellGroupConfig(
	PhysicalCellGroupConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->harq_ACK_SpatialBundlingPUCCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->harq_ACK_SpatialBundlingPUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->p_NR_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tpc_SRS_RNTI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tpc_PUCCH_RNTI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tpc_PUSCH_RNTI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sp_CSI_RNTI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->cs_RNTI_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->harq_ACK_SpatialBundlingPUCCH_exist == TRUE)
	{
		DecodePhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUCCH(&o_decoded_field->harq_ACK_SpatialBundlingPUCCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->harq_ACK_SpatialBundlingPUSCH_exist == TRUE)
	{
		DecodePhysicalCellGroupConfig_harq_ACK_SpatialBundlingPUSCH(&o_decoded_field->harq_ACK_SpatialBundlingPUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->p_NR_exist == TRUE)
	{
		DecodeP_Max(&o_decoded_field->p_NR, buff, bits_iter, asn_error);
	}

	DecodePhysicalCellGroupConfig_pdsch_HARQ_ACK_Codebook(&o_decoded_field->pdsch_HARQ_ACK_Codebook, buff, bits_iter, asn_error);
	if(o_decoded_field->tpc_SRS_RNTI_exist == TRUE)
	{
		DecodeRNTI_Value(&o_decoded_field->tpc_SRS_RNTI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tpc_PUCCH_RNTI_exist == TRUE)
	{
		DecodeRNTI_Value(&o_decoded_field->tpc_PUCCH_RNTI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tpc_PUSCH_RNTI_exist == TRUE)
	{
		DecodeRNTI_Value(&o_decoded_field->tpc_PUSCH_RNTI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sp_CSI_RNTI_exist == TRUE)
	{
		DecodeRNTI_Value(&o_decoded_field->sp_CSI_RNTI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->cs_RNTI_exist == TRUE)
	{
		DecodePhysicalCellGroupConfig_cs_RNTI(&o_decoded_field->cs_RNTI, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

