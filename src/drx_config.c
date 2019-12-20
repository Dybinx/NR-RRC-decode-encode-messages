/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * drx_config.c - codec the message of DRX-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "drx_config.h"


void EncodeDRX_Config_milliSeconds(
	DRX_Config_milliSeconds_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 5, bits_iter);
}

void EncodeDRX_Config_drx_onDurationTimer(
	DRX_Config_drx_onDurationTimer_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case DRX_CONFIG_DRX_ONDURATIONTIMER_SUBMILLISECONDS:
		PutBits(buff, i_encoded_field->a.subMilliSeconds - 1, 5, bits_iter);
		break;

	case DRX_CONFIG_DRX_ONDURATIONTIMER_MILLISECONDS:
		EncodeDRX_Config_milliSeconds(i_encoded_field->a.milliSeconds, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeDRX_Config_drx_InactivityTimer(
	DRX_Config_drx_InactivityTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 5, bits_iter);
}

void EncodeDRX_Config_drx_RetransmissionTimerDL(
	DRX_Config_drx_RetransmissionTimerDL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 5, bits_iter);
}

void EncodeDRX_Config_drx_RetransmissionTimerUL(
	DRX_Config_drx_RetransmissionTimerUL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 5, bits_iter);
}

void EncodeDRX_Config_drx_LongCycleStartOffset(
	DRX_Config_drx_LongCycleStartOffset_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 5, bits_iter);
	switch (i_encoded_field->type)
	{
	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS10:
		PutBits(buff, i_encoded_field->a.ms10, 4, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS20:
		PutBits(buff, i_encoded_field->a.ms20, 5, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS32:
		PutBits(buff, i_encoded_field->a.ms32, 5, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS40:
		PutBits(buff, i_encoded_field->a.ms40, 6, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS60:
		PutBits(buff, i_encoded_field->a.ms60, 6, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS64:
		PutBits(buff, i_encoded_field->a.ms64, 6, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS70:
		PutBits(buff, i_encoded_field->a.ms70, 7, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS80:
		PutBits(buff, i_encoded_field->a.ms80, 7, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS128:
		PutBits(buff, i_encoded_field->a.ms128, 7, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS160:
		PutBits(buff, i_encoded_field->a.ms160, 8, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS256:
		PutBits(buff, i_encoded_field->a.ms256, 8, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS320:
		PutBits(buff, i_encoded_field->a.ms320, 9, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS512:
		PutBits(buff, i_encoded_field->a.ms512, 9, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS640:
		PutBits(buff, i_encoded_field->a.ms640, 10, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS1024:
		PutBits(buff, i_encoded_field->a.ms1024, 10, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS1280:
		PutBits(buff, i_encoded_field->a.ms1280, 11, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS2048:
		PutBits(buff, i_encoded_field->a.ms2048, 11, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS2560:
		PutBits(buff, i_encoded_field->a.ms2560, 12, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS5120:
		PutBits(buff, i_encoded_field->a.ms5120, 13, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS10240:
		PutBits(buff, i_encoded_field->a.ms10240, 14, bits_iter);
		break;

	default:
		break;	}
}

void EncodeDRX_Config_drx_ShortCycle(
	DRX_Config_drx_ShortCycle_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 5, bits_iter);
}

void EncodeDRX_Config_shortDRX(
	DRX_Config_shortDRX_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeDRX_Config_drx_ShortCycle(i_encoded_field->drx_ShortCycle, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->drx_ShortCycleTimer - 1, 4, bits_iter);

}

void EncodeDRX_Config(
	DRX_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->shortDRX_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeDRX_Config_drx_onDurationTimer(&i_encoded_field->drx_onDurationTimer, buff, bits_iter, asn_error);

	EncodeDRX_Config_drx_InactivityTimer(i_encoded_field->drx_InactivityTimer, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->drx_HARQ_RTT_TimerDL, 6, bits_iter);

	PutBits(buff, i_encoded_field->drx_HARQ_RTT_TimerUL, 6, bits_iter);

	EncodeDRX_Config_drx_RetransmissionTimerDL(i_encoded_field->drx_RetransmissionTimerDL, buff, bits_iter, asn_error);

	EncodeDRX_Config_drx_RetransmissionTimerUL(i_encoded_field->drx_RetransmissionTimerUL, buff, bits_iter, asn_error);

	EncodeDRX_Config_drx_LongCycleStartOffset(&i_encoded_field->drx_LongCycleStartOffset, buff, bits_iter, asn_error);

	if(i_encoded_field->shortDRX_exist == TRUE)
	{
		EncodeDRX_Config_shortDRX(&i_encoded_field->shortDRX, buff, bits_iter, asn_error);
	}

	PutBits(buff, i_encoded_field->drx_SlotOffset, 5, bits_iter);

}

void DecodeDRX_Config_milliSeconds(
	DRX_Config_milliSeconds_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 5, bits_iter);
}

void DecodeDRX_Config_drx_onDurationTimer(
	DRX_Config_drx_onDurationTimer_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case DRX_CONFIG_DRX_ONDURATIONTIMER_SUBMILLISECONDS:
		o_decoded_field->a.subMilliSeconds = Get_bits(buff, 5, bits_iter) + 1;
		break;

	case DRX_CONFIG_DRX_ONDURATIONTIMER_MILLISECONDS:
		DecodeDRX_Config_milliSeconds(&o_decoded_field->a.milliSeconds, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeDRX_Config_drx_InactivityTimer(
	DRX_Config_drx_InactivityTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 5, bits_iter);
}

void DecodeDRX_Config_drx_RetransmissionTimerDL(
	DRX_Config_drx_RetransmissionTimerDL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 5, bits_iter);
}

void DecodeDRX_Config_drx_RetransmissionTimerUL(
	DRX_Config_drx_RetransmissionTimerUL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 5, bits_iter);
}

void DecodeDRX_Config_drx_LongCycleStartOffset(
	DRX_Config_drx_LongCycleStartOffset_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 5, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS10:
		o_decoded_field->a.ms10 = Get_bits(buff, 4, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS20:
		o_decoded_field->a.ms20 = Get_bits(buff, 5, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS32:
		o_decoded_field->a.ms32 = Get_bits(buff, 5, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS40:
		o_decoded_field->a.ms40 = Get_bits(buff, 6, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS60:
		o_decoded_field->a.ms60 = Get_bits(buff, 6, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS64:
		o_decoded_field->a.ms64 = Get_bits(buff, 6, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS70:
		o_decoded_field->a.ms70 = Get_bits(buff, 7, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS80:
		o_decoded_field->a.ms80 = Get_bits(buff, 7, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS128:
		o_decoded_field->a.ms128 = Get_bits(buff, 7, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS160:
		o_decoded_field->a.ms160 = Get_bits(buff, 8, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS256:
		o_decoded_field->a.ms256 = Get_bits(buff, 8, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS320:
		o_decoded_field->a.ms320 = Get_bits(buff, 9, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS512:
		o_decoded_field->a.ms512 = Get_bits(buff, 9, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS640:
		o_decoded_field->a.ms640 = Get_bits(buff, 10, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS1024:
		o_decoded_field->a.ms1024 = Get_bits(buff, 10, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS1280:
		o_decoded_field->a.ms1280 = Get_bits(buff, 11, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS2048:
		o_decoded_field->a.ms2048 = Get_bits(buff, 11, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS2560:
		o_decoded_field->a.ms2560 = Get_bits(buff, 12, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS5120:
		o_decoded_field->a.ms5120 = Get_bits(buff, 13, bits_iter);
		break;

	case DRX_CONFIG_DRX_LONGCYCLESTARTOFFSET_MS10240:
		o_decoded_field->a.ms10240 = Get_bits(buff, 14, bits_iter);
		break;

	default:
		break;

	}
}

void DecodeDRX_Config_drx_ShortCycle(
	DRX_Config_drx_ShortCycle_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 5, bits_iter);
}

void DecodeDRX_Config_shortDRX(
	DRX_Config_shortDRX_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeDRX_Config_drx_ShortCycle(&o_decoded_field->drx_ShortCycle, buff, bits_iter, asn_error);
	o_decoded_field->drx_ShortCycleTimer = Get_bits(buff, 4, bits_iter) + 1;
}

void DecodeDRX_Config(
	DRX_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->shortDRX_exist = Get_bits(buff, 1, bits_iter);
	DecodeDRX_Config_drx_onDurationTimer(&o_decoded_field->drx_onDurationTimer, buff, bits_iter, asn_error);
	DecodeDRX_Config_drx_InactivityTimer(&o_decoded_field->drx_InactivityTimer, buff, bits_iter, asn_error);
	o_decoded_field->drx_HARQ_RTT_TimerDL = Get_bits(buff, 6, bits_iter);
	o_decoded_field->drx_HARQ_RTT_TimerUL = Get_bits(buff, 6, bits_iter);
	DecodeDRX_Config_drx_RetransmissionTimerDL(&o_decoded_field->drx_RetransmissionTimerDL, buff, bits_iter, asn_error);
	DecodeDRX_Config_drx_RetransmissionTimerUL(&o_decoded_field->drx_RetransmissionTimerUL, buff, bits_iter, asn_error);
	DecodeDRX_Config_drx_LongCycleStartOffset(&o_decoded_field->drx_LongCycleStartOffset, buff, bits_iter, asn_error);
	if(o_decoded_field->shortDRX_exist == TRUE)
	{
		DecodeDRX_Config_shortDRX(&o_decoded_field->shortDRX, buff, bits_iter, asn_error);
	}

	o_decoded_field->drx_SlotOffset = Get_bits(buff, 5, bits_iter);
}

