#include "002cf60c_002cfdd0.h"



void fn_002cfd74(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x88) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  }
  uVar2 = fn_001cc600(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  return;
}



undefined4 * fn_002cfccc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_20 [12];
  
  *param_1 = &DAT_00851e1c;
  param_1[1] = param_2;
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    fn_006f6ad8(param_2);
    uVar2 = fn_0068f3f4(iVar1,local_20,param_3 + 8);
  }
  param_1[2] = uVar2;
  return param_1;
}



void fn_002cfc4c(int param_1,int *param_2)

{
  int iVar1;
  int local_18;
  int iStack_14;
  int iStack_10;
  
  local_18 = param_2[2];
  iStack_14 = param_2[3];
  iStack_10 = param_2[4];
  iVar1 = fn_0068f384(*(undefined4 *)(param_1 + 8),&local_18);
  if (iVar1 != 0) {
    fn_0068b510(*(undefined4 *)(param_1 + 4),param_2);
    fn_0014481c(DAT_008977e8);
    iVar1 = fn_00263814();
    fn_00660790(4,iVar1 + 8,param_2 + 2);
  }
  (**(code **)(*param_2 + 0x1c))(param_2,&local_18);
  return;
}



void fn_002cfa94(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar10 = (uint *)(param_1 + 0x7c);
  puVar9 = *(undefined4 **)(param_1 + 0x80);
  if (puVar9 != *(undefined4 **)(param_1 + 0x84)) {
    *(undefined4 **)(param_1 + 0x80) = puVar9 + 1;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = param_2;
    }
    return;
  }
  uVar3 = (int)((int)puVar9 - *puVar10) >> 2;
  if ((uint)((int)((int)*(undefined4 **)(param_1 + 0x84) - *puVar10) >> 2) <= uVar3) {
    uVar11 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar11 < uVar3 + 0x20) {
      uVar11 = uVar3 + 0x20;
    }
    puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar6 = puVar1;
    for (puVar5 = (undefined4 *)*puVar10; puVar5 != puVar9; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar1);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = param_2;
    }
    puVar6 = *(undefined4 **)(param_1 + 0x80);
    puVar5 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar1);
    for (; puVar9 != puVar6; puVar9 = puVar9 + 1) {
      puVar5 = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar9;
      }
    }
    uVar2 = *puVar10;
    uVar7 = *(uint *)(param_1 + 0x80);
    uVar3 = uVar2;
    if (uVar7 < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar7);
    }
    fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x84) - uVar2) >> 2,0);
    *(undefined4 **)(param_1 + 0x84) = puVar1 + uVar11;
    *(undefined4 **)(param_1 + 0x80) = puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1;
    *puVar10 = (uint)puVar1;
    return;
  }
  *(undefined4 **)(param_1 + 0x80) = puVar9 + 1;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = puVar9[-1];
  }
  puVar5 = puVar9 + -1;
  puVar6 = puVar9;
  if (puVar9 < puVar5) {
    if (0 < (int)puVar5 - (int)puVar9) {
      iVar8 = (int)puVar5 - (int)puVar9 >> 2;
      iVar4 = 0;
      do {
        iVar8 = iVar8 + -1;
        puVar9[iVar4 + -1] = puVar5[iVar4 + -1];
        iVar4 = iVar4 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    while (puVar9 != puVar5) {
      puVar5 = puVar5 + -1;
      puVar6[-1] = *puVar5;
      puVar6 = puVar6 + -1;
    }
  }
  *puVar9 = param_2;
  return;
}



void fn_002cfa60(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(int **)(param_1 + 0x78) = param_2;
  }
  return;
}



void fn_002cfa2c(undefined4 *param_1)

