/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 002426b4 .. 00265604.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_002426b4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4 + 0x450) = param_3;
  return;
}



void fn_002426d4(int param_1,uint param_2,undefined1 param_3)

{
  if (param_2 < 6) {
    *(undefined1 *)(*(int *)(param_1 + 4) + param_2 + 0x513) = param_3;
  }
  return;
}



void fn_00242758(int param_1)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x50c) = 0;
  return;
}



void fn_0024281c(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x84 + 0xb0) = param_3;
  return;
}



void fn_00242834(int param_1,undefined2 param_2)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x50c) = param_2;
  return;
}



void fn_00242844(int param_1)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x50e) = 0;
  return;
}



void fn_00242858(int param_1,char param_2)

{
  *(char *)(*(int *)(param_1 + 4) + 0x510) = param_2 + *(char *)(*(int *)(param_1 + 4) + 0x510);
  return;
}



void fn_00243e04(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x14c) == '\0') {
    if (*(int *)(param_1 + 4) == 0) {
      return;
    }
    fn_00243918(param_1,0);
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x14c) != '\x01') {
      return;
    }
    if ((*(int *)(param_1 + 0x140) != 0) && (iVar2 = fn_006f7d68(), iVar2 == 0)) {
      return;
    }
    if ((*(int *)(param_1 + 0x148) != 0) && (iVar2 = fn_006f7d68(), iVar2 == 0)) {
      return;
    }
    fn_00243a34(param_1);
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x14c) = uVar1;
  return;
}



undefined4 fn_00246858(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_1 < 4) {
      uVar1 = 0x32;
    }
    else if (param_1 < 10) {
      uVar1 = 0x4b;
    }
    else {
      uVar1 = 100;
    }
  }
  else {
    uVar1 = 0x78;
  }
  return uVar1;
}



int fn_002471d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = fn_00247444(*(undefined4 *)(param_1 + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + iVar1;
    } while (iVar2 < param_2);
  }
  return iVar3;
}



bool fn_002509d8(void)

{
  int iVar1;
  
  fn_005e07a8();
  iVar1 = fn_005e0790();
  if (iVar1 == 0) {
    fn_001076bc(1);
  }
  return iVar1 != 0;
}



void fn_0025190c(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 5;
  return;
}



void fn_00252980(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_002523d8(param_1,1,param_2);
  fn_002523d8(param_1,0,param_3);
  *(undefined1 *)(param_1 + 8) = 3;
  return;
}



void fn_002573b0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  return;
}



int fn_00259f5c(void)

{
  int iVar1;
  
  iVar1 = fn_00607c4c();
  return (int)*(short *)(iVar1 + 8);
}



undefined1 fn_00259f6c(void)

{
  int iVar1;
  
  iVar1 = fn_00607c4c();
  return *(undefined1 *)(iVar1 + 10);
}



undefined4 fn_0025a258(void)

{
  int iVar1;
  
  iVar1 = fn_00607c4c();
  return *(undefined4 *)(iVar1 + 4);
}



void fn_0025b20c(int param_1,undefined4 param_2)

{
  fn_0017821c(*(int *)(param_1 + 4) + 100,param_2,0x60);
  return;
}



void fn_0025bddc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x26c) = 0;
  *(undefined4 *)(iVar1 + 0x270) = 0;
  return;
}



undefined4 fn_0025c718(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = 3;
  fn_0020309c(*(undefined4 *)(param_1 + 0x68),param_2,*(undefined4 *)(param_1 + 0x48));
  return 1;
}



void fn_0025e31c(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x48) = param_2;
  *(byte *)(*(int *)(param_1 + 0x4c) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0x4c) + 0x44) & 0xfe;
  return;
}



void fn_0025e7cc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  iVar1 = *(int *)(param_1 + 0x4c);
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x1c) = uVar3;
  *(undefined4 *)(iVar1 + 0x20) = uVar4;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}



void fn_0025fa58(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == -1) {
    return;
  }
  uVar1 = fn_007461f4(param_1,param_1 + 8,param_2);
  fn_001218f8(param_1,uVar1);
  return;
}



bool fn_0025fa84(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = fn_007461f4(param_1,param_1 + 8,param_2);
  cVar1 = *(char *)(param_1 + 0x958);
  iVar3 = fn_00188184(param_1,uVar2,param_3,1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x958) = 1;
  }
  return iVar3 != 0;
}



void fn_00260640(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x44))(param_1,param_2,0);
  param_1[0x15] = iVar1;
  return;
}



int fn_00261f54(int *param_1)

{
  return *(int *)(*param_1 + 0x74) - *(int *)(*param_1 + 0x70) >> 2;
}



int fn_00262044(int *param_1)

{
  return *(int *)(*param_1 + 0x38) - *(int *)(*param_1 + 0x34) >> 2;
}



void fn_00265604(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x1c) + param_2 * 4) == 0) {
    return;
  }
  fn_00145ac0();
  return;
}

