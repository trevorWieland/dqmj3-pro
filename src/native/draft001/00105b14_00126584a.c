/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00105b14 .. 0011a300.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00105b14(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  }
  return;
}



void fn_0010797c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  fn_00158f6c(*(undefined4 *)(iVar1 + 0x664),*(undefined4 *)(iVar1 + 0x668));
  *(undefined4 *)(iVar1 + 0x66c) = *(undefined4 *)(iVar1 + 0x664);
  return;
}



undefined4 * fn_00109b68(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



bool fn_0010bdc8(void)

{
  int iVar1;
  
  iVar1 = fn_00114848();
  return iVar1 == 1;
}



void fn_0010c3d0(int param_1)

{
  if (*(char *)(param_1 + 0x2c) != '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return;
}



void fn_00112e2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x278) = param_3;
  *(undefined4 *)(iVar1 + 0x27c) = param_4;
  return;
}



void fn_00112e48(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + param_2 + 0xc4) = param_3;
  return;
}



void fn_00116020(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = fn_00127904(param_2,param_3);
    uVar1 = fn_00126190(uVar1,4);
    fn_00127a7c(param_1,uVar1,param_2,param_3);
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}



int fn_00116284(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001271d4(param_1 + 0xc);
  return iVar1 + -0xc;
}



void fn_00117688(int param_1)

{
  fn_00128150(*(undefined4 *)(param_1 + 4));
  return;
}



void fn_00118e70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = fn_001249d0();
  fn_00124b28(uVar2,param_2);
  return;
}



void fn_00119b70(int param_1)

{
  *(undefined1 *)(param_1 + 0x10028) = 0;
  *(undefined1 *)(param_1 + 0x10029) = 0;
  *(undefined4 *)(param_1 + 0x1002c) = 5;
  return;
}



void fn_0011a300(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

