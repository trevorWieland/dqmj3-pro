#include "006a3c74_006a4440.h"



void fn_006a4440(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  fn_0018911c(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),0);
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 4))();
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  uVar1 = DAT_008987bc;
  if (*(int *)(param_1 + 100) != -1) {
    fn_00661f24(DAT_008987bc,*(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x58));
    fn_006617c4(uVar1,*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
  }
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 4))();
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x60) + 4))();
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  puVar3 = *(undefined4 **)(param_1 + 0xec);
  for (puVar2 = *(undefined4 **)(param_1 + 0xe8); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    fn_002cf370(*puVar2,param_1 + 0x54);
  }
  return;
}



void fn_006a41a4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((char)param_1[0x70] == '\0') {
    fVar5 = 100.0;
    fVar6 = 0.01;
    fVar4 = 0.0;
    if (param_1[0x2d] == 2) {
      if (0 < param_1[0x1d]) {
        return;
      }
      param_1[0x1a] = 0;
      param_1[0x1b] = param_1[0x4c];
      param_1[0x1c] = 0;
      iVar1 = (**(code **)(*param_1 + 0xa4))(param_1);
      if (iVar1 == 0) {
        fVar5 = (float)param_1[0x46];
      }
      else {
        uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
        fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar5 = (fVar3 + fVar5) * fVar6 * (float)param_1[0x46];
      }
      if (0 < param_1[0x29]) {
        fVar4 = (float)param_1[0x84];
      }
      fVar5 = fVar5 + fVar4;
      param_1[0x2d] = param_1[0x2d] + -1;
      param_1[0x69] = 0xe;
      param_1[0x1d] = 0x12;
      param_1[0x1e] = 0;
      param_1[0x25] = (int)((float)param_1[0x28] * fVar5);
      param_1[0x23] = (int)((float)param_1[0x26] * fVar5);
      param_1[0x24] = (int)((float)param_1[0x27] * fVar5);
      if (param_2 != 0) {
        fn_00242b4c((int)(short)param_1[0x4f]);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
    else {
      if (param_1[0x2d] < 1) {
        return;
      }
      if (param_1[0x1e] < 6) {
        return;
      }
      if (10 < param_1[0x1e]) {
        return;
      }
      param_1[0x1a] = 0;
      param_1[0x1b] = param_1[0x4e];
      param_1[0x1c] = 0;
      if (0 < param_1[0x29]) {
        fVar4 = (float)param_1[0x84];
      }
      iVar1 = (**(code **)(*param_1 + 0xa4))(param_1);
      if (iVar1 == 0) {
        fVar5 = (float)param_1[0x46];
      }
      else {
        uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
        fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar5 = (fVar3 + fVar5) * fVar6 * (float)param_1[0x46];
      }
      fVar4 = fVar4 + fVar5 * 1.4;
      param_1[0x23] = (int)((float)param_1[0x26] * fVar4);
      param_1[0x24] = (int)((float)param_1[0x27] * fVar4);
      param_1[0x25] = (int)((float)param_1[0x28] * fVar4);
      param_1[0x2d] = param_1[0x2d] + -1;
      param_1[0x1f] = 0;
      iVar1 = (**(code **)(*param_1 + 0x44))(param_1,0x9c53,1);
      if (iVar1 != -1) {
        uVar2 = fn_0068c7e8(DAT_008977e8);
        fn_0023dd30(uVar2,iVar1);
      }
    }
    fn_00144810(DAT_008977e8);
    iVar1 = fn_006a8714();
    if ((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 0x98))(param_1), iVar1 != 0)) {
      fn_0034fb40(DAT_008977e8);
      return;
    }
  }
  return;
}



