#include "00543c54_005446e0.h"



void fn_005446e0(int param_1,float *param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 auStack_38 [40];
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(uint *)(iVar1 + 4);
  local_50 = *(float *)(iVar1 + 8);
  local_4c = *(float *)(iVar1 + 0xc);
  local_48 = *(float *)(iVar1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  local_44 = *(float *)(iVar1 + 0x14);
  local_40 = *(float *)(iVar1 + 0x18);
  local_3c = *(float *)(iVar1 + 0x1c);
  if ((uVar2 & 7) != 0) {
    fn_001ad428(auStack_38,param_3);
    if ((~uVar2 & 1) == 0) {
      fn_001ad038(&local_44,auStack_38);
    }
    if ((~uVar2 & 2) == 0) {
      fn_001ad038(&local_50,auStack_38);
    }
    if ((~uVar2 & 4) == 0) {
      local_50 = local_50 + *param_4;
      local_4c = local_4c + param_4[1];
      local_48 = local_48 + param_4[2];
    }
  }
  fVar7 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  local_50 = fVar7 - local_50;
  local_4c = fVar5 - local_4c;
  local_48 = fVar6 - local_48;
  fVar3 = 1.0 / SQRT(local_50 * local_50 + local_4c * local_4c + local_48 * local_48);
  local_48 = local_48 * fVar3;
  local_50 = local_50 * fVar3;
  local_4c = local_4c * fVar3;
  fVar8 = local_40 * local_48 - local_3c * local_4c;
  fVar4 = local_3c * local_50 - local_44 * local_48;
  fVar3 = local_44 * local_4c - local_40 * local_50;
  fVar9 = 1.0 / SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar3 = fVar3 * fVar9;
  fVar8 = fVar8 * fVar9;
  fVar4 = fVar4 * fVar9;
  *param_2 = fVar8;
  param_2[1] = fVar4;
  param_2[2] = fVar3;
  param_2[10] = local_48;
  fVar9 = local_4c * fVar3 - local_48 * fVar4;
  fVar10 = local_48 * fVar8 - local_50 * fVar3;
  fVar11 = local_50 * fVar4 - local_4c * fVar8;
  param_2[4] = fVar9;
  param_2[5] = fVar10;
  param_2[6] = fVar11;
  param_2[3] = -(fVar7 * fVar8 + fVar5 * fVar4 + fVar6 * fVar3);
  param_2[0xb] = -(fVar7 * local_50 + fVar5 * local_4c + fVar6 * local_48);
  param_2[7] = -(fVar7 * fVar9 + fVar5 * fVar10 + fVar6 * fVar11);
  param_2[8] = local_50;
  param_2[9] = local_4c;
  return;
}



void fn_0054460c(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0x10,4);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0x20,4);
  iVar7 = 0x20;
  puVar6 = puVar5;
  do {
    iVar7 = iVar7 + -1;
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  } while (iVar7 != 0);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  *puVar5 = 0x40000000;
  uVar2 = DAT_008ecaf4;
  uVar1 = DAT_008ecaf0;
  puVar5[2] = DAT_008ecaec;
  puVar5[3] = uVar1;
  puVar5[4] = uVar2;
  uVar3 = DAT_008ecb00;
  uVar2 = DAT_008ecafc;
  uVar1 = DAT_008ecaf8;
  puVar5[1] = 0;
  puVar5[5] = uVar1;
  puVar5[6] = uVar2;
  puVar5[7] = uVar3;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = param_1;
    *(undefined1 *)(puVar4 + 2) = 1;
    puVar4[3] = puVar5;
    *puVar4 = &DAT_00857804;
  }
  return;
}



undefined4 * fn_00544288(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0x20,4);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0x1c,4);
  iVar5 = 0x1c;
  puVar4 = puVar3;
  do {
    iVar5 = iVar5 + -1;
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (iVar5 != 0);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
  }
  *puVar3 = 0x40000000;
  puVar3[1] = 0x3f800000;
  puVar3[2] = 0x3f800000;
  puVar3[3] = 0x3f800000;
  uVar1 = DAT_008c0448;
  puVar3[5] = DAT_008c0444;
  puVar3[6] = uVar1;
  puVar3[4] = 0x3f800000;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = param_1;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 1;
    puVar2[3] = 0x3f000000;
    puVar2[4] = 0x3f000000;
    puVar2[5] = 0x3f000000;
    puVar2[6] = 0x3f000000;
    puVar2[7] = puVar3;
    *puVar2 = &DAT_008577e0;
  }
  return puVar2;
}



