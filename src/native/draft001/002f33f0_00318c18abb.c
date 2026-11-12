/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 003003f8 .. 00304cc0.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_003003f8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_003004e8();
  fn_003001f0(param_1,uVar1);
  return uVar1;
}



void fn_00303fd0(undefined1 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *param_1 = 0xff;
  return;
}



bool fn_00304c94(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_1;
  bVar2 = *(char *)(uVar1 + 0xd) != '\0';
  if (bVar2) {
    uVar1 = (uint)*(byte *)(uVar1 + 0xe);
  }
  return bVar2 && uVar1 != 0;
}



void fn_00304cc0(int *param_1)

{
  *(undefined1 *)(*param_1 + 0xd) = 0;
  *(undefined1 *)(*param_1 + 0xe) = 0;
  return;
}

