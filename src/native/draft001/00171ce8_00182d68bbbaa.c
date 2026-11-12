/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0017fb98 .. 0017fb98.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_0017fb98(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 1) {
    if ((param_1 & 1) != 0) {
      iVar1 = 0x20;
    }
    if (param_2 != 2) {
      if ((param_1 & 2) != 0) {
        iVar1 = iVar1 + 0xc;
      }
      if (param_2 != 4) {
        if ((param_1 & 4) != 0) {
          iVar1 = iVar1 + 0xc;
        }
        if (param_2 != 8) {
          iVar1 = 0;
        }
      }
    }
  }
  return iVar1;
}

