/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_results.h - this is the header file for message: MeasResults
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_RESULTS_H_
#define _MEAS_RESULTS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_id.h"
#include "meas_result_serv_mo_list.h"
#include "meas_result_list_nr.h"


typedef enum {
	MEASRESULTS_MEASRESULTNEIGHCELLS_MEASRESULTLISTNR,
	/* Extension marker start. */
	MEASRESULTS_MEASRESULTNEIGHCELLS_max = 0x7FFFFFFF
}MeasResults_measResultNeighCells_e;


/* union corresponding asn: MeasResults_measResultNeighCells */
typedef union {
	MeasResultListNR_t                                                 measResultListNR;
	/* Extension marker start. */
}MeasResults_measResultNeighCells_u;


/* struct corresponding asn: MeasResults_measResultNeighCells */
typedef struct {
	MeasResults_measResultNeighCells_e                                 type;
	MeasResults_measResultNeighCells_u                                 a;
}MeasResults_measResultNeighCells_t;


typedef struct {
	MeasId_t                                                           measId;
	MeasResultServMOList_t                                             measResultServingMOList;
	BOOLEAN                                                            measResultNeighCells_exist;
	MeasResults_measResultNeighCells_t                                 measResultNeighCells;
	/* Extension marker start. */
}MeasResults_t;


extern void EncodeMeasResults(
	MeasResults_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasResults(
	MeasResults_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
