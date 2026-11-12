#include "006c14c4_006c1c58.h"



void fn_006c1c58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  fn_006c17a4();
  uVar1 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_30 = 0;
  local_38[0] = 0;
  local_34 = param_2;
  fn_006c17a4(param_1,param_2);
  local_24 = uVar1;
  fn_006c19d0(param_1,local_38,param_3,1);
  fn_006c17a4(param_1,local_34);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_2c;
  }
  return;
}



void fn_006c1c18(undefined4 param_1,int param_2,undefined4 *param_3)

{
  fn_006c17a4(param_1,*(undefined4 *)(param_2 + 4));
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_2 + 0xc);
  }
  return;
}



undefined4 * fn_006c1bdc(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_006c17a4();
  if ((iVar1 == 0) || ((uint)(*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8) >> 5) <= param_3)) {
    puVar2 = &DAT_008c9364;
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 8) + param_3 * 0x20 + 0x10);
  }
  return puVar2;
}



void fn_006c1984(undefined4 param_1,int param_2)

{
  fn_006c17a4(param_1,*(undefined4 *)(param_2 + 4));
  fn_006c17a4(param_1,*(undefined4 *)(param_2 + 4));
  return;
}



void fn_006c18f0(undefined4 param_1,undefined1 *param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  *(undefined4 *)(param_2 + 4) = param_3;
  *param_2 = 0;
  *(int *)(param_2 + 8) = param_4;
  iVar1 = fn_006c17a4(param_1,param_3);
  fVar3 = 0.0;
  if (-1 < param_4 + -1) {
    for (uVar2 = 0;
        ((int)uVar2 <= param_4 + -1 &&
        (uVar2 < (uint)(*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8) >> 5))); uVar2 = uVar2 + 1) {
      fVar3 = *(float *)(*(int *)(iVar1 + 8) + uVar2 * 0x20 + 0x1c) + fVar3;
    }
  }
  *(float *)(param_2 + 0x14) = fVar3;
  fn_006c19d0(param_1,param_2,param_5,param_6);
  return;
}



void fn_006c19d0(undefined4 param_1,undefined1 *param_2,float *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = fn_006c17a4(param_1,*(undefined4 *)(param_2 + 4));
  uVar3 = *(uint *)(param_2 + 8);
  if ((uint)(*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 5) <= uVar3) {
    return;
  }
  fVar7 = 0.0;
  uVar4 = uVar3;
  do {
    iVar5 = *(int *)(iVar2 + 8) + uVar4 * 0x20;
    bVar1 = true;
    fVar6 = (*param_3 - *(float *)(iVar5 + 4)) * *(float *)(iVar5 + 0x10) +
            (param_3[1] - *(float *)(iVar5 + 8)) * *(float *)(iVar5 + 0x14) +
            (param_3[2] - *(float *)(iVar5 + 0xc)) * *(float *)(iVar5 + 0x18);
    if (((fVar6 < 0.0) || (bVar1 = true, fVar6 < *(float *)(iVar5 + 0x1c))) ||
       (bVar1 = false, (*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 5) - 1U == uVar4)) {
      fVar6 = (*param_3 - *(float *)(iVar5 + 4)) * *(float *)(iVar5 + 0x10) +
              (param_3[1] - *(float *)(iVar5 + 8)) * *(float *)(iVar5 + 0x14) +
              (param_3[2] - *(float *)(iVar5 + 0xc)) * *(float *)(iVar5 + 0x18);
      if ((float *)(param_2 + 0x10) != (float *)0x0) {
        *(float *)(param_2 + 0x10) = fVar6;
      }
      fVar8 = (*(float *)(iVar5 + 0x10) * fVar6 + *(float *)(iVar5 + 4)) - *param_3;
      fVar9 = (*(float *)(iVar5 + 0x14) * fVar6 + *(float *)(iVar5 + 8)) - param_3[1];
      fVar6 = (*(float *)(iVar5 + 0x18) * fVar6 + *(float *)(iVar5 + 0xc)) - param_3[2];
      fVar6 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar6 * fVar6);
      if ((param_4 == 0) || ((int)fVar6 < 0x43480000)) {
        *(float *)(param_2 + 0xc) = fVar6;
        *(uint *)(param_2 + 8) = uVar4;
        *(int *)(param_2 + 0x18) = iVar5;
        if (uVar4 != uVar3) {
          iVar2 = fn_006c17a4(param_1,*(undefined4 *)(param_2 + 4));
          if (-1 < (int)(uVar4 - 1)) {
            for (uVar3 = 0;
                ((int)uVar3 <= (int)(uVar4 - 1) &&
                (uVar3 < (uint)(*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 5)));
                uVar3 = uVar3 + 1) {
              fVar7 = *(float *)(*(int *)(iVar2 + 8) + uVar3 * 0x20 + 0x1c) + fVar7;
            }
          }
          *(float *)(param_2 + 0x14) = fVar7;
        }
        if (bVar1 || param_4 != 0) {
          return;
        }
        *param_2 = 1;
        return;
      }
    }
    uVar4 = uVar4 + 1;
    if ((uint)(*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 5) <= uVar4) {
      return;
    }
  } while( true );
}



