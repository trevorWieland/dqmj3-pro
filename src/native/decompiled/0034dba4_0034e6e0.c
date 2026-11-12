#include "0034dba4_0034e6e0.h"



void fn_0034e6e0(int param_1,undefined1 param_2)

{
  undefined *local_10;
  undefined1 local_c;
  
  *(undefined1 *)(param_1 + 0xe) = param_2;
  local_10 = &DAT_007bd7a0;
  local_c = param_2;
  fn_005ed74c(*(undefined4 *)(param_1 + 0x14),&local_10);
  return;
}



void fn_0034dba4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
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
  float fVar19;
  float fVar21;
  undefined8 uVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_144;
  float local_140;
  float local_13c;
  float local_134;
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float local_5c;
  float local_58;
  float local_54;
  
  fVar21 = 0.0;
  fVar24 = 1.0;
  local_5c = 0.0;
  local_58 = 0.0;
  local_54 = 0.0;
  local_144 = 1.0;
  local_140 = 1.0;
  local_13c = 1.0;
  fVar9 = fVar21;
  fVar19 = fVar21;
  fVar23 = fVar21;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c6300), iVar2 != 0)) {
    DAT_008f9e38 = fVar24;
    DAT_008f9e3c = fVar23;
    DAT_008f9e40 = fVar23;
    DAT_008f9e44 = fVar23;
    DAT_008f9e48 = fVar23;
    DAT_008f9e4c = fVar24;
    DAT_008f9e50 = fVar23;
    DAT_008f9e54 = fVar23;
    DAT_008f9e58 = fVar23;
    DAT_008f9e5c = fVar23;
    DAT_008f9e60 = fVar24;
    DAT_008f9e64 = fVar23;
  }
  fn_001781f0(&local_f8,&DAT_008f9e38);
  fVar22 = 40.743664;
  local_134 = local_5c;
  local_130 = local_58;
  local_12c = local_54;
  uVar20 = CONCAT44(fVar23,0x47800000);
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(char *)(param_1 + 0x6c) == '\0') {
      local_134 = local_5c + *(float *)(param_1 + 0x94);
      local_130 = local_58 + *(float *)(param_1 + 0x98);
      local_12c = local_54 + *(float *)(param_1 + 0x9c);
      fVar9 = fVar9 + *(float *)(param_1 + 0xa0);
      fVar21 = fVar21 + *(float *)(param_1 + 0xa4);
      fVar19 = fVar19 + *(float *)(param_1 + 0xa8);
      local_144 = local_144 * *(float *)(param_1 + 0x88);
      local_140 = local_140 * *(float *)(param_1 + 0x8c);
      local_13c = local_13c * *(float *)(param_1 + 0x90);
      in_fpscr = in_fpscr & 0xfffffff;
      fVar10 = ABS(fVar21 * 40.743664);
      fVar14 = ABS(fVar19 * 40.743664);
      for (fVar24 = ABS(fVar9 * 40.743664); 0x477fffff < (int)fVar24; fVar24 = fVar24 - 65536.0) {
      }
      for (; 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
      }
      for (; 0x477fffff < (int)fVar14; fVar14 = fVar14 - 65536.0) {
      }
      uVar12 = VectorFloatToUnsigned(fVar24,3);
      uVar6 = VectorFloatToUnsigned(fVar10,3);
      uVar5 = uVar12 & 0xff;
      uVar13 = VectorFloatToUnsigned(fVar14,3);
      fVar16 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      uVar6 = uVar6 & 0xff;
      uVar11 = uVar13 & 0xff;
      fVar18 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      fVar17 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = (float)(&DAT_007d6f20)[uVar6 * 4] +
              (fVar10 - fVar16) * (float)(&DAT_007d6f28)[uVar6 * 4];
      fVar15 = (float)(&DAT_007d6f20)[uVar5 * 4] +
               (fVar24 - fVar18) * (float)(&DAT_007d6f28)[uVar5 * 4];
      fVar18 = (float)(&DAT_007d6f24)[uVar5 * 4] +
               (fVar24 - fVar18) * (float)(&DAT_007d6f2c)[uVar5 * 4];
      local_d0 = (float)(&DAT_007d6f24)[uVar6 * 4] +
                 (fVar10 - fVar16) * (float)(&DAT_007d6f2c)[uVar6 * 4];
      fVar24 = (float)(&DAT_007d6f20)[uVar11 * 4] +
               (fVar14 - fVar17) * (float)(&DAT_007d6f28)[uVar11 * 4];
      fVar10 = (float)(&DAT_007d6f24)[uVar11 * 4] +
               (fVar14 - fVar17) * (float)(&DAT_007d6f2c)[uVar11 * 4];
      if (fVar9 * 40.743664 < fVar23) {
        fVar15 = -fVar15;
      }
      if (fVar21 * 40.743664 < fVar23) {
        fVar8 = -fVar8;
      }
      if (fVar19 * 40.743664 < fVar23) {
        fVar24 = -fVar24;
      }
      local_f8 = fVar10 * local_d0;
      local_e8 = fVar24 * local_d0;
      local_d4 = fVar15 * local_d0;
      local_d0 = fVar18 * local_d0;
      local_d8 = -fVar8;
      local_f4 = fVar15 * fVar10 * fVar8 - fVar18 * fVar24;
      local_e0 = fVar18 * fVar24 * fVar8 - fVar15 * fVar10;
      local_f0 = fVar15 * fVar24 + fVar18 * fVar10 * fVar8;
      local_e4 = fVar18 * fVar10 + fVar15 * fVar24 * fVar8;
      local_ec = 0.0;
      local_dc = 0.0;
      local_cc = 0.0;
      fn_001ad39c(&local_f8,&local_134);
      goto LAB_0034e248;
    }
    fVar10 = fVar23;
    fVar14 = fVar24;
    iVar2 = fn_00176d68(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x48));
    iVar2 = (**(code **)(**(int **)(iVar2 + 600) + 0x18))();
    if (iVar2 == 1) {
      fn_00176d68(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x48));
      pfVar4 = (float *)fn_006dcd10();
      fVar23 = *pfVar4;
      fVar14 = pfVar4[1];
      fVar10 = pfVar4[2];
    }
    iVar2 = fn_00176d68(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x48));
    fVar17 = *(float *)(iVar2 + 0x58);
    fVar18 = *(float *)(iVar2 + 0x68);
    fVar15 = *(float *)(iVar2 + 0x78);
    fn_00176d68(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x48));
    pfVar4 = (float *)fn_006dcd40();
    local_a8 = fVar17 - *pfVar4;
    fStack_a4 = fVar18 - pfVar4[1];
    fStack_a0 = fVar15 - pfVar4[2];
    fVar8 = fVar24 / SQRT(local_a8 * local_a8 + fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0);
    fStack_a0 = fStack_a0 * fVar8;
    local_a8 = local_a8 * fVar8;
    fStack_a4 = fStack_a4 * fVar8;
    local_c8 = fVar14 * fStack_a0 - fVar10 * fStack_a4;
    local_c4 = fVar10 * local_a8 - fVar23 * fStack_a0;
    local_c0 = fVar23 * fStack_a4 - fVar14 * local_a8;
    fVar24 = fVar24 / SQRT(local_c8 * local_c8 + local_c4 * local_c4 + local_c0 * local_c0);
    local_c0 = local_c0 * fVar24;
    local_c8 = local_c8 * fVar24;
    local_c4 = local_c4 * fVar24;
    local_b8 = fStack_a4 * local_c0 - fStack_a0 * local_c4;
    local_b4 = fStack_a0 * local_c8 - local_a8 * local_c0;
    local_b0 = local_a8 * local_c4 - fStack_a4 * local_c8;
    fStack_9c = -(fVar17 * local_a8 + fVar18 * fStack_a4 + fVar15 * fStack_a0);
    local_bc = -(fVar17 * local_c8 + fVar18 * local_c4 + fVar15 * local_c0);
    local_ac = -(fVar17 * local_b8 + fVar18 * local_b4 + fVar15 * local_b0);
    fn_001ad184(&local_c8);
    fn_001ad06c(&local_c8,&local_c8,&local_f8);
    fn_001ad3b8(&local_f8,&local_c8,param_1 + 0x70);
    local_144 = local_144 * *(float *)(param_1 + 0x88);
    local_140 = local_140 * *(float *)(param_1 + 0x8c);
    local_13c = local_13c * *(float *)(param_1 + 0x90);
  }
  else {
    if (*(int *)(param_1 + 0x7c) < 0) {
      return;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      local_128 = *(undefined4 *)(param_1 + 0x30);
      uStack_124 = *(undefined4 *)(param_1 + 0x34);
      uStack_120 = *(undefined4 *)(param_1 + 0x38);
      uStack_11c = *(undefined4 *)(param_1 + 0x3c);
      uStack_118 = *(undefined4 *)(param_1 + 0x40);
      uStack_114 = *(undefined4 *)(param_1 + 0x44);
      uStack_110 = *(undefined4 *)(param_1 + 0x48);
      uStack_10c = *(undefined4 *)(param_1 + 0x4c);
      local_108 = *(undefined4 *)(param_1 + 0x50);
      uStack_104 = *(undefined4 *)(param_1 + 0x54);
      uStack_100 = *(undefined4 *)(param_1 + 0x58);
      uStack_fc = *(undefined4 *)(param_1 + 0x5c);
    }
    else {
      iVar2 = fn_005ea33c();
      puVar3 = (undefined4 *)(*(int *)(iVar2 + 0x14) + *(int *)(param_1 + 0x7c) * 0x30);
      local_128 = *puVar3;
      uStack_124 = puVar3[1];
      uStack_120 = puVar3[2];
      uStack_11c = puVar3[3];
      uStack_118 = puVar3[4];
      uStack_114 = puVar3[5];
      uStack_110 = puVar3[6];
      uStack_10c = puVar3[7];
      local_108 = puVar3[8];
      uStack_104 = puVar3[9];
      uStack_100 = puVar3[10];
      uStack_fc = puVar3[0xb];
    }
    fn_001ad3b8(&local_f8,&local_128,param_1 + 0x60);
    fn_001ad3b8(&local_98,&local_128,param_1 + 0x60);
    local_134 = local_ec;
    local_130 = local_dc;
    local_12c = local_cc;
    local_5c = local_8c;
    local_58 = local_7c;
    local_54 = local_6c;
    local_144 = local_144 * *(float *)(param_1 + 0x88);
    local_140 = local_140 * *(float *)(param_1 + 0x8c);
    local_13c = local_13c * *(float *)(param_1 + 0x90);
    if (*(char *)(param_1 + 4) != '\0') goto LAB_0034e248;
    local_144 = local_144 *
                (fVar24 / SQRT(local_f8 * local_f8 + local_e8 * local_e8 + local_d8 * local_d8));
    local_140 = local_140 *
                (fVar24 / SQRT(local_f4 * local_f4 + local_e4 * local_e4 + local_d4 * local_d4));
    local_13c = local_13c *
                (fVar24 / SQRT(local_f0 * local_f0 + local_e0 * local_e0 + local_d0 * local_d0));
  }
  local_134 = local_ec;
  local_130 = local_dc;
  local_12c = local_cc;
