/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0017ea58 .. 0017f108.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0017ea58(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x16) != '\0') {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar1 = *(int *)(param_1 + iVar2 * 4);
        if (iVar1 != 0) {
          fn_0019f2a8(iVar1,1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}



int fn_0017f0ec(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0018c8e8();
  fn_0017d904(uVar1,param_1 + 0x88);
  return param_1;
}



void fn_0017f108(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  *param_1 = param_2;
  return;
}

