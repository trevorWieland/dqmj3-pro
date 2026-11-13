#include "006a7d2c_006a8358.h"



void fn_006a8358(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [16];
  
  fn_0017fe34();
  uVar1 = fn_00176d68(param_1);
  local_20 = 0;
  fn_006dcca4(uVar1,0,local_1c,0);
  fn_0052534c(&local_20,local_18);
  fn_00525b38();
  return;
}



int fn_006a833c(int param_1,int param_2)

{
  return param_2 - *(int *)(*(int *)(param_1 + 0xd8) + param_2 * 8 + 4) * *(int *)(param_1 + 0x3c);
}



void fn_006a82f4(undefined1 *param_1,char *param_2,int *param_3)

{
  int iVar1;
  
  for (iVar1 = (int)*param_2 + *param_3; 0x78 < iVar1; iVar1 = iVar1 + -0xf0) {
  }
  for (; iVar1 < -0x78; iVar1 = iVar1 + 0xf0) {
  }
  *param_1 = (char)iVar1;
  return;
}



void fn_006a82e0(int *param_1,char *param_2,char *param_3)

{
  *param_1 = (int)*param_2 - (int)*param_3;
  return;
}



uint fn_006a826c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x15) == '\0') {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  }
  else if (*(char *)(param_1 + 0x14) == '\0') {
    iVar2 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
    uVar1 = iVar2 - *(int *)(param_1 + 4);
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 != 0) && (uVar3 <= uVar1)) {
    uVar1 = uVar3;
  }
  return uVar1;
}



undefined4 fn_006a81ec(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x15) == '\0') {
      uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    }
    else if (*(char *)(param_1 + 0x14) == '\0') {
      iVar2 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
      uVar1 = iVar2 - *(int *)(param_1 + 4);
    }
    else {
      uVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
    }
    if (*(uint *)(param_1 + 0x10) <= uVar1) {
      return 1;
    }
  }
  return 0;
}



int fn_006a816c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = 0x7fffffff;
  }
  else {
    if (*(char *)(param_1 + 0x15) == '\0') {
      uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    }
    else if (*(char *)(param_1 + 0x14) == '\0') {
      iVar1 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
      uVar2 = iVar1 - *(int *)(param_1 + 4);
    }
    else {
      uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
    }
    if (uVar2 < *(uint *)(param_1 + 0x10)) {
      iVar1 = *(uint *)(param_1 + 0x10) - uVar2;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



bool fn_006a80b8(int *param_1,float *param_2)

{
  int iVar1;
  float in_s0;
  float fVar2;
  float fVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 100))(param_1), iVar1 == 0)) {
    fVar2 = (float)param_1[8] - *param_2;
    fVar3 = (float)param_1[10] - param_2[2];
    fVar2 = fVar2 * fVar2 + ((float)param_1[9] - param_2[1]) * ((float)param_1[9] - param_2[1]);
  }
  else {
    fVar2 = (float)param_1[8] - *param_2;
    fVar3 = (float)param_1[10] - param_2[2];
    fVar2 = fVar2 * fVar2;
  }
  return fVar2 + fVar3 * fVar3 <= in_s0 * in_s0;
}



void fn_006a8048(void)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 local_18 [24];
  
  local_20 = 0;
  uStack_1c = 0x3f800000;
  fn_005f2d30(&local_20,local_18);
  return;
}



void fn_006a7fac(void)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 local_18 [24];
  
  local_20 = 0;
  uStack_1c = 0x3f800000;
  fn_005f2d30(&local_20,local_18);
  return;
}



bool fn_006a7f8c(int *param_1)

{
  return *param_1 != -1;
}



bool fn_006a7f44(int param_1)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(int *)(param_1 + 0x10) + 0x24);
  bVar1 = fVar2 == 0.0;
  if (bVar1) {
    fVar2 = *(float *)(*(int *)(param_1 + 0x10) + 0x1c);
  }
  return !bVar1 || (!bVar1 || fVar2 != 0.0);
}



void fn_006a7f38(void)

{
  return;
}



bool fn_006a7ee8(int param_1)

{
  return *(float *)(*(int *)(param_1 + 0x10) + 0x10) != 0.0;
}



void fn_006a7edc(void)

{
  return;
}



uint fn_006a7ea4(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0x10) + 0x48) >> 6 & 1;
}



void fn_006a7e80(void)

{
  return;
}



int fn_006a7e3c(int param_1)

{
  return (int)*(float *)(*(int *)(param_1 + 0x10) + 0x58);
}



int fn_006a7e28(int param_1)

{
  return (int)*(float *)(*(int *)(param_1 + 0x10) + 0x54);
}



void fn_006a7de0(void)

{
  return;
}



bool fn_006a7d2c(int param_1)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(int *)(param_1 + 0x10) + 0x1c);
  bVar1 = fVar2 == 0.0;
  if (bVar1) {
    fVar2 = *(float *)(*(int *)(param_1 + 0x10) + 0x24);
  }
  return !bVar1 || (!bVar1 || fVar2 != 0.0);
}


