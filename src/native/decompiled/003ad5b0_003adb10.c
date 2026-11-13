#include "003ad5b0_003adb10.h"



undefined4 * fn_003adb10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  
  *param_1 = &DAT_0082e244;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  param_1[0x10] = 0;
  param_1[0x19] = 1;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 1;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 2;
  local_18 = param_4;
  fn_003ad248(&local_18);
  piVar1 = local_18;
  local_18 = (int *)0x0;
  piVar2 = (int *)param_1[0x10];
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    param_1[0x10] = piVar1;
  }
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 4))();
  }
  return param_1;
}



void fn_003ad8f8(undefined4 param_1)

{
  fn_003ad5b0(param_1,1);
  return;
}



void fn_003ad66c(int param_1,undefined4 *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  
  iVar1 = fn_00176d68(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  fVar9 = *(float *)(iVar1 + 0x58);
  fVar10 = *(float *)(iVar1 + 0x68);
  fVar11 = *(float *)(iVar1 + 0x78);
  *param_3 = fVar9;
  param_3[1] = fVar10;
  param_3[2] = fVar11;
  pfVar2 = (float *)fn_006dcd40(iVar1);
  fVar4 = pfVar2[1];
  fVar6 = pfVar2[2];
  *param_4 = *pfVar2;
  param_4[1] = fVar4;
  param_4[2] = fVar6;
  if ((*(char *)(param_1 + 8) != '\0') && (*(char *)(param_1 + 9) == '\0')) {
    fVar4 = 0.0;
    if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0xc)) {
      if (*(char *)(param_1 + 0x3e) == '\0') {
        *(undefined1 *)(param_1 + 0x3e) = 1;
        fVar9 = *(float *)(param_1 + 0x24);
        *(float *)(param_1 + 0x80) = fVar9;
        *(float *)(param_1 + 0x94) = fVar9;
        iVar5 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c);
        if (iVar5 == 0) {
          iVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(int *)(param_1 + 0x8c) = iVar5;
        *(undefined1 *)(param_1 + 0x90) = 1;
        *(bool *)(param_1 + 0x98) = iVar5 < 1;
      }
      if ((*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x8c)) ||
         (*(undefined1 *)(param_1 + 0x98) = 1, *(char *)(param_1 + 0x90) == '\0')) {
        fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x8c),
                                           (byte)(in_fpscr >> 0x16) & 3);
        fVar10 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x16) & 3);
        fVar10 = fVar10 / fVar9;
        fVar11 = (*(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x80)) * fVar10;
        fVar6 = *(float *)(param_1 + 0x80) + fVar11 * fVar10;
        *(float *)(param_1 + 0x94) = fVar6;
        *(int *)(param_1 + 0x88) =
             *(int *)(param_1 + 0x88) + (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10));
        fVar9 = fVar6;
      }
      else {
        fVar6 = *(float *)(param_1 + 0x84);
      }
      param_2[2] = fVar6;
      *param_2 = 0;
      param_2[1] = 0;
    }
    if (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0xc)) {
      local_48 = param_5;
      local_44 = param_6;
      local_40 = param_7;
      local_3c = param_8;
      local_38 = iVar1;
      fn_003ad900(param_1,param_3,&local_48);
      iVar1 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_1 + 0x10);
      if (*(char *)(param_1 + 0x3d) == '\0') {
        *(undefined1 *)(param_1 + 0x3d) = 1;
        fVar10 = fVar4;
        fVar11 = fVar4;
        fn_006c6d6c(param_1,1,&local_48);
        iVar8 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
        fVar6 = fVar11;
        fVar12 = fVar10;
        puVar3 = (undefined4 *)fn_006dcd40(local_38);
        uVar7 = puVar3[1];
        fVar9 = (float)puVar3[2];
        *(undefined4 *)(param_1 + 0x48) = *puVar3;
        *(undefined4 *)(param_1 + 0x4c) = uVar7;
        *(float *)(param_1 + 0x50) = fVar9;
        if (iVar8 == 0) {
          iVar8 = 1;
        }
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x4c);
        *(float *)(param_1 + 0x74) = fVar9;
        *(float *)(param_1 + 0x5c) = fVar6;
        *(float *)(param_1 + 0x54) = fVar4;
        *(float *)(param_1 + 0x58) = fVar12;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(int *)(param_1 + 100) = iVar8;
        *(undefined1 *)(param_1 + 0x68) = 1;
        *(bool *)(param_1 + 0x78) = iVar8 < 1;
      }
      fn_00746120(param_1 + 0x44,iVar1 - iVar5);
      *param_4 = fVar9;
      param_4[1] = fVar10;
      param_4[2] = fVar11;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x38) <= iVar1) {
      *(undefined1 *)(param_1 + 9) = 1;
    }
    *(int *)(param_1 + 0xc) = iVar1 + param_9;
    *(int *)(param_1 + 0x10) = iVar1;
  }
  return;
}



