#include "0069ec98_0069f2f0.h"



void fn_0069f2f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b6f3c(uVar1,*(undefined1 *)(param_1 + 0x104),0);
  if (((iVar2 == 0) || (*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8) >> 2 == 0)) ||
     (iVar3 = fn_0068c044(iVar2,param_1 + 8,param_1 + 0x3c), iVar3 == 0)) {
    return;
  }
  piVar9 = *(int **)(param_1 + 0xec);
  for (piVar8 = *(int **)(param_1 + 0xe8); piVar8 != piVar9; piVar8 = piVar8 + 1) {
    iVar3 = fn_00145b00(0xc,&DAT_00812c8c);
    uVar1 = 0;
    if (iVar3 != 0) {
      uVar1 = fn_002cfccc(iVar3,iVar2,*piVar8);
    }
    fn_002cfa60(*piVar8,uVar1);
    fn_002cf370(*piVar8,param_1 + 0x54);
    uVar1 = fn_00144810(DAT_008977e8);
    fn_001cc1e4(uVar1,*(undefined1 *)(param_1 + 0x104),*(undefined1 *)(*piVar8 + 0x57));
    fn_0014481c(DAT_008977e8);
    iVar3 = fn_00263814();
    fn_00660790(3,iVar3 + 8,*piVar8 + 8);
    if (*(char *)(*piVar8 + 0x60) == '\0') {
      fn_0024bdbc();
    }
    if (*(int *)(param_1 + 0xf8) != -1) {
      piVar4 = (int *)fn_0068c7e8(DAT_008977e8);
      (**(code **)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(param_1 + 0xf8));
      *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
    }
  }
  uVar6 = *(uint *)(param_1 + 0xe8);
  uVar7 = *(uint *)(param_1 + 0xec);
  if (uVar6 != uVar7) {
    uVar5 = uVar6;
    if (uVar7 <= uVar6) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != uVar7);
    }
    *(uint *)(param_1 + 0xec) = uVar7 - (uVar7 - uVar6 & 0xfffffffc);
  }
  fn_006a1a60(param_1);
  return;
}



void fn_0069f1d0(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(param_1 + 0xe8);
  if (*(undefined4 **)(param_1 + 0xec) != puVar5) {
    do {
      fn_002cf370(*puVar5,param_1 + 0x54);
      puVar5 = puVar5 + 1;
    } while (*(undefined4 **)(param_1 + 0xec) != puVar5);
  }
  uVar3 = *(uint *)(param_1 + 0xe8);
  uVar4 = *(uint *)(param_1 + 0xec);
  if (uVar3 != uVar4) {
    uVar1 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar4);
    }
    *(uint *)(param_1 + 0xec) = uVar4 - (uVar4 - uVar3 & 0xfffffffc);
  }
  if (*(int *)(param_1 + 0xf8) != -1) {
    piVar2 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  uVar3 = *(uint *)(param_1 + 0xd4);
  uVar4 = *(uint *)(param_1 + 0xd0);
  if (uVar4 != uVar3) {
    uVar1 = uVar4;
    if (uVar3 <= uVar4) {
      do {
        uVar1 = uVar1 + 8;
      } while (uVar1 != uVar3);
    }
    *(uint *)(param_1 + 0xd4) = uVar3 - (uVar3 - uVar4 & 0xfffffff8);
  }
  if (*(int *)(param_1 + 0x194) != -1) {
    piVar2 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 0x194));
    *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x19c) = 0;
  return;
}



void fn_0069f184(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x6c) = 0x41000000;
  *(undefined4 *)(param_1 + 0x90) = 0;
  uVar1 = 0x41a00000;
  *(undefined1 *)(param_1 + 0x185) = 1;
  fn_0017fe34();
  *(undefined4 *)(param_1 + 0x188) = uVar1;
  fn_006a2584(param_1,0x6e);
  *(undefined1 *)(param_1 + 0x20c) = 1;
  return;
}



