/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0039e754 .. 003a6a78.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0039e754(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x138) + param_2 * 4);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  return;
}



void fn_003a58d4(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  fn_00178eec(*(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x88),param_2);
  return;
}



void fn_003a698c(int param_1)

{
  *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xb0) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb0) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xac) + 0x44) = *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xa4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xa4) + 0x44) & 0xfe | 1
  ;
  return;
}



void fn_003a6a78(int param_1,byte param_2)

{
  *(byte *)(*(int *)(param_1 + 0xf8) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0xf8) + 0x44) & 0xfe | param_2;
  *(byte *)(*(int *)(param_1 + 0xfc) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0xfc) + 0x44) & 0xfe;
  return;
}

