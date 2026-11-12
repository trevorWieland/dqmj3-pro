/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0037b780 .. 0037cb1c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0037b780(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9fcc(param_1);
  return;
}



void fn_0037cb1c(char *param_1,int param_2)

{
  if (*param_1 == '\x06') {
    param_1[0x10] = (char)param_2;
  }
  if (*param_1 == '\x06' && param_2 == 0) {
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
  }
  return;
}

