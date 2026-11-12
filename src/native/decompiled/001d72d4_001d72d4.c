#include "001d72d4_001d72d4.h"



void fn_001d72d4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_84;
  float local_80;
  float local_7c;
  
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  if (iVar2 == 0) {
    uVar3 = fn_006f7a48(DAT_008977e0);
    fVar28 = 3.0;
    fVar11 = 80.0;
    fn_0017fe34();
    fn_006a8fac(param_1);
    fn_006a7de0(uVar3);
    fVar27 = fVar11;
    fn_006a7e74(uVar3);
    fVar27 = fVar27 + fVar11;
    fn_006a7e80(uVar3);
    fVar11 = fVar11 * fVar28;
    fn_0017fe34();
    fVar23 = 0.0;
    fVar25 = 40.743664;
    local_e8 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x1c);
    fVar24 = 65536.0;
    local_e4 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x20);
    local_e0 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24);
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar27 == 0.0 && fVar11 == 0.0) << 0x1e;
    bVar9 = false;
    if (fVar27 == 0.0) {
      bVar9 = SUB41(uVar10 >> 0x1e,0);
    }
    if (!bVar9) {
      fVar27 = fVar27 * fVar28;
      fn_0017fe34();
      fVar27 = *(float *)(param_1 + 0x14) + fVar27;
      fn_005df8f8();
      *(float *)(param_1 + 0x14) = fVar27;
      fVar11 = *(float *)(param_1 + 0x10) + fVar11;
      fn_00764608();
      *(float *)(param_1 + 0x10) = fVar11;
      fVar14 = *(float *)(param_1 + 0x14) * fVar25;
      fVar12 = *(float *)(param_1 + 0x18) * fVar25;
      uVar10 = uVar10 & 0xfffffff;
      fVar28 = ABS(fVar14);
      fVar13 = ABS(fVar12);
      for (fVar27 = ABS(fVar11 * fVar25); 0x477fffff < (int)fVar27; fVar27 = fVar27 - fVar24) {
      }
      for (; 0x477fffff < (int)fVar28; fVar28 = fVar28 - fVar24) {
      }
      for (; 0x477fffff < (int)fVar13; fVar13 = fVar13 - fVar24) {
      }
      uVar15 = VectorFloatToUnsigned(fVar27,3);
      uVar16 = VectorFloatToUnsigned(fVar28,3);
      uVar17 = VectorFloatToUnsigned(fVar13,3);
      uVar4 = uVar15 & 0xff;
      fVar20 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(uVar10 >> 0x16) & 3);
      uVar15 = uVar16 & 0xff;
      fVar21 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(uVar10 >> 0x16) & 3);
      uVar16 = uVar17 & 0xff;
      fVar22 = (float)VectorUnsignedToFloat(uVar17 & 0xffff,(byte)(uVar10 >> 0x16) & 3);
      fVar18 = (float)(&DAT_007d6f20)[uVar4 * 4] +
               (fVar27 - fVar20) * (float)(&DAT_007d6f28)[uVar4 * 4];
      fVar20 = (float)(&DAT_007d6f24)[uVar4 * 4] +
               (fVar27 - fVar20) * (float)(&DAT_007d6f2c)[uVar4 * 4];
      local_98 = (float)(&DAT_007d6f24)[uVar15 * 4] +
                 (fVar28 - fVar21) * (float)(&DAT_007d6f2c)[uVar15 * 4];
      fVar27 = (float)(&DAT_007d6f20)[uVar15 * 4] +
               (fVar28 - fVar21) * (float)(&DAT_007d6f28)[uVar15 * 4];
      if (fVar11 * fVar25 < fVar23) {
        fVar18 = -fVar18;
      }
      fVar11 = (float)(&DAT_007d6f20)[uVar16 * 4] +
               (fVar13 - fVar22) * (float)(&DAT_007d6f28)[uVar16 * 4];
      fVar28 = (float)(&DAT_007d6f24)[uVar16 * 4] +
               (fVar13 - fVar22) * (float)(&DAT_007d6f2c)[uVar16 * 4];
      if (fVar14 < fVar23) {
        fVar27 = -fVar27;
      }
      if (fVar12 < fVar23) {
        fVar11 = -fVar11;
      }
      local_c0 = fVar28 * local_98;
      local_9c = fVar18 * local_98;
      local_b0 = fVar11 * local_98;
      local_98 = fVar20 * local_98;
      local_a0 = -fVar27;
      local_b8 = fVar18 * fVar11 + fVar20 * fVar28 * fVar27;
      local_ac = fVar20 * fVar28 + fVar18 * fVar11 * fVar27;
      local_bc = fVar18 * fVar28 * fVar27 - fVar20 * fVar11;
      local_a8 = fVar20 * fVar11 * fVar27 - fVar18 * fVar28;
      local_b4 = 0.0;
      local_a4 = 0;
      local_94 = 0;
      uVar5 = fn_006a9088(param_1);
      fn_0016947c(&local_e8,&local_c0,uVar5);
    }
    uVar26 = CONCAT44(0x3f800000,fVar25);
    fVar11 = 1.0 / SQRT(local_e8 * local_e8 + local_e4 * local_e4 + local_e0 * local_e0);
    local_e8 = local_e8 * fVar11;
    fVar27 = local_e4 * fVar11;
    local_e0 = local_e0 * fVar11;
    local_e4 = fVar27;
    local_dc = fVar23;
    local_d8 = fVar23;
    local_d4 = fVar23;
    iVar2 = fn_006a7d5c(uVar3);
    if (iVar2 != 0) {
      local_dc = local_dc + local_e8;
      local_d8 = local_d8 + local_e4;
      local_d4 = local_d4 + local_e0;
      fVar27 = local_e0;
    }
    iVar2 = fn_006a7cc8(uVar3);
    if (iVar2 != 0) {
      local_dc = local_dc + -local_e8;
      local_d4 = local_d4 + -local_e0;
      fVar27 = local_d8;
      local_d8 = local_d8 + -local_e4;
    }
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
      DAT_008f9e2c = fVar23;
      DAT_008f9e30 = fVar23;
      DAT_008f9e34 = fVar23;
    }
    local_84 = DAT_008f9e2c;
    local_80 = DAT_008f9e30;
    local_7c = DAT_008f9e34;
    iVar2 = fn_006a7d68(uVar3);
    fVar11 = -1.0;
    if (iVar2 != 0) {
      local_84 = local_84 + -1.0;
    }
    iVar2 = fn_006a7ce0(uVar3);
    if (iVar2 != 0) {
      local_84 = local_84 + (float)((ulonglong)uVar26 >> 0x20);
    }
    iVar2 = fn_006a7f74(uVar3);
    if (iVar2 != 0) {
      local_80 = local_80 + (float)((ulonglong)uVar26 >> 0x20);
    }
    iVar2 = fn_006a7cd4(uVar3);
    if (iVar2 != 0) {
      local_80 = local_80 + fVar11;
    }
    bVar9 = local_84 == fVar23;
    fVar11 = local_84;
    if (bVar9) {
      fVar11 = local_80;
    }
    uVar4 = uVar10 & 0xfffffff | (uint)(bVar9 && fVar11 == fVar23) << 0x1e;
    bVar8 = false;
    if (bVar9) {
      bVar8 = SUB41(uVar4 >> 0x1e,0);
    }
    bVar9 = false;
    if (bVar8) {
      uVar4 = uVar10 & 0xfffffff | (uint)(local_7c == fVar23) << 0x1e;
      bVar9 = SUB41(uVar4 >> 0x1e,0);
    }
    if (!bVar9) {
      fVar27 = (float)((ulonglong)uVar26 >> 0x20) /
               SQRT(local_84 * local_84 + local_80 * local_80 + local_7c * local_7c);
      local_84 = local_84 * fVar27;
      local_80 = local_80 * fVar27;
      local_7c = local_7c * fVar27;
      fVar12 = (float)uVar26;
      fVar28 = *(float *)(param_1 + 0x10) * fVar12;
      fVar13 = *(float *)(param_1 + 0x14) * fVar12;
      fVar12 = *(float *)(param_1 + 0x18) * fVar12;
      uVar4 = uVar4 & 0xfffffff;
      fVar11 = ABS(fVar13);
      fVar25 = ABS(fVar12);
      for (fVar27 = ABS(fVar28); 0x477fffff < (int)fVar27; fVar27 = fVar27 - fVar24) {
      }
      for (; 0x477fffff < (int)fVar11; fVar11 = fVar11 - fVar24) {
      }
      for (; 0x477fffff < (int)fVar25; fVar25 = fVar25 - fVar24) {
      }
      uVar15 = VectorFloatToUnsigned(fVar27,3);
      uVar17 = VectorFloatToUnsigned(fVar11,3);
      uVar19 = VectorFloatToUnsigned(fVar25,3);
      uVar16 = uVar17 & 0xff;
      uVar10 = uVar15 & 0xff;
      fVar18 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(uVar4 >> 0x16) & 3);
      fVar20 = (float)VectorUnsignedToFloat(uVar17 & 0xffff,(byte)(uVar4 >> 0x16) & 3);
      uVar15 = uVar19 & 0xff;
      fVar14 = (float)VectorUnsignedToFloat(uVar19 & 0xffff,(byte)(uVar4 >> 0x16) & 3);
      fVar24 = (float)(&DAT_007d6f20)[uVar10 * 4] +
               (fVar27 - fVar18) * (float)(&DAT_007d6f28)[uVar10 * 4];
      fVar18 = (float)(&DAT_007d6f24)[uVar10 * 4] +
               (fVar27 - fVar18) * (float)(&DAT_007d6f2c)[uVar10 * 4];
      fVar27 = (float)(&DAT_007d6f20)[uVar16 * 4] +
               (fVar11 - fVar20) * (float)(&DAT_007d6f28)[uVar16 * 4];
      local_98 = (float)(&DAT_007d6f24)[uVar16 * 4] +
                 (fVar11 - fVar20) * (float)(&DAT_007d6f2c)[uVar16 * 4];
      if (fVar28 < fVar23) {
        fVar24 = -fVar24;
      }
      fVar11 = (float)(&DAT_007d6f20)[uVar15 * 4] +
               (fVar25 - fVar14) * (float)(&DAT_007d6f28)[uVar15 * 4];
      fVar25 = (float)(&DAT_007d6f24)[uVar15 * 4] +
               (fVar25 - fVar14) * (float)(&DAT_007d6f2c)[uVar15 * 4];
      if (fVar13 < fVar23) {
        fVar27 = -fVar27;
      }
      if (fVar12 < fVar23) {
        fVar11 = -fVar11;
      }
      local_c0 = fVar25 * local_98;
      local_b0 = fVar11 * local_98;
      local_9c = fVar24 * local_98;
      local_98 = fVar18 * local_98;
      local_a0 = -fVar27;
      local_bc = fVar24 * fVar25 * fVar27 - fVar18 * fVar11;
      local_a8 = fVar18 * fVar11 * fVar27 - fVar24 * fVar25;
      local_b8 = fVar24 * fVar11 + fVar18 * fVar25 * fVar27;
      local_ac = fVar18 * fVar25 + fVar24 * fVar11 * fVar27;
      local_b4 = 0.0;
      local_a4 = 0;
      local_94 = 0;
      fn_0016947c(&local_84,&local_c0);
      local_dc = local_dc + local_84;
      local_d8 = local_d8 + local_80;
      local_d4 = local_d4 + local_7c;
      fVar27 = local_7c;
    }
    fVar11 = (float)((ulonglong)uVar26 >> 0x20);
    bVar9 = local_dc == fVar23;
    if (bVar9) {
      fVar27 = local_d8;
    }
    if ((!bVar9 || (!bVar9 || fVar27 != fVar23)) || local_d4 != fVar23) {
      fVar27 = fVar11 / SQRT(local_dc * local_dc + local_d8 * local_d8 + local_d4 * local_d4);
      local_dc = local_dc * fVar27 * 0.5;
      local_d8 = local_d8 * fVar27 * 0.5;
      local_d4 = local_d4 * fVar27 * 0.5;
    }
    piVar1 = (int *)fn_006f72e0(DAT_008977e0);
    piVar1 = (int *)(**(code **)(*piVar1 + 0x78))();
    (**(code **)(*piVar1 + 0xc))(piVar1,&local_dc,&local_e8);
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
    if (iVar2 == 0) {
      pfVar6 = (float *)(**(code **)(*piVar1 + 0x34))(piVar1);
      local_bc = *pfVar6 + local_e8 * 15.0;
      local_b4 = pfVar6[2] + local_e0 * 15.0;
      local_b8 = pfVar6[1] + local_e4 * 15.0;
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (iVar2 == 0) {
        fVar27 = pfVar6[1];
        fVar11 = pfVar6[2];
        *(float *)(param_1 + 0x1c) = *pfVar6;
        *(float *)(param_1 + 0x20) = fVar27;
        *(float *)(param_1 + 0x24) = fVar11;
        *(float *)(param_1 + 0x28) = local_bc;
        *(float *)(param_1 + 0x2c) = local_b8;
        *(float *)(param_1 + 0x30) = local_b4;
        return;
      }
      pfVar7 = (float *)(**(code **)(*piVar1 + 0x30))(piVar1);
      fVar11 = fVar11 / SQRT(local_e8 * local_e8 + local_e4 * local_e4 + local_e0 * local_e0);
      local_e8 = local_e8 * fVar11;
      local_e4 = local_e4 * fVar11;
      local_e0 = local_e0 * fVar11;
      fVar27 = *pfVar7 + local_e8 * 5.0;
      fVar11 = pfVar7[1] + local_e4 * 5.0;
      fVar23 = pfVar7[2] + local_e0 * 5.0;
      fn_001d926c(param_1);
      *(float *)(param_1 + 0x28) = fVar27;
      *(float *)(param_1 + 0x2c) = fVar11;
      *(float *)(param_1 + 0x30) = fVar23;
      uVar3 = fn_00176d68(*(undefined4 *)(param_1 + 4));
      fn_005456f4(uVar3,param_1 + 0x28);
      fn_001d7128(param_1,pfVar6,0x1e);
      fn_001d870c(param_1,&local_bc,0x1e);
      iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
      if (iVar2 == 0) {
        iVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
        uVar3 = *(undefined4 *)(iVar2 + 0x68);
        fn_00176d68(*(undefined4 *)(param_1 + 4));
        iVar2 = fn_006dcd40();
        *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(param_1 + 0x154) = uVar3;
        fn_0016ddf0(param_1 + 0x60,0x1e,5,1);
        *(undefined1 *)(param_1 + 0x15f) = 1;
        *(float *)(param_1 + 0x164) = local_e8;
        *(float *)(param_1 + 0x168) = local_e4;
        *(float *)(param_1 + 0x16c) = local_e0;
        *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x10);
      }
    }
  }
  return;
}


