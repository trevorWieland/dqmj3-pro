/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 005e2c34 .. 005e5874.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_005e2c34(void)

{
  fn_005e96b4();
  fn_002feef8();
  return;
}



void fn_005e3590(undefined1 *param_1,undefined1 param_2)

{
  param_1[4] = param_2;
  *param_1 = 0;
  return;
}



void fn_005e35a0(undefined1 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *param_1 = 1;
  param_1[8] = param_3;
  param_1[9] = param_4;
  return;
}



void fn_005e5874(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  return;
}

