#include "001cb048_001cbdc4.h"



void fn_001cbdc4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x2c) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  return;
}



void fn_001cbdac(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  return;
}



void fn_001cbab0(int param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float local_28 [5];
  
  pfVar1 = local_28;
  if (*(char *)(param_1 + 0x58) != '\x01') {
    iVar2 = param_2[0x7e];
    iVar3 = param_2[0x7f];
    *(int *)(param_1 + 0x40) = param_2[0x7d];
    *(int *)(param_1 + 0x44) = iVar2;
    *(int *)(param_1 + 0x48) = iVar3;
    iVar2 = param_2[0x81];
    iVar3 = param_2[0x82];
    *(int *)(param_1 + 0x4c) = param_2[0x80];
    *(int *)(param_1 + 0x50) = iVar2;
    *(int *)(param_1 + 0x54) = iVar3;
    iVar2 = fn_006f7de8(param_2);
    if ((0 < iVar2) || (iVar2 = fn_006f8074(param_2), iVar2 != 0)) {
      *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) * 1.2;
      *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * 1.2;
      *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) * 1.2;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x34);
    fVar4 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x14);
    fn_00525bd0();
    uVar5 = 0x3fb40000;
    fVar4 = fVar4 * 1.40625;
    fn_00144810(DAT_008977e8);
    iVar2 = fn_006a8730();
    if (iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
      fn_0011dda8();
    }
    fn_0017fe34();
    fn_006a83d8(param_1,param_2);
    *(float *)(param_1 + 0x14) = fVar4;
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    *(undefined4 *)(param_1 + 0x1c) = uVar7;
    fVar4 = (float)param_2[4] + (float)param_2[0x82];
    fVar9 = 60.0;
    fVar6 = (float)param_2[2] + (float)param_2[0x80];
    fVar8 = (float)param_2[3] + (float)param_2[0x81];
    *(float *)(param_1 + 0x34) = fVar4;
    *(float *)(param_1 + 0x2c) = fVar6;
    *(float *)(param_1 + 0x30) = fVar8;
    (**(code **)(*param_2 + 0x5c))(param_2);
    local_28[0] = fVar9 + SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar8 * fVar8) * 1.5;
    local_28[1] = fVar9;
    local_28[2] = 90.0;
    if (90.0 < fVar9) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    if (local_28[0] < fVar9) {
      pfVar1 = local_28 + 1;
    }
    if (90.0 < *pfVar1) {
      pfVar1 = local_28 + 2;
    }
    *(float *)(param_1 + 0x3c) = *pfVar1;
  }
  return;
}