int fn_006a3dd4(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined1 param_6,undefined1 param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c [2];
  
  *(undefined1 *)(param_1 + 0x41) = param_6;
  *(undefined1 *)((int)param_1 + 0x219) = param_7;
  iVar1 = fn_006a16b0(param_1,param_3,param_4,param_5);
  if (param_2 != 0xffffffff) {
    iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)fn_005e846c();
    }
    piVar8 = (int *)param_1[0x16];
    if (piVar8 != piVar2) {
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      param_1[0x16] = (int)piVar2;
    }
    iVar1 = fn_0068eb30(DAT_008977e8);
    if (((int)param_2 < 0) ||
       ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2)) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(iVar1 + 4) + param_2 * 0x34;
    }
    iVar1 = fn_0069ee40(param_1[0x16],iVar9,0);
    uVar5 = DAT_008987bc;
    if (param_8 != 0) {
      uVar3 = fn_0068c694(DAT_008977e8);
      fn_002026fc(uVar5,uVar3);
      iVar4 = fn_00661800(uVar5,param_8,0,0xff);
      param_1[0x19] = iVar4;
      fn_00661d0c(uVar5,iVar4,param_1[0x16]);
      uVar5 = fn_00156f24(uVar5,param_1[0x19]);
      fn_00154a48(uVar5,1);
    }
    if (iVar1 != 0) {
      if (param_1[0x17] != 0) {
        fn_0017aec0(param_1[0x16],param_1[0x17],iVar9);
      }
      uVar5 = fn_0017fde4(param_1[0x16]);
      iVar9 = fn_0068c694(DAT_008977e8);
      fn_001969a4(*(undefined4 *)(iVar9 + 0x24),uVar5);
      uVar5 = fn_0017fde4(param_1[0x16]);
      fn_0017fc28(uVar5,1);
    }
  }
  iVar9 = (**(code **)(*param_1 + 0x98))(param_1);
  if (iVar9 == 0) {
    if (param_1[0x6d] != -1) {
      piVar2 = (int *)fn_0068c7e8(DAT_008977e8);
      (**(code **)(*piVar2 + 0xc))(piVar2,param_1[0x6d]);
      param_1[0x6d] = -1;
    }
    iVar9 = (**(code **)(*param_1 + 0x40))
                      (param_1,*(undefined4 *)(&DAT_007c98c8 + *(char *)((int)param_1 + 0x219) * 4),
                       0);
    param_1[0x6d] = iVar9;
  }
  iVar9 = fn_0068c694(DAT_008977e8);
  fn_00162d44(*(undefined4 *)(iVar9 + 0x24));
  pbVar6 = (byte *)fn_00242a30(param_3);
  local_44 = (float)param_1[0x42];
  local_34 = 57.0;
  local_30 = 40.0;
  local_40 = 0.6;
  local_2c[0] = (float)VectorUnsignedToFloat((uint)pbVar6[1],(byte)(in_fpscr >> 0x16) & 3);
  pfVar7 = &local_34;
  if (57.0 <= local_2c[0]) {
    pfVar7 = local_2c;
  }
  fVar10 = *pfVar7;
  pfVar7 = &local_40;
  if (0.6 <= local_44) {
    pfVar7 = &local_44;
  }
  fVar11 = *pfVar7;
  fVar12 = (float)VectorUnsignedToFloat((uint)pbVar6[2],(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  local_38 = -fVar12;
  local_3c = -75.0;
  pfVar7 = &local_3c;
  if (-fVar12 <= -75.0) {
    pfVar7 = &local_38;
  }
  fVar12 = *pfVar7;
  pfVar7 = &local_40;
  if (0.6 <= local_44) {
    pfVar7 = &local_44;
  }
  fVar13 = *pfVar7;
  param_1[0x7d] = 0;
  param_1[0x7e] = (int)(fVar10 * fVar11 * 1.2);
  param_1[0x7f] = (int)(fVar12 * fVar13 * 1.2);
  local_3c = (float)VectorUnsignedToFloat((uint)*pbVar6,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  pfVar7 = &local_30;
  if (40.0 <= local_3c) {
    pfVar7 = &local_3c;
  }
  fVar10 = *pfVar7;
  pfVar7 = &local_40;
  if (0.6 <= local_44) {
    pfVar7 = &local_44;
  }
  fVar11 = *pfVar7;
  param_1[0x80] = 0;
  param_1[0x81] = (int)(fVar10 * fVar11 * 1.2);
  param_1[0x82] = 0;
  return iVar1;
}



void fn_006a3cb4(int *param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  
  if (param_1[0x29] < 1) {
    if (param_1[0x2b] < 1) {
      if ((char)param_1[100] == '\0') {
        return;
      }
      *(char *)(param_1 + 100) = (char)param_1[100] + -1;
    }
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,0x9c44,0);
    param_1[0x2a] = iVar1;
    fn_0014481c(DAT_008977e8);
    iVar1 = fn_00263814();
    fn_00660790(0xc,iVar1 + 8,param_1 + 2);
    iVar1 = 0;
    param_1[0x29] = param_1[0x49];
    param_1[0x84] = param_1[0x48];
    local_20 = 0;
    local_1c = 0x3f800000;
    fn_005f2d30(&local_20);
    param_1[0x26] = local_20;
    param_1[0x27] = iVar1;
    param_1[0x28] = local_1c;
    fn_00144810(DAT_008977e8);
    iVar1 = fn_006a8714();
    if ((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 0x98))(param_1), iVar1 != 0)) {
      fn_0034f6e8(DAT_008977e8);
    }
  }
  return;
}



void fn_006a3c74(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x1b4) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x1b4));
    *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  }
  return;
}


