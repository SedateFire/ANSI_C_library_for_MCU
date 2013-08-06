#ifndef __BIG_ENDIAN_TO_UINT_H__
#define __BIG_ENDIAN_TO_UINT_H__
/******************************************************************************/
extern uint_fast16_t big_endian_to_uint16(void const *buf);
extern uint_fast32_t big_endian_to_uint32(void const *buf);
/***************************************/
extern void uint16_to_big_endian(void *buf, uint_fast16_t num);
extern void uint32_to_big_endian(void *buf, uint_fast32_t num);
/******************************************************************************/
#endif	 

