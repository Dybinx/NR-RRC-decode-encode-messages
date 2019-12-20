/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_resources.h - this is the header file for message: SRS-Resources
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRS_RESOURCES_H_
#define _SRS_RESOURCES_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	SRS_RESOURCES_MAXNUMBERAPERIODICSRS_PERBWP_N1,
	SRS_RESOURCES_MAXNUMBERAPERIODICSRS_PERBWP_N2,
	SRS_RESOURCES_MAXNUMBERAPERIODICSRS_PERBWP_N4,
	SRS_RESOURCES_MAXNUMBERAPERIODICSRS_PERBWP_N8,
	SRS_RESOURCES_MAXNUMBERAPERIODICSRS_PERBWP_N16,
	SRS_RESOURCES_MAXNUMBERAPERIODICSRS_PERBWP_max = 0x7FFFFFFF
}SRS_Resources_maxNumberAperiodicSRS_PerBWP_e;


typedef enum {
	SRS_RESOURCES_MAXNUMBERPERIODICSRS_PERBWP_N1,
	SRS_RESOURCES_MAXNUMBERPERIODICSRS_PERBWP_N2,
	SRS_RESOURCES_MAXNUMBERPERIODICSRS_PERBWP_N4,
	SRS_RESOURCES_MAXNUMBERPERIODICSRS_PERBWP_N8,
	SRS_RESOURCES_MAXNUMBERPERIODICSRS_PERBWP_N16,
	SRS_RESOURCES_MAXNUMBERPERIODICSRS_PERBWP_max = 0x7FFFFFFF
}SRS_Resources_maxNumberPeriodicSRS_PerBWP_e;


typedef enum {
	SRS_RESOURCES_MAXNUMBERSEMIPERSITENTSRS_PERBWP_N1,
	SRS_RESOURCES_MAXNUMBERSEMIPERSITENTSRS_PERBWP_N2,
	SRS_RESOURCES_MAXNUMBERSEMIPERSITENTSRS_PERBWP_N4,
	SRS_RESOURCES_MAXNUMBERSEMIPERSITENTSRS_PERBWP_N8,
	SRS_RESOURCES_MAXNUMBERSEMIPERSITENTSRS_PERBWP_N16,
	SRS_RESOURCES_MAXNUMBERSEMIPERSITENTSRS_PERBWP_max = 0x7FFFFFFF
}SRS_Resources_maxNumberSemiPersitentSRS_PerBWP_e;


typedef enum {
	SRS_RESOURCES_MAXNUMBERSRS_PORTS_PERRESOURCE_N1,
	SRS_RESOURCES_MAXNUMBERSRS_PORTS_PERRESOURCE_N2,
	SRS_RESOURCES_MAXNUMBERSRS_PORTS_PERRESOURCE_N4,
	SRS_RESOURCES_MAXNUMBERSRS_PORTS_PERRESOURCE_max = 0x7FFFFFFF
}SRS_Resources_maxNumberSRS_Ports_PerResource_e;


typedef struct {
	SRS_Resources_maxNumberAperiodicSRS_PerBWP_e                       maxNumberAperiodicSRS_PerBWP;
	uint32                                                             maxNumberAperiodicSRS_PerBWP_PerSlot;
	SRS_Resources_maxNumberPeriodicSRS_PerBWP_e                        maxNumberPeriodicSRS_PerBWP;
	uint32                                                             maxNumberPeriodicSRS_PerBWP_PerSlot;
	SRS_Resources_maxNumberSemiPersitentSRS_PerBWP_e                   maxNumberSemiPersitentSRS_PerBWP;
	uint32                                                             maxNumberSP_SRS_PerBWP_PerSlot;
	SRS_Resources_maxNumberSRS_Ports_PerResource_e                     maxNumberSRS_Ports_PerResource;
}SRS_Resources_t;


extern void EncodeSRS_Resources(
	SRS_Resources_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRS_Resources(
	SRS_Resources_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
