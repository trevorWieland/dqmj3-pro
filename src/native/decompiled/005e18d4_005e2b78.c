#include "005e18d4_005e2b78.h"



void fn_005e2b78(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if (param_4 == (int *)0x0) {
    param_4 = (int *)fn_00118290();
  }
  iVar1 = (**(code **)(*param_4 + 8))(param_4,8,4);
  if (iVar1 != 0) {
    fn_005e2c7c(iVar1,param_1,param_2,param_3,2,param_4);
  }
  return;
}



void fn_005e2afc(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + 4);
  uVar1 = *(int *)(iVar3 + 0x17c) - *(int *)(iVar3 + 0x178);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar2 = (iVar2 >> 4) - (iVar2 >> 0x1f);
  if (0 < iVar2) {
    do {
      fn_005e9084(*(int *)(iVar3 + 0x178) + uVar4 * 0x1c,param_1,param_2,
                   *(int *)(iVar3 + 0x14) + (uVar4 & 0xffff) * 0x218);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar2);
  }
  return;
}



void fn_005e2a9c(int param_1)

{
  float *pfVar1;
  float in_s0;
  
  pfVar1 = *(float **)(param_1 + 4);
  if (*pfVar1 != in_s0) {
    *pfVar1 = in_s0;
    if (in_s0 == 0.0) {
      fn_00548e84();
    }
    else {
      fn_00548e34(pfVar1 + 0x32,0x18);
    }
    *(undefined1 *)(pfVar1 + 0x59) = 2;
  }
  return;
}



void fn_005e2a6c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(*(int *)(iVar1 + 400) + param_2 * 0xc) = param_3;
  *(undefined4 *)(*(int *)(iVar1 + 400) + param_2 * 0xc + 4) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 400) + param_2 * 0xc + 8) = 0;
  return;
}



void fn_005e29d8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  fn_00117984();
  fn_0010fa20();
  iVar1 = fn_006eb278();
  fn_005e18d4();
  iVar2 = *(int *)(iVar1 + 4);
  uVar3 = *(int *)(iVar2 + 0x17c) - *(int *)(iVar2 + 0x178);
  iVar1 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  iVar5 = (iVar1 >> 4) - (iVar1 >> 0x1f);
  iVar1 = 0;
  if (0 < iVar5) {
    do {
      iVar4 = iVar1 + 1;
      *(undefined1 *)(*(int *)(iVar2 + 0x178) + iVar1 * 0x1c) = 0;
      iVar1 = iVar4;
    } while (iVar4 < iVar5);
  }
  return;
}



int fn_005e29c4(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x178) + param_2 * 0x1c;
}



void fn_005e1b90(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xdc);
  *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x48) * 0x20 + 0x20) = param_2;
  return;
}



void fn_005e1b70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006dd134(*(int *)(param_1 + 4) + 200,*param_2);
  *param_2 = uVar1;
  return;
}



void fn_005e1a14(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float local_24;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    return;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x50) + 0x68);
  if (*(char *)(param_1 + 0x77) == '\0') {
    fn_00545778(*(undefined4 *)(iVar5 + 4));
    fn_00117984();
    fn_0010fa20();
    iVar2 = fn_006eb278();
    iVar4 = *(int *)(iVar5 + 4);
    uVar3 = *(undefined4 *)(iVar4 + 0x14c);
    uVar8 = *(undefined4 *)(iVar4 + 0x150);
    uVar9 = *(undefined4 *)(iVar4 + 0x154);
    uVar10 = *(undefined4 *)(iVar4 + 0x158);
    uVar11 = *(undefined4 *)(iVar4 + 0x15c);
    uVar12 = *(undefined4 *)(iVar4 + 0x160);
    uVar13 = *(undefined4 *)(iVar4 + 0x164);
    iVar5 = *(int *)(iVar2 + 4);
    *(undefined4 *)(iVar5 + 0x88) = *(undefined4 *)(iVar4 + 0x148);
    *(undefined4 *)(iVar5 + 0x8c) = uVar3;
    *(undefined4 *)(iVar5 + 0x90) = uVar8;
    *(undefined4 *)(iVar5 + 0x94) = uVar9;
    *(undefined4 *)(iVar5 + 0x98) = uVar10;
    *(undefined4 *)(iVar5 + 0x9c) = uVar11;
    *(undefined4 *)(iVar5 + 0xa0) = uVar12;
    *(undefined4 *)(iVar5 + 0xa4) = uVar13;
    uVar3 = *(undefined4 *)(iVar4 + 0x16c);
    uVar8 = *(undefined4 *)(iVar4 + 0x170);
    uVar9 = *(undefined4 *)(iVar4 + 0x174);
    *(undefined4 *)(iVar5 + 0xa8) = *(undefined4 *)(iVar4 + 0x168);
    *(undefined4 *)(iVar5 + 0xac) = uVar3;
    *(undefined4 *)(iVar5 + 0xb0) = uVar8;
    *(undefined4 *)(iVar5 + 0xb4) = uVar9;
    *(byte *)(iVar5 + 0x54) = *(byte *)(iVar5 + 0x54) | 1;
    return;
  }
  pfVar1 = (float *)fn_006dcd40();
  local_38 = *pfVar1;
  fStack_34 = pfVar1[1];
  fStack_30 = pfVar1[2];
  iVar2 = *(int *)(iVar5 + 4);
  fVar7 = *(float *)(param_2 + 0x68);
  fVar6 = *(float *)(param_2 + 0x78);
  fVar14 = *(float *)(iVar2 + 0x98);
  fVar15 = *(float *)(iVar2 + 0xa8);
  fVar16 = *(float *)(iVar2 + 0xb8);
  iVar2 = *(int *)(iVar5 + 4);
  *(float *)(iVar2 + 0x98) = fVar14 - *(float *)(param_2 + 0x58);
  *(float *)(iVar2 + 0xa8) = fVar15 - fVar7;
  *(float *)(iVar2 + 0xb8) = fVar16 - fVar6;
  local_2c = local_38 - *(float *)(param_2 + 0x58);
  local_28 = fStack_34 - *(float *)(param_2 + 0x68);
  local_24 = fStack_30 - *(float *)(param_2 + 0x78);
  fn_005456f4(*(undefined4 *)(iVar5 + 4),&local_2c);
  fn_00545778(*(undefined4 *)(iVar5 + 4));
  fn_00117984();
  fn_0010fa20();
  uVar3 = fn_006eb278();
  fn_005e1b48(uVar3,*(int *)(iVar5 + 4) + 0x148);
  iVar2 = *(int *)(iVar5 + 4);
  *(float *)(iVar2 + 0x98) = fVar14;
  *(float *)(iVar2 + 0xa8) = fVar15;
  *(float *)(iVar2 + 0xb8) = fVar16;
  fn_005456f4(*(undefined4 *)(iVar5 + 4),&local_38);
  return;
}