{
  *param_1 = &DAT_00851e04;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



void fn_002cf60c(int param_1,int *param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 extraout_r1;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  
  fVar13 = 1.0;
  fVar10 = 0.0;
  if (((char)param_2[0x16] == '\x01') &&
     (iVar5 = param_2[0x1b] - param_2[0x1a], iVar4 = iVar5 >> 0x1f, iVar5 / 0xc + iVar4 != iVar4)) {
    pfVar1 = (float *)(param_2[0x1a] + (uint)*(byte *)(param_1 + 4) * 0xc);
    fVar13 = *pfVar1;
    lVar11 = (ulonglong)(uint)fVar13 << 0x20;
    fVar12 = pfVar1[2];
    local_4c = 0.0;
    fVar13 = fVar13 - (float)param_2[2];
    fVar10 = fVar12 - (float)param_2[4];
    local_48 = 0.0;
    local_44 = 0.0;
    if (SQRT(fVar13 * fVar13 + 0.0 + fVar10 * fVar10) <= 0.0) {
      fn_002cfdd0(param_2,0,DAT_00896d6c);
    }
    else {
      fVar8 = 1.0 / SQRT(fVar13 * fVar13 + 0.0 + fVar10 * fVar10);
      fVar13 = fVar13 * fVar8;
      fVar6 = (float)param_2[0x17];
      local_4c = fVar13 * fVar6 + 0.0;
      local_44 = fVar10 * fVar8 * fVar6 + 0.0;
      local_48 = fVar8 * 0.0 * fVar6 + 0.0;
      fn_00525bd0();
      param_2[8] = (int)lVar11;
      param_2[9] = (int)(fVar13 * 0.024543693);
      param_2[10] = (int)lVar11;
      fn_002cfdd0(param_2,2,DAT_00896d6c,0);
    }
    uVar2 = (**(code **)(*param_2 + 0x3c))(param_2);
    fn_0068e960(DAT_008977e8);
    uVar3 = fn_00664c4c();
    fn_001cc480(param_2,&local_4c,uVar3,uVar2);
    fVar13 = (float)((ulonglong)lVar11 >> 0x20) - (float)param_2[2];
    if ((float)param_2[0x17] * 0.5 <=
        SQRT(fVar13 * fVar13 + (float)lVar11 * (float)lVar11 +
             (fVar12 - (float)param_2[4]) * (fVar12 - (float)param_2[4]))) {
      return;
    }
    fn_00169f1c(*(byte *)(param_1 + 4) + 1,(param_2[0x1b] - param_2[0x1a]) / 0xc);
    *(undefined1 *)(param_1 + 4) = extraout_r1;
    return;
  }
  if (*(char *)(param_1 + 5) != '\0') {
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
      DAT_008f9e2c = fVar10;
      DAT_008f9e30 = fVar10;
      DAT_008f9e34 = fVar10;
    }
    if (((*(float *)(param_1 + 8) == DAT_008f9e2c) && (*(float *)(param_1 + 0xc) == DAT_008f9e30))
       && (*(float *)(param_1 + 0x10) == DAT_008f9e34)) {
      return;
    }
  }
  local_40 = (float)param_2[2] + *(float *)(param_1 + 8);
  local_3c = (float)param_2[3] + *(float *)(param_1 + 0xc);
  local_38 = (float)param_2[4] + *(float *)(param_1 + 0x10);
  fVar9 = *(float *)(param_1 + 8) * 0.9;
  *(float *)(param_1 + 8) = fVar9;
  fVar7 = *(float *)(param_1 + 0x10) * 0.9;
  *(float *)(param_1 + 0x10) = fVar7;
  fVar6 = *(float *)(param_1 + 0xc) - 0.4;
  *(float *)(param_1 + 0xc) = fVar6;
  fVar12 = (float)param_2[0x12] * 2.0;
  fVar8 = fVar9 * fVar9 + fVar6 * fVar6 + fVar7 * fVar7;
  if (fVar12 * fVar12 < fVar8) {
    fVar13 = fVar13 / SQRT(fVar8);
    *(float *)(param_1 + 8) = fVar9 * fVar13;
    *(float *)(param_1 + 0xc) = fVar6 * fVar13;
    *(float *)(param_1 + 0x10) = fVar7 * fVar13;
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * fVar12;
    *(float *)(param_1 + 8) = fVar9 * fVar13 * fVar12;
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * fVar12;
  }
  fn_0068e960(DAT_008977e8);
  uVar2 = fn_00664c4c();
  fn_001cc480(param_2,&local_40,uVar2,1);
  iVar4 = (**(code **)(*param_2 + 0x3c))(param_2);
  *(char *)(param_1 + 5) = (char)iVar4;
  if (iVar4 != 0) {
    *(float *)(param_1 + 0xc) = fVar10;
  }
  if ((uint)param_2[3] < 0xc47a0001) {
    return;
  }
  fn_00144810(DAT_008977e8);
  iVar4 = fn_001cc324();
  local_50 = fVar10;
  if (iVar4 == 3) {
    local_4c = 100.0;
    local_48 = -350.0;
    (**(code **)(*param_2 + 0x1c))(param_2,&local_50);
  }
  else {
    local_4c = 100.0;
    local_48 = fVar10;
    (**(code **)(*param_2 + 0x1c))();
  }
  *(float *)(param_1 + 0xc) = fVar10;
  return;
}



void fn_002cfdd0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((param_4 == 0) && (iVar1 = fn_00191284(*(undefined4 *)(param_1 + 4)), iVar1 != 0)) {
    return;
  }
  fn_0018d060(*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}


