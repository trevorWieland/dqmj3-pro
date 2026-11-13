#include "005e7a74_005e82f0.h"



void fn_005e82f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = 0.0;
  fVar9 = 1.0;
  if (0.0 < (float)param_1[4] * (float)param_1[5]) {
    iVar5 = param_1[2];
    bVar7 = (iVar5 - 1U & 1) == 0;
    piVar3 = param_1 + 1;
    if (bVar7) {
      *(undefined4 *)*piVar3 = 0;
    }
    uVar6 = (uint)bVar7;
    for (iVar5 = iVar5 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      iVar1 = uVar6 * 4;
      iVar2 = uVar6 * 4;
      uVar6 = uVar6 + 2;
      *(undefined4 *)(*piVar3 + iVar2) = 0;
      *(undefined4 *)(*piVar3 + iVar1 + 4) = 0;
    }
    fn_005e6c08(*param_1,param_2,param_1 + 1);
    fn_005e6c08(param_3,param_2,param_1 + 1);
    uVar4 = fn_005ea33c(param_2);
    fn_00757e04(param_1 + 1,uVar4);
  }
  else {
    fn_005e6c08(param_3,param_2,0);
  }
  if (fVar8 < (float)param_1[4]) {
    param_1[4] = (float)param_1[4] - fVar9;
  }
  return;
}



void fn_005e807c(undefined4 *param_1)

{
  *param_1 = &DAT_00858c4c;
  fn_002feef8(param_1[2]);
  *param_1 = &DAT_00858ca4;
  fn_002feef8(param_1[1]);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_005e7fd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &DAT_00858ca4;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_2;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  if ((undefined4 *)param_1[1] != puVar1) {
    fn_002feef8();
    param_1[1] = puVar1;
  }
  param_1[2] = 0;
  *param_1 = &DAT_00858c4c;
  puVar2 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_3;
    puVar1 = puVar2;
  }
  if (puVar2 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  if ((undefined4 *)param_1[2] != puVar1) {
    fn_002feef8();
    param_1[2] = puVar1;
  }
  return param_1;
}



void fn_005e7ebc(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00858ae8;
  fn_002feef8(param_1[7]);
  fn_005df880(param_1);
  fn_002feef8();
  return;
}



int * fn_005e7e54(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = fn_005e7b00(*param_1 + 0x28);
    iVar1 = fn_005e8f88(iVar1 + -4);
    iVar1 = fn_005e780c(iVar1 + -4);
    iVar1 = fn_005e860c(iVar1 + -4);
    fn_00100414(iVar1 + -0x18,fn_005e8ee0,4,6);
    fn_002feef8(iVar1 + -0x1c);
    *param_1 = 0;
  }
  return param_1;
}



int * fn_005e7d54(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  puVar1 = (undefined1 *)fn_00145b00(0x2c,&DAT_00812c8c);
  if (puVar1 == (undefined1 *)0x0) {
    iVar3 = 0;
  }
  else {
    *puVar1 = 0;
    iVar3 = fn_00101a1c(puVar1 + 4,fn_005e8e90,4,6);
    iVar3 = fn_005e85a0(iVar3 + 0x18);
    iVar3 = fn_005e77a4(iVar3 + 4);
    iVar3 = fn_005e8f2c(iVar3 + 4);
    iVar3 = fn_005e7ab0(iVar3 + 4);
    iVar3 = iVar3 + -0x28;
    iVar2 = 0;
    do {
      fn_005e8e18(iVar3 + iVar2 * 4 + 4,(int)(char)iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
  }
  iVar2 = *param_1;
  if (iVar2 != iVar3) {
    if (iVar2 != 0) {
      iVar2 = fn_005e7b00(iVar2 + 0x28);
      iVar2 = fn_005e8f88(iVar2 + -4);
      iVar2 = fn_005e780c(iVar2 + -4);
      iVar2 = fn_005e860c(iVar2 + -4);
      fn_00100414(iVar2 + -0x18,fn_005e8ee0,4,6);
      fn_002feef8(iVar2 + -0x1c);
    }
    *param_1 = iVar3;
  }
  return param_1;
}



void fn_005e7d28(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005ea5ec(**(undefined4 **)(param_1 + 4));
  *(undefined1 *)*puVar1 = param_3;
  return;
}



void fn_005e7c88(undefined4 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)*param_1;
  if ((*pbVar1 & 1) != 0) {
    iVar2 = 0;
    do {
      fn_005e8bb0(pbVar1 + iVar2 * 4 + 4,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
  }
  if ((*pbVar1 & 2) != 0) {
    fn_005e8584(pbVar1 + 0x1c,param_2);
  }
  if ((*pbVar1 & 4) != 0) {
    fn_005e7788(pbVar1 + 0x20,param_2);
  }
  if ((*pbVar1 & 8) != 0) {
    fn_005e8f10(pbVar1 + 0x24,param_2);
  }
  if ((*pbVar1 & 0x10) == 0) {
    return;
  }
  fn_005e7a58(pbVar1 + 0x28,param_2);
  return;
}



undefined4 * fn_005e7c40(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001a0ba8();
  *puVar1 = &DAT_00858c24;
  puVar1[6] = 0;
  return puVar1;
}



void fn_005e7c34(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  fn_001a0b88();
  return;
}



undefined4 fn_005e7bac(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)(*(int *)(param_2 + 0x14) + param_3 * 0x30);
  if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + uVar2 * 8);
      uVar10 = puVar3[7];
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      uVar7 = puVar3[4];
      uVar8 = puVar3[5];
      uVar9 = puVar3[6];
      *(undefined4 *)(iVar1 + 0x8c) = *puVar3;
      *(undefined4 *)(iVar1 + 0x90) = uVar4;
      *(undefined4 *)(iVar1 + 0x94) = uVar5;
      *(undefined4 *)(iVar1 + 0x98) = uVar6;
      *(undefined4 *)(iVar1 + 0x9c) = uVar7;
      *(undefined4 *)(iVar1 + 0xa0) = uVar8;
      *(undefined4 *)(iVar1 + 0xa4) = uVar9;
      *(undefined4 *)(iVar1 + 0xa8) = uVar10;
      uVar4 = puVar3[9];
      uVar5 = puVar3[10];
      uVar6 = puVar3[0xb];
      *(undefined4 *)(iVar1 + 0xac) = puVar3[8];
      *(undefined4 *)(iVar1 + 0xb0) = uVar4;
      *(undefined4 *)(iVar1 + 0xb4) = uVar5;
      *(undefined4 *)(iVar1 + 0xb8) = uVar6;
      fn_005434c8(*(undefined4 *)(*(int *)(param_1 + 8) + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3));
  }
  return 0;
}



int * fn_005e7b00(int *param_1)

{
  if (*param_1 != 0) {
    fn_002feef8();
    *param_1 = 0;
  }
  fn_002feef8(*param_1);
  return param_1;
}



undefined4 * fn_005e7ab0(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 *unaff_r4;
  
  *param_1 = 0;
  puVar1 = (undefined1 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    unaff_r4 = puVar1;
  }
  if (puVar1 == (undefined1 *)0x0) {
    unaff_r4 = (undefined1 *)0x0;
  }
  if ((undefined1 *)*param_1 != unaff_r4) {
    fn_002feef8();
    *param_1 = unaff_r4;
  }
  return param_1;
}



void fn_005e7a74(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  puVar1[4] = param_6;
  puVar1[5] = param_7;
  puVar1[6] = param_8;
  puVar1[7] = param_9;
  return;
}


