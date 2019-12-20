/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_associated_report_config_info.h - this is the header file for message: CSI-AssociatedReportConfigInfo
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_ASSOCIATED_REPORT_CONFIG_INFO_H_
#define _CSI_ASSOCIATED_REPORT_CONFIG_INFO_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_report_config_id.h"
#include "tci_state_id.h"


typedef struct {
	uint32                                                             length;
	TCI_StateId_t                                                      elm[maxNrofAP_CSI_RS_ResourcesPerSet];
}CSI_AssociatedReportConfigInfo_qcl_info_t;


typedef struct {
	uint32                                                             resourceSet;
	BOOLEAN                                                            qcl_info_exist;
	CSI_AssociatedReportConfigInfo_qcl_info_t                          qcl_info;
}CSI_AssociatedReportConfigInfo_nzp_CSI_RS_t;


typedef enum {
	CSI_ASSOCIATEDREPORTCONFIGINFO_RESOURCESFORCHANNEL_NZP_CSI_RS,
	CSI_ASSOCIATEDREPORTCONFIGINFO_RESOURCESFORCHANNEL_CSI_SSB_RESOURCESET,
	CSI_ASSOCIATEDREPORTCONFIGINFO_RESOURCESFORCHANNEL_max = 0x7FFFFFFF
}CSI_AssociatedReportConfigInfo_resourcesForChannel_e;


/* union corresponding asn: CSI_AssociatedReportConfigInfo_resourcesForChannel */
typedef union {
	CSI_AssociatedReportConfigInfo_nzp_CSI_RS_t                        nzp_CSI_RS;
	uint32                                                             csi_SSB_ResourceSet;
}CSI_AssociatedReportConfigInfo_resourcesForChannel_u;


/* struct corresponding asn: CSI_AssociatedReportConfigInfo_resourcesForChannel */
typedef struct {
	CSI_AssociatedReportConfigInfo_resourcesForChannel_e               type;
	CSI_AssociatedReportConfigInfo_resourcesForChannel_u               a;
}CSI_AssociatedReportConfigInfo_resourcesForChannel_t;


typedef struct {
	CSI_ReportConfigId_t                                               reportConfigId;
	CSI_AssociatedReportConfigInfo_resourcesForChannel_t               resourcesForChannel;
	BOOLEAN                                                            csi_IM_ResourcesforInteference_exist;
	uint32                                                             csi_IM_ResourcesforInteference;
	BOOLEAN                                                            nzp_CSI_RS_ResourcesforInterference_exist;
	uint32                                                             nzp_CSI_RS_ResourcesforInterference;
	/* Extension marker start. */
}CSI_AssociatedReportConfigInfo_t;


extern void EncodeCSI_AssociatedReportConfigInfo(
	CSI_AssociatedReportConfigInfo_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_AssociatedReportConfigInfo(
	CSI_AssociatedReportConfigInfo_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
