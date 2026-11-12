/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 004687a4 .. 004687f4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_004687a4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_004b5540(param_3);
  (**(code **)(*param_1 + 0x14))(param_1,param_3);
  return 0;
}



undefined4 fn_004687d4(undefined4 param_1,int param_2)

{
  fn_004686ac(param_1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
               *(undefined4 *)(param_2 + 0x10));
  return 0;
}



undefined4 fn_004687f4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_004b5540(param_3);
  (**(code **)(*param_1 + 0xc))(param_1,param_3);
  return 0;
}

