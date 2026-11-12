/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0037788c .. 003797cc.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0037788c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_004221b0(param_1 + iVar1 * 0x80 + 0x84);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



undefined4 fn_003778b4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = fn_004218b4(param_1 + iVar2 * 0x80 + 0x84);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return 0;
}



undefined4 * fn_00378c0c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f750(param_2);
  *param_1 = uVar1;
  return param_1;
}



bool fn_003797cc(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x58) == '\0') ||
     ((((iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 != 1 &&
        (iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 != 2)) &&
       (iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 != 3)) &&
      ((iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 != 5 &&
       (iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 != 6)))))) {
    return false;
  }
  iVar1 = fn_0065fd34(*(undefined4 *)(param_1 + 0x1c4),param_2[0x59],param_1 + 0x1b4);
  return iVar1 != 0;
}

