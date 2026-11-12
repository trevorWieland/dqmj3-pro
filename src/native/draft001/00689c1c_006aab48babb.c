/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0069eed8 .. 0069fb20.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0069eed8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_0018367c();
  *(bool *)(iVar1 + 0x10) = param_2 != 0;
  return;
}



bool fn_0069fb20(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x156) == '\x01';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x160);
  }
  return bVar1 && param_1 == 10;
}

