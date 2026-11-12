/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00689c1c .. 00697500.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00689c1c(int param_1)

{
  fn_0028e650(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_00689c3c(int param_1)

{
  fn_0028eadc(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_00689cd4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x34);
  return;
}



void fn_00689d04(int param_1)

{
  fn_001f7500(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_0068ae98(int param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



void fn_0068af5c(int param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



void fn_0068b03c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [48];
  
  fn_0022f128(auStack_38,0x17,param_2);
  fn_00190d50(param_1,auStack_38);
  return;
}



void fn_0068c6b8(int *param_1)

{
  fn_00145ac0(*(undefined4 *)(*param_1 + 0x2cc));
  return;
}



int fn_0068c7f4(int *param_1)

{
  return *param_1 + 0x2c4;
}



void fn_0068cc08(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = fn_005f65ec();
  *(undefined4 *)(iVar2 + 0x324) = uVar1;
  return;
}



void fn_0068cc1c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0x58) != 0) {
    uVar1 = fn_006a89d0();
    *(undefined4 *)(iVar2 + 800) = uVar1;
  }
  return;
}



void fn_0068f2fc(int *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  return;
}



undefined4 * fn_0068f36c(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



void fn_006938e8(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9fcc(param_1);
  return;
}



void fn_00697500(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x1ac) = param_3;
  *(undefined1 *)(param_1 + param_2 + 0x19c) = param_4;
  return;
}

