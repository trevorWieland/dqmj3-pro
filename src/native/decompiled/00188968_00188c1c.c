#include "00188968_00188c1c.h"



void fn_00188c1c(float *param_1,undefined4 param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_d8 [6];
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 uStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [48];
  float local_48;
  float local_44;
  float local_40;
  float local_2c;
  float fStack_28;
  float fStack_24;
  
  fVar18 = 0.0;
  local_48 = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  uVar1 = fn_00191238(param_2,(char *)&DAT_00192e10);
  uVar1 = fn_00191270(param_2,uVar1);
  fn_001781f0(auStack_78,uVar1);
  fn_0016947c(&local_48,auStack_78);
  bVar4 = *param_3 == fVar18;
  if (bVar4) {
    in_s1 = param_3[1];
  }
  uVar6 = in_fpscr & 0xfffffff | (uint)(bVar4 && in_s1 == fVar18) << 0x1e;
  bVar5 = false;
  if (bVar4) {
    bVar5 = SUB41(uVar6 >> 0x1e,0);
  }
  bVar4 = false;
  if (bVar5) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(param_3[2] == fVar18) << 0x1e;
    bVar4 = SUB41(uVar6 >> 0x1e,0);
  }
  if (!bVar4) {
    fVar7 = *param_3 * 40.743664;
    uVar6 = uVar6 & 0xfffffff;
    fVar9 = ABS(param_3[1] * 40.743664);
    fVar8 = ABS(param_3[2] * 40.743664);
    for (fVar10 = ABS(fVar7); 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
    }
    uVar11 = VectorFloatToUnsigned(fVar10,3);
    uVar12 = VectorFloatToUnsigned(fVar9,3);
    uVar3 = uVar11 & 0xff;
    uVar13 = VectorFloatToUnsigned(fVar8,3);
    uVar2 = uVar12 & 0xff;
    fVar17 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
    fVar15 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
    uVar11 = uVar13 & 0xff;
    fVar16 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
    fVar14 = (float)(&DAT_007d6f20)[uVar3 * 4] +
             (fVar10 - fVar17) * (float)(&DAT_007d6f28)[uVar3 * 4];
    fVar17 = (float)(&DAT_007d6f24)[uVar3 * 4] +
             (fVar10 - fVar17) * (float)(&DAT_007d6f2c)[uVar3 * 4];
    local_80 = (float)(&DAT_007d6f24)[uVar2 * 4] +
               (fVar9 - fVar15) * (float)(&DAT_007d6f2c)[uVar2 * 4];
    fVar10 = (float)(&DAT_007d6f20)[uVar2 * 4] +
             (fVar9 - fVar15) * (float)(&DAT_007d6f28)[uVar2 * 4];
    if (fVar7 < fVar18) {
      fVar14 = -fVar14;
    }
    fVar9 = (float)(&DAT_007d6f20)[uVar11 * 4] +
            (fVar8 - fVar16) * (float)(&DAT_007d6f28)[uVar11 * 4];
    fVar8 = (float)(&DAT_007d6f24)[uVar11 * 4] +
            (fVar8 - fVar16) * (float)(&DAT_007d6f2c)[uVar11 * 4];
    if (param_3[1] * 40.743664 < fVar18) {
      fVar10 = -fVar10;
    }
    if (param_3[2] * 40.743664 < fVar18) {
      fVar9 = -fVar9;
    }
    local_a8 = fVar8 * local_80;
    local_98 = fVar9 * local_80;
    local_84 = fVar14 * local_80;
    local_80 = fVar17 * local_80;
    local_88 = -fVar10;
    local_a4 = fVar14 * fVar8 * fVar10 - fVar17 * fVar9;
    local_90 = fVar17 * fVar9 * fVar10 - fVar14 * fVar8;
    local_a0 = fVar14 * fVar9 + fVar17 * fVar8 * fVar10;
    local_94 = fVar17 * fVar8 + fVar14 * fVar9 * fVar10;
    local_9c = 0;
    local_8c = 0;
    local_7c = 0;
    fn_0016947c(&local_2c,&local_a8,&local_48);
    local_48 = local_2c;
    local_44 = fStack_28;
    local_40 = fStack_24;
  }
  fVar10 = *param_4;
  bVar4 = fVar10 == fVar18;
  if (bVar4) {
    fVar10 = param_4[1];
  }
  bVar5 = false;
  if (bVar4 && (bVar4 && fVar10 == fVar18)) {
    bVar5 = param_4[2] == fVar18;
  }
  if (!bVar5) {
    local_d8[0] = *param_4;
    local_d8[1] = 0.0;
    local_d8[2] = 0.0;
    local_d8[3] = 0.0;
    local_d8[4] = 0.0;
    local_d8[5] = param_4[1];
    uStack_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = param_4[2];
    uStack_ac = 0;
    fn_0016947c(&local_a8,local_d8,&local_48);
    local_48 = local_a8;
    local_44 = local_a4;
    local_40 = local_a0;
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = local_40;
  return;
}



