/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0046f6a8 .. 0046f6a8.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_0046f6a8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = fn_004b616c(param_3);
  if ((*(int *)(iVar2 + 0x9c) != 0) && (*(char *)(param_2 + 0x88) == '\0')) {
    if (param_3 == 10 || param_3 == 2) {
      uVar1 = *(ushort *)(param_2 + 0x3c);
      if (param_4 == 0) {
        if (((uVar1 & 0xf) == 3) && ((uVar1 & 0x10) != 0)) {
          return 9;
        }
      }
      else if ((uVar1 & 0xf) == 2 || (uVar1 & 0xf) == 3) {
        return 3;
      }
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0x3c) & 0xf;
      if (uVar1 == 2 || uVar1 == 5) {
        return 2;
      }
    }
  }
  return 1;
}