bool fn_003ad900(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float in_s0;
  float fVar5;
  float in_s1;
  float fVar6;
  float in_s2;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x3c) == '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 1;
    fVar10 = 0.0;
    fVar5 = 7.0;
    in_s2 = fVar10;
    fVar11 = fVar10;
    fn_006c6d6c(param_1,1,param_3);
    iVar3 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
    iVar1 = *(int *)(param_3 + 0x10);
    local_4c = *(float *)(iVar1 + 0x58);
    local_48 = *(float *)(iVar1 + 0x68);
    local_44 = *(float *)(iVar1 + 0x78);
    in_s0 = fVar5 - local_4c;
    local_3c = fVar10 - local_48;
    in_s1 = in_s2 - local_44;
    local_58 = fVar5;
    local_54 = fVar10;
    local_50 = in_s2;
    local_40 = in_s0;
    local_38 = in_s1;
    if (*(char *)(param_1 + 0x9c) == '\x05') {
      fVar5 = -10.0;
      fVar10 = 10.0;
      fn_006c6c98(param_1,&local_40);
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      fVar8 = 1.0 / SQRT(in_s0 * in_s0 + in_s1 * in_s1 + in_s2 * in_s2);
      fVar7 = in_s0 * fVar8;
      fVar6 = in_s1 * fVar8;
      fVar9 = 1.0 / SQRT(local_40 * local_40 + local_3c * local_3c + local_38 * local_38);
      iVar1 = *(int *)(param_1 + 0x40);
      in_s1 = local_40 * fVar9 * fVar10;
      in_s0 = local_38 * fVar9 * fVar10;
      *(float *)(iVar1 + 8) = local_4c;
      *(float *)(iVar1 + 0xc) = local_48;
      *(float *)(iVar1 + 0x10) = local_44;
      *(float *)(iVar1 + 0x28) = local_50;
      *(float *)(iVar1 + 0x2c) = in_s1;
      *(float *)(iVar1 + 0x30) = fVar11;
      *(float *)(iVar1 + 0x34) = in_s0;
      *(float *)(iVar1 + 0x20) = local_58;
      *(float *)(iVar1 + 0x24) = local_54;
      *(float *)(iVar1 + 0x14) = fVar7 * fVar5;
      *(float *)(iVar1 + 0x18) = fVar6 * fVar5;
      *(float *)(iVar1 + 0x1c) = in_s2 * fVar8 * fVar5;
      *(float *)(iVar1 + 0x44) = local_4c;
      *(float *)(iVar1 + 0x48) = local_48;
      *(float *)(iVar1 + 0x4c) = local_44;
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(int *)(iVar1 + 0x3c) = iVar3;
      *(undefined1 *)(iVar1 + 0x40) = 1;
      *(bool *)(iVar1 + 0x50) = iVar3 < 1;
      in_s2 = local_58;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x40) + 8))
                (*(int **)(param_1 + 0x40),&local_4c,&local_58,iVar3);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0xc))(*(int **)(param_1 + 0x40),param_4 - iVar2);
  *param_2 = in_s0;
  param_2[1] = in_s1;
  param_2[2] = in_s2;
  iVar1 = *(int *)(param_1 + 0x18);
  bVar4 = SBORROW4(iVar1,param_4);
  iVar2 = iVar1 - param_4;
  if (iVar1 <= param_4) {
    iVar1 = *(int *)(param_1 + 0x1c);
    bVar4 = SBORROW4(param_4,iVar1);
    iVar2 = param_4 - iVar1;
  }
  return iVar1 != param_4 && iVar2 < 0 == bVar4;
}



void fn_003ad5b0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined4 *)(param_1 + 0x1c) = 0x1e;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0x40c90fdb;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar2 = 0x43b40000;
    fn_0017fe34();
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 0x30) = 0x1e;
    *(undefined4 *)(param_1 + 0x2c) = 3;
  }
  piVar1 = (int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x1c)) {
    piVar1 = (int *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x38) = *piVar1 + 5;
  return;
}


