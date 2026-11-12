/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 003979f0 .. 00399598.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_003979f0(int param_1)

{
  fn_0059e110(param_1 + 0xb0);
  fn_002c4304(param_1);
  return;
}



void fn_0039834c(int param_1)

{
  fn_0059e16c(param_1 + 0xb0);
  fn_002c4100(param_1);
  return;
}



void fn_0039848c(int param_1)

{
  fn_0059e110(param_1 + 0xb0);
  fn_002c4304(param_1);
  return;
}



void fn_00399598(int param_1)

{
  fn_00416e40();
  fn_0056a6ac(*(undefined4 *)(param_1 + 0xd0));
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0xd8) = 2;
  return;
}

