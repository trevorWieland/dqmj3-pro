/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 002f33f0 .. 002fab9c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_002f33f0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



void fn_002f38c0(void)

{
  fn_002f1c5c();
  fn_002feef8();
  return;
}



int fn_002f7124(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_002f5944();
  iVar2 = fn_002f6980(param_1);
  return iVar2 + iVar1;
}



int fn_002fa328(int param_1)

{
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x111) = 0;
  *(undefined1 *)(param_1 + 0x112) = 0;
  fn_00301f50(param_1,0xf0);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  return param_1;
}



void fn_002fa40c(int param_1)

{
  fn_00301f50(param_1 + 0x18,0x3c0);
  return;
}



void fn_002fa490(int param_1)

{
  fn_00301f50(param_1 + 0x3d8,0x3c0);
  return;
}



undefined4 fn_002fab9c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    uVar1 = 0x32;
  }
  else if (param_1 < 10) {
    uVar1 = 0x4b;
  }
  else {
    uVar1 = 100;
  }
  return uVar1;
}

