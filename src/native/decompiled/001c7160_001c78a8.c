#include "001c7160_001c78a8.h"



undefined4 fn_001c78a8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 0) {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(param_1 + iVar2 * 0x10 + 0x68);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1,param_3,param_4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
  }
  else {
    piVar1 = *(int **)(param_1 + param_2 * 0x10 + 0x68);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1,param_3,param_4);
    }
  }
  return 1;
}



void fn_001c77f4(int *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = ((float)param_1[8] + *param_2) - (float)param_1[8] != 0.0;
  if ((bVar1 || (bVar1 || ((float)param_1[9] + param_2[1]) - (float)param_1[9] != 0.0)) ||
      ((float)param_1[10] + param_2[2]) - (float)param_1[10] != 0.0) {
    fn_00525bd0();
    fn_001c7160(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x001c789c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,param_2,0);
  return;
}



void fn_001c7764(int param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = *param_2 - *(float *)(param_1 + 0x20) == 0.0;
  if ((bVar1 && (bVar1 && param_2[1] - *(float *)(param_1 + 0x24) == 0.0)) &&
     (param_2[2] - *(float *)(param_1 + 0x28) == 0.0)) {
    return;
  }
  fn_00525bd0(param_1);
  fn_001c7160(param_1);
  return;
}



void fn_001c7604(int *param_1,float *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = (float)param_1[10];
  fVar7 = *param_2 - (float)param_1[8];
  fVar8 = param_2[1] - (float)param_1[9];
  fVar6 = param_2[2] - fVar4;
  iVar2 = (**(code **)(*param_1 + 100))(param_1);
  fVar5 = 1.0;
  fVar3 = 0.0;
  if (iVar2 == 0) {
    if ((fVar7 != 0.0 || (fVar7 != 0.0 || fVar8 != 0.0)) || fVar6 != 0.0) {
      fVar3 = 1.0 / SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
      fVar7 = fVar7 * fVar3;
      fVar8 = fVar8 * fVar3;
      fVar6 = fVar6 * fVar3;
    }
    (**(code **)(*param_1 + 0x94))(param_1);
    fVar7 = fVar7 * fVar3;
    fVar5 = fVar8 * fVar3;
    fVar6 = fVar6 * fVar3;
    param_1[0x13] = (int)fVar6;
    param_1[0x11] = (int)fVar7;
    param_1[0x12] = (int)fVar5;
  }
  else {
    bVar1 = fVar7 == 0.0;
    if (bVar1) {
      fVar4 = fVar3;
    }
    if (!bVar1 || (!bVar1 || fVar6 != fVar4)) {
      fVar3 = 1.0 / SQRT(fVar7 * fVar7 + 0.0 + fVar6 * fVar6);
      fVar7 = fVar7 * fVar3;
      fVar6 = fVar6 * fVar3;
    }
    (**(code **)(*param_1 + 0x94))(param_1);
    fVar7 = fVar7 * fVar3;
    fVar6 = fVar6 * fVar3;
    param_1[0x11] = (int)fVar7;
    param_1[0x13] = (int)fVar6;
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_3);
  param_1[0x11] = (int)fVar6;
  param_1[0x12] = (int)fVar7;
  param_1[0x13] = (int)fVar5;
  (**(code **)(*param_1 + 0x94))(param_1);
  fn_006a80b8(param_1,param_2);
  return;
}



undefined4 fn_001c73c8(int *param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_40;
  float fStack_3c;
  float local_38;
  
  fVar9 = (float)param_1[8];
  fVar10 = (float)param_1[10];
  fVar2 = *param_2 - fVar9;
  fVar6 = param_2[1] - (float)param_1[9];
  fVar5 = param_2[2] - fVar10;
  fVar12 = fVar2;
  (**(code **)(*param_1 + 0x94))(param_1);
  fVar4 = fVar2 * fVar2;
  if (fVar4 < fVar12 * fVar12 + fVar6 * fVar6 + fVar5 * fVar5) {
    fVar7 = fVar12;
    fn_00525bd0();
    fVar11 = 0.024543693;
    fVar12 = fVar12 * 0.024543693;
    fVar3 = fVar12 - (float)param_1[0xc];
    fn_005df8f8();
    fVar3 = ABS(fVar3);
    iVar1 = fn_001c7160(param_1);
    if (iVar1 == 0) {
      fn_006a7fac(param_1);
      fVar8 = 0.0;
      fVar9 = fVar9 + fVar12 * fVar2;
      fVar12 = *param_2 - fVar9;
      if (fVar12 != 0.0 || (fVar12 != 0.0 || param_2[2] - (fVar10 + fVar4 * fVar2) != 0.0)) {
        fn_00525bd0();
        fVar12 = fVar12 * fVar11 - (float)param_1[0xc];
        fn_005df8f8();
        if (ABS(fVar12) < fVar3) {
          iVar1 = (**(code **)(*param_1 + 100))(param_1);
          if (iVar1 == 0) {
            fVar2 = 1.0;
            fVar12 = 1.0 / SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
            fVar6 = fVar6 * fVar12;
            fn_006a7fac(param_1);
            fVar2 = fVar2 / SQRT(fVar12 * fVar12 + fVar6 * fVar6 + fVar9 * fVar9);
            fVar4 = fVar12 * fVar2;
            fVar6 = fVar6 * fVar2;
            fVar9 = fVar9 * fVar2;
            (**(code **)(*param_1 + 0x94))(param_1);
            local_40 = fVar4 * fVar12;
            fStack_3c = fVar6 * fVar12;
            local_38 = fVar9 * fVar12;
            (**(code **)(*param_1 + 0x38))(param_1,&local_40,0);
          }
          else {
            (**(code **)(*param_1 + 0x34))(param_1);
          }
          return 0;
        }
        fVar12 = *param_2 - (float)param_1[8];
        if ((fVar12 != fVar8 || (fVar12 != fVar8 || param_2[1] - (float)param_1[9] != fVar8)) ||
            param_2[2] - (float)param_1[10] != fVar8) {
          fn_00525bd0();
          param_1[0xc] = (int)(fVar12 * fVar11);
        }
      }
    }
  }
  return 1;
}



void fn_001c72c0(int param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2 - *(float *)(param_1 + 0x20);
  if ((fVar1 != 0.0 || (fVar1 != 0.0 || param_2[1] - *(float *)(param_1 + 0x24) != 0.0)) ||
      param_2[2] - *(float *)(param_1 + 0x28) != 0.0) {
    fn_00525bd0();
    *(float *)(param_1 + 0x30) = fVar1 * 0.024543693;
  }
  return;
}



void fn_001c7264(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (((int)param_2 < 0) || (0x4f < param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
  }
  if (((int)param_3 < 0) || (0x4f < param_3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + param_3 * 0x2c + 0x8c);
  }
  fVar3 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20);
  if ((fVar3 != 0.0 || (fVar3 != 0.0 || *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24) != 0.0))
      || *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28) != 0.0) {
    fn_00525bd0();
    *(float *)(iVar2 + 0x30) = fVar3 * 0.024543693;
  }
  return;
}



void fn_001c7228(int *param_1,undefined4 param_2)

{
  undefined1 local_10 [4];
  int local_c;
  
  local_c = param_1[0x12];
  (**(code **)(*param_1 + 0x38))(param_1,local_10,param_2);
  return;
}



undefined4 fn_001c7160(int param_1)

{
  undefined4 uVar1;
  float in_s0;
  float in_s1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x30);
  fVar2 = in_s0 - fVar3;
  if (fVar2 <= 0.0) {
    for (; 0xc0490fdb < (uint)fVar2; fVar2 = fVar2 + 6.2831855) {
    }
  }
  else {
    for (; 0x40490fdb < (int)fVar2; fVar2 = fVar2 - 6.2831855) {
    }
  }
  if (ABS(fVar2) < in_s1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (0.0 < fVar2) {
      in_s0 = fVar3 + in_s1;
    }
    else {
      in_s0 = fVar3 - in_s1;
    }
  }
  while ((0x40490fdb < (int)in_s0 || (0xc0490fdb < (uint)in_s0))) {
    fn_005df8f8();
  }
  *(float *)(param_1 + 0x30) = in_s0;
  return uVar1;
}


