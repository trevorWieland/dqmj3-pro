/* Build shim for the measured ARM image: zconf.h asks for the platform's
 * <sys/types.h> only to spell off_t, and the SDK build environment supplied
 * one.  ARM32 long is the off_t width the rest of zconf.h assumes. */
#ifndef ZLIB_BUILD_SHIM_SYS_TYPES_H
#define ZLIB_BUILD_SHIM_SYS_TYPES_H
typedef long off_t;
#endif
