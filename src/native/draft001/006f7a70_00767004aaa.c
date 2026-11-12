/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006f7a70 .. 006f7a9c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_006f7a70(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4);
}



undefined4 fn_006f7a84(int param_1)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) + 4);
}



int fn_006f7a9c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x5c) * 4);
  if (iVar1 != 0) {
    iVar1 = iVar1 + -0x1c;
  }
  return iVar1;
}

