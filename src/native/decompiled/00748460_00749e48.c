#include "00748460_00749e48.h"



undefined4 * fn_00749e48(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00831d74;
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00443f4c();
  }
  param_1[1] = uVar2;
  return param_1;
}



undefined4 * fn_00749ddc(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00831d64;
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0042bbc4();
  }
  param_1[1] = uVar2;
  return param_1;
}



undefined4 *
fn_00749714(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_00397f10();
  *puVar1 = &DAT_0082d2ac;
  puVar1[0x34] = param_4;
  puVar1[0x35] = param_3;
  *(undefined1 *)(puVar1 + 0x36) = param_5;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_00328a30(iVar2,puVar1[0x17]);
  }
  iVar2 = puVar1[0x3b];
  if (iVar2 != iVar3) {
    if (iVar2 != 0) {
      fn_002feef8(iVar2);
    }
    puVar1[0x3b] = iVar3;
  }
  return puVar1;
}



void fn_007495c8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0xd8) == '\0') {
    return;
  }
  if (param_3 == 0) {
    iVar1 = fn_006ba284(param_1);
    iVar2 = fn_006ba274(param_1);
    uVar3 = iVar1 * iVar2 + param_2;
    if (((int)uVar3 < 0) ||
       ((uint)(*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 4) <= uVar3)) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0xdc) + uVar3 * 0x10);
    }
    param_3 = fn_0022f750(*puVar5);
  }
  iVar1 = fn_006ba284(param_1);
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 4) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xdc) + uVar3 * 0x10;
  }
  uVar4 = fn_0016ba34(DAT_00897800,DAT_00898230,*(undefined4 *)(iVar1 + 4),0);
  puVar5 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar6 == &DAT_008942dc) goto LAB_0074968c;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0074968c:
  fn_00321118(puVar5,param_3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_00749218(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_0016ba34(DAT_00897800,param_2,param_3,0);
  fn_00328874(*(undefined4 *)(param_1 + 0xec),uVar1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



undefined4 *
fn_00748f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &DAT_0082d14c;
  puVar1[0x39] = param_4;
  puVar1[0x3a] = param_3;
  *(undefined1 *)(puVar1 + 0x3b) = param_5;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_00328a30(iVar2,puVar1[0x17]);
  }
  iVar2 = puVar1[0x40];
  if (iVar2 != iVar3) {
    if (iVar2 != 0) {
      fn_002feef8(iVar2);
    }
    puVar1[0x40] = iVar3;
  }
  return puVar1;
}



void fn_00748e2c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0xec) == '\0') {
    return;
  }
  if (param_3 == 0) {
    iVar1 = fn_006ba284(param_1);
    iVar2 = fn_006ba274(param_1);
    uVar3 = iVar1 * iVar2 + param_2;
    if (((int)uVar3 < 0) ||
       ((uint)(*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 4) <= uVar3)) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0xf0) + uVar3 * 0x10);
    }
    param_3 = fn_0022f750(*puVar5);
  }
  iVar1 = fn_006ba284(param_1);
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 4) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xf0) + uVar3 * 0x10;
  }
  uVar4 = fn_0016ba34(DAT_00897800,DAT_00898230,*(undefined4 *)(iVar1 + 4),0);
  puVar5 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar6 == &DAT_008942dc) goto LAB_00748ef0;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00748ef0:
  fn_00321118(puVar5,param_3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



undefined4 *
fn_007485ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0082cff4;
  puVar1[0x2c] = param_4;
  puVar1[0x2d] = param_3;
  *(undefined1 *)(puVar1 + 0x2e) = param_5;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_00328a30(iVar2,puVar1[0x17]);
  }
  iVar2 = puVar1[0x33];
  if (iVar2 != iVar3) {
    if (iVar2 != 0) {
      fn_002feef8(iVar2);
    }
    puVar1[0x33] = iVar3;
  }
  return puVar1;
}



void fn_00748460(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    return;
  }
  if (param_3 == 0) {
    iVar1 = fn_006ba284(param_1);
    iVar2 = fn_006ba274(param_1);
    uVar3 = iVar1 * iVar2 + param_2;
    if (((int)uVar3 < 0) ||
       ((uint)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 4) <= uVar3)) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0xbc) + uVar3 * 0x10);
    }
    param_3 = fn_0022f750(*puVar5);
  }
  iVar1 = fn_006ba284(param_1);
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 4) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xbc) + uVar3 * 0x10;
  }
  uVar4 = fn_0016ba34(DAT_00897800,DAT_00898230,*(undefined4 *)(iVar1 + 4),0);
  puVar5 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar6 == &DAT_008942dc) goto LAB_00748524;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00748524:
  fn_00321118(puVar5,param_3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}


