/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00481758 .. 004817d4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4
fn_00481758(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined1 auStack_30 [32];
  
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_004b54dc(auStack_30);
    iVar1 = (**(code **)(param_1 + 0x48))(param_1 + 0x4c,param_4,auStack_30,param_5);
    if (iVar1 == 0) {
      fn_0014f480(auStack_30);
      return 0;
    }
    fn_004b5540(param_4,auStack_30);
    fn_0014f480(auStack_30);
  }
  return 1;
}



void fn_004817d4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = *param_3;
  return;
}

