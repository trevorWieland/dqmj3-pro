#include "002395a4_00239fc4.h"



void fn_00239fc4(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 in_s0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  param_1 = param_1 + param_2 * 0xc;
  iVar1 = *(int *)(param_1 + 4) + param_3 * 0x50;
  *(undefined4 *)(iVar1 + 8) = *param_4;
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  *(undefined4 *)(iVar1 + 0x10) = uVar3;
  *(undefined4 *)(iVar1 + 0x14) = uVar4;
  *(undefined4 *)(iVar1 + 0x18) = uVar5;
  *(undefined4 *)(iVar1 + 0x1c) = uVar6;
  *(undefined4 *)(iVar1 + 0x20) = uVar7;
  *(undefined4 *)(iVar1 + 0x24) = uVar8;
  uVar2 = param_4[9];
  uVar3 = param_4[10];
  uVar4 = param_4[0xb];
  *(undefined4 *)(iVar1 + 0x28) = param_4[8];
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  *(undefined4 *)(iVar1 + 0x30) = uVar3;
  *(undefined4 *)(iVar1 + 0x34) = uVar4;
  *(undefined4 *)(*(int *)(param_1 + 4) + param_3 * 0x50 + 0x38) = in_s0;
  return;
}



int fn_00239a54(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                float *param_6,float *param_7,uint param_8,int param_9,int param_10)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_f4;
  float local_f0;
  float local_ec;
  float fStack_e8;
  int local_e0;
  undefined1 auStack_d8 [8];
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined1 auStack_88 [4];
  float local_84;
  undefined1 auStack_7c [4];
  float local_78;
  float local_6c;
  float fStack_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [8];
  int *local_34;
  float *pfStack_30;
  float *pfStack_2c;
  float *pfStack_28;
  
  local_34 = param_1;
  pfStack_30 = param_2;
  pfStack_2c = param_3;
  pfStack_28 = param_4;
  iVar2 = fn_00603590(param_1,~param_8 & 7,&local_f0,param_3,param_2);
  piVar1 = local_34;
  fVar14 = 1.0;
  fVar13 = 0.0;
  fVar12 = 0.01;
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = 1;
    if (((local_f0 == *param_3) && (local_ec == param_3[1])) && (fStack_e8 == param_3[2])) {
      local_f0 = local_f0 - 0.01;
      local_ec = local_ec - 0.01;
      fStack_e8 = fStack_e8 - 0.01;
    }
    fVar10 = local_f0 - *param_3;
    fVar9 = local_ec - param_3[1];
    fVar8 = fStack_e8 - param_3[2];
    if ((fVar10 != 0.0 || (fVar10 != 0.0 || fVar9 != 0.0)) || fVar8 != 0.0) {
      fVar11 = 1.0 / SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
      local_f0 = local_f0 - fVar10 * fVar11 * 5.0;
      local_ec = local_ec - fVar9 * fVar11 * 5.0;
      fStack_e8 = fStack_e8 - fVar8 * fVar11 * 5.0;
    }
    *param_2 = local_f0;
    param_2[1] = local_ec;
    param_2[2] = fStack_e8;
  }
  fVar8 = param_4[1] - param_5[1];
  fVar9 = 0.5;
  local_5c = (*param_4 - *param_5) * (*param_4 - *param_5) + fVar8 * fVar8 +
             (param_4[2] - param_5[2]) * (param_4[2] - param_5[2]);
  fVar8 = param_7[1] - param_3[1];
  fVar10 = local_5c * 0.5;
  if (fVar10 <= (*param_7 - *param_3) * (*param_7 - *param_3) + fVar8 * fVar8 +
                (param_7[2] - param_3[2]) * (param_7[2] - param_3[2])) goto LAB_00239f04;
  if (param_10 != 0) {
    local_5c = SQRT(local_5c);
    local_e0 = param_9;
    local_54[0] = (param_2[1] - param_3[1]) + param_5[1];
    pfVar3 = (float *)&DAT_007ba03c;
    if (1.0 < local_54[0]) {
      pfVar3 = local_54;
    }
    fVar8 = *pfVar3;
    local_6c = *param_2 + 0.0;
    fStack_68 = param_2[1] + -local_5c;
    local_64 = param_2[2] + 0.0;
    local_60 = *param_2 + 0.0;
    local_5c = param_2[1] + local_5c;
    local_58 = param_2[2] + 0.0;
    local_f4 = *param_2;
    local_f0 = param_2[1];
    local_ec = param_2[2];
    iVar2 = fn_00603590(local_34,~param_8 & 2,auStack_88,param_2,&local_6c);
    iVar4 = fn_00603590(piVar1,~param_8 & 1,auStack_7c,param_2,&local_60);
    local_f0 = param_2[1];
    if (iVar2 < 1) {
      if (0 < iVar4) {
LAB_00239d1c:
        if (local_78 - local_f0 < fVar8) {
          local_f0 = local_78 - fVar8;
        }
      }
    }
    else if (iVar4 < 1) {
      if (local_f0 - local_84 < fVar8) {
        local_f0 = local_84 + fVar8;
      }
    }
    else {
      if (local_78 <= local_84) goto LAB_00239d1c;
      local_f0 = local_84 + (local_78 - local_84) * fVar9;
    }
    bVar6 = local_e0 < 0;
    bVar7 = local_e0 != 0;
    if (bVar7) {
      bVar6 = fVar8 < fVar13;
    }
    if ((bVar7 && fVar8 != fVar13) && bVar6 == (bVar7 && (NAN(fVar8) || NAN(fVar13)))) {
      local_f0 = local_f0 + (param_6[1] - local_f0) * fVar9;
    }
    if (iVar2 < 1) {
      iVar2 = iVar4;
    }
    if ((0 < iVar2) &&
       (iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,~param_8 & 1,auStack_d8,1,param_3,&local_f4,1),
       iVar2 != 0)) {
      local_f4 = local_d0;
      local_f0 = fStack_cc;
      local_ec = fStack_c8;
      if ((local_d0 == *param_3) && ((fStack_cc == param_3[1] && (fStack_c8 == param_3[2])))) {
        local_f4 = local_d0 - fVar12;
        local_f0 = fStack_cc - fVar12;
        local_ec = fStack_c8 - fVar12;
      }
    }
    *param_2 = local_f4;
    param_2[1] = local_f0;
    param_2[2] = local_ec;
  }
  if (iVar5 == 0) {
    fVar8 = *param_6;
    fVar13 = *param_2 - *param_3;
    if (fVar10 < (fVar13 * fVar13 + (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
                 (param_2[2] - param_3[2]) * (param_2[2] - param_3[2])) -
                 ((fVar8 - *param_7) * (fVar8 - *param_7) +
                  (param_6[1] - param_7[1]) * (param_6[1] - param_7[1]) +
                 (param_6[2] - param_7[2]) * (param_6[2] - param_7[2]))) {
      if (param_9 != 0) {
        fVar14 = fVar9;
      }
      *param_2 = fVar8 + fVar14 * (*param_2 - fVar8);
      param_2[1] = param_6[1] + fVar14 * (param_2[1] - param_6[1]);
      param_2[2] = param_6[2] + fVar14 * (param_2[2] - param_6[2]);
    }
  }
LAB_00239f04:
  if (((*param_2 == *param_3) && (param_2[1] == param_3[1])) && (param_2[2] == param_3[2])) {
    *param_2 = *param_2 - fVar12;
    param_2[1] = param_2[1] - fVar12;
    param_2[2] = param_2[2] - fVar12;
  }
  return iVar5;
}



