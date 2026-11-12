/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00408570 .. 0041cb10.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00408570(int param_1,int param_2)

{
  fn_00689828(param_1,param_2 == 0);
  *(char *)(param_1 + 0x98) = (char)param_2;
  return;
}



void fn_0040f5f8(int param_1)

{
  fn_0037cb88(*(undefined4 *)(param_1 + 8));
  return;
}



void fn_0040ffb0(int param_1)

{
  fn_00190d50(*(undefined4 *)(param_1 + 0x24));
  return;
}



void fn_0040ffb8(int param_1)

{
  fn_0068b21c(*(undefined4 *)(param_1 + 0x2c));
  return;
}



void fn_00411994(int param_1)

{
  fn_003b9cc0();
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void fn_004153a8(int *param_1)

{
  (**(code **)(*param_1 + 0x110))(param_1,7,1,0,1);
  return;
}



void fn_0041a6c8(int param_1)

{
  fn_00290aa4(*(undefined4 *)(param_1 + 0xa0));
  fn_003fcd98(param_1);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}



void fn_0041cb10(int param_1)

{
  fn_003979d0();
  fn_003e6b44(param_1);
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}

