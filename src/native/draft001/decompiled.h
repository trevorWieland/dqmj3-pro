/* Ghidra decompiler types, spelled so the measured compiler accepts them.
 *
 * The decompiler names a value by its width when it cannot recover a type:
 * undefined1 is one byte, undefined4 is four. They are aliases for the C types
 * of that width, so declaring them changes spelling only, never layout or
 * arithmetic. `code` is a callable with unspecified arguments, which is what
 * Ghidra's `code *` means at every indirect call site in this corpus.
 */
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
 * the compiler already performs; none changes a value. */
#define CONCAT44(hi, lo) (((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo))
#define CONCAT31(a, b)   (((unsigned int)(unsigned char)(a) << 24) | ((unsigned int)(b) & 0xffffff))
#define CONCAT22(a, b)   (((unsigned int)(unsigned short)(a) << 16) | (unsigned int)(unsigned short)(b))
#define CONCAT13(a, b)   (((unsigned int)(unsigned char)(a) << 24) | ((unsigned int)(b) & 0xffffff))
#define CONCAT11(a, b)   (((unsigned int)(unsigned char)(a) << 8) | (unsigned int)(unsigned char)(b))
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

#endif
