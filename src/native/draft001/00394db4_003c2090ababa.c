/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0039c4c8 .. 0039c4c8.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0039c4c8(int *param_1)

{
  fn_0022cf0c();
  if (*(char *)(param_1[0x27] + 0x8f4) == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x11c))(param_1);
  fn_0042f1c0(param_1[0x27]);
  return;
}

