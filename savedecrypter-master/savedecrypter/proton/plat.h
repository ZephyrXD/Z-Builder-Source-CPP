#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#pragma once

#ifndef M_PI
#define M_PI 3.141592f
#endif
/* The following definitions are the same across platforms.  This first
** group are the sanctioned types.
*/
#ifndef _BOOLEAN_DEFINED
typedef  unsigned char      boolean;     /* Boolean value type. */
#define _BOOLEAN_DEFINED
#endif

#ifndef _UINT32_DEFINED
typedef  unsigned long int  uint32;      /* Unsigned 32 bit value */
#define _UINT32_DEFINED
#endif

#ifndef _UINT16_DEFINED
typedef  unsigned short     uint16;      /* Unsigned 16 bit value */
#define _UINT16_DEFINED
#endif

#ifndef _UINT8_DEFINED
typedef  unsigned char      uint8;       /* Unsigned 8  bit value */
#define _UINT8_DEFINED
#endif

#ifndef _INT32_DEFINED
typedef  signed long int    int32;       /* Signed 32 bit value */

//for mysql
#define HAVE_INT32

#define _INT32_DEFINED
#endif

#ifndef _INT16_DEFINED
typedef  signed short       int16;       /* Signed 16 bit value */
#define _INT16_DEFINED
#endif

#ifndef _INT8_DEFINED
typedef  signed char        int8;        /* Signed 8  bit value */
#define _INT8_DEFINED
#endif

#if defined(__GNUC__)
#define __int64 long long
#endif

#ifndef _UINT64_DEFINED
typedef  unsigned __int64   uint64;      /* Unsigned 64 bit value */
#define _UINT64_DEFINED
#endif

#ifndef _INT64_DEFINED
typedef  __int64            int64;       /* Signed 64 bit value */
#define _INT64_DEFINED
#endif

#ifndef _SINT64_DEFINED
typedef  __int64            sint64;       /* Signed 64 bit value */
#define _SINT64_DEFINED
#endif

#ifndef _BYTE_DEFINED
typedef  unsigned char      byte;        /* byte type */
#define  _BYTE_DEFINED
#endif