void fn_001cb82c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float fStack_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar11 = *(float *)(param_2 + 0x28) * 40.743664;
  fVar6 = *(float *)(param_2 + 0x20) * 40.743664;
  fVar8 = *(float *)(param_2 + 0x24) * 40.743664;
  uVar1 = in_fpscr & 0xfffffff;
  fVar9 = ABS(fVar8);
  fVar7 = ABS(fVar11);
  for (fVar10 = ABS(fVar6); 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  uVar12 = VectorFloatToUnsigned(fVar10,3);
  uVar13 = VectorFloatToUnsigned(fVar9,3);
  uVar14 = VectorFloatToUnsigned(fVar7,3);
  uVar2 = uVar12 & 0xff;
  fVar18 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar12 = uVar13 & 0xff;
  fVar17 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar13 = uVar14 & 0xff;
  fVar16 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar15 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar10 - fVar18) * (float)(&DAT_007d6f28)[uVar2 * 4]
  ;
  fVar18 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar10 - fVar18) * (float)(&DAT_007d6f2c)[uVar2 * 4]
  ;
  local_28 = (float)(&DAT_007d6f24)[uVar12 * 4] +
             (fVar9 - fVar17) * (float)(&DAT_007d6f2c)[uVar12 * 4];
  fVar10 = (float)(&DAT_007d6f20)[uVar12 * 4] +
           (fVar9 - fVar17) * (float)(&DAT_007d6f28)[uVar12 * 4];
  if (fVar6 < 0.0) {
    fVar15 = -fVar15;
  }
  fVar9 = (float)(&DAT_007d6f20)[uVar13 * 4] + (fVar7 - fVar16) * (float)(&DAT_007d6f28)[uVar13 * 4]
  ;
  fVar7 = (float)(&DAT_007d6f24)[uVar13 * 4] + (fVar7 - fVar16) * (float)(&DAT_007d6f2c)[uVar13 * 4]
  ;
  if (fVar8 < 0.0) {
    fVar10 = -fVar10;
  }
  if (fVar11 < 0.0) {
    fVar9 = -fVar9;
  }
  local_50 = fVar7 * local_28;
  local_40 = fVar9 * local_28;
  fStack_2c = fVar15 * local_28;
  local_28 = fVar18 * local_28;
  local_30 = -fVar10;
  local_48 = fVar15 * fVar9 + fVar18 * fVar7 * fVar10;
  local_3c = fVar18 * fVar7 + fVar15 * fVar9 * fVar10;
  local_4c = fVar15 * fVar7 * fVar10 - fVar18 * fVar9;
  local_38 = fVar18 * fVar9 * fVar10 - fVar15 * fVar7;
  local_44 = 0;
  local_34 = 0;
  local_24 = 0;
  local_20 = 0.0;
  local_1c = 20.0;
  local_18 = -50.0;
  fn_0016947c(&local_20,&local_50);
  pfVar5 = (float *)(param_2 + 8);
  fVar10 = *pfVar5;
  local_1c = *(float *)(param_2 + 0xc) + local_1c;
  local_18 = *(float *)(param_2 + 0x10) + local_18;
  *(float *)(param_1 + 8) = fVar10 + local_20;
  *(float *)(param_1 + 0xc) = local_1c;
  *(float *)(param_1 + 0x10) = local_18;
  *(float *)(param_1 + 0x14) = fVar10 + local_20;
  *(float *)(param_1 + 0x18) = local_1c;
  *(float *)(param_1 + 0x1c) = local_18;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  *(float *)(param_1 + 0x20) = *pfVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  *(float *)(param_1 + 0x2c) = *pfVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  return;
}



void fn_001cb820(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0016ddf0(*(undefined4 *)(param_1 + 0x5c),param_2,param_3,0);
  return;
}



void fn_001cb7b8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0081bcbc;
  uVar2 = param_1[6];
  uVar1 = uVar2;
  if ((uint)param_1[7] < uVar2) {
    do {
      uVar1 = uVar1 + 0x14;
    } while (uVar1 != param_1[7]);
  }
  fn_001008c4(uVar2,(int)(param_1[8] - uVar2) / 0x14,0);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_001cb644(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_20;
  uint local_1c;
  
  param_1[1] = 0;
  *param_1 = &DAT_0081bcbc;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  local_20 = 2;
  puVar8 = param_1 + 6;
  if ((uint)((int)(param_1[8] - param_1[6]) / 0x14) < 2) {
    uVar9 = (int)(param_1[7] - param_1[6]) / 0x14;
    local_1c = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c < uVar9 + 0x20) {
      local_1c = uVar9 + 0x20;
    }
    puVar5 = &local_1c;
    if (local_1c < 3) {
      puVar5 = &local_20;
    }
    uVar9 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 * 0x14,0);
    puVar7 = (undefined4 *)param_1[7];
    puVar2 = puVar1;
    for (puVar6 = (undefined4 *)*puVar8; puVar6 != puVar7; puVar6 = puVar6 + 5) {
      if (puVar2 != (undefined4 *)0x0) {
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        uVar12 = puVar6[3];
        uVar13 = puVar6[4];
        *puVar2 = *puVar6;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        puVar2[4] = uVar13;
      }
      puVar2 = puVar2 + 5;
    }
    uVar3 = *puVar8;
    uVar4 = uVar3;
    if ((uint)param_1[7] < uVar3) {
      do {
        uVar4 = uVar4 + 0x14;
      } while (uVar4 != param_1[7]);
    }
    fn_001008c4(uVar3,(int)(param_1[8] - uVar3) / 0x14,0);
    uVar4 = *puVar8;
    *puVar8 = (uint)puVar1;
    param_1[7] = puVar1 + ((int)(param_1[7] - uVar4) / 0x14) * 5;
    param_1[8] = puVar1 + uVar9 * 5;
  }
  return param_1;
}



void fn_001cb048(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x24) * 0x14;
  (**(code **)(**(int **)(iVar2 + 0xc) + 0x10))();
  piVar1 = *(int **)(iVar2 + 0x10);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001cb084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x10))();
  return;
}


