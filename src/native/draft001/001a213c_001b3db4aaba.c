/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 001a38a8 .. 001a3a54.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_001a38a8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_00194004(*(undefined4 *)(*(int *)(param_1 + iVar1 * 4 + 0x18dc) + 0x68));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x18);
  return;
}



void fn_001a3a54(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_001a82b8(*(undefined4 *)(*(int *)(param_1 + iVar1 * 4 + 0x18dc) + 0x68));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x18);
  return;
}

