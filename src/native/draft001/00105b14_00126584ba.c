/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0011a41c .. 00120c70.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_0011a41c(int param_1)

{
  return *(int *)(param_1 + 4) + 0x7c;
}



undefined4 fn_0011dd90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0012ebb4(param_1,param_1 + 4,param_2);
  return *puVar1;
}



undefined4 * fn_0011de18(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



void fn_0011de30(int *param_1)

{
  if (*param_1 != 0) {
    fn_0012d73c();
    *param_1 = 0;
  }
  return;
}



int * fn_0011de54(int *param_1)

{
  if (*param_1 != 0) {
    fn_0012d73c();
    *param_1 = 0;
  }
  return param_1;
}



void fn_00120c38(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = 1;
  param_1[7] = 1;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



void fn_00120c70(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = 1;
  param_1[7] = 1;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