LAB_0034e248:
  cVar1 = *(char *)(param_1 + 0x29);
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)(param_1 + 0x2a);
  }
  if (bVar7 && cVar1 == '\0') {
    if (*(int *)(param_1 + 0x2c) != 0) {
      local_f8 = local_98;
      local_f4 = fStack_94;
      local_f0 = fStack_90;
      local_ec = local_8c;
      local_e8 = fStack_88;
      local_e4 = fStack_84;
      local_e0 = fStack_80;
      local_dc = local_7c;
      local_d8 = local_78;
      local_d4 = fStack_74;
      local_d0 = fStack_70;
      local_cc = local_6c;
    }
  }
  else {
    local_c4 = SQRT(local_f8 * local_f8 + local_e8 * local_e8 + local_d8 * local_d8);
    local_c0 = SQRT(local_f4 * local_f4 + local_e4 * local_e4 + local_d4 * local_d4);
    local_bc = SQRT(local_f0 * local_f0 + local_e0 * local_e0 + local_d0 * local_d0);
    iVar2 = fn_00176d68(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x48));
    fVar24 = 0.024543693;
    fVar23 = *(float *)(iVar2 + 0x58) - local_134;
    if (*(char *)(param_1 + 0x29) != '\0') {
      fVar9 = -(*(float *)(iVar2 + 0x68) - local_130);
      fn_00525bd0();
      fVar9 = fVar9 * fVar24;
    }
    if (*(char *)(param_1 + 0x2a) != '\0') {
      fn_00525bd0();
      fVar21 = fVar23 * fVar24;
    }
    fVar8 = (float)((ulonglong)uVar20 >> 0x20);
    in_fpscr = in_fpscr & 0xfffffff;
    fVar24 = ABS(fVar21 * fVar22);
    fVar10 = ABS(fVar19 * fVar22);
    fVar14 = (float)uVar20;
    for (fVar23 = ABS(fVar9 * fVar22); 0x477fffff < (int)fVar23; fVar23 = fVar23 - fVar14) {
    }
    for (; 0x477fffff < (int)fVar24; fVar24 = fVar24 - fVar14) {
    }
    for (; 0x477fffff < (int)fVar10; fVar10 = fVar10 - fVar14) {
    }
    uVar11 = VectorFloatToUnsigned(fVar23,3);
    uVar12 = VectorFloatToUnsigned(fVar24,3);
    uVar5 = uVar11 & 0xff;
    uVar13 = VectorFloatToUnsigned(fVar10,3);
    uVar6 = uVar12 & 0xff;
    fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar11 = uVar13 & 0xff;
    fVar17 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = (float)(&DAT_007d6f20)[uVar5 * 4] +
             (fVar23 - fVar15) * (float)(&DAT_007d6f28)[uVar5 * 4];
    fVar15 = (float)(&DAT_007d6f24)[uVar5 * 4] +
             (fVar23 - fVar15) * (float)(&DAT_007d6f2c)[uVar5 * 4];
    fVar23 = (float)(&DAT_007d6f20)[uVar6 * 4] +
             (fVar24 - fVar18) * (float)(&DAT_007d6f28)[uVar6 * 4];
    local_d0 = (float)(&DAT_007d6f24)[uVar6 * 4] +
               (fVar24 - fVar18) * (float)(&DAT_007d6f2c)[uVar6 * 4];
    if (fVar9 * fVar22 < fVar8) {
      fVar14 = -fVar14;
    }
    fVar9 = (float)(&DAT_007d6f20)[uVar11 * 4] +
            (fVar10 - fVar17) * (float)(&DAT_007d6f28)[uVar11 * 4];
    fVar24 = (float)(&DAT_007d6f24)[uVar11 * 4] +
             (fVar10 - fVar17) * (float)(&DAT_007d6f2c)[uVar11 * 4];
    if (fVar21 * fVar22 < fVar8) {
      fVar23 = -fVar23;
    }
    if (fVar19 * fVar22 < fVar8) {
      fVar9 = -fVar9;
    }
    local_f8 = fVar24 * local_d0;
    local_e8 = fVar9 * local_d0;
    local_d4 = fVar14 * local_d0;
    local_d0 = fVar15 * local_d0;
    local_d8 = -fVar23;
    local_f4 = fVar14 * fVar24 * fVar23 - fVar15 * fVar9;
    local_e0 = fVar15 * fVar9 * fVar23 - fVar14 * fVar24;
    local_f0 = fVar14 * fVar9 + fVar15 * fVar24 * fVar23;
    local_e4 = fVar15 * fVar24 + fVar14 * fVar9 * fVar23;
    local_ec = 0.0;
    local_dc = 0.0;
    local_cc = 0.0;
    fn_001ad150(&local_f8,&local_f8,&local_c4);
    if (*(int *)(param_1 + 0x2c) == 0) {
      fn_001ad39c(&local_f8,&local_134);
    }
    else {
      fn_001ad39c(&local_f8,&local_5c);
    }
  }
  if (param_2 == 0) {
    fn_005ed848(*(undefined4 *)(param_1 + 0x14),&local_f8);
    fn_005ee6e4(*(undefined4 *)(param_1 + 0x14),&local_144);
    return;
  }
  fn_001ad150(&local_f8,&local_f8,&local_144);
  fn_005ed6e8(*(undefined4 *)(param_1 + 0x14),&local_f8);
  return;
}


