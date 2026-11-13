#include "00686fd0_00687b54.h"



void fn_00687b54(int *param_1)

{
  float in_s0;
  float in_s2;
  float fVar1;
  
  fn_006a7fac();
  fVar1 = in_s0;
  (**(code **)(*param_1 + 0x94))(param_1);
  param_1[0x11] = (int)(fVar1 * in_s0);
  param_1[0x13] = (int)(in_s2 * in_s0);
  fn_001db1dc(param_1,param_1 + 0x11,0,1,0);
  return;
}



undefined4 fn_00687a34(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 0xdc) == '\0') {
    uVar1 = 0;
    if ((((char)param_1[0x16] != '\0') && (iVar2 = fn_006a9938(param_2), uVar1 = 0, iVar2 != 0)) &&
       (iVar2 = (**(code **)(*param_1 + 0xc4))(param_1,param_2), uVar1 = 0, iVar2 != 0)) {
      fn_006f7a48(DAT_008977e0);
      iVar2 = fn_006a7dc8();
      uVar1 = 0;
      if (iVar2 != 0) {
        fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),0xd,param_1);
        (**(code **)(**(int **)(DAT_008977e0 + 0x30) + 8))();
        fn_00685cf0(param_1,param_2);
        fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),0,param_1);
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_006879f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2f8) == -1) {
    uVar1 = fn_006f72b4(DAT_008977e0);
    uVar1 = fn_0021ed50(uVar1,0xe,param_1 + 0x20,param_2);
    *(undefined4 *)(param_1 + 0x2f8) = uVar1;
  }
  return;
}



void fn_006877d8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  
  fn_001db0c4();
  if (*(char *)(DAT_008977e0 + 0x170) != -1) {
    (**(code **)(*param_1 + 200))(param_1,0);
  }
  if (param_1[0x6a] == 0) {
    fn_006855e8(param_1);
  }
  else if (param_1[0x6a] == 1) {
    fn_00686098();
  }
  fn_00686d58(param_1);
  iVar1 = fn_001cf540(*(undefined4 *)(DAT_008977e0 + 0x30));
  if (iVar1 == 0) {
    uVar2 = fn_006f7a5c(DAT_008977e0);
    uVar6 = fn_006a9800(uVar2,param_1);
    if (uVar6 == 0) {
      uVar14 = fn_006f7a5c(DAT_008977e0);
      iVar3 = (int)uVar14;
      fVar13 = *(float *)(iVar3 + 0x1c) - (float)param_1[8];
      fVar10 = *(float *)(iVar3 + 0x20) - (float)param_1[9];
      iVar1 = param_1[0x73];
      bVar9 = iVar1 != -1;
      iVar7 = (int)((ulonglong)uVar14 >> 0x20);
      if (bVar9) {
        iVar7 = DAT_008c92cc;
      }
      fVar11 = *(float *)(iVar3 + 0x24) - (float)param_1[10];
      if (bVar9) {
        iVar1 = iVar1 * 3;
      }
      if (bVar9) {
        puVar4 = (undefined *)(iVar7 + iVar1 * 0x20);
      }
      else {
        puVar4 = &DAT_00891e48;
      }
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(puVar4 + 0x5e),
                                          (byte)(in_fpscr >> 0x16) & 3);
      in_fpscr = in_fpscr & 0xfffffff;
      if (SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar11 * fVar11) < fVar12) {
        uVar6 = 1;
      }
    }
    (**(code **)(*param_1 + 0x58))(param_1,uVar6);
    uVar8 = 1;
    if (param_1[0x6a] == -1) {
      uVar14 = fn_006f7770(DAT_008977e0);
      pfVar5 = (float *)uVar14;
      iVar1 = param_1[0x73];
      bVar9 = iVar1 != -1;
      iVar7 = (int)((ulonglong)uVar14 >> 0x20);
      if (bVar9) {
        iVar1 = iVar1 * 3;
        iVar7 = DAT_008c92cc;
      }
      fVar10 = *pfVar5 - (float)param_1[8];
      if (bVar9) {
        puVar4 = (undefined *)(iVar7 + iVar1 * 0x20);
      }
      else {
        puVar4 = &DAT_00891e48;
      }
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(puVar4 + 0x5c),
                                          (byte)(in_fpscr >> 0x16) & 3);
      if ((fVar13 != 0.0) &&
         (fVar10 = fVar10 * fVar10 +
                   (pfVar5[1] - (float)param_1[9]) * (pfVar5[1] - (float)param_1[9]) +
                   (pfVar5[2] - (float)param_1[10]) * (pfVar5[2] - (float)param_1[10]),
         uVar8 = (uint)(fVar10 < fVar13 * fVar13), fVar10 < fVar13 * fVar13)) {
        uVar8 = 1;
      }
    }
    iVar1 = param_1[0x39];
    uVar6 = uVar6 & uVar8;
  }
  else {
    (**(code **)(*param_1 + 0x58))(param_1,1);
    iVar1 = param_1[0x39];
    uVar6 = 1;
  }
  fn_005ef16c(iVar1,uVar6);
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  fn_001c5164(param_1);
  return;
}



