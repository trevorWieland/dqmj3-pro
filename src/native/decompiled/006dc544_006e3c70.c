#include "006dc544_006e3c70.h"



void fn_006e3c70(int param_1)

{
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006e3c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 8))();
  return;
}



void fn_006e2cf0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006e2cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}



void fn_006e1ee8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x24))(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006e1f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,0);
  return;
}



void fn_006e1ee4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x24))(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006e1f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,0);
  return;
}



void fn_006e04a0(int param_1,int *param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_30 [20];
  
  iVar5 = *param_2 + (param_3 & 0xffff) * 0x278 + 4;
  if (*(char *)(param_1 + 0x29) != '\0') {
    if (*(char *)(param_1 + 0x28) == '\v') {
      iVar1 = iVar5 + param_4 * 0x2c;
      uVar2 = fn_0044eed8();
      iVar3 = fn_0044eed8();
      *(uint *)(iVar1 + 0x28) = uVar2 | iVar3 << 0x10;
      uVar4 = fn_0044eed8();
      *(undefined4 *)(iVar1 + 0x2c) = uVar4;
    }
    if (*(char *)(param_1 + 0x28) == '\t') {
      iVar5 = iVar5 + param_4 * 0x2c;
      uVar2 = fn_0044eca8();
      iVar1 = fn_0044eca8();
      *(uint *)(iVar5 + 0x14) = uVar2 | iVar1 << 0x10;
      uVar4 = fn_0044eca8();
      *(undefined4 *)(iVar5 + 0x18) = uVar4;
      *(undefined1 *)(iVar5 + 0x1c) = 1;
      return;
    }
    fn_0016947c(local_30,param_5,param_1 + 0x1c);
    iVar5 = iVar5 + param_4 * 0x2c;
    uVar2 = fn_0044eca8();
    iVar1 = fn_0044eca8();
    *(uint *)(iVar5 + 0x14) = uVar2 | iVar1 << 0x10;
    uVar4 = fn_0044eca8();
    *(undefined4 *)(iVar5 + 0x18) = uVar4;
    *(undefined1 *)(iVar5 + 0x1c) = 0;
  }
  return;
}



uint * fn_006dd1a4(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  float in_s0;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x80000000) == 0) {
    if (in_s0 == 0.0) {
      *param_2 = uVar2 & 0xffffff;
    }
    else {
      iVar1 = (1 << ((uVar2 & 0x7f000000) >> 0x18)) + -1;
      VectorSignedToFloat(iVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
      uVar2 = fn_0044ece8(iVar1);
      *param_2 = uVar2;
    }
  }
  else if (in_s0 == 0.0) {
    *param_2 = 0;
  }
  else {
    uVar2 = (uVar2 & 0x7f000000) >> 0x18;
    if (uVar2 == 0x18) {
      iVar1 = 0x18;
    }
    else {
      iVar1 = (1 << uVar2) + -1;
      VectorSignedToFloat(iVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    }
    uVar2 = fn_0044ece8(iVar1);
    *param_2 = uVar2;
  }
  param_2[1] = 0xf004e;
  return param_2 + 2;
}



undefined4 * fn_006dd134(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*param_1 & 0x80000000) == 0) {
    *param_2 = 1;
    param_2[1] = 0xf006d;
    uVar2 = fn_0044ece8();
    param_2[2] = uVar2;
    param_2[3] = 0xf004d;
    return param_2 + 4;
  }
  *param_2 = 0;
  param_2[1] = 0xf006d;
  if ((*param_1 & 0x80000000) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1 & 0xffffff;
  }
  param_2[2] = uVar1;
  param_2[3] = 0xf004d;
  return param_2 + 4;
}



void fn_006dc544(undefined1 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  fVar1 = 1.0;
  fVar2 = 0.0;
  fVar3 = *param_2;
  if (1.0 < fVar3) {
    fVar4 = fVar1;
  }
  else {
    fVar4 = fVar2;
    if (0.0 <= fVar3) {
      fVar4 = fVar3;
    }
  }
  uVar5 = VectorFloatToUnsigned(fVar4 * 255.0 + 0.5,3);
  fVar3 = param_2[1];
  if (1.0 < fVar3) {
    fVar3 = fVar1;
  }
  else if (fVar3 < 0.0) {
    fVar3 = fVar2;
  }
  uVar6 = VectorFloatToUnsigned(fVar3 * 255.0 + 0.5,3);
  fVar3 = param_2[2];
  if (1.0 < fVar3) {
    fVar3 = fVar1;
  }
  else if (fVar3 < 0.0) {
    fVar3 = fVar2;
  }
  uVar7 = VectorFloatToUnsigned(fVar3 * 255.0 + 0.5,3);
  fVar3 = param_2[3];
  if (fVar3 <= 1.0) {
    if (fVar3 < 0.0) {
      fVar1 = fVar2;
    }
    else {
      fVar1 = fVar3;
    }
  }
  *param_1 = (char)uVar5;
  param_1[1] = (char)uVar6;
  param_1[2] = (char)uVar7;
  uVar5 = VectorFloatToUnsigned(fVar1 * 255.0 + 0.5,3);
  param_1[3] = (char)uVar5;
  return;
}