void fn_005e1b48(int param_1,undefined4 *param_2)

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
  *(undefined4 *)(iVar1 + 0x88) = *param_2;
  *(undefined4 *)(iVar1 + 0x8c) = uVar2;
  *(undefined4 *)(iVar1 + 0x90) = uVar3;
  *(undefined4 *)(iVar1 + 0x94) = uVar4;
  *(undefined4 *)(iVar1 + 0x98) = uVar5;
  *(undefined4 *)(iVar1 + 0x9c) = uVar6;
  *(undefined4 *)(iVar1 + 0xa0) = uVar7;
  *(undefined4 *)(iVar1 + 0xa4) = uVar8;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0xa8) = param_2[8];
  *(undefined4 *)(iVar1 + 0xac) = uVar2;
  *(undefined4 *)(iVar1 + 0xb0) = uVar3;
  *(undefined4 *)(iVar1 + 0xb4) = uVar4;
  *(byte *)(iVar1 + 0x54) = *(byte *)(iVar1 + 0x54) | 1;
  return;
}



void fn_005e19d4(int param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0x3f000000;
  local_14 = 0x3f000000;
  local_10 = 0x3f000000;
  local_c = 0x3f000000;
  fn_0060ba2c(param_2,&local_18,&local_10,*(int *)(param_1 + 4) + 0x54);
  return;
}



int fn_005e19c8(int param_1)

{
  return *(int *)(param_1 + 4) + 0x164;
}



void fn_005e19b8(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xe0) = *param_2;
  return;
}



int fn_005e19a4(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x184) + param_2 * 0x28;
}



void fn_005e18d4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  uVar7 = 0;
  iVar6 = *(int *)(param_1 + 4);
  piVar8 = *(int **)(iVar6 + 0xdc);
  iVar2 = (*(int *)(iVar6 + 0x188) - *(int *)(iVar6 + 0x184)) / 0x28;
  if (0 < iVar2) {
    do {
      iVar3 = fn_006ec6f4(*(int *)(iVar6 + 0x184) + uVar7 * 0x28);
      iVar4 = 0;
      if (0 < iVar3) {
        uVar5 = uVar7 & 0xffff;
        do {
          *(undefined4 *)(*(int *)(iVar6 + 0xc) + uVar5 * 0x278 + iVar4 * 4 + 600) = 0;
          *(undefined4 *)(*(int *)(iVar6 + 0xc) + uVar5 * 0x278 + iVar4 * 4 + 0x238) = 0;
          *(undefined1 *)(*(int *)(iVar6 + 0xc) + uVar5 * 0x278 + iVar4 + 0x168) = 0;
          iVar1 = iVar4 * 0x20;
          iVar4 = iVar4 + 1;
          *(undefined1 *)(*piVar8 + (uVar7 & 0xffff) * 0x100 + iVar1 + 0x1c) = 0;
        } while (iVar4 < iVar3);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar2);
  }
  return;
}


