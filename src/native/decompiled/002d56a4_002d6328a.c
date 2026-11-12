#include "002d56a4_002d6328a.h"



void fn_002d5c68(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_18 [4];
  char local_14 [4];
  
  fn_00178b0c();
  fn_00178b7c();
  fn_006a7b6c(DAT_008977e4);
  fn_001c2b7c();
  uVar1 = fn_0017484c(DAT_008977e4);
  local_14[0] = '\x10';
  do {
    piVar2 = (int *)fn_00182e2c(uVar1,local_14);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(piVar2,0);
    }
    local_14[0] = local_14[0] + '\x01';
  } while (local_14[0] < '\x14');
  local_18[0] = 0x20;
  piVar2 = (int *)fn_00175dcc(uVar1,local_18);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2,0);
  }
  local_18[0] = 0x22;
  piVar2 = (int *)fn_00175d88(uVar1,local_18);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2,0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = fn_00174864(DAT_008977e4);
  uVar1 = *(undefined4 *)(iVar3 + 0x3c);
  uVar4 = *(undefined4 *)(iVar3 + 0x40);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar3 + 0x38);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar1 = *(undefined4 *)(iVar3 + 0x48);
  uVar4 = *(undefined4 *)(iVar3 + 0x4c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar3 + 0x44);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  return;
}



/* WARNING: Removing unreachable block (ram,0x002d5a8c) */
/* WARNING: Removing unreachable block (ram,0x002d5864) */
/* WARNING: Removing unreachable block (ram,0x002d587c) */
/* WARNING: Removing unreachable block (ram,0x002d5aa0) */