void fn_006c180c(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float in_s0;
  float fVar5;
  
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 4) = param_3;
  *param_2 = 0;
  iVar1 = fn_006c17a4(param_1,param_3);
  uVar2 = 0;
  uVar3 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8) >> 5;
  if (uVar3 != 0) {
    do {
      iVar4 = *(int *)(iVar1 + 8) + uVar2 * 0x20;
      fVar5 = *(float *)(iVar4 + 0x1c);
      if ((in_s0 < fVar5) || (uVar3 - 1 == uVar2)) {
        *(float *)(param_2 + 0x10) = in_s0;
        *(uint *)(param_2 + 8) = uVar2;
        fVar5 = 0.0;
        *(int *)(param_2 + 0x18) = iVar4;
        *(undefined4 *)(param_2 + 0xc) = 0;
        iVar1 = fn_006c17a4(param_1,param_3);
        if (-1 < (int)(uVar2 - 1)) {
          for (uVar3 = 0;
              ((int)uVar3 <= (int)(uVar2 - 1) &&
              (uVar3 < (uint)(*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8) >> 5))); uVar3 = uVar3 + 1
              ) {
            fVar5 = *(float *)(*(int *)(iVar1 + 8) + uVar3 * 0x20 + 0x1c) + fVar5;
          }
        }
        *(float *)(param_2 + 0x14) = fVar5;
        return;
      }
      in_s0 = in_s0 - fVar5;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}



int fn_006c17a4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar1 = iVar3 >> 0x1f;
  iVar3 = iVar3 / 0x14 + iVar1;
  if (iVar3 != iVar1) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x10) + uVar2 * 0x14) == param_2) {
        return *(int *)(param_1 + 0x10) + uVar2 * 0x14;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(iVar3 - iVar1));
  }
  return 0;
}



int fn_006c178c(int param_1)

{
  if (*(int **)(param_1 + 0x40) == (int *)0x0) {
    return 1;
  }
  return (int)*(char *)(**(int **)(param_1 + 0x40) + 4);
}



undefined4 fn_006c1658(int *param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float in_s1;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  
  if (*param_1 == param_1[1]) {
    return 1;
  }
  pfVar2 = (float *)fn_006f7770(DAT_008977e0);
  iVar7 = *param_1;
  iVar8 = 0;
  iVar6 = 0;
  iVar1 = param_1[1] - iVar7 >> 2;
  if (0 < iVar1) {
    uVar13 = (ulonglong)(uint)pfVar2[2];
    do {
      iVar3 = *(int *)(iVar7 + iVar6 * 4);
      fn_00300f74(iVar6 + 1,iVar1);
      fVar10 = *(float *)(iVar3 + 0x28);
      iVar4 = *(int *)(iVar7 + extraout_r1 * 4);
      fVar12 = (float)uVar13;
      bVar9 = fVar12 <= fVar10;
      if (!bVar9 || fVar10 == fVar12) {
        in_s1 = *(float *)(iVar4 + 0x28);
        bVar9 = in_s1 <= fVar12;
      }
      if (bVar9) {
        in_s1 = *(float *)(iVar4 + 0x28);
        bVar9 = fVar12 <= in_s1;
        if (!bVar9 || in_s1 == fVar12) {
          bVar9 = fVar10 <= fVar12;
        }
        if (!bVar9) {
          iVar5 = -1;
          goto LAB_006c16fc;
        }
      }
      else {
        iVar5 = 1;
LAB_006c16fc:
        fVar11 = *(float *)(iVar3 + 0x20);
        in_s1 = fVar11 + ((fVar12 - fVar10) / (in_s1 - fVar10)) *
                         (*(float *)(iVar4 + 0x20) - fVar11);
        if (*pfVar2 < in_s1) {
          iVar8 = iVar8 + iVar5;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
    if (iVar8 != 0) {
      return 1;
    }
  }
  return 0;
}



int fn_006c1574(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  
  iVar3 = *(int *)(param_1 + 0x40);
  local_18 = 0;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc),0,&local_18);
  iVar1 = fn_006ba4ec(param_1);
  iVar2 = fn_006ba674(param_1);
  return (int)*(short *)(*(int *)(iVar3 + 8) + (iVar2 * local_18 + iVar1) * 4);
}



int fn_006c151c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  
  iVar3 = *(int *)(param_1 + 0x40);
  local_18 = 0;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc),0,&local_18);
  iVar1 = fn_006ba4ec(param_1);
  iVar2 = fn_006ba674(param_1);
  return (int)*(short *)(*(int *)(iVar3 + 8) + (iVar2 * local_18 + iVar1) * 4);
}



int fn_006c14c4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  
  iVar3 = *(int *)(param_1 + 0x40);
  local_18 = 0;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc),0,&local_18);
  iVar1 = fn_006ba4ec(param_1);
  iVar2 = fn_006ba674(param_1);
  return (int)*(short *)(*(int *)(iVar3 + 8) + (iVar2 * local_18 + iVar1) * 4);
}


