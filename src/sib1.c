/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sib1.c - codec the message of SIB1
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "sib1.h"


void EncodeSIB1_frequencyOffsetSSB(
	SIB1_frequencyOffsetSSB_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSIB1_inOneGroup(
	SIB1_inOneGroup_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeSIB1_groupPresence(
	SIB1_groupPresence_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeSIB1_ssb_PositionsInBurst(
	SIB1_ssb_PositionsInBurst_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->groupPresence_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSIB1_inOneGroup(&i_encoded_field->inOneGroup, buff, bits_iter, asn_error);

	if(i_encoded_field->groupPresence_exist == TRUE)
	{
		EncodeSIB1_groupPresence(&i_encoded_field->groupPresence, buff, bits_iter, asn_error);
	}

}

void EncodeSIB1_ssb_PeriodicityServingCell(
	SIB1_ssb_PeriodicityServingCell_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSIB1_supplementaryUplink(
	SIB1_supplementaryUplink_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->uplinkConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->uplinkConfigCommon_exist == TRUE)
	{
		EncodeUplinkConfigCommon(&i_encoded_field->uplinkConfigCommon, buff, bits_iter, asn_error);
	}

}

void EncodeSIB1_lateNonCriticalExtension(
	SIB1_lateNonCriticalExtension_t *i_encoded_field, 
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

void EncodeSIB1_nonCriticalExtension(
	SIB1_nonCriticalExtension_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeSIB1(
	SIB1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->frequencyOffsetSSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->uplinkConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->supplementaryUplink_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tdd_UL_DL_Configuration_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tdd_UL_DL_configurationCommon2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcch_ConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_ConfigCommon_exist == TRUE)
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

	if(i_encoded_field->frequencyOffsetSSB_exist == TRUE)
	{
		EncodeSIB1_frequencyOffsetSSB(i_encoded_field->frequencyOffsetSSB, buff, bits_iter, asn_error);
	}

	EncodeSIB1_ssb_PositionsInBurst(&i_encoded_field->ssb_PositionsInBurst, buff, bits_iter, asn_error);

	EncodeSIB1_ssb_PeriodicityServingCell(i_encoded_field->ssb_PeriodicityServingCell, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->ss_PBCH_BlockPower + 60, 7, bits_iter);

	if(i_encoded_field->uplinkConfigCommon_exist == TRUE)
	{
		EncodeUplinkConfigCommon(&i_encoded_field->uplinkConfigCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supplementaryUplink_exist == TRUE)
	{
		EncodeSIB1_supplementaryUplink(&i_encoded_field->supplementaryUplink, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tdd_UL_DL_Configuration_exist == TRUE)
	{
		EncodeTDD_UL_DL_ConfigCommon(&i_encoded_field->tdd_UL_DL_Configuration, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tdd_UL_DL_configurationCommon2_exist == TRUE)
	{
		EncodeTDD_UL_DL_ConfigCommon(&i_encoded_field->tdd_UL_DL_configurationCommon2, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdcch_ConfigCommon_exist == TRUE)
	{
		EncodePDCCH_ConfigCommon(&i_encoded_field->pdcch_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pucch_ConfigCommon_exist == TRUE)
	{
		EncodePUCCH_ConfigCommon(&i_encoded_field->pucch_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->lateNonCriticalExtension_exist == TRUE)
	{
		EncodeSIB1_lateNonCriticalExtension(&i_encoded_field->lateNonCriticalExtension, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nonCriticalExtension_exist == TRUE)
	{
	}

}

void DecodeSIB1_frequencyOffsetSSB(
	SIB1_frequencyOffsetSSB_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSIB1_inOneGroup(
	SIB1_inOneGroup_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeSIB1_groupPresence(
	SIB1_groupPresence_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeSIB1_ssb_PositionsInBurst(
	SIB1_ssb_PositionsInBurst_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->groupPresence_exist = Get_bits(buff, 1, bits_iter);
	DecodeSIB1_inOneGroup(&o_decoded_field->inOneGroup, buff, bits_iter, asn_error);
	if(o_decoded_field->groupPresence_exist == TRUE)
	{
		DecodeSIB1_groupPresence(&o_decoded_field->groupPresence, buff, bits_iter, asn_error);
	}

}

void DecodeSIB1_ssb_PeriodicityServingCell(
	SIB1_ssb_PeriodicityServingCell_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSIB1_supplementaryUplink(
	SIB1_supplementaryUplink_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->uplinkConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->uplinkConfigCommon_exist == TRUE)
	{
		DecodeUplinkConfigCommon(&o_decoded_field->uplinkConfigCommon, buff, bits_iter, asn_error);
	}

}

void DecodeSIB1_lateNonCriticalExtension(
	SIB1_lateNonCriticalExtension_t *o_decoded_field, 
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

void DecodeSIB1_nonCriticalExtension(
	SIB1_nonCriticalExtension_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeSIB1(
	SIB1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->frequencyOffsetSSB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->uplinkConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supplementaryUplink_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tdd_UL_DL_Configuration_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tdd_UL_DL_configurationCommon2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdcch_ConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pucch_ConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->lateNonCriticalExtension_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nonCriticalExtension_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->frequencyOffsetSSB_exist == TRUE)
	{
		DecodeSIB1_frequencyOffsetSSB(&o_decoded_field->frequencyOffsetSSB, buff, bits_iter, asn_error);
	}

	DecodeSIB1_ssb_PositionsInBurst(&o_decoded_field->ssb_PositionsInBurst, buff, bits_iter, asn_error);
	DecodeSIB1_ssb_PeriodicityServingCell(&o_decoded_field->ssb_PeriodicityServingCell, buff, bits_iter, asn_error);
	o_decoded_field->ss_PBCH_BlockPower = Get_bits(buff, 7, bits_iter) - 60;
	if(o_decoded_field->uplinkConfigCommon_exist == TRUE)
	{
		DecodeUplinkConfigCommon(&o_decoded_field->uplinkConfigCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supplementaryUplink_exist == TRUE)
	{
		DecodeSIB1_supplementaryUplink(&o_decoded_field->supplementaryUplink, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tdd_UL_DL_Configuration_exist == TRUE)
	{
		DecodeTDD_UL_DL_ConfigCommon(&o_decoded_field->tdd_UL_DL_Configuration, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tdd_UL_DL_configurationCommon2_exist == TRUE)
	{
		DecodeTDD_UL_DL_ConfigCommon(&o_decoded_field->tdd_UL_DL_configurationCommon2, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdcch_ConfigCommon_exist == TRUE)
	{
		DecodePDCCH_ConfigCommon(&o_decoded_field->pdcch_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pucch_ConfigCommon_exist == TRUE)
	{
		DecodePUCCH_ConfigCommon(&o_decoded_field->pucch_ConfigCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->lateNonCriticalExtension_exist == TRUE)
	{
		DecodeSIB1_lateNonCriticalExtension(&o_decoded_field->lateNonCriticalExtension, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nonCriticalExtension_exist == TRUE)
	{
	}

}

