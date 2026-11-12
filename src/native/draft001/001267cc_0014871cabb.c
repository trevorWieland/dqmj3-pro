/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0013cd64 .. 0013f7ec.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_0013cd64(void)

{
  int iVar1;
  
  iVar1 = fn_0013bfdc();
  return iVar1 == 4;
}



undefined4 fn_0013e650(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  fn_00125694();
  uVar1 = fn_00150550(param_1,param_2);
  fn_001257a8();
  return uVar1;
}



void fn_0013f7ec(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

