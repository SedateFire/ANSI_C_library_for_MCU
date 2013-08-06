#include <stdint.h>
#include <stddef.h>
#include "big_endian_to_uint.h"
/******************************************************************************/
#ifdef DEBUG_ENABLE
#define ASSERT_POINTER(p)   \
if (NULL == (p))            \
{                           \
    return;                 \
}
#define ASSERT_POINTER_RETUTN(p, ret)   \
if (NULL == (p))            \
{                           \
    return ret;                 \
}
#else
#define ASSERT_POINTER(p)
#define ASSERT_POINTER_RETUTN(p, ret)
#endif
/******************************************************************************/
uint_fast16_t big_endian_to_uint16(void *buf)
{
    uint8_t const * const p = buf;
    return (((uint16_t)p[0]<<8) | ((uint16_t)p[1]<<0));
}
/******************************************************************************/
uint_fast32_t big_endian_to_uint32(void *buf)
{
    uint8_t const * const p = buf;
    return (((uint32_t)p[0]<<24) \
          | ((uint32_t)p[1]<<16) \
          | ((uint32_t)p[2]<< 8) \
          | ((uint32_t)p[3]<< 0));
}
/******************************************************************************/
void big_endian_to_uint16(void *buf, uint_fast16_t num)
{
    uint8_t * p;
    ASSERT_POINTER(buf);
    p = buf;
    p[0] = (uint8_t)(num>>8);
    p[1] = (uint8_t)(num>>0);
}
/******************************************************************************/
uint_fast32_t big_endian_to_uint32(void *buf, uint_fast32_t num)
{
    uint8_t * p;
    ASSERT_POINTER(buf);
    p = buf;
    p[0] = (uint8_t)(num>>24);
    p[1] = (uint8_t)(num>>16);
    p[2] = (uint8_t)(num>> 8);
    p[3] = (uint8_t)(num>> 0);
}
/******************************************************************************/


