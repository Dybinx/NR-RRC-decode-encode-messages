/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * radio_link_monitoring_rs_id.h - this is the header file for message: RadioLinkMonitoringRS-Id
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RADIO_LINK_MONITORING_RS_ID_H_
#define _RADIO_LINK_MONITORING_RS_ID_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             value;
}RadioLinkMonitoringRS_Id_t;
extern void EncodeRadioLinkMonitoringRS_Id(
	RadioLinkMonitoringRS_Id_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRadioLinkMonitoringRS_Id(
	RadioLinkMonitoringRS_Id_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
