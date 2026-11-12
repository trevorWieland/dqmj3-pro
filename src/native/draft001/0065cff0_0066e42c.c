/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0065cff0 .. 0066e42c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_0065cff0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00661414();
  iVar2 = fn_00661414(param_2);
  return iVar1 < iVar2;
}



void fn_0065d408(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1a4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xd0))(piVar1,param_2);
  }
  fn_001daaf8(param_1,param_2);
  return;
}



bool fn_0065e580(short *param_1,short *param_2)

{
  return *param_1 < *param_2;
}



bool fn_0065ec28(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar1 = fn_002f6fa8();
  uVar2 = fn_002f8914();
  piVar3 = (int *)fn_006cd9d8(uVar1,uVar2);
  return *piVar3 == 1;
}



bool fn_0065ec54(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = fn_002f6fa8();
  uVar2 = fn_002f8914();
  iVar3 = fn_006cd9d8(uVar1,uVar2);
  return *(short *)(iVar3 + 0x44) == 3;
}



bool fn_0065ed20(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_003199d8(*param_1);
  iVar2 = fn_003199d8(*param_2);
  return iVar1 < iVar2;
}



void fn_0065fd88(int param_1)

{
  *(undefined1 *)(param_1 + 0xf8) = 0xff;
  fn_00301f50(param_1 + 4,0xf4);
  return;
}



void fn_006603ac(int param_1)

{
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  return;
}



void fn_006619ec(undefined4 param_1,undefined4 param_2)

{
  fn_001ade98(param_1,5,param_2,0,1);
  return;
}



void fn_00661ea0(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  *(undefined1 *)(param_1 + 0x34) = param_3;
  *(undefined1 *)(param_1 + 0x35) = param_5;
  *(undefined1 *)(param_1 + 0x36) = param_2;
  *(undefined1 *)(param_1 + 0x37) = param_4;
  return;
}



int fn_00662a00(int param_1)

{
  fn_0012a2d8();
  fn_0012a2d8(param_1 + 8);
  return param_1;
}



void fn_00664a14(char *param_1)

{
  if (*param_1 != '\0') {
    fn_00662bd0();
    fn_00663dac();
    *param_1 = '\0';
  }
  return;
}



void fn_00664a70(undefined1 *param_1)

{
  fn_00662bd0();
  fn_006642e8();
  *param_1 = 0;
  return;
}



char * fn_00664a98(char *param_1)

{
  if (*param_1 != '\0') {
    fn_00662bd0();
    fn_00663dac();
    *param_1 = '\0';
  }
  return param_1;
}



void fn_00664c58(int *param_1)

{
  fn_005ef320(*(undefined4 *)(*param_1 + 4));
  return;
}



void fn_006659d4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 4) & 0x80000000) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar1 = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  if (0 < iVar2) {
    do {
      fn_0024d77c(*(int *)(param_1 + 0x18) + iVar1 * 8,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  fn_0024d73c(*(int *)(param_1 + 0x14) + 0x44,param_1);
  fn_0019e8c4(param_2,param_1);
  return;
}



void fn_00665bd4(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0x24);
  return;
}



void fn_00666518(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0x2c);
  return;
}



undefined4 fn_00667bc8(int *param_1)

{
  (**(code **)(*param_1 + 0x30))(param_1,0xb);
  return 1;
}



void fn_00667c00(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 3;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



undefined4 fn_00669d70(int *param_1)

{
  (**(code **)(*param_1 + 0x30))(param_1,8);
  return 1;
}



undefined4 fn_00669fec(int *param_1)

{
  (**(code **)(*param_1 + 0x30))(param_1,9);
  return 1;
}



void fn_0066ceb0(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 4;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



undefined4 fn_0066d1cc(int *param_1)

{
  undefined4 uVar1;
  
  param_1[0x1c] = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    fn_00673ce8(param_1,3);
    uVar1 = 0;
    param_1[0x1c] = 0;
    if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,1);
      return 1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,3);
    uVar1 = 1;
  }
  return uVar1;
}



void fn_0066dd80(int param_1,int param_2)

{
  if ((((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x24) == 1)) && (param_2 != 0)) &&
     (param_2 == 1)) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
  }
  return;
}



undefined4 fn_0066e090(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 1 || iVar1 == 4) || (iVar1 == 6 || iVar1 == 7)) || (iVar1 == 8 || iVar1 == 9)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_0066e42c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x18) == 1 || *(int *)(param_1 + 0x18) == 2) ||
     (iVar1 = fn_005f3a9c(), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

