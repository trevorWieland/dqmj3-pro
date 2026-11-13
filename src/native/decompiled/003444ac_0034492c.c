#include "003444ac_0034492c.h"



void fn_0034492c(int *param_1)

{
  fn_00304e1c();
  fn_003444c4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00344964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}



void fn_003444c4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  
  uVar1 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  uVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
  iVar3 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) < (uint)((iVar3 >> 4) - (iVar3 >> 0x1f))) {
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    local_88 = 0.0;
    local_84 = 0.0;
    local_80 = 0.0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0.0;
    uVar1 = (iVar2 >> 4) - (iVar2 >> 0x1f);
    uVar4 = *(uint *)(param_1 + 0x3c);
    uVar7 = *(uint *)(param_1 + 0x38);
    uVar8 = uVar4 - uVar7;
    iVar2 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
    if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) < uVar1) {
      iVar2 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
      fn_0078da8c(param_1 + 0x38,uVar4,uVar1 - ((iVar2 >> 4) - (iVar2 >> 0x1f)),&local_88);
    }
    else {
      iVar2 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
      if ((uVar1 < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f))) &&
         (uVar1 = uVar7 + uVar1 * 0x1c, uVar7 != uVar4)) {
        uVar7 = uVar1;
        if (uVar4 < uVar1) {
          do {
            uVar7 = uVar7 + 0x1c;
          } while (uVar7 != uVar4);
        }
        iVar2 = (int)((longlong)(int)(uVar4 - uVar1) * -0x6db6db6d +
                      ((ulonglong)(uVar4 - uVar1) << 0x20) >> 0x20);
        *(uint *)(param_1 + 0x3c) = uVar4 + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * -0x1c;
      }
    }
  }
  uVar1 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (iVar2 >> 4 != iVar2 >> 0x1f) {
    uVar22 = 0x4222f983;
    fVar21 = 0.0;
    fVar20 = 65536.0;
    uVar1 = 0;
    do {
      pfVar5 = (float *)(*(int *)(param_1 + 8) + uVar1 * 0x1c);
      local_88 = *pfVar5;
      local_84 = pfVar5[1];
      local_80 = pfVar5[2];
      puVar6 = (undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0x1c + 0xc);
      local_7c = *puVar6;
      local_78 = puVar6[1];
      local_74 = puVar6[2];
      fVar15 = (float)uVar22;
      fVar9 = *(float *)(param_1 + 0x20) * fVar15;
      fVar11 = *(float *)(param_1 + 0x24) * fVar15;
      fVar14 = *(float *)(param_1 + 0x28) * fVar15;
      in_fpscr = in_fpscr & 0xfffffff;
      fVar12 = ABS(fVar11);
      fVar10 = ABS(fVar14);
      for (fVar13 = ABS(fVar9); 0x477fffff < (int)fVar13; fVar13 = fVar13 - fVar20) {
      }
      for (; 0x477fffff < (int)fVar12; fVar12 = fVar12 - fVar20) {
      }
      for (; 0x477fffff < (int)fVar10; fVar10 = fVar10 - fVar20) {
      }
      uVar4 = VectorFloatToUnsigned(fVar13,3);
      uVar16 = VectorFloatToUnsigned(fVar12,3);
      uVar8 = VectorFloatToUnsigned(fVar10,3);
      uVar7 = uVar4 & 0xff;
      fVar24 = (float)VectorUnsignedToFloat(uVar4 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      uVar4 = uVar16 & 0xff;
      fVar23 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      uVar22 = CONCAT44(fVar23,fVar15);
      fVar19 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      uVar8 = uVar8 & 0xff;
      fVar17 = (float)(&DAT_007d6f20)[uVar7 * 4] +
               (fVar13 - fVar24) * (float)(&DAT_007d6f28)[uVar7 * 4];
      fVar15 = (float)(&DAT_007d6f20)[uVar4 * 4] +
               (fVar12 - fVar23) * (float)(&DAT_007d6f28)[uVar4 * 4];
      fVar18 = (float)(&DAT_007d6f20)[uVar8 * 4] +
               (fVar10 - fVar19) * (float)(&DAT_007d6f28)[uVar8 * 4];
      fVar10 = (float)(&DAT_007d6f24)[uVar8 * 4] +
               (fVar10 - fVar19) * (float)(&DAT_007d6f2c)[uVar8 * 4];
      fVar13 = (float)(&DAT_007d6f24)[uVar7 * 4] +
               (fVar13 - fVar24) * (float)(&DAT_007d6f2c)[uVar7 * 4];
      if (fVar9 < fVar21) {
        fVar17 = -fVar17;
      }
      if (fVar11 < fVar21) {
        fVar15 = -fVar15;
      }
      if (fVar14 < fVar21) {
        fVar18 = -fVar18;
      }
      local_48 = (float)(&DAT_007d6f24)[uVar4 * 4] +
                 (fVar12 - fVar23) * (float)(&DAT_007d6f2c)[uVar4 * 4];
      local_70 = fVar10 * local_48;
      local_60 = fVar18 * local_48;
      fStack_4c = fVar17 * local_48;
      local_48 = fVar13 * local_48;
      local_50 = -fVar15;
      local_68 = fVar17 * fVar18 + fVar13 * fVar10 * fVar15;
      local_5c = fVar13 * fVar10 + fVar17 * fVar18 * fVar15;
      local_6c = fVar17 * fVar10 * fVar15 - fVar13 * fVar18;
      local_58 = fVar13 * fVar18 * fVar15 - fVar17 * fVar10;
      local_64 = 0;
      local_54 = 0;
      local_44 = 0;
      fn_0016947c(&local_88,&local_70);
      fn_0016947c(&local_7c,&local_70);
      fVar12 = *(float *)(param_1 + 0x18);
      fVar13 = *(float *)(param_1 + 0x1c);
      uVar4 = uVar1 + 1;
      pfVar5 = (float *)(*(int *)(param_1 + 0x38) + uVar1 * 0x1c);
      *pfVar5 = *(float *)(param_1 + 0x14) + local_88;
      pfVar5[1] = fVar12 + local_84;
      pfVar5[2] = fVar13 + local_80;
      iVar2 = *(int *)(param_1 + 0x38) + uVar1 * 0x1c;
      *(undefined4 *)(iVar2 + 0xc) = local_7c;
      *(undefined4 *)(iVar2 + 0x10) = local_78;
      *(undefined4 *)(iVar2 + 0x14) = local_74;
      uVar1 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38);
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
      uVar1 = uVar4;
    } while (uVar4 < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f)));
  }
  return;
}



