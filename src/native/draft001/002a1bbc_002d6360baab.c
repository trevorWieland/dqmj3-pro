/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 002ba4e8 .. 002bb750.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_002ba4e8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  if (bVar2 && cVar1 == '\x04') {
    fn_00354bc0(*(undefined4 *)(param_1 + 0x14));
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



void fn_002bb750(undefined4 param_1)

{
  fn_002b5424();
  fn_002bb1d8(param_1);
  return;
}

