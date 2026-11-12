/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0013cb9c .. 0013cb9c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0013cb9c(short *param_1)

{
  if (*param_1 < 0x28) {
    *param_1 = 0x28;
  }
  if (param_1[1] < 0x24) {
    param_1[1] = 0x24;
  }
  if (0x91 < param_1[3]) {
    param_1[3] = 0x91;
  }
  if (0x91 < param_1[4]) {
    param_1[4] = 0x91;
  }
  if (0x91 < param_1[5]) {
    param_1[5] = 0x91;
  }
  return;
}

