/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0053a3c8 .. 0053a474.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0053a3c8(int param_1,undefined1 param_2,int param_3)

{
  *(undefined1 *)(param_1 + param_3 + 0x20) = param_2;
  return;
}



void fn_0053a460(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



void fn_0053a474(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

