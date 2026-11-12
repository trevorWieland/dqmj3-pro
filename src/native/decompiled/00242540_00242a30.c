#include "00242540_00242a30.h"



int fn_00242a30(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0xf;
}



int fn_00242a10(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x48;
}



int fn_002429f0(int param_1)

{
  return (int)*(char *)(DAT_00892844 + param_1 * 0x58 + 0x52);
}



int fn_002429d0(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x44;
}



bool fn_002429a4(int param_1)

{
  return *(char *)(DAT_00892844 + param_1 * 0x58 + 0x53) == '\0';
}



int fn_00242984(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x38;
}



int fn_00242950(int param_1)

{
  short sVar1;
  
  sVar1 = fn_00101c78(DAT_00892844 + param_1 * 0x58 + 3,0,10);
  return (int)sVar1;
}



int fn_00242930(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x34;
}



int fn_00242910(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x18;
}



void fn_0024286c(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x510) = 0;
  return;
}



void fn_00242858(int param_1,char param_2)

{
  *(char *)(*(int *)(param_1 + 4) + 0x510) = param_2 + *(char *)(*(int *)(param_1 + 4) + 0x510);
  return;
}



void fn_00242844(int param_1)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x50e) = 0;
  return;
}



void fn_00242834(int param_1,undefined2 param_2)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x50c) = param_2;
  return;
}



void fn_0024281c(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x84 + 0xb0) = param_3;
  return;
}



void fn_00242784(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = uVar2 + 1;
    *(undefined4 *)(iVar1 + 0x4a8) = 0;
    *(undefined4 *)(iVar1 + 0x4ac) = 0;
    *(undefined4 *)(iVar1 + 0x4b0) = 0;
    *(undefined4 *)(iVar1 + 0x4b4) = 0;
    *(undefined4 *)(iVar1 + 0x4b8) = 0;
    *(undefined4 *)(iVar1 + 0x4bc) = 0;
    *(undefined4 *)(iVar1 + 0x4c0) = 0;
    *(undefined4 *)(iVar1 + 0x4c4) = 0;
    *(undefined4 *)(iVar1 + 0x4c8) = 0;
    *(undefined4 *)(iVar1 + 0x4cc) = 0;
    *(undefined4 *)(iVar1 + 0x4d0) = 0;
    *(undefined4 *)(iVar1 + 0x4d4) = 0;
    *(undefined4 *)(iVar1 + 0x4d8) = 0;
    *(undefined4 *)(iVar1 + 0x4dc) = 0;
    *(undefined4 *)(iVar1 + 0x4e0) = 0;
    *(undefined4 *)(iVar1 + 0x4e4) = 0;
  } while (uVar2 < 0x200);
  return;
}



void fn_00242758(int param_1)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x50c) = 0;
  return;
}



void fn_00242710(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1 << (param_2 & 0x1f);
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x4a8 + ((int)param_2 >> 5) * 4);
  if (param_3 == 0) {
    uVar2 = uVar2 & ~uVar1;
  }
  else {
    uVar2 = uVar2 | uVar1;
  }
  *(uint *)(*(int *)(param_1 + 4) + 0x4a8 + ((int)param_2 >> 5) * 4) = uVar2;
  return;
}



void fn_002426f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x4f8) = 0;
  *(undefined4 *)(iVar1 + 0x4fc) = 0;
  *(undefined4 *)(iVar1 + 0x500) = 0;
  *(undefined4 *)(iVar1 + 0x504) = 0;
  *(undefined4 *)(iVar1 + 0x508) = 0;
  return;
}



void fn_002426d4(int param_1,uint param_2,undefined1 param_3)

{
  if (param_2 < 6) {
    *(undefined1 *)(*(int *)(param_1 + 4) + param_2 + 0x513) = param_3;
  }
  return;
}



void fn_002426b4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4 + 0x450) = param_3;
  return;
}



void fn_002425dc(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (*(short *)(iVar2 + 0x4f8) < 1) {
    iVar1 = 0;
  }
  else if (*(short *)(iVar2 + 0x4fa) < 1) {
    iVar1 = 1;
  }
  else if (*(short *)(iVar2 + 0x4fc) < 1) {
    iVar1 = 2;
  }
  else if (*(short *)(iVar2 + 0x4fe) < 1) {
    iVar1 = 3;
  }
  else if (*(short *)(iVar2 + 0x500) < 1) {
    iVar1 = 4;
  }
  else if (*(short *)(iVar2 + 0x502) < 1) {
    iVar1 = 5;
  }
  else if (*(short *)(iVar2 + 0x504) < 1) {
    iVar1 = 6;
  }
  else if (*(short *)(iVar2 + 0x506) < 1) {
    iVar1 = 7;
  }
  else if (*(short *)(iVar2 + 0x508) < 1) {
    iVar1 = 8;
  }
  else {
    if (0 < *(short *)(iVar2 + 0x50a)) {
      return;
    }
    iVar1 = 9;
  }
  *(undefined2 *)(iVar2 + iVar1 * 2 + 0x4f8) = param_2;
  return;
}



void fn_002425c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 4) = *param_2;
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = uVar6;
  *(undefined4 *)(iVar1 + 0x1c) = uVar7;
  *(undefined4 *)(iVar1 + 0x20) = uVar8;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  *(undefined4 *)(iVar1 + 0x24) = param_2[8];
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  *(undefined4 *)(iVar1 + 0x2c) = uVar3;
  return;
}



int * fn_00242540(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = iVar1 + 4;
  uVar4 = *(uint *)(iVar1 + 0x324);
  uVar5 = CONCAT44(iVar3,iVar1 + 0x324);
  if ((uVar4 != 0) && (uVar4 <= param_2)) {
    if (param_2 <= uVar4) goto LAB_00242590;
    iVar3 = iVar1 + 0x324;
  }
  uVar5 = fn_0077f138(param_2,iVar3,0x32);
LAB_00242590:
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  piVar2 = (int *)uVar5;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
  }
  if (piVar2 == (int *)0x0 || iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}


