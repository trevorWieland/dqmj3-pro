#include "002adbc4_002ae2c0.h"



void fn_002ae2c0(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float in_s0;
  float fVar10;
  float in_s1;
  float in_s2;
  float fVar11;
  float fVar12;
  float local_50;
  float fStack_4c;
  undefined1 auStack_44 [24];
  undefined4 local_2c;
  int iStack_28;
  
  local_2c = param_1;
  iStack_28 = param_2;
  iVar4 = fn_006f7a70(DAT_008977e0);
  iVar7 = 0;
  iVar1 = *(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18) >> 2;
  if (0 < iVar1) {
    do {
      uVar5 = *(uint *)(iVar4 + 0x18);
      iVar8 = *(int *)(uVar5 + iVar7 * 4);
      if (iVar8 != 0) {
        uVar5 = (uint)*(byte *)(iVar8 + 0x58);
      }
      if (iVar8 != 0 && uVar5 != 0) {
        fn_006a99dc(iVar8);
        fVar11 = *(float *)(param_2 + 0x40) - in_s0;
        fVar10 = *(float *)(param_2 + 0x44) - in_s1;
        in_s1 = *(float *)(param_2 + 0x48) - in_s2;
        cVar2 = *(char *)(iVar8 + 0x17c);
        bVar3 = false;
        fVar12 = *(float *)(param_2 + 0x4c) * *(float *)(param_2 + 0x4c);
        in_s0 = *(float *)(param_2 + 0x54);
        fVar10 = fVar11 * fVar11 + fVar10 * fVar10 + in_s1 * in_s1;
        if (cVar2 == '!') {
          bVar9 = false;
          if (fVar12 <= fVar10) {
            in_s0 = in_s0 * in_s0;
            bVar9 = fVar10 <= in_s0;
            fVar12 = in_s0;
          }
          bVar3 = bVar9 && fVar10 != fVar12;
          if (bVar9 && fVar10 != fVar12) goto LAB_002ae464;
        }
        else if (cVar2 == '\"') {
          if (**(int **)(DAT_008977e0 + 0x40) == 0) {
LAB_002ae41c:
            if ((*(int *)(iVar8 + 0x184) == -1) ||
               (in_s0 = *(float *)(iVar8 + 0x18c), fVar10 < fVar12)) goto LAB_002ae4d4;
            if (in_s0 != -1.0) {
              in_s0 = in_s0 * in_s0;
              goto joined_r0x002ae460;
            }
          }
LAB_002ae464:
          fn_006a99dc(iVar8);
          local_50 = in_s0;
          fStack_4c = in_s1;
          if ((bVar3) || (iVar6 = fn_005feebc(&local_50), iVar6 != 0)) {
            in_s0 = fVar10;
            fn_0018d444(auStack_44,&local_50,param_2);
            in_s1 = *(float *)(param_2 + 0x60);
            fn_002af684(local_2c,&local_50,param_2 + 0x40,param_2 + 0x58);
            fn_002abf30(local_2c,iVar8,auStack_44,1);
          }
        }
        else if (cVar2 == '#') {
          in_s0 = *(float *)(iVar8 + 0x18c);
          if (fVar12 <= fVar10) {
            if (in_s0 == -1.0) goto LAB_002ae464;
            in_s0 = in_s0 * in_s0;
joined_r0x002ae460:
            if (fVar10 < in_s0) goto LAB_002ae464;
          }
        }
        else {
          if (cVar2 != '%') goto LAB_002ae41c;
          in_s0 = *(float *)(iVar8 + 0x18c);
          if (fVar12 <= fVar10) {
            if (in_s0 != -1.0) {
              in_s0 = in_s0 * in_s0;
              goto joined_r0x002ae460;
            }
            goto LAB_002ae464;
          }
        }
      }
LAB_002ae4d4:
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return;
}



void fn_002ae1ac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(DAT_008977e0 + 0x170) == '\x01') {
    iVar2 = fn_006f73a0(DAT_008977e0,1);
    if (iVar2 != 0) {
      fn_0069922c(DAT_008977e0);
      return;
    }
    iVar2 = fn_006f7ad0(DAT_008977e0,1);
    if (iVar2 != 0) {
      uVar1 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar1,2);
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  else {
    DAT_008920e8 = DAT_008920e8 + 1;
    if (0xf < DAT_008920e8) {
      DAT_008920e8 = 0;
      fn_002abbf4(param_1);
      uVar1 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar1,2);
      iVar2 = fn_006f7a5c(DAT_008977e0);
      *(undefined1 *)(iVar2 + 0xc) = 0;
      fn_001d68cc(iVar2,1);
      fn_001d8894(iVar2,iVar2 + 0x1c);
      fn_00698fb8(DAT_008977e0,1);
      fn_006f72b4(DAT_008977e0);
      fn_0021a4cc();
      *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



void fn_002adfc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_38;
  float local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  float local_28;
  undefined4 uStack_24;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 4) = 8;
    uVar2 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar2,3);
    iVar1 = fn_006f7a5c(DAT_008977e0);
    *(undefined1 *)(iVar1 + 0xc) = 3;
    uVar2 = fn_006f7a5c(DAT_008977e0);
    fn_001d68cc(uVar2,5);
    (**(code **)(**(int **)(param_1 + 0x54) + 0x10))();
    fn_00698fb8(DAT_008977e0,0xffffffff);
    fn_00274e4c(*(undefined4 *)(param_1 + 8),1);
    return;
  }
  fVar4 = 1.0;
  fVar5 = 7.5;
  fVar3 = (float)VectorSignedToFloat(0x37 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
  if ((int)fVar3 < 0x41f00001) {
    fVar6 = 800.0;
    fVar3 = fVar3 * -0.4;
    fn_006fa128();
    local_38 = *(undefined4 *)(param_1 + 0x68);
    uStack_30 = *(undefined4 *)(param_1 + 0x70);
    fVar5 = fVar5 / (fVar4 + fVar3 * fVar6);
    local_34 = *(float *)(param_1 + 0x6c) + fVar5;
    local_2c = *(undefined4 *)(param_1 + 0x74);
    uStack_24 = *(undefined4 *)(param_1 + 0x7c);
    local_28 = *(float *)(param_1 + 0x78) + fVar5;
    uVar2 = fn_006f7a5c(DAT_008977e0);
    fn_001d7128(uVar2,&local_38,1);
    uVar2 = fn_006f7a5c(DAT_008977e0);
    fn_001d870c(uVar2,&local_2c,1);
    return;
  }
  fVar6 = 25.0;
  fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = fVar3 * -0.3;
  fn_006fa128();
  local_38 = *(undefined4 *)(param_1 + 0x68);
  uStack_30 = *(undefined4 *)(param_1 + 0x70);
  fVar5 = fVar5 / (fVar4 + fVar3 * fVar6);
  local_34 = *(float *)(param_1 + 0x6c) + fVar5;
  local_2c = *(undefined4 *)(param_1 + 0x74);
  uStack_24 = *(undefined4 *)(param_1 + 0x7c);
  local_28 = *(float *)(param_1 + 0x78) + fVar5;
  uVar2 = fn_006f7a5c(DAT_008977e0);
  fn_001d7128(uVar2,&local_38,1);
  uVar2 = fn_006f7a5c(DAT_008977e0);
  fn_001d870c(uVar2,&local_2c,1);
  return;
}



