/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdcp_config.c - codec the message of PDCP-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pdcp_config.h"


void EncodePDCP_Config_discardTimer(
	PDCP_Config_discardTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodePDCP_Config_pdcp_SN_SizeUL(
	PDCP_Config_pdcp_SN_SizeUL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePDCP_Config_pdcp_SN_SizeDL(
	PDCP_Config_pdcp_SN_SizeDL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePDCP_Config_notUsed(
	PDCP_Config_notUsed_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePDCP_Config_profiles(
	PDCP_Config_profiles_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->profile0x0001, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0002, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0003, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0004, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0006, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0101, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0102, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0103, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0104, 1, bits_iter);

}

void EncodePDCP_Config_drb_ContinueROHC(
	PDCP_Config_drb_ContinueROHC_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePDCP_Config_rohc(
	PDCP_Config_rohc_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->maxCID_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->drb_ContinueROHC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxCID_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxCID - 1, 14, bits_iter);
	}

	EncodePDCP_Config_profiles(&i_encoded_field->profiles, buff, bits_iter, asn_error);

	if(i_encoded_field->drb_ContinueROHC_exist == TRUE)
	{
		EncodePDCP_Config_drb_ContinueROHC(i_encoded_field->drb_ContinueROHC, buff, bits_iter, asn_error);
	}

}

void EncodePDCP_Config_profiles_1(
	PDCP_Config_profiles_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->profile0x0006, 1, bits_iter);

}

void EncodePDCP_Config_drb_ContinueROHC_1(
	PDCP_Config_drb_ContinueROHC_1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePDCP_Config_uplinkOnlyROHC(
	PDCP_Config_uplinkOnlyROHC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->maxCID_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->drb_ContinueROHC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxCID_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxCID - 1, 14, bits_iter);
	}

	EncodePDCP_Config_profiles_1(&i_encoded_field->profiles, buff, bits_iter, asn_error);

	if(i_encoded_field->drb_ContinueROHC_exist == TRUE)
	{
		EncodePDCP_Config_drb_ContinueROHC_1(i_encoded_field->drb_ContinueROHC, buff, bits_iter, asn_error);
	}

}