void fn_002d56a4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_88;
  float fStack_84;
  float fStack_80;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  
  uVar2 = fn_00174864(DAT_008977e4);
  fStack_80 = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24);
  local_88 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x1c);
  fStack_84 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x20);
  fn_00174858(DAT_008977e4);
  iVar3 = fn_002d4040();
  fVar22 = 40.743664;
  fVar20 = 6.2831855;
  fVar18 = 65536.0;
  fVar21 = 0.0;
  fVar19 = 3.1415927;
  if (iVar3 == 0) {
    fVar9 = *(float *)(param_1 + 0xc) * 40.743664;
    fn_00525abc();
    fVar22 = fVar9 * DAT_00890290 * fVar22;
    in_fpscr = in_fpscr & 0xfffffff;
    for (fVar9 = ABS(fVar22); fVar16 = fVar21, 0x477fffff < (int)fVar9; fVar9 = fVar9 - fVar18) {
    }
    for (; 0x477fffff < (int)fVar16; fVar16 = fVar16 - fVar18) {
    }
    uVar10 = VectorFloatToUnsigned(fVar21,3);
    uVar8 = VectorFloatToUnsigned(fVar9,3);
    uVar11 = VectorFloatToUnsigned(fVar16,3);
    uVar4 = uVar8 & 0xff;
    fVar15 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar8 = uVar10 & 0xff;
    fVar13 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar10 = uVar11 & 0xff;
    fVar18 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    local_50 = (float)(&DAT_007d6f24)[uVar4 * 4] +
               (fVar9 - fVar15) * (float)(&DAT_007d6f2c)[uVar4 * 4];
    fVar14 = (float)(&DAT_007d6f20)[uVar8 * 4] +
             (fVar21 - fVar13) * (float)(&DAT_007d6f28)[uVar8 * 4];
    fVar9 = (float)(&DAT_007d6f20)[uVar4 * 4] + (fVar9 - fVar15) * (float)(&DAT_007d6f28)[uVar4 * 4]
    ;
    fVar15 = (float)(&DAT_007d6f24)[uVar8 * 4] +
             (fVar21 - fVar13) * (float)(&DAT_007d6f2c)[uVar8 * 4];
    fVar13 = (float)(&DAT_007d6f20)[uVar10 * 4] +
             (fVar16 - fVar18) * (float)(&DAT_007d6f28)[uVar10 * 4];
    fVar18 = (float)(&DAT_007d6f24)[uVar10 * 4] +
             (fVar16 - fVar18) * (float)(&DAT_007d6f2c)[uVar10 * 4];
    if (fVar22 < fVar21) {
      fVar9 = -fVar9;
    }
    local_54 = fVar14 * local_50;
    local_78 = fVar18 * local_50;
    local_68 = fVar13 * local_50;
    local_50 = fVar15 * local_50;
    local_58 = -fVar9;
    local_70 = fVar14 * fVar13 + fVar15 * fVar18 * fVar9;
    local_64 = fVar15 * fVar18 + fVar14 * fVar13 * fVar9;
    local_74 = fVar14 * fVar18 * fVar9 - fVar15 * fVar13;
    local_60 = fVar15 * fVar13 * fVar9 - fVar14 * fVar18;
    local_6c = 0;
    local_5c = 0;
    local_4c = 0;
    fn_0016947c(&local_88,&local_78);
    local_48 = *(float *)(param_1 + 0x1c) + local_88;
    fStack_40 = *(float *)(param_1 + 0x24) + fStack_80;
    local_44 = *(float *)(param_1 + 0x20) + fStack_84;
    fn_00204158(uVar2);
    uVar2 = fn_006a7b6c(DAT_008977e4);
    fVar21 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar21 = *(float *)(param_1 + 0xc) + DAT_0089028c * fVar19 * fVar21;
    *(float *)(param_1 + 0xc) = fVar21;
    if (0x40c90fdb < (int)fVar21) {
      *(float *)(param_1 + 0xc) = fVar21 - fVar20;
    }
    return;
  }
  fVar9 = *(float *)(param_1 + 0xc);
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar9 < 0.0) << 0x1f | (uint)(fVar9 == 0.0) << 0x1e;
  uVar8 = uVar4 | (uint)NAN(fVar9) << 0x1c;
  bVar1 = (byte)(uVar4 >> 0x18);
  bVar5 = (bool)(bVar1 >> 7);
  bVar6 = (bool)(bVar1 >> 6 & 1);
  bVar7 = (bool)((byte)(uVar8 >> 0x1c) & 1);
  if (bVar6 || bVar5 != bVar7) {
    bVar7 = SBORROW4((int)fVar9,0x40490fdb);
    bVar5 = (int)fVar9 + -0x40490fdb < 0;
    bVar6 = fVar9 == 3.1415927;
  }
  if (bVar6 || bVar5 != bVar7) {
    bVar7 = SBORROW4((int)fVar9,0x40c90fdb);
    bVar5 = (int)fVar9 + -0x40c90fdb < 0;
    bVar6 = fVar9 == 6.2831855;
  }
  if (bVar6 || bVar5 != bVar7) {
    return;
  }
  fVar9 = fVar9 * 40.743664;
  fn_00525abc();
  fVar22 = fVar9 * DAT_00890290 * fVar22;
  uVar8 = uVar8 & 0xfffffff;
  for (fVar9 = ABS(fVar22); fVar16 = fVar21, 0x477fffff < (int)fVar9; fVar9 = fVar9 - fVar18) {
  }
  for (; 0x477fffff < (int)fVar16; fVar16 = fVar16 - fVar18) {
  }
  uVar10 = VectorFloatToUnsigned(fVar21,3);
  uVar11 = VectorFloatToUnsigned(fVar9,3);
  uVar12 = VectorFloatToUnsigned(fVar16,3);
  uVar4 = uVar10 & 0xff;
  fVar18 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar8 >> 0x16) & 3);
  uVar10 = uVar11 & 0xff;
  fVar17 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar8 >> 0x16) & 3);
  uVar11 = uVar12 & 0xff;
  fVar15 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar8 >> 0x16) & 3);
  fVar13 = (float)(&DAT_007d6f20)[uVar4 * 4] + (fVar21 - fVar18) * (float)(&DAT_007d6f28)[uVar4 * 4]
  ;
  fVar14 = (float)(&DAT_007d6f24)[uVar4 * 4] + (fVar21 - fVar18) * (float)(&DAT_007d6f2c)[uVar4 * 4]
  ;
  local_50 = (float)(&DAT_007d6f24)[uVar10 * 4] +
             (fVar9 - fVar17) * (float)(&DAT_007d6f2c)[uVar10 * 4];
  fVar18 = (float)(&DAT_007d6f20)[uVar10 * 4] +
           (fVar9 - fVar17) * (float)(&DAT_007d6f28)[uVar10 * 4];
  fVar9 = (float)(&DAT_007d6f20)[uVar11 * 4] +
          (fVar16 - fVar15) * (float)(&DAT_007d6f28)[uVar11 * 4];
  fVar16 = (float)(&DAT_007d6f24)[uVar11 * 4] +
           (fVar16 - fVar15) * (float)(&DAT_007d6f2c)[uVar11 * 4];
  if (fVar22 < fVar21) {
    fVar18 = -fVar18;
  }
  local_78 = fVar16 * local_50;
  local_68 = fVar9 * local_50;
  local_54 = fVar13 * local_50;
  local_50 = fVar14 * local_50;
  local_58 = -fVar18;
  local_74 = fVar13 * fVar16 * fVar18 - fVar14 * fVar9;
  local_60 = fVar14 * fVar9 * fVar18 - fVar13 * fVar16;
  local_70 = fVar13 * fVar9 + fVar14 * fVar16 * fVar18;
  local_64 = fVar14 * fVar16 + fVar13 * fVar9 * fVar18;
  local_6c = 0;
  local_5c = 0;
  local_4c = 0;
  fn_0016947c(&local_88,&local_78);
  local_48 = *(float *)(param_1 + 0x1c) + local_88;
  local_44 = *(float *)(param_1 + 0x20) + fStack_84;
  fStack_40 = *(float *)(param_1 + 0x24) + fStack_80;
  fn_00204158(uVar2,&local_48);
  fVar22 = *(float *)(param_1 + 0xc);
  if ((int)fVar22 < 0x3fc90fdb) {
    fVar22 = fVar22 - DAT_0089028c * 2.0 * fVar19;
    *(float *)(param_1 + 0xc) = fVar22;
    if (fVar21 < fVar22) {
      fVar21 = fVar22;
    }
    *(float *)(param_1 + 0xc) = fVar21;
    return;
  }
  if ((int)fVar22 < 0x40490fdb) {
    fVar22 = fVar22 + DAT_0089028c * 2.0 * fVar19;
    *(float *)(param_1 + 0xc) = fVar22;
    if (0x40490fdb < (int)fVar22) goto LAB_002d5c1c;
  }
  else {
    if (0x4096cbe3 < (int)fVar22) {
      if (0x40c90fda < (int)fVar22) {
        return;
      }
      fVar22 = fVar22 + DAT_0089028c * 2.0 * fVar19;
      *(float *)(param_1 + 0xc) = fVar22;
      if ((int)fVar22 < 0x40c90fdc) {
        fVar20 = fVar22;
      }
      *(float *)(param_1 + 0xc) = fVar20;
      return;
    }
    fVar22 = fVar22 - DAT_0089028c * 2.0 * fVar19;
    *(float *)(param_1 + 0xc) = fVar22;
    if ((int)fVar22 < 0x40490fdc) goto LAB_002d5c1c;
  }
  fVar19 = fVar22;
LAB_002d5c1c:
  *(float *)(param_1 + 0xc) = fVar19;
  return;
}


