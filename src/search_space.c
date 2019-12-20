/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * search_space.c - codec the message of SearchSpace
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "search_space.h"


void EncodeSearchSpace_sl1(
	SearchSpace_sl1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeSearchSpace_monitoringSlotPeriodicityAndOffset(
	SearchSpace_monitoringSlotPeriodicityAndOffset_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 4, bits_iter);
	switch (i_encoded_field->type)
	{
	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL1:
		EncodeSearchSpace_sl1(&i_encoded_field->a.sl1, buff, bits_iter, asn_error);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL2:
		PutBits(buff, i_encoded_field->a.sl2, 1, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL4:
		PutBits(buff, i_encoded_field->a.sl4, 2, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL5:
		PutBits(buff, i_encoded_field->a.sl5, 3, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL8:
		PutBits(buff, i_encoded_field->a.sl8, 3, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL10:
		PutBits(buff, i_encoded_field->a.sl10, 4, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL16:
		PutBits(buff, i_encoded_field->a.sl16, 4, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL20:
		PutBits(buff, i_encoded_field->a.sl20, 5, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL40:
		PutBits(buff, i_encoded_field->a.sl40, 6, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL80:
		PutBits(buff, i_encoded_field->a.sl80, 7, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL160:
		PutBits(buff, i_encoded_field->a.sl160, 8, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL320:
		PutBits(buff, i_encoded_field->a.sl320, 9, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL640:
		PutBits(buff, i_encoded_field->a.sl640, 10, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL1280:
		PutBits(buff, i_encoded_field->a.sl1280, 11, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL2560:
		PutBits(buff, i_encoded_field->a.sl2560, 12, bits_iter);
		break;

	default:
		break;	}
}

void EncodeSearchSpace_monitoringSymbolsWithinSlot(
	SearchSpace_monitoringSymbolsWithinSlot_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeSearchSpace_aggregationLevel1(
	SearchSpace_aggregationLevel1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSearchSpace_aggregationLevel2(
	SearchSpace_aggregationLevel2_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSearchSpace_aggregationLevel4(
	SearchSpace_aggregationLevel4_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSearchSpace_aggregationLevel8(
	SearchSpace_aggregationLevel8_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSearchSpace_aggregationLevel16(
	SearchSpace_aggregationLevel16_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSearchSpace_nrofCandidates(
	SearchSpace_nrofCandidates_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeSearchSpace_aggregationLevel1(i_encoded_field->aggregationLevel1, buff, bits_iter, asn_error);

	EncodeSearchSpace_aggregationLevel2(i_encoded_field->aggregationLevel2, buff, bits_iter, asn_error);

	EncodeSearchSpace_aggregationLevel4(i_encoded_field->aggregationLevel4, buff, bits_iter, asn_error);

	EncodeSearchSpace_aggregationLevel8(i_encoded_field->aggregationLevel8, buff, bits_iter, asn_error);

	EncodeSearchSpace_aggregationLevel16(i_encoded_field->aggregationLevel16, buff, bits_iter, asn_error);

}

void EncodeSearchSpace_dci_Format0_0_AndFormat1_0(
	SearchSpace_dci_Format0_0_AndFormat1_0_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
}

void EncodeSearchSpace_aggregationLevel1_1(
	SearchSpace_aggregationLevel1_1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSearchSpace_aggregationLevel2_1(
	SearchSpace_aggregationLevel2_1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSearchSpace_aggregationLevel4_1(
	SearchSpace_aggregationLevel4_1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSearchSpace_aggregationLevel8_1(
	SearchSpace_aggregationLevel8_1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSearchSpace_aggregationLevel16_1(
	SearchSpace_aggregationLevel16_1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSearchSpace_nrofCandidates_SFI(
	SearchSpace_nrofCandidates_SFI_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->aggregationLevel1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->aggregationLevel2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->aggregationLevel4_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->aggregationLevel8_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->aggregationLevel16_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->aggregationLevel1_exist == TRUE)
	{
		EncodeSearchSpace_aggregationLevel1_1(i_encoded_field->aggregationLevel1, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->aggregationLevel2_exist == TRUE)
	{
		EncodeSearchSpace_aggregationLevel2_1(i_encoded_field->aggregationLevel2, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->aggregationLevel4_exist == TRUE)
	{
		EncodeSearchSpace_aggregationLevel4_1(i_encoded_field->aggregationLevel4, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->aggregationLevel8_exist == TRUE)
	{
		EncodeSearchSpace_aggregationLevel8_1(i_encoded_field->aggregationLevel8, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->aggregationLevel16_exist == TRUE)
	{
		EncodeSearchSpace_aggregationLevel16_1(i_encoded_field->aggregationLevel16, buff, bits_iter, asn_error);
	}

}

void EncodeSearchSpace_dci_Format2_0(
	SearchSpace_dci_Format2_0_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeSearchSpace_nrofCandidates_SFI(&i_encoded_field->nrofCandidates_SFI, buff, bits_iter, asn_error);

}

void EncodeSearchSpace_dci_Format2_1(
	SearchSpace_dci_Format2_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
}

void EncodeSearchSpace_dci_Format2_2(
	SearchSpace_dci_Format2_2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
}

void EncodeSearchSpace_monitoringPeriodicity(
	SearchSpace_monitoringPeriodicity_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSearchSpace_nrofPDCCH_Candidates(
	SearchSpace_nrofPDCCH_Candidates_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSearchSpace_dci_Format2_3(
	SearchSpace_dci_Format2_3_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->monitoringPeriodicity_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->monitoringPeriodicity_exist == TRUE)
	{
		EncodeSearchSpace_monitoringPeriodicity(i_encoded_field->monitoringPeriodicity, buff, bits_iter, asn_error);
	}

	EncodeSearchSpace_nrofPDCCH_Candidates(i_encoded_field->nrofPDCCH_Candidates, buff, bits_iter, asn_error);

}

void EncodeSearchSpace_common(
	SearchSpace_common_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->dci_Format0_0_AndFormat1_0_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dci_Format2_0_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dci_Format2_1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dci_Format2_2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dci_Format2_3_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dci_Format0_0_AndFormat1_0_exist == TRUE)
	{
		EncodeSearchSpace_dci_Format0_0_AndFormat1_0(&i_encoded_field->dci_Format0_0_AndFormat1_0, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dci_Format2_0_exist == TRUE)
	{
		EncodeSearchSpace_dci_Format2_0(&i_encoded_field->dci_Format2_0, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dci_Format2_1_exist == TRUE)
	{
		EncodeSearchSpace_dci_Format2_1(&i_encoded_field->dci_Format2_1, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dci_Format2_2_exist == TRUE)
	{
		EncodeSearchSpace_dci_Format2_2(&i_encoded_field->dci_Format2_2, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dci_Format2_3_exist == TRUE)
	{
		EncodeSearchSpace_dci_Format2_3(&i_encoded_field->dci_Format2_3, buff, bits_iter, asn_error);
	}

}

void EncodeSearchSpace_dci_Formats(
	SearchSpace_dci_Formats_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSearchSpace_ue_Specific(
	SearchSpace_ue_Specific_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeSearchSpace_dci_Formats(i_encoded_field->dci_Formats, buff, bits_iter, asn_error);

}

void EncodeSearchSpace_searchSpaceType(
	SearchSpace_searchSpaceType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case SEARCHSPACE_SEARCHSPACETYPE_COMMON:
		EncodeSearchSpace_common(&i_encoded_field->a.common, buff, bits_iter, asn_error);
		break;

	case SEARCHSPACE_SEARCHSPACETYPE_UE_SPECIFIC:
		EncodeSearchSpace_ue_Specific(&i_encoded_field->a.ue_Specific, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeSearchSpace(
	SearchSpace_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->controlResourceSetId_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->monitoringSlotPeriodicityAndOffset_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->duration_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->monitoringSymbolsWithinSlot_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nrofCandidates_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->searchSpaceType_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSearchSpaceId(&i_encoded_field->searchSpaceId, buff, bits_iter, asn_error);

	if(i_encoded_field->controlResourceSetId_exist == TRUE)
	{
		EncodeControlResourceSetId(&i_encoded_field->controlResourceSetId, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->monitoringSlotPeriodicityAndOffset_exist == TRUE)
	{
		EncodeSearchSpace_monitoringSlotPeriodicityAndOffset(&i_encoded_field->monitoringSlotPeriodicityAndOffset, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->duration_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->duration - 2, 12, bits_iter);
	}

	if(i_encoded_field->monitoringSymbolsWithinSlot_exist == TRUE)
	{
		EncodeSearchSpace_monitoringSymbolsWithinSlot(&i_encoded_field->monitoringSymbolsWithinSlot, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nrofCandidates_exist == TRUE)
	{
		EncodeSearchSpace_nrofCandidates(&i_encoded_field->nrofCandidates, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->searchSpaceType_exist == TRUE)
	{
		EncodeSearchSpace_searchSpaceType(&i_encoded_field->searchSpaceType, buff, bits_iter, asn_error);
	}

}

void DecodeSearchSpace_sl1(
	SearchSpace_sl1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeSearchSpace_monitoringSlotPeriodicityAndOffset(
	SearchSpace_monitoringSlotPeriodicityAndOffset_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 4, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL1:
		DecodeSearchSpace_sl1(&o_decoded_field->a.sl1, buff, bits_iter, asn_error);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL2:
		o_decoded_field->a.sl2 = Get_bits(buff, 1, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL4:
		o_decoded_field->a.sl4 = Get_bits(buff, 2, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL5:
		o_decoded_field->a.sl5 = Get_bits(buff, 3, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL8:
		o_decoded_field->a.sl8 = Get_bits(buff, 3, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL10:
		o_decoded_field->a.sl10 = Get_bits(buff, 4, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL16:
		o_decoded_field->a.sl16 = Get_bits(buff, 4, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL20:
		o_decoded_field->a.sl20 = Get_bits(buff, 5, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL40:
		o_decoded_field->a.sl40 = Get_bits(buff, 6, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL80:
		o_decoded_field->a.sl80 = Get_bits(buff, 7, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL160:
		o_decoded_field->a.sl160 = Get_bits(buff, 8, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL320:
		o_decoded_field->a.sl320 = Get_bits(buff, 9, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL640:
		o_decoded_field->a.sl640 = Get_bits(buff, 10, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL1280:
		o_decoded_field->a.sl1280 = Get_bits(buff, 11, bits_iter);
		break;

	case SEARCHSPACE_MONITORINGSLOTPERIODICITYANDOFFSET_SL2560:
		o_decoded_field->a.sl2560 = Get_bits(buff, 12, bits_iter);
		break;

	default:
		break;

	}
}

void DecodeSearchSpace_monitoringSymbolsWithinSlot(
	SearchSpace_monitoringSymbolsWithinSlot_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 14;
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

void DecodeSearchSpace_aggregationLevel1(
	SearchSpace_aggregationLevel1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSearchSpace_aggregationLevel2(
	SearchSpace_aggregationLevel2_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSearchSpace_aggregationLevel4(
	SearchSpace_aggregationLevel4_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSearchSpace_aggregationLevel8(
	SearchSpace_aggregationLevel8_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSearchSpace_aggregationLevel16(
	SearchSpace_aggregationLevel16_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSearchSpace_nrofCandidates(
	SearchSpace_nrofCandidates_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeSearchSpace_aggregationLevel1(&o_decoded_field->aggregationLevel1, buff, bits_iter, asn_error);
	DecodeSearchSpace_aggregationLevel2(&o_decoded_field->aggregationLevel2, buff, bits_iter, asn_error);
	DecodeSearchSpace_aggregationLevel4(&o_decoded_field->aggregationLevel4, buff, bits_iter, asn_error);
	DecodeSearchSpace_aggregationLevel8(&o_decoded_field->aggregationLevel8, buff, bits_iter, asn_error);
	DecodeSearchSpace_aggregationLevel16(&o_decoded_field->aggregationLevel16, buff, bits_iter, asn_error);
}

void DecodeSearchSpace_dci_Format0_0_AndFormat1_0(
	SearchSpace_dci_Format0_0_AndFormat1_0_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSearchSpace_aggregationLevel1_1(
	SearchSpace_aggregationLevel1_1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSearchSpace_aggregationLevel2_1(
	SearchSpace_aggregationLevel2_1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSearchSpace_aggregationLevel4_1(
	SearchSpace_aggregationLevel4_1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSearchSpace_aggregationLevel8_1(
	SearchSpace_aggregationLevel8_1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSearchSpace_aggregationLevel16_1(
	SearchSpace_aggregationLevel16_1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSearchSpace_nrofCandidates_SFI(
	SearchSpace_nrofCandidates_SFI_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->aggregationLevel1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->aggregationLevel2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->aggregationLevel4_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->aggregationLevel8_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->aggregationLevel16_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->aggregationLevel1_exist == TRUE)
	{
		DecodeSearchSpace_aggregationLevel1_1(&o_decoded_field->aggregationLevel1, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->aggregationLevel2_exist == TRUE)
	{
		DecodeSearchSpace_aggregationLevel2_1(&o_decoded_field->aggregationLevel2, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->aggregationLevel4_exist == TRUE)
	{
		DecodeSearchSpace_aggregationLevel4_1(&o_decoded_field->aggregationLevel4, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->aggregationLevel8_exist == TRUE)
	{
		DecodeSearchSpace_aggregationLevel8_1(&o_decoded_field->aggregationLevel8, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->aggregationLevel16_exist == TRUE)
	{
		DecodeSearchSpace_aggregationLevel16_1(&o_decoded_field->aggregationLevel16, buff, bits_iter, asn_error);
	}

}

void DecodeSearchSpace_dci_Format2_0(
	SearchSpace_dci_Format2_0_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeSearchSpace_nrofCandidates_SFI(&o_decoded_field->nrofCandidates_SFI, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSearchSpace_dci_Format2_1(
	SearchSpace_dci_Format2_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSearchSpace_dci_Format2_2(
	SearchSpace_dci_Format2_2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSearchSpace_monitoringPeriodicity(
	SearchSpace_monitoringPeriodicity_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSearchSpace_nrofPDCCH_Candidates(
	SearchSpace_nrofPDCCH_Candidates_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSearchSpace_dci_Format2_3(
	SearchSpace_dci_Format2_3_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->monitoringPeriodicity_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->monitoringPeriodicity_exist == TRUE)
	{
		DecodeSearchSpace_monitoringPeriodicity(&o_decoded_field->monitoringPeriodicity, buff, bits_iter, asn_error);
	}

	DecodeSearchSpace_nrofPDCCH_Candidates(&o_decoded_field->nrofPDCCH_Candidates, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSearchSpace_common(
	SearchSpace_common_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->dci_Format0_0_AndFormat1_0_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dci_Format2_0_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dci_Format2_1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dci_Format2_2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dci_Format2_3_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->dci_Format0_0_AndFormat1_0_exist == TRUE)
	{
		DecodeSearchSpace_dci_Format0_0_AndFormat1_0(&o_decoded_field->dci_Format0_0_AndFormat1_0, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dci_Format2_0_exist == TRUE)
	{
		DecodeSearchSpace_dci_Format2_0(&o_decoded_field->dci_Format2_0, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dci_Format2_1_exist == TRUE)
	{
		DecodeSearchSpace_dci_Format2_1(&o_decoded_field->dci_Format2_1, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dci_Format2_2_exist == TRUE)
	{
		DecodeSearchSpace_dci_Format2_2(&o_decoded_field->dci_Format2_2, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dci_Format2_3_exist == TRUE)
	{
		DecodeSearchSpace_dci_Format2_3(&o_decoded_field->dci_Format2_3, buff, bits_iter, asn_error);
	}

}

void DecodeSearchSpace_dci_Formats(
	SearchSpace_dci_Formats_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSearchSpace_ue_Specific(
	SearchSpace_ue_Specific_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeSearchSpace_dci_Formats(&o_decoded_field->dci_Formats, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSearchSpace_searchSpaceType(
	SearchSpace_searchSpaceType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SEARCHSPACE_SEARCHSPACETYPE_COMMON:
		DecodeSearchSpace_common(&o_decoded_field->a.common, buff, bits_iter, asn_error);
		break;

	case SEARCHSPACE_SEARCHSPACETYPE_UE_SPECIFIC:
		DecodeSearchSpace_ue_Specific(&o_decoded_field->a.ue_Specific, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeSearchSpace(
	SearchSpace_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->controlResourceSetId_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->monitoringSlotPeriodicityAndOffset_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->duration_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->monitoringSymbolsWithinSlot_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nrofCandidates_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->searchSpaceType_exist = Get_bits(buff, 1, bits_iter);
	DecodeSearchSpaceId(&o_decoded_field->searchSpaceId, buff, bits_iter, asn_error);
	if(o_decoded_field->controlResourceSetId_exist == TRUE)
	{
		DecodeControlResourceSetId(&o_decoded_field->controlResourceSetId, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->monitoringSlotPeriodicityAndOffset_exist == TRUE)
	{
		DecodeSearchSpace_monitoringSlotPeriodicityAndOffset(&o_decoded_field->monitoringSlotPeriodicityAndOffset, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->duration_exist == TRUE)
	{
		o_decoded_field->duration = Get_bits(buff, 12, bits_iter) + 2;
	}

	if(o_decoded_field->monitoringSymbolsWithinSlot_exist == TRUE)
	{
		DecodeSearchSpace_monitoringSymbolsWithinSlot(&o_decoded_field->monitoringSymbolsWithinSlot, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nrofCandidates_exist == TRUE)
	{
		DecodeSearchSpace_nrofCandidates(&o_decoded_field->nrofCandidates, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->searchSpaceType_exist == TRUE)
	{
		DecodeSearchSpace_searchSpaceType(&o_decoded_field->searchSpaceType, buff, bits_iter, asn_error);
	}

}

