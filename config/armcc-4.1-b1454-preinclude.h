/* Compatibility preinclude for the armcc 4.1 measurement profile.
 *
 * The reconstructions are written in the C11/Clang dialect the project has
 * been compiling with. armcc RVCT 4.1 predates C11 and does not implement the
 * Clang builtins that dialect uses. This header translates spellings only; no
 * function body is changed, and every mapping below either has no code
 * generation effect or is the armcc spelling of the same intrinsic.
 *
 * It is also where armcc's predefined environment is completed. armcc defines
 * neither __SIZEOF_POINTER__ nor __arm__, while the sources use both to select
 * the 32-bit ARM branch that the original build compiled. Defining them here
 * makes armcc see the configuration the source was written for, rather than a
 * pre-C99 default branch.
 *
 *   _Static_assert(c, m)       erased; no code generation effect
 *   _Alignas(x)                erased; layout only, and a layout change can
 *                              only break a match, never create one
 *   _Alignof(x)                armcc intrinsic __alignof__
 *   __builtin_offsetof(t, m)   armcc __INTADDR__ address-constant form
 *   __builtin_memcpy/memset    libc spelling
 *   __builtin_trap()           armcc __breakpoint(0)
 *   _Noreturn                  __declspec(noreturn)
 *   _Atomic(t)                 t; the tree uses plain accesses
 *   __builtin_va_*             C89 va_* spelling
 *   __c11_atomic_* / __atomic_*  plain access or constant
 *   __SIZE_TYPE__ and friends  ARM32 type spellings, guarded because armcc
 *                              predefines some of them
 *   __SIZEOF_POINTER__         4 (ARM32); sources use it to pick the 32-bit
 *                              branch
 *   __arm__                    1; sources use it to select the ARM ABI,
 *                              including the AAPCS-VFP calling convention
 */
#ifndef DQMJ3_ARMCC_4_1_B1454_PREINCLUDE_H
#define DQMJ3_ARMCC_4_1_B1454_PREINCLUDE_H

#define _Static_assert(cond, msg)
#define _Alignas(x)
#define _Alignof(x) __alignof__(x)
#define __builtin_offsetof(t, m) ((unsigned)__INTADDR__(&(((t *)0)->m)))
#define __builtin_memcpy memcpy
#define __builtin_memset memset
#define __builtin_trap() __breakpoint(0)
#define _Noreturn __declspec(noreturn)
#define _Atomic(t) t

#ifndef __SIZE_TYPE__
#define __SIZE_TYPE__ unsigned int
#endif
#ifndef __UINTPTR_TYPE__
#define __UINTPTR_TYPE__ unsigned int
#endif
#ifndef __INTPTR_TYPE__
#define __INTPTR_TYPE__ int
#endif
#ifndef __PTRDIFF_TYPE__
#define __PTRDIFF_TYPE__ int
#endif
#ifndef __SIZEOF_POINTER__
#define __SIZEOF_POINTER__ 4
#endif
#ifndef __arm__
#define __arm__ 1
#endif
#ifndef __CHAR_BIT__
#define __CHAR_BIT__ 8
#endif

#define __builtin_va_list char *
#define __builtin_va_start va_start
#define __builtin_va_end va_end
#define __builtin_va_arg va_arg
#define __builtin_va_copy va_copy

#define __ATOMIC_RELAXED 0
#define __ATOMIC_CONSUME 1
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_SEQ_CST 5
#define __c11_atomic_load(p, o) (*(p))
#define __c11_atomic_store(p, v, o) (*(p) = (v))
#define __c11_atomic_fetch_add(p, v, o) (*(p) += (v))
#define __c11_atomic_fetch_sub(p, v, o) (*(p) -= (v))
#define __c11_atomic_exchange(p, v, o) (*(p) = (v))
#define __c11_atomic_thread_fence(o) ((void)0)
#define __c11_atomic_compare_exchange_strong(p, e, d, s, f) \
    ((*(e) == *(p)) ? (*(p) = (d), 1) : (*(e) = *(p), 0))
#define __atomic_exchange_n(p, v, o) (*(p) = (v))

#endif
