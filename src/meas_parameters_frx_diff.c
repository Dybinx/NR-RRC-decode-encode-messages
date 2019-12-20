/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_frx_diff.c - codec the message of MeasParametersFRX-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_parameters_frx_diff.h"


void EncodeMeasParametersFRX_Diff_ss_SINR_Meas(
	MeasParametersFRX_Diff_ss_SINR_Meas_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithSSB(
	MeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithSSB_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithoutSSB(
	MeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithoutSSB_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMeasParametersFRX_Diff_csi_SINR_Meas(
	MeasParametersFRX_Diff_csi_SINR_Meas_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMeasParametersFRX_Diff_csi_RS_RLM(
	MeasParametersFRX_Diff_csi_RS_RLM_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMeasParametersFRX_Diff(
	MeasParametersFRX_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->ss_SINR_Meas_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_RSRP_AndRSRQ_MeasWithSSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_RSRP_AndRSRQ_MeasWithoutSSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_SINR_Meas_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_RS_RLM_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ss_SINR_Meas_exist == TRUE)
	{
		EncodeMeasParametersFRX_Diff_ss_SINR_Meas(i_encoded_field->ss_SINR_Meas, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_RSRP_AndRSRQ_MeasWithSSB_exist == TRUE)
	{
		EncodeMeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithSSB(i_encoded_field->csi_RSRP_AndRSRQ_MeasWithSSB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_RSRP_AndRSRQ_MeasWithoutSSB_exist == TRUE)
	{
		EncodeMeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithoutSSB(i_encoded_field->csi_RSRP_AndRSRQ_MeasWithoutSSB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_SINR_Meas_exist == TRUE)
	{
		EncodeMeasParametersFRX_Diff_csi_SINR_Meas(i_encoded_field->csi_SINR_Meas, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_RS_RLM_exist == TRUE)
	{
		EncodeMeasParametersFRX_Diff_csi_RS_RLM(i_encoded_field->csi_RS_RLM, buff, bits_iter, asn_error);
	}

}

void DecodeMeasParametersFRX_Diff_ss_SINR_Meas(
	MeasParametersFRX_Diff_ss_SINR_Meas_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithSSB(
	MeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithSSB_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithoutSSB(
	MeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithoutSSB_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMeasParametersFRX_Diff_csi_SINR_Meas(
	MeasParametersFRX_Diff_csi_SINR_Meas_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMeasParametersFRX_Diff_csi_RS_RLM(
	MeasParametersFRX_Diff_csi_RS_RLM_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMeasParametersFRX_Diff(
	MeasParametersFRX_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->ss_SINR_Meas_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_RSRP_AndRSRQ_MeasWithSSB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_RSRP_AndRSRQ_MeasWithoutSSB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_SINR_Meas_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_RS_RLM_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->ss_SINR_Meas_exist == TRUE)
	{
		DecodeMeasParametersFRX_Diff_ss_SINR_Meas(&o_decoded_field->ss_SINR_Meas, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_RSRP_AndRSRQ_MeasWithSSB_exist == TRUE)
	{
		DecodeMeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithSSB(&o_decoded_field->csi_RSRP_AndRSRQ_MeasWithSSB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_RSRP_AndRSRQ_MeasWithoutSSB_exist == TRUE)
	{
		DecodeMeasParametersFRX_Diff_csi_RSRP_AndRSRQ_MeasWithoutSSB(&o_decoded_field->csi_RSRP_AndRSRQ_MeasWithoutSSB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_SINR_Meas_exist == TRUE)
	{
		DecodeMeasParametersFRX_Diff_csi_SINR_Meas(&o_decoded_field->csi_SINR_Meas, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_RS_RLM_exist == TRUE)
	{
		DecodeMeasParametersFRX_Diff_csi_RS_RLM(&o_decoded_field->csi_RS_RLM, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

