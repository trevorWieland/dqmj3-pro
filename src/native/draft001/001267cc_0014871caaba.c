/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00127640 .. 00127758.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00127640(int *param_1)

{
  if (*param_1 != 0) {
    fn_001418e8(param_1);
    fn_00150b24(*param_1,3);
    fn_0013f624(*param_1);
    *param_1 = 0;
  }
  return;
}



int fn_00127758(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = fn_0013f598(*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = fn_0014185c(param_1);
    if (iVar1 == 0) {
      fn_0013f4f4(*param_1,0);
      iVar1 = -1;
    }
    else {
      iVar1 = param_1[1] + -1;
    }
  }
  return iVar1;
}

