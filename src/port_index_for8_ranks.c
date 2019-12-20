/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * port_index_for8_ranks.c - codec the message of PortIndexFor8Ranks
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "port_index_for8_ranks.h"


void EncodePortIndexFor8Ranks_rank2_8(
	PortIndexFor8Ranks_rank2_8_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndex8(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePortIndexFor8Ranks_rank3_8(
	PortIndexFor8Ranks_rank3_8_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndex8(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePortIndexFor8Ranks_rank4_8(
	PortIndexFor8Ranks_rank4_8_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndex8(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePortIndexFor8Ranks_rank5_8(
	PortIndexFor8Ranks_rank5_8_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndex8(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePortIndexFor8Ranks_rank6_8(
	PortIndexFor8Ranks_rank6_8_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndex8(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePortIndexFor8Ranks_rank7_8(
	PortIndexFor8Ranks_rank7_8_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndex8(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePortIndexFor8Ranks_rank8_8(
	PortIndexFor8Ranks_rank8_8_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndex8(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePortIndexFor8Ranks_portIndex8(
	PortIndexFor8Ranks_portIndex8_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->rank1_8_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank2_8_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank3_8_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank4_8_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank5_8_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank6_8_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank7_8_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank8_8_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank1_8_exist == TRUE)
	{
		EncodePortIndex8(&i_encoded_field->rank1_8, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rank2_8_exist == TRUE)
	{
		EncodePortIndexFor8Ranks_rank2_8(&i_encoded_field->rank2_8, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rank3_8_exist == TRUE)
	{
		EncodePortIndexFor8Ranks_rank3_8(&i_encoded_field->rank3_8, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rank4_8_exist == TRUE)
	{
		EncodePortIndexFor8Ranks_rank4_8(&i_encoded_field->rank4_8, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rank5_8_exist == TRUE)
	{
		EncodePortIndexFor8Ranks_rank5_8(&i_encoded_field->rank5_8, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rank6_8_exist == TRUE)
	{
		EncodePortIndexFor8Ranks_rank6_8(&i_encoded_field->rank6_8, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rank7_8_exist == TRUE)
	{
		EncodePortIndexFor8Ranks_rank7_8(&i_encoded_field->rank7_8, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rank8_8_exist == TRUE)
	{
		EncodePortIndexFor8Ranks_rank8_8(&i_encoded_field->rank8_8, buff, bits_iter, asn_error);
	}

}

void EncodePortIndexFor8Ranks_rank2_4(
	PortIndexFor8Ranks_rank2_4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndex4(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePortIndexFor8Ranks_rank3_4(
	PortIndexFor8Ranks_rank3_4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndex4(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePortIndexFor8Ranks_rank4_4(
	PortIndexFor8Ranks_rank4_4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndex4(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePortIndexFor8Ranks_portIndex4(
	PortIndexFor8Ranks_portIndex4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->rank1_4_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank2_4_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank3_4_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank4_4_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank1_4_exist == TRUE)
	{
		EncodePortIndex4(&i_encoded_field->rank1_4, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rank2_4_exist == TRUE)
	{
		EncodePortIndexFor8Ranks_rank2_4(&i_encoded_field->rank2_4, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rank3_4_exist == TRUE)
	{
		EncodePortIndexFor8Ranks_rank3_4(&i_encoded_field->rank3_4, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rank4_4_exist == TRUE)
	{
		EncodePortIndexFor8Ranks_rank4_4(&i_encoded_field->rank4_4, buff, bits_iter, asn_error);
	}

}

void EncodePortIndexFor8Ranks_rank2_2(
	PortIndexFor8Ranks_rank2_2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndex2(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePortIndexFor8Ranks_portIndex2(
	PortIndexFor8Ranks_portIndex2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->rank1_2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank2_2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rank1_2_exist == TRUE)
	{
		EncodePortIndex2(&i_encoded_field->rank1_2, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rank2_2_exist == TRUE)
	{
		EncodePortIndexFor8Ranks_rank2_2(&i_encoded_field->rank2_2, buff, bits_iter, asn_error);
	}

}

void EncodePortIndexFor8Ranks_portIndex1(
	PortIndexFor8Ranks_portIndex1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePortIndexFor8Ranks(
	PortIndexFor8Ranks_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case PORTINDEXFOR8RANKS_PORTINDEX8:
		EncodePortIndexFor8Ranks_portIndex8(&i_encoded_field->a.portIndex8, buff, bits_iter, asn_error);
		break;

	case PORTINDEXFOR8RANKS_PORTINDEX4:
		EncodePortIndexFor8Ranks_portIndex4(&i_encoded_field->a.portIndex4, buff, bits_iter, asn_error);
		break;

	case PORTINDEXFOR8RANKS_PORTINDEX2:
		EncodePortIndexFor8Ranks_portIndex2(&i_encoded_field->a.portIndex2, buff, bits_iter, asn_error);
		break;

	case PORTINDEXFOR8RANKS_PORTINDEX1:
		EncodePortIndexFor8Ranks_portIndex1(&i_encoded_field->a.portIndex1, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodePortIndexFor8Ranks_rank2_8(
	PortIndexFor8Ranks_rank2_8_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 2;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndex8(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePortIndexFor8Ranks_rank3_8(
	PortIndexFor8Ranks_rank3_8_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 3;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndex8(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePortIndexFor8Ranks_rank4_8(
	PortIndexFor8Ranks_rank4_8_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 4;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndex8(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePortIndexFor8Ranks_rank5_8(
	PortIndexFor8Ranks_rank5_8_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 5;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndex8(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePortIndexFor8Ranks_rank6_8(
	PortIndexFor8Ranks_rank6_8_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 6;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndex8(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePortIndexFor8Ranks_rank7_8(
	PortIndexFor8Ranks_rank7_8_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 7;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndex8(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePortIndexFor8Ranks_rank8_8(
	PortIndexFor8Ranks_rank8_8_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 8;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndex8(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePortIndexFor8Ranks_portIndex8(
	PortIndexFor8Ranks_portIndex8_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->rank1_8_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rank2_8_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rank3_8_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rank4_8_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rank5_8_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rank6_8_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rank7_8_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rank8_8_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->rank1_8_exist == TRUE)
	{
		DecodePortIndex8(&o_decoded_field->rank1_8, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rank2_8_exist == TRUE)
	{
		DecodePortIndexFor8Ranks_rank2_8(&o_decoded_field->rank2_8, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rank3_8_exist == TRUE)
	{
		DecodePortIndexFor8Ranks_rank3_8(&o_decoded_field->rank3_8, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rank4_8_exist == TRUE)
	{
		DecodePortIndexFor8Ranks_rank4_8(&o_decoded_field->rank4_8, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rank5_8_exist == TRUE)
	{
		DecodePortIndexFor8Ranks_rank5_8(&o_decoded_field->rank5_8, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rank6_8_exist == TRUE)
	{
		DecodePortIndexFor8Ranks_rank6_8(&o_decoded_field->rank6_8, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rank7_8_exist == TRUE)
	{
		DecodePortIndexFor8Ranks_rank7_8(&o_decoded_field->rank7_8, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rank8_8_exist == TRUE)
	{
		DecodePortIndexFor8Ranks_rank8_8(&o_decoded_field->rank8_8, buff, bits_iter, asn_error);
	}

}

void DecodePortIndexFor8Ranks_rank2_4(
	PortIndexFor8Ranks_rank2_4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 2;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndex4(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePortIndexFor8Ranks_rank3_4(
	PortIndexFor8Ranks_rank3_4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 3;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndex4(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePortIndexFor8Ranks_rank4_4(
	PortIndexFor8Ranks_rank4_4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 4;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndex4(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePortIndexFor8Ranks_portIndex4(
	PortIndexFor8Ranks_portIndex4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->rank1_4_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rank2_4_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rank3_4_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rank4_4_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->rank1_4_exist == TRUE)
	{
		DecodePortIndex4(&o_decoded_field->rank1_4, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rank2_4_exist == TRUE)
	{
		DecodePortIndexFor8Ranks_rank2_4(&o_decoded_field->rank2_4, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rank3_4_exist == TRUE)
	{
		DecodePortIndexFor8Ranks_rank3_4(&o_decoded_field->rank3_4, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rank4_4_exist == TRUE)
	{
		DecodePortIndexFor8Ranks_rank4_4(&o_decoded_field->rank4_4, buff, bits_iter, asn_error);
	}

}

void DecodePortIndexFor8Ranks_rank2_2(
	PortIndexFor8Ranks_rank2_2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 2;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndex2(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePortIndexFor8Ranks_portIndex2(
	PortIndexFor8Ranks_portIndex2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->rank1_2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rank2_2_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->rank1_2_exist == TRUE)
	{
		DecodePortIndex2(&o_decoded_field->rank1_2, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rank2_2_exist == TRUE)
	{
		DecodePortIndexFor8Ranks_rank2_2(&o_decoded_field->rank2_2, buff, bits_iter, asn_error);
	}

}

void DecodePortIndexFor8Ranks_portIndex1(
	PortIndexFor8Ranks_portIndex1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePortIndexFor8Ranks(
	PortIndexFor8Ranks_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PORTINDEXFOR8RANKS_PORTINDEX8:
		DecodePortIndexFor8Ranks_portIndex8(&o_decoded_field->a.portIndex8, buff, bits_iter, asn_error);
		break;

	case PORTINDEXFOR8RANKS_PORTINDEX4:
		DecodePortIndexFor8Ranks_portIndex4(&o_decoded_field->a.portIndex4, buff, bits_iter, asn_error);
		break;

	case PORTINDEXFOR8RANKS_PORTINDEX2:
		DecodePortIndexFor8Ranks_portIndex2(&o_decoded_field->a.portIndex2, buff, bits_iter, asn_error);
		break;

	case PORTINDEXFOR8RANKS_PORTINDEX1:
		DecodePortIndexFor8Ranks_portIndex1(&o_decoded_field->a.portIndex1, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