void EncodePDCP_Config_headerCompression(
	PDCP_Config_headerCompression_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root.*/
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case PDCP_CONFIG_HEADERCOMPRESSION_NOTUSED:
		EncodePDCP_Config_notUsed(&i_encoded_field->a.notUsed, buff, bits_iter, asn_error);
		break;

	case PDCP_CONFIG_HEADERCOMPRESSION_ROHC:
		EncodePDCP_Config_rohc(&i_encoded_field->a.rohc, buff, bits_iter, asn_error);
		break;

	case PDCP_CONFIG_HEADERCOMPRESSION_UPLINKONLYROHC:
		EncodePDCP_Config_uplinkOnlyROHC(&i_encoded_field->a.uplinkOnlyROHC, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePDCP_Config_integrityProtection(
	PDCP_Config_integrityProtection_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePDCP_Config_statusReportRequired(
	PDCP_Config_statusReportRequired_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePDCP_Config_outOfOrderDelivery(
	PDCP_Config_outOfOrderDelivery_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePDCP_Config_drb(
	PDCP_Config_drb_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->discardTimer_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcp_SN_SizeUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcp_SN_SizeDL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->integrityProtection_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->statusReportRequired_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->outOfOrderDelivery_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->discardTimer_exist == TRUE)
	{
		EncodePDCP_Config_discardTimer(i_encoded_field->discardTimer, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdcp_SN_SizeUL_exist == TRUE)
	{
		EncodePDCP_Config_pdcp_SN_SizeUL(i_encoded_field->pdcp_SN_SizeUL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdcp_SN_SizeDL_exist == TRUE)
	{
		EncodePDCP_Config_pdcp_SN_SizeDL(i_encoded_field->pdcp_SN_SizeDL, buff, bits_iter, asn_error);
	}

	EncodePDCP_Config_headerCompression(&i_encoded_field->headerCompression, buff, bits_iter, asn_error);

	if(i_encoded_field->integrityProtection_exist == TRUE)
	{
		EncodePDCP_Config_integrityProtection(i_encoded_field->integrityProtection, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->statusReportRequired_exist == TRUE)
	{
		EncodePDCP_Config_statusReportRequired(i_encoded_field->statusReportRequired, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->outOfOrderDelivery_exist == TRUE)
	{
		EncodePDCP_Config_outOfOrderDelivery(i_encoded_field->outOfOrderDelivery, buff, bits_iter, asn_error);
	}

}

void EncodePDCP_Config_primaryPath(
	PDCP_Config_primaryPath_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->cellGroup_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->logicalChannel_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cellGroup_exist == TRUE)
	{
		EncodeCellGroupId(&i_encoded_field->cellGroup, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->logicalChannel_exist == TRUE)
	{
		EncodeLogicalChannelIdentity(&i_encoded_field->logicalChannel, buff, bits_iter, asn_error);
	}

}

void EncodePDCP_Config_moreThanOneRLC(
	PDCP_Config_moreThanOneRLC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->ul_DataSplitThreshold_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcp_Duplication_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodePDCP_Config_primaryPath(&i_encoded_field->primaryPath, buff, bits_iter, asn_error);

	if(i_encoded_field->ul_DataSplitThreshold_exist == TRUE)
	{
		EncodeUL_DataSplitThreshold(i_encoded_field->ul_DataSplitThreshold, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdcp_Duplication_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->pdcp_Duplication, 1, bits_iter);
	}

}

void EncodePDCP_Config_t_Reordering(
	PDCP_Config_t_Reordering_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 6, bits_iter);
}

void EncodePDCP_Config(
	PDCP_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->drb_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->moreThanOneRLC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->t_Reordering_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->drb_exist == TRUE)
	{
		EncodePDCP_Config_drb(&i_encoded_field->drb, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->moreThanOneRLC_exist == TRUE)
	{
		EncodePDCP_Config_moreThanOneRLC(&i_encoded_field->moreThanOneRLC, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->t_Reordering_exist == TRUE)
	{
		EncodePDCP_Config_t_Reordering(i_encoded_field->t_Reordering, buff, bits_iter, asn_error);
	}

}

void DecodePDCP_Config_discardTimer(
	PDCP_Config_discardTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodePDCP_Config_pdcp_SN_SizeUL(
	PDCP_Config_pdcp_SN_SizeUL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePDCP_Config_pdcp_SN_SizeDL(
	PDCP_Config_pdcp_SN_SizeDL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePDCP_Config_notUsed(
	PDCP_Config_notUsed_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePDCP_Config_profiles(
	PDCP_Config_profiles_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->profile0x0001 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0002 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0003 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0004 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0006 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0101 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0102 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0103 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0104 = Get_bits(buff, 1, bits_iter);
}

void DecodePDCP_Config_drb_ContinueROHC(
	PDCP_Config_drb_ContinueROHC_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePDCP_Config_rohc(
	PDCP_Config_rohc_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->maxCID_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->drb_ContinueROHC_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->maxCID_exist == TRUE)
	{
		o_decoded_field->maxCID = Get_bits(buff, 14, bits_iter) + 1;
	}

	DecodePDCP_Config_profiles(&o_decoded_field->profiles, buff, bits_iter, asn_error);
	if(o_decoded_field->drb_ContinueROHC_exist == TRUE)
	{
		DecodePDCP_Config_drb_ContinueROHC(&o_decoded_field->drb_ContinueROHC, buff, bits_iter, asn_error);
	}

}

void DecodePDCP_Config_profiles_1(
	PDCP_Config_profiles_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->profile0x0006 = Get_bits(buff, 1, bits_iter);
}

void DecodePDCP_Config_drb_ContinueROHC_1(
	PDCP_Config_drb_ContinueROHC_1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePDCP_Config_uplinkOnlyROHC(
	PDCP_Config_uplinkOnlyROHC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->maxCID_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->drb_ContinueROHC_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->maxCID_exist == TRUE)
	{
		o_decoded_field->maxCID = Get_bits(buff, 14, bits_iter) + 1;
	}

	DecodePDCP_Config_profiles_1(&o_decoded_field->profiles, buff, bits_iter, asn_error);
	if(o_decoded_field->drb_ContinueROHC_exist == TRUE)
	{
		DecodePDCP_Config_drb_ContinueROHC_1(&o_decoded_field->drb_ContinueROHC, buff, bits_iter, asn_error);
	}

}

void DecodePDCP_Config_headerCompression(
	PDCP_Config_headerCompression_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;
	uint8    ext_flag = 0;
	uint8    flag = 0;

	ext_flag = Get_bits(buff, 1, bits_iter);
	if(ext_flag == 0)
	{
		index = Get_bits(buff, 2, bits_iter);
	}
	else
	{
		//need to handle this asn error.
	}

	o_decoded_field->type = index;
	switch (index)
	{
	case PDCP_CONFIG_HEADERCOMPRESSION_NOTUSED:
		DecodePDCP_Config_notUsed(&o_decoded_field->a.notUsed, buff, bits_iter, asn_error);
		break;

	case PDCP_CONFIG_HEADERCOMPRESSION_ROHC:
		DecodePDCP_Config_rohc(&o_decoded_field->a.rohc, buff, bits_iter, asn_error);
		break;

	case PDCP_CONFIG_HEADERCOMPRESSION_UPLINKONLYROHC:
		DecodePDCP_Config_uplinkOnlyROHC(&o_decoded_field->a.uplinkOnlyROHC, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePDCP_Config_integrityProtection(
	PDCP_Config_integrityProtection_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePDCP_Config_statusReportRequired(
	PDCP_Config_statusReportRequired_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePDCP_Config_outOfOrderDelivery(
	PDCP_Config_outOfOrderDelivery_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePDCP_Config_drb(
	PDCP_Config_drb_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->discardTimer_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdcp_SN_SizeUL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdcp_SN_SizeDL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->integrityProtection_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->statusReportRequired_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->outOfOrderDelivery_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->discardTimer_exist == TRUE)
	{
		DecodePDCP_Config_discardTimer(&o_decoded_field->discardTimer, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdcp_SN_SizeUL_exist == TRUE)
	{
		DecodePDCP_Config_pdcp_SN_SizeUL(&o_decoded_field->pdcp_SN_SizeUL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdcp_SN_SizeDL_exist == TRUE)
	{
		DecodePDCP_Config_pdcp_SN_SizeDL(&o_decoded_field->pdcp_SN_SizeDL, buff, bits_iter, asn_error);
	}

	DecodePDCP_Config_headerCompression(&o_decoded_field->headerCompression, buff, bits_iter, asn_error);
	if(o_decoded_field->integrityProtection_exist == TRUE)
	{
		DecodePDCP_Config_integrityProtection(&o_decoded_field->integrityProtection, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->statusReportRequired_exist == TRUE)
	{
		DecodePDCP_Config_statusReportRequired(&o_decoded_field->statusReportRequired, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->outOfOrderDelivery_exist == TRUE)
	{
		DecodePDCP_Config_outOfOrderDelivery(&o_decoded_field->outOfOrderDelivery, buff, bits_iter, asn_error);
	}

}

void DecodePDCP_Config_primaryPath(
	PDCP_Config_primaryPath_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->cellGroup_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->logicalChannel_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->cellGroup_exist == TRUE)
	{
		DecodeCellGroupId(&o_decoded_field->cellGroup, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->logicalChannel_exist == TRUE)
	{
		DecodeLogicalChannelIdentity(&o_decoded_field->logicalChannel, buff, bits_iter, asn_error);
	}

}

void DecodePDCP_Config_moreThanOneRLC(
	PDCP_Config_moreThanOneRLC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->ul_DataSplitThreshold_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdcp_Duplication_exist = Get_bits(buff, 1, bits_iter);
	DecodePDCP_Config_primaryPath(&o_decoded_field->primaryPath, buff, bits_iter, asn_error);
	if(o_decoded_field->ul_DataSplitThreshold_exist == TRUE)
	{
		DecodeUL_DataSplitThreshold(&o_decoded_field->ul_DataSplitThreshold, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdcp_Duplication_exist == TRUE)
	{
		o_decoded_field->pdcp_Duplication = Get_bits(buff, 1, bits_iter);
	}

}

void DecodePDCP_Config_t_Reordering(
	PDCP_Config_t_Reordering_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 6, bits_iter);
}

void DecodePDCP_Config(
	PDCP_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->drb_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->moreThanOneRLC_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->t_Reordering_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->drb_exist == TRUE)
	{
		DecodePDCP_Config_drb(&o_decoded_field->drb, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->moreThanOneRLC_exist == TRUE)
	{
		DecodePDCP_Config_moreThanOneRLC(&o_decoded_field->moreThanOneRLC, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->t_Reordering_exist == TRUE)
	{
		DecodePDCP_Config_t_Reordering(&o_decoded_field->t_Reordering, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

