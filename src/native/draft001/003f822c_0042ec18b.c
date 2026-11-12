/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0041dde0 .. 0042ec18.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0041dde0(int param_1)

{
  fn_003979d0();
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}



void fn_0041fe38(int param_1,undefined4 param_2)

{
  memory_copy(param_1 + 0x41200,param_2,0xc4);
  return;
}



int fn_0041fe48(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = param_1 + 0xf8;
  }
  else {
    param_1 = param_1 + 0x114;
  }
  return param_1;
}



void fn_0041fe58(int param_1,undefined4 param_2)

{
  memory_copy(param_1 + 0x412c4,param_2,0x540);
  return;
}



undefined4 fn_004218b4(int param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)(*(int *)(*(int *)(param_1 + 100) + 0x10) + 0x44) & 1) == 0) ||
     ((*(byte *)(*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 0x18) + 0x44) & 1) == 0
     )) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_00422638(int param_1)

{
  fn_00245790(*(undefined4 *)(param_1 + 100));
  return;
}



void fn_00424e3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_005ca2ac(*(undefined4 *)(param_1 + 0x9c),0);
  if (iVar1 != 0) {
    uVar2 = fn_005ca270(*(undefined4 *)(param_1 + 0x9c),0);
    fn_00385b60(param_1,uVar2);
  }
  iVar1 = fn_005ca2ac(*(undefined4 *)(param_1 + 0x9c),1);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = fn_005ca270(*(undefined4 *)(param_1 + 0x9c),1);
  fn_00190d50(*(undefined4 *)(param_1 + 0xa0),uVar2);
  return;
}



void fn_00428358(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 1) {
    if (param_3 != 2) {
      return;
    }
    iVar1 = fn_004282d0();
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 5) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}



void fn_0042b8d4(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
  *(int **)(*(int *)(param_1 + 4) + iVar1 * 4) = param_2;
  return;
}



void fn_0042bbec(undefined4 param_1)

{
  memory_zero_aligned(param_1,0x3c0);
  return;
}



void fn_0042e8d0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  memory_copy_unaligned(param_1 + 0xbe,param_2,0xc2);
  return;
}



void fn_0042e8f4(int param_1,int param_2,undefined2 *param_3,undefined1 *param_4,
                 undefined2 *param_5,undefined1 *param_6)

{
  param_1 = param_1 + param_2 * 0x20;
  *param_3 = *(undefined2 *)(param_1 + 0x86);
  *param_4 = (char)((*(byte *)(param_1 + 0x8b) & 7) >> 2);
  *param_5 = *(undefined2 *)(param_1 + 0x88);
  *param_6 = (char)((*(byte *)(param_1 + 0x8b) & 0xf) >> 3);
  return;
}



void fn_0042e938(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  memory_copy_unaligned(param_1 + 0x33a,param_2,0x120);
  return;
}



void fn_0042e9bc(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  memory_copy_unaligned(param_1 + 0x180,param_2,0x120);
  return;
}



void fn_0042ec00(int param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  param_1 = param_1 + param_2 * 4;
  *param_3 = *(undefined2 *)(param_1 + 0x50);
  *param_4 = *(undefined2 *)(param_1 + 0x52);
  return;
}



void fn_0042ec18(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  param_1 = param_1 + param_2 * 4;
  *(undefined2 *)(param_1 + 0x50) = param_3;
  *(undefined2 *)(param_1 + 0x52) = param_4;
  return;
}

