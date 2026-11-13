/* Ghidra decompiler types, spelled so the measured compiler accepts them.
 *
 * The decompiler names a value by its width when it cannot recover a type:
 * undefined1 is one byte, undefined4 is four. They are aliases for the C types
 * of that width, so declaring them changes spelling only, never layout or
 * arithmetic. `code` is a callable with unspecified arguments, which is what
 * Ghidra's `code *` means at every indirect call site in this corpus.
 *
 * Everything below the type vocabulary is a decompiler shape that the census
 * compiler (clang 21, -Werror) diagnoses but armcc accepts: a value narrowed
 * from an address, a shift of an unsigned value written without parentheses, a
 * parameter the body does not use. Each pragma is scoped to this header's
 * translation unit and only silences a warning about a shape the corpus really
 * contains; none changes what the C computes. armcc has no diagnostic groups of
 * this kind and ignores the block.
 */
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"
#pragma clang diagnostic ignored "-Wpointer-to-int-cast"
#pragma clang diagnostic ignored "-Wint-conversion"
#pragma clang diagnostic ignored "-Wshift-op-parentheses"
#pragma clang diagnostic ignored "-Wbitwise-op-parentheses"
#pragma clang diagnostic ignored "-Wparentheses"
#pragma clang diagnostic ignored "-Wconstant-conversion"
#pragma clang diagnostic ignored "-Wenum-conversion"
#pragma clang diagnostic ignored "-Warray-bounds"
#pragma clang diagnostic ignored "-Wtautological-constant-out-of-range-compare"
#pragma clang diagnostic ignored "-Wuninitialized"
#pragma clang diagnostic ignored "-Wsometimes-uninitialized"
#pragma clang diagnostic ignored "-Wsign-compare"
#pragma clang diagnostic ignored "-Wswitch"
#ifdef __clang__
#pragma clang diagnostic ignored "-Wpointer-integer-compare"
#pragma clang diagnostic ignored "-Wliteral-range"
#pragma clang diagnostic ignored "-Wchar-subscripts"
#pragma clang diagnostic ignored "-Wtautological-pointer-compare"
#pragma clang diagnostic ignored "-Wtautological-constant-out-of-range-compare"
#pragma clang diagnostic ignored "-Warray-bounds"
#pragma clang diagnostic ignored "-Wstring-plus-int"
#pragma clang diagnostic ignored "-Wnull-pointer-arithmetic"
#pragma clang diagnostic ignored "-Wdivision-by-zero"
#pragma clang diagnostic ignored "-Wformat"
#pragma clang diagnostic ignored "-Wenum-conversion"
#pragma clang diagnostic ignored "-Wconstant-conversion"
#pragma clang diagnostic ignored "-Wshift-count-overflow"
#pragma clang diagnostic ignored "-Wunsequenced"
#pragma clang diagnostic ignored "-Wreturn-type"
#pragma clang diagnostic ignored "-Wmain"
#ifdef __clang__
#pragma clang diagnostic ignored "-Wcompare-distinct-pointer-types"
#pragma clang diagnostic ignored "-Wreturn-stack-address"
#pragma clang diagnostic ignored "-Wbool-operation"
#pragma clang diagnostic ignored "-Wtautological-compare"
#pragma clang diagnostic ignored "-Wpointer-compare"
#endif
#endif
#pragma clang diagnostic ignored "-Wdeprecated-non-prototype"
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wunused-but-set-variable"
#pragma clang diagnostic ignored "-Wimplicit-function-declaration"
#endif

#ifndef DQMJ3_DRAFT_DECOMPILED_H
#define DQMJ3_DRAFT_DECOMPILED_H

typedef unsigned char      undefined;
typedef unsigned char      undefined1;
typedef unsigned short     undefined2;
typedef unsigned int       undefined3;
typedef unsigned int       undefined4;
typedef unsigned int       undefined5;
typedef unsigned int       undefined6;
typedef unsigned int       undefined7;
typedef unsigned long long undefined8;

/* The decompiler also names three-byte values. A value that narrow has no
 * natural C type; every use in the corpus is a scalar the compiler keeps in a
 * register, where the width is already four bytes, so it is spelled as the
 * signed or unsigned integer of that signedness. */
typedef unsigned int       uint3;
typedef int                int3;
typedef unsigned char      uchar;
typedef unsigned short     ushort;
typedef unsigned int       uint;
typedef unsigned char      byte;
typedef unsigned long long ulonglong;
typedef long long          longlong;
typedef unsigned short     wchar16;
typedef unsigned int       wchar32;
typedef int                code();

