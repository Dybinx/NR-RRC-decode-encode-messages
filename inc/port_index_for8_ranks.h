/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * port_index_for8_ranks.h - this is the header file for message: PortIndexFor8Ranks
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PORT_INDEX_FOR8_RANKS_H_
#define _PORT_INDEX_FOR8_RANKS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "port_index8.h"
#include "port_index8.h"
#include "port_index8.h"
#include "port_index8.h"
#include "port_index8.h"
#include "port_index8.h"
#include "port_index8.h"
#include "port_index8.h"
#include "port_index4.h"
#include "port_index4.h"
#include "port_index4.h"
#include "port_index4.h"
#include "port_index2.h"
#include "port_index2.h"


typedef struct {
	uint32                                                             length;
	PortIndex8_t                                                       elm[2];
}PortIndexFor8Ranks_rank2_8_t;


typedef struct {
	uint32                                                             length;
	PortIndex8_t                                                       elm[3];
}PortIndexFor8Ranks_rank3_8_t;


typedef struct {
	uint32                                                             length;
	PortIndex8_t                                                       elm[4];
}PortIndexFor8Ranks_rank4_8_t;


typedef struct {
	uint32                                                             length;
	PortIndex8_t                                                       elm[5];
}PortIndexFor8Ranks_rank5_8_t;


typedef struct {
	uint32                                                             length;
	PortIndex8_t                                                       elm[6];
}PortIndexFor8Ranks_rank6_8_t;


typedef struct {
	uint32                                                             length;
	PortIndex8_t                                                       elm[7];
}PortIndexFor8Ranks_rank7_8_t;


typedef struct {
	uint32                                                             length;
	PortIndex8_t                                                       elm[8];
}PortIndexFor8Ranks_rank8_8_t;


typedef struct {
	BOOLEAN                                                            rank1_8_exist;
	PortIndex8_t                                                       rank1_8;
	BOOLEAN                                                            rank2_8_exist;
	PortIndexFor8Ranks_rank2_8_t                                       rank2_8;
	BOOLEAN                                                            rank3_8_exist;
	PortIndexFor8Ranks_rank3_8_t                                       rank3_8;
	BOOLEAN                                                            rank4_8_exist;
	PortIndexFor8Ranks_rank4_8_t                                       rank4_8;
	BOOLEAN                                                            rank5_8_exist;
	PortIndexFor8Ranks_rank5_8_t                                       rank5_8;
	BOOLEAN                                                            rank6_8_exist;
	PortIndexFor8Ranks_rank6_8_t                                       rank6_8;
	BOOLEAN                                                            rank7_8_exist;
	PortIndexFor8Ranks_rank7_8_t                                       rank7_8;
	BOOLEAN                                                            rank8_8_exist;
	PortIndexFor8Ranks_rank8_8_t                                       rank8_8;
}PortIndexFor8Ranks_portIndex8_t;


typedef struct {
	uint32                                                             length;
	PortIndex4_t                                                       elm[2];
}PortIndexFor8Ranks_rank2_4_t;


typedef struct {
	uint32                                                             length;
	PortIndex4_t                                                       elm[3];
}PortIndexFor8Ranks_rank3_4_t;


typedef struct {
	uint32                                                             length;
	PortIndex4_t                                                       elm[4];
}PortIndexFor8Ranks_rank4_4_t;


typedef struct {
	BOOLEAN                                                            rank1_4_exist;
	PortIndex4_t                                                       rank1_4;
	BOOLEAN                                                            rank2_4_exist;
	PortIndexFor8Ranks_rank2_4_t                                       rank2_4;
	BOOLEAN                                                            rank3_4_exist;
	PortIndexFor8Ranks_rank3_4_t                                       rank3_4;
	BOOLEAN                                                            rank4_4_exist;
	PortIndexFor8Ranks_rank4_4_t                                       rank4_4;
}PortIndexFor8Ranks_portIndex4_t;


typedef struct {
	uint32                                                             length;
	PortIndex2_t                                                       elm[2];
}PortIndexFor8Ranks_rank2_2_t;


typedef struct {
	BOOLEAN                                                            rank1_2_exist;
	PortIndex2_t                                                       rank1_2;
	BOOLEAN                                                            rank2_2_exist;
	PortIndexFor8Ranks_rank2_2_t                                       rank2_2;
}PortIndexFor8Ranks_portIndex2_t;


typedef struct {
	uint32                                                             dummy;
}PortIndexFor8Ranks_portIndex1_t;


typedef enum {
	PORTINDEXFOR8RANKS_PORTINDEX8,
	PORTINDEXFOR8RANKS_PORTINDEX4,
	PORTINDEXFOR8RANKS_PORTINDEX2,
	PORTINDEXFOR8RANKS_PORTINDEX1,
	PORTINDEXFOR8RANKS_max = 0x7FFFFFFF
}PortIndexFor8Ranks_e;


/* union corresponding asn: PortIndexFor8Ranks */
typedef union {
	PortIndexFor8Ranks_portIndex8_t                                    portIndex8;
	PortIndexFor8Ranks_portIndex4_t                                    portIndex4;
	PortIndexFor8Ranks_portIndex2_t                                    portIndex2;
	PortIndexFor8Ranks_portIndex1_t                                    portIndex1;
}PortIndexFor8Ranks_u;


/* struct corresponding asn: PortIndexFor8Ranks */
typedef struct {
	PortIndexFor8Ranks_e                                               type;
	PortIndexFor8Ranks_u                                               a;
}PortIndexFor8Ranks_t;


extern void EncodePortIndexFor8Ranks(
	PortIndexFor8Ranks_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePortIndexFor8Ranks(
	PortIndexFor8Ranks_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
