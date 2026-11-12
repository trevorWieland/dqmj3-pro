#include "00195768_00195e28.h"



void fn_00195e28(int param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



void fn_00195e18(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x20) = param_2 + param_3;
  return;
}



void fn_00195e04(int param_1,int param_2)

{
  fn_0017d948(param_1 + 0x1dc,param_1 + 0x1e0,param_2 + 4);
  return;
}



void fn_00195dc4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        fn_001a3e70(iVar1,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}



void fn_00195d80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        fn_001a3e54(iVar1,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  *(char *)(param_1 + 0x23) = (char)param_2;
  return;
}



void fn_00195a70(int param_1,int param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar10;
  ulonglong uVar9;
  float fVar11;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  
  cVar1 = DAT_008ece51;
  fVar2 = 1.0;
  fVar6 = 0.0;
  fVar5 = *(float *)(param_1 + 0x44);
  if (1.0 < fVar5) {
    fVar4 = fVar2;
  }
  else {
    fVar4 = fVar6;
    if (0.0 <= fVar5) {
      fVar4 = fVar5;
    }
  }
  fVar10 = *(float *)(param_1 + 0x48);
  fVar5 = fVar10;
  if (0x3f800000 < (int)fVar10) {
    fVar5 = fVar2;
  }
  uVar9 = CONCAT44(fVar5,fVar4);
  if (((int)fVar10 < 0x3f800001) && (fVar5 <= 0.0)) {
    uVar9 = (ulonglong)(uint)fVar4;
  }
  fVar5 = *(float *)(param_1 + 0x4c);
  if (((int)fVar5 < 0x3f800001) && (fVar2 = fVar5, fVar5 <= 0.0)) {
    fVar2 = fVar6;
  }
  local_40 = 0;
  local_3f = 0;
  local_3e = 0;
  uVar7 = 0;
  switch(*(undefined1 *)(param_1 + 0x2d)) {
  case 1:
    goto switchD_00195b20_caseD_1;
  case 2:
    local_3f = 1;
    local_3e = 1;
    break;
  case 3:
    local_40 = 1;
    break;
  case 4:
    local_40 = 1;
    goto switchD_00195b20_caseD_1;
  case 5:
    local_40 = 1;
    local_3f = 1;
    local_3e = 1;
    break;
  case 6:
    local_40 = 2;
    break;
  case 7:
    local_40 = 2;
switchD_00195b20_caseD_1:
    local_3f = 1;
    break;
  case 8:
    local_40 = 2;
    local_3f = 1;
    local_3e = 1;
  }
  local_3d = *(undefined1 *)(param_1 + 0x23);
  if (DAT_008ece51 == '\0') {
    uVar3 = 0;
    fn_001a03f4(&local_40);
    uVar7 = CONCAT44(uVar3,uVar3);
  }
  else {
    fVar5 = fVar6;
    if (DAT_008ece51 == '\x01' || DAT_008ece51 == '\x02') {
      if ((*(int *)(param_1 + 8) < 2) || (*(char *)(param_1 + 0x2c) != '\x01')) {
        fVar4 = *(float *)(param_1 + 0x30);
        if (*(int *)(param_1 + 8) == 2) {
          if (param_2 == 0) {
            fVar4 = fVar4 - 1.0;
          }
          else if (param_2 == 1) {
            fVar4 = fVar4 + 1.0;
          }
        }
        fVar10 = fVar4;
        fn_001a03f4(&local_40);
        fVar10 = 0.0 - fVar10;
        fn_001a03f4(&local_40);
        uVar7 = CONCAT44(fVar4,fVar10);
      }
      else if (param_2 == 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x30);
        fn_001a03f4(&local_40);
        uVar7 = CONCAT44(uVar3,(int)uVar7);
      }
      else if (param_2 == 1) {
        fVar10 = 0.0 - *(float *)(param_1 + 0x30);
        fVar4 = fVar6;
        fn_001a03f4(&local_40);
        uVar7 = CONCAT44(fVar6,fVar10);
        fVar6 = fVar4;
      }
    }
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        fVar6 = *(float *)(param_1 + 0x34);
        fn_001a04fc(&local_40);
        fVar5 = 2.0 - *(float *)(param_1 + 0x34);
        fn_001a04fc(&local_40);
      }
      goto LAB_00195cf8;
    }
  }
  fVar6 = 0.0;
  fn_001a04fc(&local_40);
  fVar5 = 2.0;
  fn_001a04fc(&local_40);
