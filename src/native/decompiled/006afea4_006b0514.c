#include "006afea4_006b0514.h"



undefined4 fn_006b0514(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  uint uVar2;
  float in_s0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  
  pfVar1 = *(float **)(param_1 + 0x100);
  uVar2 = 0;
  fVar3 = *(float *)(param_1 + 0x28) + pfVar1[2];
  fVar6 = *(float *)(param_1 + 0x20) + *pfVar1 + *param_3;
  fVar7 = *(float *)(param_1 + 0x24) + pfVar1[1] + param_3[1];
  fVar8 = fVar3 + param_3[2];
  do {
    if ((&DAT_007be404)[uVar2 * 6] == *(short *)(param_1 + 0x16a)) {
      fn_002aad7c(param_1);
      fn_002cd59c();
      fVar4 = *(float *)(param_1 + 0x30);
      fVar10 = (float)(&DAT_007be40c)[uVar2 * 3] * fVar3;
      fVar5 = fVar4;
      fn_006faec0();
      fVar4 = fVar4 * fVar10;
      fVar9 = 0.0;
      fn_006f9fb0();
      local_54 = fVar6 + fVar4;
      fStack_50 = fVar7 + fVar9;
      fStack_4c = fVar8 + fVar5 * fVar10;
      local_40 = fVar8 - fVar5 * fVar10;
      fStack_44 = fVar7 - fVar9;
      local_48 = fVar6 - fVar4;
      fn_001c0c08(param_2,&local_54,&local_48,&local_60);
      fVar3 = in_s0 - (20.0 - (float)(&DAT_007be408)[uVar2 * 3]) * fVar3;
      if ((*param_2 - local_60) * (*param_2 - local_60) +
          (param_2[1] - local_5c) * (param_2[1] - local_5c) +
          (param_2[2] - local_58) * (param_2[2] - local_58) <= fVar3 * fVar3) {
        return 1;
      }
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  if ((*param_2 - fVar6) * (*param_2 - fVar6) + (param_2[1] - fVar7) * (param_2[1] - fVar7) +
      (param_2[2] - fVar8) * (param_2[2] - fVar8) <= in_s0 * in_s0) {
    return 1;
  }
  return 0;
}



undefined4 fn_006b04b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 == 0) {
    iVar1 = fn_00242b6c((int)*(short *)(param_1 + 0x16a));
    if ((iVar1 == 0) || ((iVar1 == 1 && (iVar1 = fn_006a99b0(param_1), iVar1 != 0)))) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



bool fn_006b0108(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_30;
  float local_2c;
  undefined4 uStack_28;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  iVar2 = fn_001e6e78();
  if ((((iVar2 == 0) && (param_3 != 0 || param_2 != 0xb)) && (*(int *)(param_1 + 400) == 0)) &&
     (iVar2 = fn_006f733c(DAT_008977e0), iVar2 == 0)) {
    if (*(int *)(param_1 + 8) != 1) {
      fVar5 = *(float *)(*(int *)(param_1 + 0x170) + 0xe8);
      fVar7 = (float)VectorSignedToFloat(fVar5,(byte)(in_fpscr >> 0x16) & 3);
      iVar2 = fn_006f7358(DAT_008977e0);
      if (iVar2 != 0) {
        fVar5 = 20.0;
      }
      if (iVar2 != 0) {
        fVar7 = fVar7 * fVar5;
      }
      fVar6 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0x170) + 0x20);
      fVar5 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x170) + 0x28);
      if (fVar7 * fVar7 <= fVar6 * fVar6 + fVar5 * fVar5) {
        return false;
      }
    }
    uVar3 = fn_006b0a1c(param_1);
    bVar4 = uVar3 == 0;
    if (bVar4) {
      uVar3 = *(uint *)(param_1 + 0x39c);
    }
    if (bVar4 && (uVar3 & 0x400000) == 0) {
      local_30 = *(undefined4 *)(iVar1 + 0x20);
      local_2c = *(float *)(iVar1 + 0x24);
      uStack_28 = *(undefined4 *)(iVar1 + 0x28);
      iVar2 = fn_006a99b0(iVar1);
      if (iVar2 != 0) {
        local_2c = *(float *)(iVar1 + 0x10c) + local_2c;
      }
      iVar1 = fn_006b0338(param_1,&local_30,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}



undefined4 fn_006b0338(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_a8 [3];
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_24;
  
  fn_0017821c(local_a8,&DAT_007be374,0x90);
  uVar4 = 0x41700000;
  uVar2 = uVar4;
  fn_0017fe34();
  uVar1 = uVar2;
  local_a8[0] = uVar4;
  fn_0017fe34();
  uVar3 = uVar1;
  local_9c = uVar2;
  fn_0017fe34();
  uVar2 = 0x42b40000;
  local_90 = uVar1;
  fn_0017fe34();
  uVar4 = 0x43340000;
  uVar1 = uVar4;
  local_84 = uVar2;
  fn_0017fe34();
  uVar2 = uVar1;
  local_78 = uVar4;
  fn_0017fe34();
  uVar4 = uVar2;
  local_6c = uVar1;
  fn_0017fe34();
  uVar1 = uVar3;
  local_60 = uVar2;
  fn_0017fe34();
  local_54 = uVar3;
  fn_0017fe34();
  uVar2 = uVar4;
  local_48 = uVar1;
  fn_0017fe34();
  uVar1 = uVar2;
  local_3c = uVar4;
  fn_0017fe34();
  local_30 = uVar2;
  fn_0017fe34();
  if ((param_3 < 0) || (0xb < param_3)) {
    return 0;
  }
  local_24 = uVar1;
  uVar1 = fn_006b0258(param_1,param_2);
  return uVar1;
}



undefined4 fn_006b0258(int param_1,float *param_2)

{
  int iVar1;
  float in_s0;
  float fVar2;
  float in_s1;
  float in_s2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(param_1 + 0x20);
  fVar5 = *(float *)(param_1 + 0x24);
  fVar4 = *(float *)(param_1 + 0x28);
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 != 0) {
    in_s1 = in_s1 * 20.0;
    in_s2 = in_s2 * 2.0;
  }
  fVar2 = fVar3 - *param_2;
  if ((fVar2 * fVar2 + (fVar4 - param_2[2]) * (fVar4 - param_2[2]) <= in_s1 * in_s1) &&
     (ABS(param_2[1] - fVar5) <= in_s2)) {
    fVar3 = *param_2 - fVar3;
    fVar4 = *(float *)(param_1 + 0x30);
    fn_00525bd0();
    fVar4 = fVar3 * 0.024543693 - fVar4;
    fn_005df8f8();
    if (ABS(fVar4) < in_s0) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006b0074(int param_1)

{
  int iVar1;
  
  fn_006f7a84(DAT_008977e0);
  iVar1 = fn_001e6e78();
  if (iVar1 == 0) {
    iVar1 = fn_006f7984(DAT_008977e0);
    if (iVar1 != 0) {
      fn_006f7984(DAT_008977e0);
      iVar1 = fn_006ccf88();
      if (iVar1 != 0) {
        return 1;
      }
    }
    fn_006f7a84(DAT_008977e0);
    iVar1 = fn_006aaa00();
    if ((iVar1 == 0) || (2 < *(byte *)(param_1 + 0x1be))) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006b0000(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = fn_00242b6c((int)*(short *)((int)param_1 + 0x16a));
  if ((iVar2 != 1) || (iVar2 = (**(code **)(*param_1 + 0x68))(param_1), iVar2 == 0)) {
    puVar3 = (undefined4 *)(int)*(short *)((int)param_1 + 0x16a);
    puVar1 = DAT_008913f4;
    if (DAT_008913f4 != puVar3) {
      puVar1 = DAT_008913f8;
    }
    if (DAT_008913f4 != puVar3 && puVar1 != puVar3) {
      puVar1 = &DAT_008913f4;
      if (DAT_008913fc != puVar3) {
        puVar1 = DAT_00891400;
      }
      if (DAT_008913fc != puVar3 && puVar1 != puVar3) {
        return 0;
      }
    }
  }
  return 1;
}



bool fn_006aff38(int param_1,float *param_2)

{
  int iVar1;
  bool bVar2;
  uint in_fpscr;
  float fVar3;
  float in_s1;
  float fVar4;
  
  fVar3 = *(float *)(*(int *)(param_1 + 0x170) + 0xe8);
  fVar4 = (float)VectorSignedToFloat(fVar3,(byte)(in_fpscr >> 0x16) & 3);
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 != 0) {
    fVar3 = 20.0;
  }
  if (iVar1 != 0) {
    fVar4 = fVar4 * fVar3;
  }
  bVar2 = param_2 != (float *)0x0;
  if (bVar2) {
    fVar3 = *param_2;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x20);
  }
  if (bVar2) {
    in_s1 = param_2[2];
  }
  fVar3 = fVar3 - *(float *)(*(int *)(param_1 + 0x170) + 0x20);
  if (!bVar2) {
    in_s1 = *(float *)(param_1 + 0x28);
  }
  in_s1 = in_s1 - *(float *)(*(int *)(param_1 + 0x170) + 0x28);
  return fVar3 * fVar3 + in_s1 * in_s1 < fVar4 * fVar4;
}



undefined4 fn_006afea4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar1 == 0) &&
      ((param_1[2] != 2 ||
       (iVar1 = (**(code **)(*param_1 + 0x70))(param_1,2),
       (iVar1 != 0x16 && iVar1 != 0x17) && iVar1 != 0x1a)))) &&
     ((param_1[3] != 2 ||
      (iVar1 = (**(code **)(*param_1 + 0x74))(param_1,2),
      (iVar1 != 0x16 && iVar1 != 0x17) && iVar1 != 0x1a)))) {
    return 1;
  }
  return 0;
}


