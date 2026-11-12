/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0067c840 .. 006889d8.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0067c840(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 1;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



bool fn_006805b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_00561a34(param_1,param_2,0,param_3);
  return iVar1 == 1;
}



void fn_00683248(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0x15) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x21) = 0;
  return;
}



undefined4 * fn_00683308(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



void fn_00683fe8(int param_1)

{
  if (*(int *)(param_1 + 0x58) == 0) {
    return;
  }
  fn_00343558();
  return;
}



void fn_00688880(undefined4 *param_1)

{
  if (param_1[3] != 0) {
    fn_00151954(param_1[3],param_1);
  }
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  (**(code **)*param_1)(param_1);
  fn_0019fb94(param_1);
  return;
}



void fn_006889d8(int param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))(*(int **)(param_1 + 0x10),param_2,1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
  return;
}