void fn_00543f48(int param_1,float *param_2,undefined4 param_3,float *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_80;
  float local_7c;
  float local_78;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 auStack_54 [64];
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(iVar2 + 4);
  if ((uVar3 & 3) == 0) {
    fn_0056181c(param_2,param_4,iVar2 + 8);
    return;
  }
  fVar10 = 0.0;
  fVar9 = *param_4 - *(float *)(iVar2 + 8);
  fVar11 = param_4[1] - *(float *)(iVar2 + 0xc);
  fVar7 = param_4[2] - *(float *)(iVar2 + 0x10);
  bVar1 = fVar9 == 0.0;
  fVar4 = *(float *)(iVar2 + 0x10);
  if (bVar1) {
    fVar4 = fVar7;
  }
  if (bVar1 && (bVar1 && fVar4 == 0.0)) {
    fn_0056181c(param_2,param_4,*(int *)(param_1 + 0xc) + 8);
    return;
  }
  fn_001ad428(auStack_54,param_3);
  fVar4 = -fVar9;
  fVar13 = 1.0;
  fVar5 = 1.0 / SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar7 * fVar7);
  fVar6 = 1.0 / SQRT(fVar7 * fVar7 + fVar10 * fVar10 + fVar4 * fVar4);
  fVar8 = fVar7 * fVar6;
  fVar4 = fVar4 * fVar6;
  fVar12 = fVar7 * fVar5 * fVar8 - fVar9 * fVar5 * fVar4;
  fVar7 = fVar11 * fVar5 * fVar4 - fVar7 * fVar5 * fVar10 * fVar6;
  fVar9 = fVar9 * fVar5 * fVar10 * fVar6 - fVar11 * fVar5 * fVar8;
  fn_0052534c(&local_68,&local_64);
  local_5c = fVar12 * local_64;
  local_60 = fVar7 * local_64 - local_68 * fVar8;
  local_58 = fVar9 * local_64 - local_68 * fVar4;
  iVar2 = *(int *)(param_1 + 0xc);
  local_80 = *(float *)(iVar2 + 8);
  local_7c = *(float *)(iVar2 + 0xc);
  local_78 = *(float *)(iVar2 + 0x10);
  if ((~uVar3 & 1) == 0) {
    fn_001ad038(&local_80,auStack_54);
    fn_001ad038(&local_60,auStack_54);
  }
  if ((~uVar3 & 2) == 0) {
    local_80 = local_80 + *param_4;
    local_7c = local_7c + param_4[1];
    local_78 = local_78 + param_4[2];
  }
  fVar5 = *param_4;
  fVar11 = param_4[1];
  local_80 = fVar5 - local_80;
  local_7c = fVar11 - local_7c;
  fVar10 = param_4[2];
  local_78 = fVar10 - local_78;
  fVar4 = fVar13 / SQRT(local_80 * local_80 + local_7c * local_7c + local_78 * local_78);
  local_78 = local_78 * fVar4;
  local_80 = local_80 * fVar4;
  local_7c = local_7c * fVar4;
  fVar7 = local_5c * local_78 - local_58 * local_7c;
  fVar9 = local_58 * local_80 - local_60 * local_78;
  fVar4 = local_60 * local_7c - local_5c * local_80;
  fVar13 = fVar13 / SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar4 * fVar4);
  fVar4 = fVar4 * fVar13;
  fVar7 = fVar7 * fVar13;
  fVar9 = fVar9 * fVar13;
  *param_2 = fVar7;
  param_2[1] = fVar9;
  param_2[2] = fVar4;
  param_2[8] = local_80;
  param_2[9] = local_7c;
  param_2[10] = local_78;
  fVar6 = local_7c * fVar4 - local_78 * fVar9;
  fVar13 = local_78 * fVar7 - local_80 * fVar4;
  fVar8 = local_80 * fVar9 - local_7c * fVar7;
  param_2[4] = fVar6;
  param_2[5] = fVar13;
  param_2[6] = fVar8;
  param_2[3] = -(fVar5 * fVar7 + fVar11 * fVar9 + fVar10 * fVar4);
  param_2[7] = -(fVar5 * fVar6 + fVar11 * fVar13 + fVar10 * fVar8);
  param_2[0xb] = -(fVar5 * local_80 + fVar11 * local_7c + fVar10 * local_78);
  return;
}



void fn_00543c54(float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = in_fpscr & 0xfffffff;
  fVar5 = ABS(param_2[1] * 40.743664);
  fVar4 = ABS(param_2[2] * 40.743664);
  for (fVar6 = ABS(*param_2 * 40.743664); 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar7 = VectorFloatToUnsigned(fVar6,3);
  uVar8 = VectorFloatToUnsigned(fVar5,3);
  uVar9 = VectorFloatToUnsigned(fVar4,3);
  uVar2 = uVar8 & 0xff;
  fVar11 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar8 = uVar7 & 0xff;
  uVar3 = uVar9 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar14 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar13 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar5 - fVar11) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar10 = (float)(&DAT_007d6f20)[uVar8 * 4] + (fVar6 - fVar12) * (float)(&DAT_007d6f28)[uVar8 * 4];
  fVar12 = (float)(&DAT_007d6f24)[uVar8 * 4] + (fVar6 - fVar12) * (float)(&DAT_007d6f2c)[uVar8 * 4];
  fVar6 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar5 - fVar11) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar5 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar4 - fVar14) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar4 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar4 - fVar14) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  if (*param_2 * 40.743664 < 0.0) {
    fVar10 = -fVar10;
  }
  if (param_2[1] * 40.743664 < 0.0) {
    fVar13 = -fVar13;
  }
  if (param_2[2] * 40.743664 < 0.0) {
    fVar5 = -fVar5;
  }
  *param_1 = fVar4 * fVar6;
  param_1[4] = fVar5 * fVar6;
  param_1[1] = fVar10 * fVar4 * fVar13 - fVar12 * fVar5;
  param_1[2] = fVar10 * fVar5 + fVar12 * fVar4 * fVar13;
  param_1[8] = -fVar13;
  param_1[9] = fVar10 * fVar6;
  param_1[10] = fVar12 * fVar6;
  param_1[5] = fVar12 * fVar4 + fVar10 * fVar5 * fVar13;
  param_1[6] = fVar12 * fVar5 * fVar13 - fVar10 * fVar4;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  fVar6 = param_3[1];
  fVar5 = param_3[2];
  param_1[3] = *param_3;
  param_1[7] = fVar6;
  param_1[0xb] = fVar5;
  param_1[0xf] = (float)((uint)param_1[0xf] | 0x800);
  return;
}


