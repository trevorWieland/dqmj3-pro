/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00140e3c .. 0014871c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"



void fn_00140e3c(int param_1,undefined4 param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x17c) = param_2;
  *(uint *)(param_1 + 0x180) = param_3 >> 2;
  fn_00158514(param_1,param_1 + 0x34,0x20);
  fn_00158514(param_1 + 0xb4,param_1 + 0xe8,0x21);
  *(undefined1 *)(param_1 + 0x18d) = 1;
  return;
}



undefined4 fn_001411b8(int param_1,undefined4 *param_2)

{
  if (*(undefined4 **)(param_1 + 0x170) == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x16c) = param_2;
  }
  else {
    **(undefined4 **)(param_1 + 0x170) = param_2;
  }
  *(undefined4 **)(param_1 + 0x170) = param_2;
  *param_2 = 0;
  return *(undefined4 *)(param_1 + 0x174);
}



int fn_00141340(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      fn_0018a33c();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return param_1;
}



void fn_0014136c(int param_1)

{
  fn_0013c500(param_1 + 0x1c4);
  return;
}



int fn_00141544(undefined4 param_1,int param_2)

{
  return (param_2 + 1) * 0x1b8;
}



int fn_001416fc(undefined4 param_1,int param_2)

{
  return param_2 * 0x60;
}



void fn_0014224c(undefined4 *param_1)

{
  if (*(char *)(param_1 + 10) != '\0') {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return;
}



void fn_001432a0(int param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  *(undefined1 *)(param_1 + 10) = 3;
  *(undefined1 *)(param_1 + 0xb) = 5;
  *(undefined1 *)(param_1 + 0x12) = 0x19;
  *(undefined1 *)(param_1 + 0x13) = 0x54;
  return;
}



/* script_native_register -- 0x00143de8, 28 bytes, ARM, 131 call sites, byte-identical.
 *
 * Registers one script native on the context's binding table and reports whether
 * the registration succeeded. Every call site is a registration block: r0 is the
 * script context, r1 points at the binding name (loaded with adr from the block's
 * own literal pool) and r2 holds the native's address.
 *
 * The body only names r0: it loads the table word at context->[4]->[4] and calls
 * the shared insertion routine 0x00154184, which receives (table, name, function)
 * because the body leaves r1 and r2 exactly as the caller passed them. That is why
 * the definition below declares one parameter; the other two travel implicitly.
 * It is also why config/script-natives.json can record 0x00143de8 as the
 * registrar: 131 registration blocks reach it, each with its own name/function.
 *
 * Evidence: the registration block at 0x0011d1bc registers Wait_, IsWaitEnd_,
 * End_ and PlaySE_ in order through this one call, and 0x00154184 is reached
 * with the table in r0 and the caller's name/function still live.
 */
bool script_native_register(int context)

{
  int iVar1;
  
  iVar1 = fn_00154184(*(undefined4 *)(*(int *)(context + 4) + 4));
  return iVar1 != 0;
}



bool fn_00143e04(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001541ec(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  return iVar1 != 0;
}



bool fn_00143e20(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0015427c(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  return iVar1 != 0;
}



/* engine_allocate -- 0x00145b00, 8 bytes, ARM, 1,710 call sites, byte-identical.
 *
 * Returns a heap block of `size` bytes at alignment 4 through the engine heap
 * interface: 0x001287dc tests the heap-enabled byte at 0x0089a508 and tail-calls
 * heap->vtable->allocate(heap, size, 4), returning zero when no heap is bound.
 *
 * Every call site also loads the constant pointer 0x00812c8c into r1, so the
 * original signature had a second argument; the body overwrites r1 with 4 and
 * drops it. The second argument is therefore dead in this build and is not
 * declared here.
 *
 * Evidence: all 1,710 call sites test the result and construct the block
 * immediately (`if (p) construct(p); field = p;`), and the callee's dispatch is
 * visible in its own bytes. Unknown: what the 0x00812c8c tag means (it is a
 * float/data blob, not a name) and why the original signature carries it.
 */
void engine_allocate(undefined4 size)

{
  fn_001287dc(size,4);
  return;
}



void fn_00146df8(int param_1,int param_2)

{
  *(uint *)(*(int *)(param_1 + 0x34) + 8) =
       ((*(int *)(param_2 + 4) + *(int *)(param_2 + 8)) - *(int *)(param_1 + 0x34)) - 0x18U >> 3;
  fn_00157bfc(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 4;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



void fn_00148700(undefined4 param_1,undefined4 param_2)

{
  fn_0015b054();
  fn_0015b064(param_2);
  fn_0015b0dc();
  return;
}



void fn_0014871c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return;
}