void fn_002399ec(int *param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *local_20;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_1[0xc] != 0) {
      iVar2 = param_1[10];
      iVar3 = param_1[0xb];
      local_20 = param_4;
      fn_00191540(0,&local_20);
      (*local_20)(iVar3,0x101,iVar1,iVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[0xc] = 0;
  }
  return;
}



void fn_002397d4(undefined4 *param_1,undefined2 *param_2,undefined4 param_3)

{
  if (param_2 == (undefined2 *)0x0) {
    *param_1 = 0;
    return;
  }
  fn_00239824(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 2),*(undefined1 *)(param_2 + 3)
               ,*(undefined1 *)((int)param_2 + 7),*(undefined1 *)((int)param_2 + 5),param_2 + 4,
               param_3,0);
  return;
}



undefined4 fn_00239744(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_002397b4,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0x32;
  iVar2 = 0;
  fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  DAT_0089249c = param_1;
  return 1;
}



undefined4 fn_00239700(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || ((short)DAT_00892458 <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_002396e0(int param_1,int param_2)

{
  return (int)*(short *)(DAT_00892454 + param_1 * 0x50 + param_2 * 8 + -4);
}



uint fn_00239658(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar2 = 1;
  iVar3 = DAT_00892454 + param_1 * 0x50;
  uVar4 = 0;
  do {
    uVar1 = *(ushort *)(iVar3 + uVar2 * 8 + -8);
    if (uVar1 <= uVar4) {
      uVar2 = uVar2 - 1 & 0xff;
      goto joined_r0x002396b0;
    }
    uVar2 = uVar2 + 1 & 0xff;
    uVar4 = uVar1;
  } while (uVar2 < 0xb);
  uVar2 = 10;
joined_r0x002396b0:
  while( true ) {
    if (uVar2 == 0) {
      return 0;
    }
    if (*(ushort *)(iVar3 + uVar2 * 8 + -8) <= param_2) break;
    uVar2 = uVar2 - 1 & 0xff;
  }
  return uVar2;
}



undefined2 fn_002395f8(int param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  
  uVar2 = 1;
  iVar4 = DAT_00892454 + param_1 * 0x50;
  uVar3 = 0;
  do {
    uVar1 = *(ushort *)(iVar4 + uVar2 * 8 + -8);
    if (uVar1 <= uVar3) {
      uVar2 = uVar2 - 1 & 0xff;
      goto LAB_00239648;
    }
    uVar2 = uVar2 + 1 & 0xff;
    uVar3 = uVar1;
  } while (uVar2 < 0xb);
  uVar2 = 10;
LAB_00239648:
  return *(undefined2 *)(iVar4 + uVar2 * 8 + -8);
}



uint fn_002395a4(int param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar2 = 1;
  uVar3 = 0;
  do {
    uVar1 = *(ushort *)(DAT_00892454 + param_1 * 0x50 + uVar2 * 8 + -8);
    if (uVar1 <= uVar3) {
      return uVar2 - 1 & 0xff;
    }
    uVar2 = uVar2 + 1 & 0xff;
    uVar3 = uVar1;
  } while (uVar2 < 0xb);
  return 10;
}


