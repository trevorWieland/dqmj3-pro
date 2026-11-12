/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 005614c4 .. 00566c30.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_005614c4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006e62b4();
  if (iVar1 != 0xffff) {
    *(short *)(*(int *)(param_1 + 0xc) + 6) = (short)iVar1;
  }
  return iVar1 != 0xffff;
}



void fn_00562098(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void fn_00566c30(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = -1;
  }
  *(int *)(param_1 + 0x1a0) = param_2;
  return;
}