void fn_002add74(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006f75ac(DAT_008977e0);
  uVar3 = DAT_00897800;
  switch(param_1) {
  default:
    return;
  case 1:
    fn_0038ff40(iVar1,0,0,1,0);
    uVar2 = fn_0016ba34(uVar3,DAT_008987a0,(char *)&DAT_002adf64,0);
    fn_0038fee8(iVar1,uVar2);
    uVar3 = fn_0025f988(uVar3,(char *)&DAT_002adf78);
    fn_0016b4ec(iVar1,uVar3);
    iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0x80);
    break;
  case 2:
  case 4:
    fn_0038ff40(iVar1,0,0,1,0);
    uVar2 = fn_0016ba34(uVar3,DAT_008987a0,(char *)&DAT_002adf9c,0);
    fn_0038fee8(iVar1,uVar2);
    uVar3 = fn_0025f988(uVar3,(char *)&DAT_002adf78);
    fn_0016b4ec(iVar1,uVar3);
    iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0x80);
    break;
  case 3:
    fn_0038ff40(iVar1,0,0,1,0);
    uVar2 = fn_0016ba34(uVar3,DAT_008987a0,(char *)&DAT_002adf8c,0);
    fn_0038fee8(iVar1,uVar2);
    uVar3 = fn_0025f988(uVar3,(char *)&DAT_002adf78);
    fn_0016b4ec(iVar1,uVar3);
    iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0x80);
    break;
  case 6:
    fn_0038ff40(iVar1,0,0,1,0);
    uVar2 = fn_0016ba34(uVar3,DAT_008987a0,(char *)&DAT_002adfb4,0);
    fn_0038fee8(iVar1,uVar2);
    uVar3 = fn_0025f988(uVar3,(char *)&DAT_002adf78);
    fn_0016b4ec(iVar1,uVar3);
    iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0x80);
  }
  *(undefined1 *)(iVar1 + 0x1f) = 4;
  return;
}



void fn_002adc2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00270a3c(*(undefined4 *)(param_1 + 8));
  if (iVar1 == 0) {
    iVar1 = fn_006b75b4(*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      fn_002af9ac(param_1);
      fn_0027422c(*(undefined4 *)(param_1 + 8));
      return;
    }
  }
  else {
    fn_002ae9b8(param_1);
    iVar1 = fn_00154ac8(0x30d);
    if (iVar1 == 0) {
      uVar2 = fn_006f75ac(DAT_008977e0);
      uVar3 = fn_006945fc(DAT_008977e0,(char *)&DAT_002adce8);
      fn_0038fee8(uVar2,uVar3);
      fn_0038ff40(uVar2,0,1);
      fn_00144834(0x30d,1);
      return;
    }
  }
  return;
}



void fn_002adbc4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x84) = param_2;
  fn_00270018(*(undefined4 *)(param_1 + 8));
  uVar1 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar1,8);
  fn_00698fb8(DAT_008977e0,1);
  *(undefined1 *)(param_1 + 4) = 0x10;
  *(undefined1 *)(param_1 + 0x80) = 0;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


