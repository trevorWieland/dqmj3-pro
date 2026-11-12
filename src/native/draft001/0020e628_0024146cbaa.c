/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0022cd58 .. 0022cecc.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0022cd58(int param_1)

{
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  fn_0031c154();
  return;
}



undefined4 fn_0022cdf0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x98) == 0) ||
     (*(int *)(param_1 + 0x88) == *(int *)(*(int *)(param_1 + 0x98) + 0x10))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_0022cecc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x14);
  }
  fn_0031c810(*(int *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x88),uVar1,
               *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x80));
  return;
}

