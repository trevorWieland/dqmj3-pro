/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0073aa84 .. 00740a4c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0073aa84(undefined4 param_1,int param_2,int param_3)

{
  fn_002fecec(param_2 * param_3);
  return;
}



undefined1 * fn_00740a4c(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)fn_00741220(0x78);
  if (puVar1 != (undefined1 *)0x0) {
    memory_zero_aligned(puVar1,0x78);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 4) = 0xfffffc7b;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
  }
  return puVar1;
}