void fn_003444ac(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  fn_00304f6c();
  uVar1 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  uVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
  iVar3 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) < (uint)((iVar3 >> 4) - (iVar3 >> 0x1f))) {
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    fStack_88 = 0.0;
    fStack_84 = 0.0;
    fStack_80 = 0.0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    fStack_70 = 0.0;
    uVar1 = (iVar2 >> 4) - (iVar2 >> 0x1f);
    uVar4 = *(uint *)(param_1 + 0x3c);
    uVar7 = *(uint *)(param_1 + 0x38);
    uVar8 = uVar4 - uVar7;
    iVar2 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
    if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) < uVar1) {
      iVar2 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
      fn_0078da8c(param_1 + 0x38,uVar4,uVar1 - ((iVar2 >> 4) - (iVar2 >> 0x1f)),&fStack_88);
    }
    else {
      iVar2 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
      if ((uVar1 < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f))) &&
         (uVar1 = uVar7 + uVar1 * 0x1c, uVar7 != uVar4)) {
        uVar7 = uVar1;
        if (uVar4 < uVar1) {
          do {
            uVar7 = uVar7 + 0x1c;
          } while (uVar7 != uVar4);
        }
        iVar2 = (int)((longlong)(int)(uVar4 - uVar1) * -0x6db6db6d +
                      ((ulonglong)(uVar4 - uVar1) << 0x20) >> 0x20);
        *(uint *)(param_1 + 0x3c) = uVar4 + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * -0x1c;
      }
    }
  }
  uVar1 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (iVar2 >> 4 != iVar2 >> 0x1f) {
    uVar22 = 0x4222f983;
    fVar21 = 0.0;
    fVar20 = 65536.0;
    uVar1 = 0;
    do {
      pfVar5 = (float *)(*(int *)(param_1 + 8) + uVar1 * 0x1c);
      fStack_88 = *pfVar5;
      fStack_84 = pfVar5[1];
      fStack_80 = pfVar5[2];
      puVar6 = (undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0x1c + 0xc);
      uStack_7c = *puVar6;
      uStack_78 = puVar6[1];
      uStack_74 = puVar6[2];
      fVar15 = (float)uVar22;
      fVar9 = *(float *)(param_1 + 0x20) * fVar15;
      fVar11 = *(float *)(param_1 + 0x24) * fVar15;
      fVar14 = *(float *)(param_1 + 0x28) * fVar15;
      in_fpscr = in_fpscr & 0xfffffff;
      fVar12 = ABS(fVar11);
      fVar10 = ABS(fVar14);
      for (fVar13 = ABS(fVar9); 0x477fffff < (int)fVar13; fVar13 = fVar13 - fVar20) {
      }
      for (; 0x477fffff < (int)fVar12; fVar12 = fVar12 - fVar20) {
      }
      for (; 0x477fffff < (int)fVar10; fVar10 = fVar10 - fVar20) {
      }
      uVar4 = VectorFloatToUnsigned(fVar13,3);
      uVar16 = VectorFloatToUnsigned(fVar12,3);
      uVar8 = VectorFloatToUnsigned(fVar10,3);
      uVar7 = uVar4 & 0xff;
      fVar24 = (float)VectorUnsignedToFloat(uVar4 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      uVar4 = uVar16 & 0xff;
      fVar23 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      uVar22 = CONCAT44(fVar23,fVar15);
      fVar19 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      uVar8 = uVar8 & 0xff;
      fVar17 = (float)(&DAT_007d6f20)[uVar7 * 4] +
               (fVar13 - fVar24) * (float)(&DAT_007d6f28)[uVar7 * 4];
      fVar15 = (float)(&DAT_007d6f20)[uVar4 * 4] +
               (fVar12 - fVar23) * (float)(&DAT_007d6f28)[uVar4 * 4];
      fVar18 = (float)(&DAT_007d6f20)[uVar8 * 4] +
               (fVar10 - fVar19) * (float)(&DAT_007d6f28)[uVar8 * 4];
      fVar10 = (float)(&DAT_007d6f24)[uVar8 * 4] +
               (fVar10 - fVar19) * (float)(&DAT_007d6f2c)[uVar8 * 4];
      fVar13 = (float)(&DAT_007d6f24)[uVar7 * 4] +
               (fVar13 - fVar24) * (float)(&DAT_007d6f2c)[uVar7 * 4];
      if (fVar9 < fVar21) {
        fVar17 = -fVar17;
      }
      if (fVar11 < fVar21) {
        fVar15 = -fVar15;
      }
      if (fVar14 < fVar21) {
        fVar18 = -fVar18;
      }
      fStack_48 = (float)(&DAT_007d6f24)[uVar4 * 4] +
                  (fVar12 - fVar23) * (float)(&DAT_007d6f2c)[uVar4 * 4];
      fStack_70 = fVar10 * fStack_48;
      fStack_60 = fVar18 * fStack_48;
      fStack_4c = fVar17 * fStack_48;
      fStack_48 = fVar13 * fStack_48;
      fStack_50 = -fVar15;
      fStack_68 = fVar17 * fVar18 + fVar13 * fVar10 * fVar15;
      fStack_5c = fVar13 * fVar10 + fVar17 * fVar18 * fVar15;
      fStack_6c = fVar17 * fVar10 * fVar15 - fVar13 * fVar18;
      fStack_58 = fVar13 * fVar18 * fVar15 - fVar17 * fVar10;
      uStack_64 = 0;
      uStack_54 = 0;
      uStack_44 = 0;
      fn_0016947c(&fStack_88,&fStack_70);
      fn_0016947c(&uStack_7c,&fStack_70);
      fVar12 = *(float *)(param_1 + 0x18);
      fVar13 = *(float *)(param_1 + 0x1c);
      uVar4 = uVar1 + 1;
      pfVar5 = (float *)(*(int *)(param_1 + 0x38) + uVar1 * 0x1c);
      *pfVar5 = *(float *)(param_1 + 0x14) + fStack_88;
      pfVar5[1] = fVar12 + fStack_84;
      pfVar5[2] = fVar13 + fStack_80;
      iVar2 = *(int *)(param_1 + 0x38) + uVar1 * 0x1c;
      *(undefined4 *)(iVar2 + 0xc) = uStack_7c;
      *(undefined4 *)(iVar2 + 0x10) = uStack_78;
      *(undefined4 *)(iVar2 + 0x14) = uStack_74;
      uVar1 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38);
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
      uVar1 = uVar4;
    } while (uVar4 < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f)));
  }
  return;
}