/* The decompiler uses `bool` for a value it proved to be 0 or 1. */
typedef _Bool bool;
#define true 1
#define false 0

/* The decompiler emits these when it cannot follow control flow. */
extern void halt_baddata(void);
extern void halt_badinst(void);

/* Bit-field extraction, concatenation and carry helpers the decompiler emits
 * for sub-word and 64-bit operations. Each is a pure spelling of an operation
 * the compiler already performs; none changes a value.
 *
 * The number in a CONCAT name is the width of each half in bytes, high half
 * first: CONCAT31 joins a three-byte high half with a one-byte low half, and
 * CONCAT13 the reverse. Reading it as a bit count instead is the difference
 * between "replace the low byte" and "keep one byte at the top", so the two
 * spellings are written out separately and named for the bytes they move. */
#define CONCAT44(hi, lo) (((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo))
#define CONCAT31(a, b)   ((((unsigned int)(a) & 0xffffff) << 8) | ((unsigned int)(b) & 0xff))
#define CONCAT22(a, b)   ((((unsigned int)(a) & 0xffff) << 16) | ((unsigned int)(b) & 0xffff))
#define CONCAT13(a, b)   ((((unsigned int)(a) & 0xff) << 24) | ((unsigned int)(b) & 0xffffff))
#define CONCAT11(a, b)   ((((unsigned int)(a) & 0xff) << 8) | ((unsigned int)(b) & 0xff))
#define SUB41(v, n)      ((unsigned char)((unsigned int)(v) >> (8 * (n))))
#define SUB42(v, n)      ((unsigned short)((unsigned int)(v) >> (8 * (n))))
#define SUB81(v, n)      ((unsigned char)((unsigned long long)(v) >> (8 * (n))))
#define ZEXT14(v)        ((unsigned short)(unsigned char)(v))
#define ZEXT24(v)        ((unsigned int)(unsigned short)(v))
#define ZEXT12(v)        ((unsigned short)(unsigned char)(v))
#define SEXT14(v)        ((short)(signed char)(v))
#define SEXT24(v)        ((int)(short)(v))
#define SEXT12(v)        ((short)(signed char)(v))
#define SEXT34(v)        ((long long)(int)(v))
#define CARRY4(a, b)     ((unsigned int)((unsigned long long)(a) + (unsigned long long)(b) > 0xffffffffULL))
#define SBORROW4(a, b)   ((int)((long long)(a) - (long long)(b) < -2147483648LL))

/* A software interrupt: Ghidra prints the ARM `swi` as a call, and names the
 * supervisor-call form the same way. Both are the one instruction. */
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
#define software_interrupt(n) __svc(n)
#define SupervisorCall(n)     __svc(n)
#else
static void software_interrupt(int number) { (void)number; }
#endif


/* The decompiler writes this identifier for a path that ends in an undefined
 * instruction. It is not a symbol in the image, so it is given a value rather
 * than an address. */
static undefined4 _UndefinedInstruction;

/* The decompiler writes these for ARM runtime entry points and assembler
 * pseudo-operands that are not symbols in the image. */
static undefined4 _Reset;
static undefined4 NotUsed;

/* The decompiler names values by width, so its pointer types disagree with
 * each other at nearly every assignment. These are the diagnostics the census
 * compiler raises on that spelling; armcc accepts the same code. Scoped to this
 * header, which every corpus unit includes first. */
#ifdef __clang__
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wincompatible-pointer-types-discards-qualifiers"
#pragma clang diagnostic ignored "-Wincompatible-function-pointer-types"
#pragma clang diagnostic ignored "-Wint-conversion"
#pragma clang diagnostic ignored "-Wpointer-sign"
#pragma clang diagnostic ignored "-Wpointer-to-int-cast"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"
#pragma clang diagnostic ignored "-Wc23-extensions"
#pragma clang diagnostic ignored "-Wparentheses"
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wdeprecated-non-prototype"
#pragma clang diagnostic ignored "-Wshift-op-parentheses"
#pragma clang diagnostic ignored "-Wbitwise-op-parentheses"
#pragma clang diagnostic ignored "-Wuninitialized"
#pragma clang diagnostic ignored "-Wsometimes-uninitialized"
#pragma clang diagnostic ignored "-Wsign-compare"
#pragma clang diagnostic ignored "-Wswitch"
#endif
#endif