void fn_0069ef78(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_38;
  float local_34;
  
  iVar1 = param_1[0x68];
  bVar4 = iVar1 == 0;
  if (bVar4) {
    iVar1 = param_1[0x69];
  }
  if ((bVar4 && iVar1 == 0) && ((char)param_1[0x79] == '\0')) {
    if ((char)param_1[0x67] == '\0') {
      if ((char)param_1[0x61] == '\0') {
        iVar1 = fn_0068cafc(DAT_008977e8);
        (**(code **)(*param_1 + 0x40))(param_1,0x9c42,1);
        fn_0014481c(DAT_008977e8);
        iVar2 = fn_00263814();
        fn_00660790(0x1b,iVar2 + 8,param_1 + 2);
        fn_0018d060(param_1[0x17],7,4);
        while (param_1[0x3b] - param_1[0x3a] >> 2 != 0) {
          fn_006a2620(param_1,(float *)(param_2 + 8));
        }
        fVar8 = *(float *)(iVar1 + 0x18c);
        uVar3 = *(undefined4 *)(iVar1 + 400);
        *(undefined1 *)((int)param_1 + 0x185) = 1;
        fVar6 = (float)param_1[2] - *(float *)(param_2 + 8);
        fVar5 = (float)param_1[4] - *(float *)(param_2 + 0x10);
        fVar9 = 1.0;
        fVar7 = (float)param_1[3] - *(float *)(param_2 + 0xc);
        fVar7 = 1.0 / SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
        fVar6 = fVar6 * fVar7;
        fVar5 = fVar5 * fVar7;
        local_38 = 0.0;
        local_34 = 1.0;
        fn_005f2d30(&local_38);
        fVar6 = fVar6 * local_34;
        fVar5 = fVar5 * local_34;
        fVar9 = fVar9 / SQRT(fVar6 * fVar6 + local_38 * local_38 + fVar5 * fVar5);
        param_1[0x23] = (int)(fVar6 * fVar9 * fVar8);
        param_1[0x24] = (int)(local_38 * fVar9 * fVar8);
        param_1[0x25] = (int)(fVar5 * fVar9 * fVar8);
        iVar1 = 0x41f00000;
        *(undefined1 *)((int)param_1 + 0x185) = 1;
        fn_0017fe34();
        param_1[0x62] = iVar1;
        fn_006a2584(param_1,uVar3);
        fn_006a2388(param_1);
        return;
      }
      *(undefined1 *)(param_1 + 0x61) = 0;
    }
    else {
      fn_006a69c8(param_1);
    }
  }
  return;
}



void fn_0069ef24(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  fn_006b6f3c(uVar1,*(undefined1 *)(param_1 + 0x104),0);
  fn_0068b44c();
  fn_0068c700(DAT_008977e8);
  uVar1 = fn_001fe714();
  fn_002328e0(uVar1,0xd,param_1);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_0069eef8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0018367c(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    return;
  }
  fn_006eb3a4(iVar1);
  return;
}



void fn_0069eed8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_0018367c();
  *(bool *)(iVar1 + 0x10) = param_2 != 0;
  return;
}



bool fn_0069ee40(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_20 [12];
  
  if (param_1 == (int *)0x0) {
    return false;
  }
  if (param_2 == 0) {
    return false;
  }
  iVar1 = fn_00191228(param_2);
  if (iVar1 != 0) {
    fn_001a0b50(auStack_20,param_2,0);
    (**(code **)(*param_1 + 8))(param_1,auStack_20,4,param_3);
    fn_0069eb10(param_1,param_2,param_4);
    fn_0017fde4(param_1);
    fn_005ea508();
  }
  return iVar1 != 0;
}



bool fn_0069ee38(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_20 [12];
  
  if (param_1 == (int *)0x0) {
    return false;
  }
  if (param_2 == 0) {
    return false;
  }
  iVar1 = fn_00191228(param_2);
  if (iVar1 != 0) {
    fn_001a0b50(auStack_20,param_2,0);
    (**(code **)(*param_1 + 8))(param_1,auStack_20,4,param_3);
    fn_0069eb10(param_1,param_2,1);
    fn_0017fde4(param_1);
    fn_005ea508();
  }
  return iVar1 != 0;
}



void fn_0069ed78(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [48];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  local_18 = DAT_008f9e2c;
  uStack_14 = DAT_008f9e30;
  uStack_10 = DAT_008f9e34;
  uVar2 = fn_00166780(param_1);
  iVar1 = fn_00191238(uVar2,param_2);
  if (-1 < iVar1) {
    uVar2 = fn_0016676c(uVar2);
    fn_001781f0(auStack_48,uVar2);
    fn_0016947c(&local_18,auStack_48);
  }
  return;
}



void fn_0069ecb8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [48];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  local_18 = DAT_008f9e2c;
  uStack_14 = DAT_008f9e30;
  uStack_10 = DAT_008f9e34;
  uVar2 = fn_00166780(param_1);
  iVar1 = fn_00191238(uVar2,param_2);
  if (-1 < iVar1) {
    uVar2 = fn_00191270(uVar2);
    fn_001781f0(auStack_48,uVar2);
    fn_0016947c(&local_18,auStack_48);
  }
  return;
}



void fn_0069ec98(void)

{
  int iVar1;
  
  iVar1 = fn_0018367c();
  if (iVar1 == 0) {
    return;
  }
  fn_006eb3e8(iVar1);
  return;
}


