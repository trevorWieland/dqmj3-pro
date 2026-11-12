/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 004e62f0 .. 004ecfb0.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 * fn_004e62f0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  *puVar1 = param_2;
  fn_001694e4(puVar1 + 1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  *(char *)((int)puVar1 + 0x103) = (char)*(undefined4 *)(param_1 + 0x28);
  return puVar1;
}



void fn_004e7740(int param_1,undefined1 *param_2)

{
  fn_001694e4(param_1 + 0x139,param_2 + 0x10d,*(undefined4 *)(param_2 + 0x1d8));
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x138) = param_2[0x10c];
  *(undefined1 *)(param_1 + 0x2c) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x2d) = param_2[1];
  fn_001694e4(param_1 + 0x34,param_2 + 8,*(undefined4 *)(param_2 + 0x108));
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x108);
  return;
}



void fn_004ecfb0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  fn_00656b7c();
  return;
}

