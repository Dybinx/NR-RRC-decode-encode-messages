/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * qcl_info.h - this is the header file for message: QCL-Info
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _QCL_INFO_H_
#define _QCL_INFO_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "serv_cell_index.h"
#include "bwp_id.h"
#include "nzp_csi_rs_resource_id.h"
#include "ssb_index.h"


typedef enum {
	QCL_INFO_REFERENCESIGNAL_CSI_RS,
	QCL_INFO_REFERENCESIGNAL_SSB,
	QCL_INFO_REFERENCESIGNAL_max = 0x7FFFFFFF
}QCL_Info_referenceSignal_e;


/* union corresponding asn: QCL_Info_referenceSignal */
typedef union {
	NZP_CSI_RS_ResourceId_t                                            csi_rs;
	SSB_Index_t                                                        ssb;
}QCL_Info_referenceSignal_u;


/* struct corresponding asn: QCL_Info_referenceSignal */
typedef struct {
	QCL_Info_referenceSignal_e                                         type;
	QCL_Info_referenceSignal_u                                         a;
}QCL_Info_referenceSignal_t;


typedef enum {
	QCL_INFO_QCL_TYPE_TYPEA,
	QCL_INFO_QCL_TYPE_TYPEB,
	QCL_INFO_QCL_TYPE_TYPEC,
	QCL_INFO_QCL_TYPE_TYPED,
	QCL_INFO_QCL_TYPE_max = 0x7FFFFFFF
}QCL_Info_qcl_Type_e;


typedef struct {
	BOOLEAN                                                            cell_exist;
	ServCellIndex_t                                                    cell;
	BOOLEAN                                                            bwp_Id_exist;
	BWP_Id_t                                                           bwp_Id;
	QCL_Info_referenceSignal_t                                         referenceSignal;
	QCL_Info_qcl_Type_e                                                qcl_Type;
	/* Extension marker start. */
}QCL_Info_t;


extern void EncodeQCL_Info(
	QCL_Info_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeQCL_Info(
	QCL_Info_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
