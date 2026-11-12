/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0037047c .. 00376f54.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0037047c(undefined4 param_1,int param_2,int param_3)

{
  memory_copy(param_1,*(int *)(param_2 + 0x30) + param_3 * 0xf4,0xf0);
  return;
}



void fn_003704e8(undefined4 param_1,int param_2,int param_3)

{
  memory_copy(param_1,*(int *)(param_2 + 0x3c) + param_3 * 0xf4,0xf0);
  return;
}



bool fn_00371df4(void)

{
  int iVar1;
  
  iVar1 = fn_006bd10c();
  return iVar1 == 1;
}



bool fn_00371e08(void)

{
  int iVar1;
  
  iVar1 = fn_006bd10c();
  return iVar1 == 2;
}



bool fn_00371e20(void)

{
  int iVar1;
  
  iVar1 = fn_006bd10c();
  return iVar1 == 3;
}



bool fn_00371e38(void)

{
  int iVar1;
  
  iVar1 = fn_006bd10c();
  return iVar1 == 4;
}



void fn_00376f54(int param_1)

{
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}

