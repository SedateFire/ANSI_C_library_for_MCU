#ifndef __BIG_ENDIAN_TO_UINT_H
#define __BIG_ENDIAN_TO_UINT_H
/******************************************************************************/
extern uint_fast16_t big_endian_to_uint16(void *buf);
extern uint_fast32_t big_endian_to_uint32(void *buf);
/***************************************/
extern void big_endian_to_uint16(void *buf, uint_fast16_t num);
extern void big_endian_to_uint32(void *buf, uint_fast32_t num);
/******************************************************************************/
#endif


