/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * q_offset_range_list.c - codec the message of Q-OffsetRangeList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "q_offset_range_list.h"


void EncodeQ_OffsetRangeList(
	Q_OffsetRangeList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->rsrpOffsetSSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rsrqOffsetSSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sinrOffsetSSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rsrpOffsetCSI_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rsrqOffsetCSI_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sinrOffsetCSI_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rsrpOffsetSSB_exist == TRUE)
	{
		EncodeQ_OffsetRange(i_encoded_field->rsrpOffsetSSB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rsrqOffsetSSB_exist == TRUE)
	{
		EncodeQ_OffsetRange(i_encoded_field->rsrqOffsetSSB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sinrOffsetSSB_exist == TRUE)
	{
		EncodeQ_OffsetRange(i_encoded_field->sinrOffsetSSB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rsrpOffsetCSI_RS_exist == TRUE)
	{
		EncodeQ_OffsetRange(i_encoded_field->rsrpOffsetCSI_RS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rsrqOffsetCSI_RS_exist == TRUE)
	{
		EncodeQ_OffsetRange(i_encoded_field->rsrqOffsetCSI_RS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sinrOffsetCSI_RS_exist == TRUE)
	{
		EncodeQ_OffsetRange(i_encoded_field->sinrOffsetCSI_RS, buff, bits_iter, asn_error);
	}

}

void DecodeQ_OffsetRangeList(
	Q_OffsetRangeList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->rsrpOffsetSSB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rsrqOffsetSSB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sinrOffsetSSB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rsrpOffsetCSI_RS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rsrqOffsetCSI_RS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sinrOffsetCSI_RS_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->rsrpOffsetSSB_exist == TRUE)
	{
		DecodeQ_OffsetRange(&o_decoded_field->rsrpOffsetSSB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rsrqOffsetSSB_exist == TRUE)
	{
		DecodeQ_OffsetRange(&o_decoded_field->rsrqOffsetSSB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sinrOffsetSSB_exist == TRUE)
	{
		DecodeQ_OffsetRange(&o_decoded_field->sinrOffsetSSB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rsrpOffsetCSI_RS_exist == TRUE)
	{
		DecodeQ_OffsetRange(&o_decoded_field->rsrpOffsetCSI_RS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rsrqOffsetCSI_RS_exist == TRUE)
	{
		DecodeQ_OffsetRange(&o_decoded_field->rsrqOffsetCSI_RS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sinrOffsetCSI_RS_exist == TRUE)
	{
		DecodeQ_OffsetRange(&o_decoded_field->sinrOffsetCSI_RS, buff, bits_iter, asn_error);
	}

}

