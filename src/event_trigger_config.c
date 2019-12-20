/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * event_trigger_config.c - codec the message of EventTriggerConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "event_trigger_config.h"


void EncodeEventTriggerConfig_eventA1(
	EventTriggerConfig_eventA1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMeasTriggerQuantity(&i_encoded_field->a1_Threshold, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->reportOnLeave, 1, bits_iter);

	EncodeHysteresis(&i_encoded_field->hysteresis, buff, bits_iter, asn_error);

	EncodeTimeToTrigger(i_encoded_field->timeToTrigger, buff, bits_iter, asn_error);

}

void EncodeEventTriggerConfig_eventA2(
	EventTriggerConfig_eventA2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMeasTriggerQuantity(&i_encoded_field->a2_Threshold, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->reportOnLeave, 1, bits_iter);

	EncodeHysteresis(&i_encoded_field->hysteresis, buff, bits_iter, asn_error);

	EncodeTimeToTrigger(i_encoded_field->timeToTrigger, buff, bits_iter, asn_error);

}

void EncodeEventTriggerConfig_eventA3(
	EventTriggerConfig_eventA3_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMeasTriggerQuantityOffset(&i_encoded_field->a3_Offset, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->reportOnLeave, 1, bits_iter);

	EncodeHysteresis(&i_encoded_field->hysteresis, buff, bits_iter, asn_error);

	EncodeTimeToTrigger(i_encoded_field->timeToTrigger, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->useWhiteCellList, 1, bits_iter);

}

void EncodeEventTriggerConfig_eventA4(
	EventTriggerConfig_eventA4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMeasTriggerQuantity(&i_encoded_field->a4_Threshold, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->reportOnLeave, 1, bits_iter);

	EncodeHysteresis(&i_encoded_field->hysteresis, buff, bits_iter, asn_error);

	EncodeTimeToTrigger(i_encoded_field->timeToTrigger, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->useWhiteCellList, 1, bits_iter);

}

void EncodeEventTriggerConfig_eventA5(
	EventTriggerConfig_eventA5_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMeasTriggerQuantity(&i_encoded_field->a5_Threshold1, buff, bits_iter, asn_error);

	EncodeMeasTriggerQuantity(&i_encoded_field->a5_Threshold2, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->reportOnLeave, 1, bits_iter);

	EncodeHysteresis(&i_encoded_field->hysteresis, buff, bits_iter, asn_error);

	EncodeTimeToTrigger(i_encoded_field->timeToTrigger, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->useWhiteCellList, 1, bits_iter);

}

void EncodeEventTriggerConfig_eventA6(
	EventTriggerConfig_eventA6_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMeasTriggerQuantityOffset(&i_encoded_field->a6_Offset, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->reportOnLeave, 1, bits_iter);

	EncodeHysteresis(&i_encoded_field->hysteresis, buff, bits_iter, asn_error);

	EncodeTimeToTrigger(i_encoded_field->timeToTrigger, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->useWhiteCellList, 1, bits_iter);

}

