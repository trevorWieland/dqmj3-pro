/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0037cf4c .. 00382170.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0037cf4c(int param_1,byte param_2)

{
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe | param_2;
  *(byte *)(param_1 + 0x29) = param_2;
  return;
}



void fn_003808f4(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = fn_002c11d0(param_1,1,0);
  *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0xe7) = param_2;
  return;
}



void fn_00382170(int *param_1)

{
  (**(code **)(*param_1 + 0x110))(param_1,6,0,0,1);
  return;
}

