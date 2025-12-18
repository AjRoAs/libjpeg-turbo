
#define HAVE_PROTOTYPES 1
#define HAVE_UNSIGNED_CHAR 1
#define HAVE_UNSIGNED_SHORT 1
#undef void
#undef const
#undef inline
#ifndef __cplusplus
#define inline __inline
#endif

#define HAVE_STDDEF_H 1
#define HAVE_STDLIB_H 1
#define HAVE_LOCALE_H 1

// JPEG specific
#define JPEG_CJPEG_DJPEG 1
#define JPEG_INTERNAL_OPTIONS 1
#define C_ARITH_CODING_SUPPORTED 1
#define D_ARITH_CODING_SUPPORTED 1

/* jconfig.h.  Generated manually for WASM.  */

#define JPEG_LIB_VERSION 80
#define LIBJPEG_TURBO_VERSION 3.0.0
#define PACKAGE_NAME "libjpeg-turbo"

#ifndef BITS_IN_JSAMPLE
#define BITS_IN_JSAMPLE 8
#endif
#undef WITH_SIMD
#define HAVE_LOCALE_H 1
#define HAVE_STDDEF_H 1
#define HAVE_STDLIB_H 1
#undef NEED_SYS_TYPES_H
#undef NEED_BSD_STRINGS
#undef INCOMPLETE_TYPES_BROKEN

/* Define "boolean" as unsigned char, not int, per JPEG standard. */
#ifndef __RPCNDR_H__     /* don't conflict if rpcndr.h already read */
#ifndef __TYPES_H__      /* don't conflict if types.h already read */
typedef unsigned char boolean;
#endif
#endif
#define HAVE_BOOLEAN
