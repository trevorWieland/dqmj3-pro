/* The integer widths the recovered signatures are written in.
 *
 * uptr is an integer the width of a pointer on the target being compiled:
 * 32 bits on the measured ARM image, 64 bits on the public x86-64 and
 * AArch64 component builds. A 32-bit pointer field is widened through it so
 * the source compiles off the measured target without a pointer cast that
 * narrows or widens silently.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
#if __SIZEOF_POINTER__ == 8
typedef unsigned long long uptr;
#else
typedef unsigned long uptr;
/* These units transcribe the original instruction shapes, which cast image
 * addresses to and from pointers; on the 64-bit host targets that is an error
 * under -Werror and is expected here. */
#ifdef __clang__
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"
#pragma clang diagnostic ignored "-Wpointer-to-int-cast"
#pragma clang diagnostic ignored "-Wint-conversion"
#pragma clang diagnostic ignored "-Wconstant-conversion"
#endif
#endif