LAB_00195cf8:
  fVar8 = (float)((ulonglong)uVar7 >> 0x20);
  fVar10 = fVar6 * fVar8;
  fVar6 = fVar6 * (float)uVar7;
  fVar4 = fVar5 * (float)uVar7;
  fVar5 = fVar5 * fVar8;
  fVar8 = (float)uVar9;
  fVar11 = (float)(uVar9 >> 0x20);
  *param_3 = fVar10 * fVar8;
  param_3[4] = fVar11 * fVar10;
  param_3[1] = fVar6 * fVar8;
  param_3[5] = fVar11 * fVar6;
  param_3[0xb] = fVar2 * fVar4;
  param_3[8] = fVar2 * fVar10;
  param_3[9] = fVar2 * fVar6;
  param_3[10] = fVar2 * fVar5;
  param_3[2] = fVar5 * fVar8;
  param_3[3] = fVar4 * fVar8;
  param_3[6] = fVar11 * fVar5;
  param_3[7] = fVar11 * fVar4;
  return;
}



void fn_001959d4(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if ((*param_2 == 0x50545343) && (param_2[2] - 0x10000U < 0x10201)) {
    *param_1 = param_2;
    piVar1 = (int *)fn_001a2258(param_2);
    if ((*piVar1 == 0x4f464e49) && (piVar2 = (int *)fn_001a22c4(*param_1), *piVar2 == 0x54414450))
    {
      param_1[1] = piVar1 + 2;
      param_1[2] = piVar2 + 2;
    }
  }
  return;
}



int * fn_00195964(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 == 0x51455343) && (param_2[2] - 0x1000000U < 0x10001)) {
    *param_1 = (int)param_2;
    iVar1 = fn_001a2184(param_2);
    param_1[1] = iVar1 + 8;
    iVar1 = fn_001a21f0(*param_1);
    param_1[2] = iVar1 + 8;
    return param_1;
  }
  return param_1;
}



void fn_001958bc(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  if ((*param_2 == 0x52415743) && (param_2[2] == 0x1000000)) {
    *param_1 = (int)param_2;
    iVar1 = fn_0018360c(param_2);
    param_1[1] = iVar1 + 8;
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[2] = 0;
    if ((param_3 != 0) &&
       (iVar2 = *param_1, iVar1 = fn_00176ac0(iVar2), *(int *)(iVar2 + iVar1) == 0x54415743)) {
      iVar1 = fn_00176ac0(*param_1);
      param_1[2] = iVar1 + 4 + (int)param_2;
    }
  }
  return;
}



void fn_00195848(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = fn_001a03e0(*param_2);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[1] != '\0';
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return;
}



void fn_001957f4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  if ((*param_2 == 0x4b4e4243) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = param_2;
    iVar1 = fn_00176cfc(param_2);
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = iVar1 + 8;
  }
  return;
}



void fn_00195768(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = param_3[1];
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x20);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  uVar2 = param_3[3];
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x20 + 8);
  *puVar1 = param_3[2];
  puVar1[1] = uVar2;
  uVar2 = param_3[5];
  puVar1 = (undefined4 *)(param_2 * 0x20 + 0x10 + *(int *)(param_1 + 4));
  *puVar1 = param_3[4];
  puVar1[1] = uVar2;
  uVar2 = param_3[7];
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x20 + 0x18);
  *puVar1 = param_3[6];
  puVar1[1] = uVar2;
  return;
}