void fn_00188968(undefined4 *param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float local_90;
  float local_8c;
  float fStack_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_50 [60];
  
  fVar18 = 0.0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  uVar1 = fn_00191238(param_2,&DAT_001890ec);
  uVar1 = fn_00191270(param_2,uVar1);
  fn_001781f0(auStack_50,uVar1);
  fn_0016947c(&local_60,auStack_50);
  bVar5 = *param_3 == fVar18;
  if (bVar5) {
    in_s1 = param_3[1];
  }
  uVar6 = in_fpscr & 0xfffffff | (uint)(bVar5 && in_s1 == fVar18) << 0x1e;
  bVar4 = false;
  if (bVar5) {
    bVar4 = SUB41(uVar6 >> 0x1e,0);
  }
  bVar5 = false;
  if (bVar4) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(param_3[2] == fVar18) << 0x1e;
    bVar5 = SUB41(uVar6 >> 0x1e,0);
  }
  if (!bVar5) {
    fVar7 = *param_3 * 40.743664;
    uVar6 = uVar6 & 0xfffffff;
    fVar9 = ABS(param_3[1] * 40.743664);
    fVar8 = ABS(param_3[2] * 40.743664);
    for (fVar10 = ABS(fVar7); 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
    }
    uVar11 = VectorFloatToUnsigned(fVar10,3);
    uVar12 = VectorFloatToUnsigned(fVar9,3);
    uVar13 = VectorFloatToUnsigned(fVar8,3);
    uVar3 = uVar12 & 0xff;
    uVar2 = uVar11 & 0xff;
    fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
    uVar11 = uVar13 & 0xff;
    fVar16 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
    fVar17 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
    fVar14 = (float)(&DAT_007d6f20)[uVar2 * 4] +
             (fVar10 - fVar15) * (float)(&DAT_007d6f28)[uVar2 * 4];
    fVar15 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar10 - fVar15) * (float)(&DAT_007d6f2c)[uVar2 * 4];
    local_6c = (float)(&DAT_007d6f24)[uVar3 * 4] +
               (fVar9 - fVar16) * (float)(&DAT_007d6f2c)[uVar3 * 4];
    fVar10 = (float)(&DAT_007d6f20)[uVar3 * 4] +
             (fVar9 - fVar16) * (float)(&DAT_007d6f28)[uVar3 * 4];
    if (fVar7 < fVar18) {
      fVar14 = -fVar14;
    }
    fVar7 = (float)(&DAT_007d6f20)[uVar11 * 4] +
            (fVar8 - fVar17) * (float)(&DAT_007d6f28)[uVar11 * 4];
    fVar9 = (float)(&DAT_007d6f24)[uVar11 * 4] +
            (fVar8 - fVar17) * (float)(&DAT_007d6f2c)[uVar11 * 4];
    if (param_3[1] * 40.743664 < fVar18) {
      fVar10 = -fVar10;
    }
    if (param_3[2] * 40.743664 < fVar18) {
      fVar7 = -fVar7;
    }
    local_90 = fVar9 * local_6c;
    local_80 = fVar7 * local_6c;
    fStack_68 = fVar15 * local_6c;
    local_6c = fVar14 * local_6c;
    local_70 = -fVar10;
    local_8c = fVar14 * fVar9 * fVar10 - fVar15 * fVar7;
    fStack_88 = fVar14 * fVar7 + fVar15 * fVar9 * fVar10;
    local_78 = fVar15 * fVar7 * fVar10 - fVar14 * fVar9;
    local_7c = fVar15 * fVar9 + fVar14 * fVar7 * fVar10;
    local_84 = 0;
    local_74 = 0;
    local_64 = 0;
    fn_0016947c(&local_a0,&local_90,&local_60);
    local_60 = local_a0;
    local_5c = uStack_9c;
    local_58 = uStack_98;
  }
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = local_58;
  return;
}