undefined4 fn_00686fd0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined *puVar6;
  int in_s0;
  int in_s1;
  int in_s2;
  int iVar7;
  undefined *local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_40;
  char local_3c [16];
  int *piStack_2c;
  undefined4 local_28;
  
  local_3c[0] = '\0';
  piStack_2c = param_1;
  local_28 = param_2;
  fn_006863ac(param_1,param_2,local_3c);
  local_40 = fn_001d99a0(param_1,local_28,1);
  uVar1 = fn_006ad1c8(*(undefined4 *)(DAT_008977e0 + 0x30),local_28);
  if (uVar1 != 0xffffffff) {
    iVar2 = fn_006f7a9c(DAT_008977e0);
    if (((int)uVar1 < 0) || ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= uVar1)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + uVar1 * 0x34;
    }
    fn_0069eb10(param_1[0x39],iVar2,0);
  }
  fn_0069ecb8(param_1[0x39],(char *)&DAT_0068745c);
  iVar7 = 0x43b40000;
  param_1[0x3b] = in_s0;
  param_1[0x3c] = in_s1;
  param_1[0x3d] = in_s2;
  iVar2 = fn_006f7358(DAT_008977e0);
  if (iVar2 == 0) {
    if (local_3c[0] != '\0') {
      iVar7 = 0x453b8000;
    }
  }
  else {
    iVar7 = 0x45cb2000;
  }
  param_1[0x76] = iVar7;
  (**(code **)(*param_1 + 0x54))(param_1,1);
  param_1[0x4e] = param_1[0x4e] | 0x20;
  (**(code **)(*param_1 + 0x10c))(param_1,1);
  bVar5 = false;
  param_1[0x4e] = param_1[0x4e] | 8;
  uVar1 = 0;
  if (param_1[0x73] == -1) {
    local_64 = &DAT_00891e48;
  }
  else {
    local_64 = (undefined *)(DAT_008c92cc + param_1[0x73] * 0x60);
  }
  do {
    iVar2 = fn_003035b0(local_64,(&DAT_007c0dec)[uVar1 * 4]);
    if (iVar2 == 0) {
      fn_001d96a0(param_1,&DAT_007c0df0 + uVar1 * 0x10);
      bVar5 = true;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  if (!bVar5) {
    fn_001d96a0(param_1,&DAT_007c0de0);
  }
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7545);
  param_1[0x45] = 5;
  iVar2 = param_1[0x73];
  if (iVar2 != -1) {
    param_1[0x77] = DAT_008c92cc + iVar2 * 0x60 + 0x2c;
  }
  local_60 = 0x41000000;
  if (iVar2 != -1) {
    local_60 = *(undefined4 *)(DAT_008c92cc + iVar2 * 0x60 + 0x44);
  }
  local_64 = (undefined *)0x0;
  uStack_5c = 0;
  fn_006a9e9c(param_1,&local_64);
  if ((param_1[0x73] == -1) || (*(char *)(DAT_008c92cc + param_1[0x73] * 0x60 + 10) != '\0')) {
    fn_001da490(param_1,0,0,0xffffffff,0xffffffff);
    fn_001da490(param_1,1,1,0xffffffff,0xffffffff);
    fn_001da490(param_1,2,3,0xffffffff,0xffffffff);
    fn_001da490(param_1,3,4,0xffffffff,0xffffffff);
    fn_001da490(param_1,4,5,0xffffffff,0xffffffff);
    fn_001da490(param_1,5,6,0xffffffff,0xffffffff);
    fn_001da490(param_1,6,2,0xffffffff,0xffffffff);
    fn_001da490(param_1,7,8,0xffffffff,0xffffffff);
    fn_001da490(param_1,8,7,0xffffffff,0xffffffff);
    fn_001da490(param_1,9,0,0xffffffff,0xffffffff);
    fn_001da490(param_1,10,0,0xffffffff,0xffffffff);
    fn_001da490(param_1,0xb,9,0xffffffff,0xffffffff);
    fn_001da490(param_1,0xc,10,0xffffffff,0xffffffff);
    fn_001da490(param_1,0xd,0xb,0xffffffff,0xffffffff);
    fn_001da490(param_1,0xe,0xc,0xffffffff,0xffffffff);
    fn_001da490(param_1,0xf,0xd,0xffffffff,0xffffffff);
    fn_001da490(param_1,0x10,0xe,0xffffffff,0xffffffff);
    fn_001da490(param_1,0x11,0xf,0xffffffff,0xffffffff);
    fn_001da490(param_1,0x12,0x10,0xffffffff,0xffffffff);
  }
  else {
    fn_001da490(param_1,0,0,0xffffffff,0xffffffff);
    fn_001da490(param_1,1,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,2,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,3,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,4,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,5,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,6,3,0xffffffff,0xffffffff);
    fn_001da490(param_1,7,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,8,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,9,1,0xffffffff,0xffffffff);
    fn_001da490(param_1,10,2,0xffffffff,0xffffffff);
    fn_001da490(param_1,0xb,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,0xc,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,0xd,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,0xe,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,0xf,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,0x10,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,0x11,0xffffffff,0xffffffff,0xffffffff);
    fn_001da490(param_1,0x12,0xffffffff,0xffffffff,0xffffffff);
  }
  if (param_1[0x73] != -1) {
    (**(code **)(*param_1 + 0x80))(param_1);
    fn_001028d4(&local_60,(char *)&DAT_00687b4c);
    fn_001c54d0(param_1,param_1[0x39],&local_60);
    iVar2 = param_1[0x73];
    if (iVar2 == -1) {
      puVar6 = &DAT_00891e48;
      puVar3 = &DAT_00891e48;
    }
    else {
      puVar6 = (undefined *)(DAT_008c92cc + iVar2 * 0x60);
      puVar3 = (undefined *)(DAT_008c92cc + iVar2 * 0x60);
    }
    if (puVar3[10] == '\x01') {
      iVar2 = 1;
      do {
        uVar4 = fn_00242bd4((int)(short)iVar2);
        iVar7 = fn_00147e6c(puVar6,uVar4,7);
        if (iVar7 == 0) {
          param_1[0x7a] = iVar2;
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x3ff);
    }
    if (param_1[0x73] == -1) {
      puVar6 = &DAT_00891e48;
    }
    else {
      puVar6 = (undefined *)(DAT_008c92cc + param_1[0x73] * 0x60);
    }
    if (puVar6[10] == '\x01') {
      fn_001fa164(param_1[0x7b]);
      if (param_1[0x73] == -1) {
        puVar6 = &DAT_00891e48;
      }
      else {
        puVar6 = (undefined *)(DAT_008c92cc + param_1[0x73] * 0x60);
      }
      fn_001fa18c(param_1[0x7b],puVar6);
    }
  }
  iVar2 = fn_006f7a20(DAT_008977e0);
  if (iVar2 == 0) {
    fn_001d962c(param_1,DAT_00891e30 + 1,DAT_00891e30 + 2,DAT_00891e30 + 3,1);
  }
  fn_00685dfc(param_1,local_28);
  (**(code **)(*param_1 + 0x44))(param_1,0,4);
  return local_40;
}


