/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00470bf0 .. 00470bf0.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_00470bf0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = fn_004b616c(param_3);
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  if (*(int *)((int)uVar4 + 0x9c) == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_2 + 0x3c);
  bVar3 = (uVar1 & 0xf) != 0;
  if (bVar3) {
    uVar2 = uVar1 & 0xf;
  }
  if ((bVar3 && uVar2 != 1) && (param_3 == 10 || param_3 == 2)) {
    if (param_4 != 0) {
      return 6;
    }
    if ((uVar2 == 3) && ((uVar1 & 0x10) != 0)) {
      return 9;
    }
  }
  return 5;
}

