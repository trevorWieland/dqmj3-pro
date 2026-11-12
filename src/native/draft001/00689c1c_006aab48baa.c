/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00697d48 .. 0069ccac.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00697d48(int param_1)

{
  undefined1 auStack_40 [56];
  
  fn_0011a24c(auStack_40);
  fn_006f76f0(param_1,auStack_40);
  fn_006949f8(param_1,auStack_40);
  *(undefined1 *)(param_1 + 0x16c) = 0xff;
  *(undefined1 *)(param_1 + 0x16e) = 0;
  fn_00694a10(param_1);
  return;
}



void fn_00698910(int param_1)

{
  undefined1 auStack_40 [56];
  
  fn_0011a24c(auStack_40);
  fn_006f76f0(param_1,auStack_40);
  fn_006949f8(param_1,auStack_40);
  *(undefined1 *)(param_1 + 0x16c) = 0xff;
  *(undefined1 *)(param_1 + 0x16e) = 0;
  fn_00694a10(param_1);
  return;
}



bool fn_0069ccac(int param_1)

{
  return param_1 == 0x1d || param_1 == 0x1e;
}

