/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 004aaf3c .. 004b2e60.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_004aaf3c(void)

{
  fn_004aaf4c();
  fn_00455018();
  return;
}



void fn_004ab0c0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  *(undefined2 *)(param_1 + 0x3c) = 1;
  return;
}



void fn_004aeaec(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  return;
}



void fn_004b2e60(undefined4 param_1)

{
  fn_004b301c(param_1,4);
  return;
}

