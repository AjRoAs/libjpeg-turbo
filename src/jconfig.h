/* jconfig.h.  Generated manually for Wasm/Zig. */

#define JPEG_LIB_VERSION 62
#define LIBJPEG_TURBO_VERSION "3.1.0"
#define LIBJPEG_TURBO_VERSION_NUMBER 3001000

#define C_ARITH_CODING_SUPPORTED 1
#define D_ARITH_CODING_SUPPORTED 1
#define MEM_SRCDST_SUPPORTED 1
#ifndef BITS_IN_JSAMPLE
#define BITS_IN_JSAMPLE 8
#endif


#define HAVE_BOOLEAN
#ifndef __RPCNDR_H__
typedef unsigned char boolean;
#endif

#define HAVE_PROTOTYPES 1
#define HAVE_UNSIGNED_CHAR 1
#define HAVE_UNSIGNED_SHORT 1
/* #undef void */
/* #undef const */
/* #undef CHAR_IS_UNSIGNED */
#define HAVE_STDDEF_H 1
#define HAVE_STDLIB_H 1
/* #undef NEED_BSD_STRINGS */
/* #undef NEED_SYS_TYPES_H */
/* #undef NEED_FAR_POINTERS */
/* #undef NEED_SHORT_EXTERNAL_NAMES */
/* #undef INCOMPLETE_TYPES_BROKEN */

#ifdef JPEG_CJPEG_DJPEG
#define BMP_SUPPORTED           /* BMP image file format */
#define GIF_SUPPORTED           /* GIF image file format */
#define PPM_SUPPORTED           /* PBMPLUS PPM/PGM image file format */
/* #undef RLE_SUPPORTED */
#define TARGA_SUPPORTED         /* Targa image file format */
#endif /* JPEG_CJPEG_DJPEG */