void EncodeEventTriggerConfig_eventId(
	EventTriggerConfig_eventId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root.*/
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->type, 3, bits_iter);
	switch (i_encoded_field->type)
	{
	case EVENTTRIGGERCONFIG_EVENTID_EVENTA1:
		EncodeEventTriggerConfig_eventA1(&i_encoded_field->a.eventA1, buff, bits_iter, asn_error);
		break;

	case EVENTTRIGGERCONFIG_EVENTID_EVENTA2:
		EncodeEventTriggerConfig_eventA2(&i_encoded_field->a.eventA2, buff, bits_iter, asn_error);
		break;

	case EVENTTRIGGERCONFIG_EVENTID_EVENTA3:
		EncodeEventTriggerConfig_eventA3(&i_encoded_field->a.eventA3, buff, bits_iter, asn_error);
		break;

	case EVENTTRIGGERCONFIG_EVENTID_EVENTA4:
		EncodeEventTriggerConfig_eventA4(&i_encoded_field->a.eventA4, buff, bits_iter, asn_error);
		break;

	case EVENTTRIGGERCONFIG_EVENTID_EVENTA5:
		EncodeEventTriggerConfig_eventA5(&i_encoded_field->a.eventA5, buff, bits_iter, asn_error);
		break;

	case EVENTTRIGGERCONFIG_EVENTID_EVENTA6:
		EncodeEventTriggerConfig_eventA6(&i_encoded_field->a.eventA6, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeEventTriggerConfig_reportAmount(
	EventTriggerConfig_reportAmount_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeEventTriggerConfig_reportAddNeighMeas(
	EventTriggerConfig_reportAddNeighMeas_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeEventTriggerConfig(
	EventTriggerConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->reportQuantityRsIndexes_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNrofRSIndexesToReport_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->reportAddNeighMeas_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeEventTriggerConfig_eventId(&i_encoded_field->eventId, buff, bits_iter, asn_error);

	EncodeNR_RS_Type(i_encoded_field->rsType, buff, bits_iter, asn_error);

	EncodeReportInterval(i_encoded_field->reportInterval, buff, bits_iter, asn_error);

	EncodeEventTriggerConfig_reportAmount(i_encoded_field->reportAmount, buff, bits_iter, asn_error);

	EncodeMeasReportQuantity(&i_encoded_field->reportQuantityCell, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->maxReportCells - 1, 3, bits_iter);

	if(i_encoded_field->reportQuantityRsIndexes_exist == TRUE)
	{
		EncodeMeasReportQuantity(&i_encoded_field->reportQuantityRsIndexes, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxNrofRSIndexesToReport_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxNrofRSIndexesToReport - 1, 5, bits_iter);
	}

	PutBits(buff, i_encoded_field->includeBeamMeasurements, 1, bits_iter);

	if(i_encoded_field->reportAddNeighMeas_exist == TRUE)
	{
		EncodeEventTriggerConfig_reportAddNeighMeas(i_encoded_field->reportAddNeighMeas, buff, bits_iter, asn_error);
	}

}

void DecodeEventTriggerConfig_eventA1(
	EventTriggerConfig_eventA1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMeasTriggerQuantity(&o_decoded_field->a1_Threshold, buff, bits_iter, asn_error);
	o_decoded_field->reportOnLeave = Get_bits(buff, 1, bits_iter);
	DecodeHysteresis(&o_decoded_field->hysteresis, buff, bits_iter, asn_error);
	DecodeTimeToTrigger(&o_decoded_field->timeToTrigger, buff, bits_iter, asn_error);
}

void DecodeEventTriggerConfig_eventA2(
	EventTriggerConfig_eventA2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMeasTriggerQuantity(&o_decoded_field->a2_Threshold, buff, bits_iter, asn_error);
	o_decoded_field->reportOnLeave = Get_bits(buff, 1, bits_iter);
	DecodeHysteresis(&o_decoded_field->hysteresis, buff, bits_iter, asn_error);
	DecodeTimeToTrigger(&o_decoded_field->timeToTrigger, buff, bits_iter, asn_error);
}

void DecodeEventTriggerConfig_eventA3(
	EventTriggerConfig_eventA3_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMeasTriggerQuantityOffset(&o_decoded_field->a3_Offset, buff, bits_iter, asn_error);
	o_decoded_field->reportOnLeave = Get_bits(buff, 1, bits_iter);
	DecodeHysteresis(&o_decoded_field->hysteresis, buff, bits_iter, asn_error);
	DecodeTimeToTrigger(&o_decoded_field->timeToTrigger, buff, bits_iter, asn_error);
	o_decoded_field->useWhiteCellList = Get_bits(buff, 1, bits_iter);
}

void DecodeEventTriggerConfig_eventA4(
	EventTriggerConfig_eventA4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMeasTriggerQuantity(&o_decoded_field->a4_Threshold, buff, bits_iter, asn_error);
	o_decoded_field->reportOnLeave = Get_bits(buff, 1, bits_iter);
	DecodeHysteresis(&o_decoded_field->hysteresis, buff, bits_iter, asn_error);
	DecodeTimeToTrigger(&o_decoded_field->timeToTrigger, buff, bits_iter, asn_error);
	o_decoded_field->useWhiteCellList = Get_bits(buff, 1, bits_iter);
}

void DecodeEventTriggerConfig_eventA5(
	EventTriggerConfig_eventA5_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMeasTriggerQuantity(&o_decoded_field->a5_Threshold1, buff, bits_iter, asn_error);
	DecodeMeasTriggerQuantity(&o_decoded_field->a5_Threshold2, buff, bits_iter, asn_error);
	o_decoded_field->reportOnLeave = Get_bits(buff, 1, bits_iter);
	DecodeHysteresis(&o_decoded_field->hysteresis, buff, bits_iter, asn_error);
	DecodeTimeToTrigger(&o_decoded_field->timeToTrigger, buff, bits_iter, asn_error);
	o_decoded_field->useWhiteCellList = Get_bits(buff, 1, bits_iter);
}

void DecodeEventTriggerConfig_eventA6(
	EventTriggerConfig_eventA6_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMeasTriggerQuantityOffset(&o_decoded_field->a6_Offset, buff, bits_iter, asn_error);
	o_decoded_field->reportOnLeave = Get_bits(buff, 1, bits_iter);
	DecodeHysteresis(&o_decoded_field->hysteresis, buff, bits_iter, asn_error);
	DecodeTimeToTrigger(&o_decoded_field->timeToTrigger, buff, bits_iter, asn_error);
	o_decoded_field->useWhiteCellList = Get_bits(buff, 1, bits_iter);
}

void DecodeEventTriggerConfig_eventId(
	EventTriggerConfig_eventId_t *o_decoded_field, 
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
		index = Get_bits(buff, 3, bits_iter);
	}
	else
	{
		//need to handle this asn error.
	}

	o_decoded_field->type = index;
	switch (index)
	{
	case EVENTTRIGGERCONFIG_EVENTID_EVENTA1:
		DecodeEventTriggerConfig_eventA1(&o_decoded_field->a.eventA1, buff, bits_iter, asn_error);
		break;

	case EVENTTRIGGERCONFIG_EVENTID_EVENTA2:
		DecodeEventTriggerConfig_eventA2(&o_decoded_field->a.eventA2, buff, bits_iter, asn_error);
		break;

	case EVENTTRIGGERCONFIG_EVENTID_EVENTA3:
		DecodeEventTriggerConfig_eventA3(&o_decoded_field->a.eventA3, buff, bits_iter, asn_error);
		break;

	case EVENTTRIGGERCONFIG_EVENTID_EVENTA4:
		DecodeEventTriggerConfig_eventA4(&o_decoded_field->a.eventA4, buff, bits_iter, asn_error);
		break;

	case EVENTTRIGGERCONFIG_EVENTID_EVENTA5:
		DecodeEventTriggerConfig_eventA5(&o_decoded_field->a.eventA5, buff, bits_iter, asn_error);
		break;

	case EVENTTRIGGERCONFIG_EVENTID_EVENTA6:
		DecodeEventTriggerConfig_eventA6(&o_decoded_field->a.eventA6, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeEventTriggerConfig_reportAmount(
	EventTriggerConfig_reportAmount_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeEventTriggerConfig_reportAddNeighMeas(
	EventTriggerConfig_reportAddNeighMeas_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeEventTriggerConfig(
	EventTriggerConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->reportQuantityRsIndexes_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNrofRSIndexesToReport_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->reportAddNeighMeas_exist = Get_bits(buff, 1, bits_iter);
	DecodeEventTriggerConfig_eventId(&o_decoded_field->eventId, buff, bits_iter, asn_error);
	DecodeNR_RS_Type(&o_decoded_field->rsType, buff, bits_iter, asn_error);
	DecodeReportInterval(&o_decoded_field->reportInterval, buff, bits_iter, asn_error);
	DecodeEventTriggerConfig_reportAmount(&o_decoded_field->reportAmount, buff, bits_iter, asn_error);
	DecodeMeasReportQuantity(&o_decoded_field->reportQuantityCell, buff, bits_iter, asn_error);
	o_decoded_field->maxReportCells = Get_bits(buff, 3, bits_iter) + 1;
	if(o_decoded_field->reportQuantityRsIndexes_exist == TRUE)
	{
		DecodeMeasReportQuantity(&o_decoded_field->reportQuantityRsIndexes, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxNrofRSIndexesToReport_exist == TRUE)
	{
		o_decoded_field->maxNrofRSIndexesToReport = Get_bits(buff, 5, bits_iter) + 1;
	}

	o_decoded_field->includeBeamMeasurements = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->reportAddNeighMeas_exist == TRUE)
	{
		DecodeEventTriggerConfig_reportAddNeighMeas(&o_decoded_field->reportAddNeighMeas, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

