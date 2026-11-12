#include "005de83c_005df130ba.h"



bool fn_005defbc(void)

{
  float in_s0;
  float fVar1;
  
  fn_006f7a48(DAT_008977e0);
  fn_006a7cb0();
  fVar1 = in_s0;
  fn_006f7a48(DAT_008977e0);
  fn_006a7cbc();
  return (fVar1 != 0.0 || (fVar1 != 0.0 || in_s0 != 0.0)) &&
         (int)(ABS(fVar1) + ABS(in_s0)) < 0x3f4ccccd;
}



/* WARNING: Removing unreachable block (ram,0x005dee70) */
/* WARNING: Removing unreachable block (ram,0x005decf0) */
/* WARNING: Removing unreachable block (ram,0x005dee8c) */
/* WARNING: Removing unreachable block (ram,0x005dec08) */
/* WARNING: Removing unreachable block (ram,0x005dedbc) */

void fn_005deb64(int *param_1,undefined4 *param_2,float *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
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
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  undefined4 local_2c;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = fn_0017fde4();
  in_fpscr = in_fpscr & 0xfffffff;
  fVar7 = ABS(param_3[2] * 40.743664);
  for (fVar9 = ABS(*param_3 * 40.743664); 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  uVar10 = VectorFloatToUnsigned(fVar9,3);
  uVar11 = VectorFloatToUnsigned(0,3);
  uVar12 = VectorFloatToUnsigned(fVar7,3);
  uVar3 = uVar10 & 0xff;
  uVar6 = uVar12 & 0xff;
  fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar10 = uVar11 & 0xff;
  fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar13 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = (float)(&DAT_007d6f20)[uVar10 * 4] + (0.0 - fVar15) * (float)(&DAT_007d6f28)[uVar10 * 4];
  fVar8 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar9 - fVar14) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar14 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar9 - fVar14) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  local_60 = (float)(&DAT_007d6f24)[uVar10 * 4] +
             (0.0 - fVar15) * (float)(&DAT_007d6f2c)[uVar10 * 4];
  fVar15 = (float)(&DAT_007d6f20)[uVar6 * 4] + (fVar7 - fVar13) * (float)(&DAT_007d6f28)[uVar6 * 4];
  fVar9 = (float)(&DAT_007d6f24)[uVar6 * 4] + (fVar7 - fVar13) * (float)(&DAT_007d6f2c)[uVar6 * 4];
  if (*param_3 * 40.743664 < 0.0) {
    fVar8 = -fVar8;
  }
  if (param_3[2] * 40.743664 < 0.0) {
    fVar15 = -fVar15;
  }
  local_88 = fVar9 * local_60;
  local_78 = fVar15 * local_60;
  local_64 = fVar8 * local_60;
  local_60 = fVar14 * local_60;
  local_68 = -fVar16;
  local_84 = fVar8 * fVar9 * fVar16 - fVar14 * fVar15;
  local_70 = fVar14 * fVar15 * fVar16 - fVar8 * fVar9;
  local_80 = fVar8 * fVar15 + fVar14 * fVar9 * fVar16;
  local_74 = fVar14 * fVar9 + fVar8 * fVar15 * fVar16;
  local_7c = 0;
  local_6c = 0;
  local_5c = 0;
  for (fVar9 = ABS(param_3[1] * 40.743664); 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  uVar10 = VectorFloatToUnsigned(0,3);
  uVar11 = VectorFloatToUnsigned(fVar9,3);
  uVar12 = VectorFloatToUnsigned(0,3);
  uVar6 = uVar10 & 0xff;
  uVar3 = uVar12 & 0xff;
  fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar10 = uVar11 & 0xff;
  fVar8 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar13 = (float)(&DAT_007d6f20)[uVar6 * 4] + (0.0 - fVar14) * (float)(&DAT_007d6f28)[uVar6 * 4];
  fVar14 = (float)(&DAT_007d6f24)[uVar6 * 4] + (0.0 - fVar14) * (float)(&DAT_007d6f2c)[uVar6 * 4];
  local_34 = (float)(&DAT_007d6f24)[uVar10 * 4] +
             (fVar9 - fVar8) * (float)(&DAT_007d6f2c)[uVar10 * 4];
  fVar9 = (float)(&DAT_007d6f20)[uVar10 * 4] + (fVar9 - fVar8) * (float)(&DAT_007d6f28)[uVar10 * 4];
  fVar8 = (float)(&DAT_007d6f20)[uVar3 * 4] + (0.0 - fVar7) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar7 = (float)(&DAT_007d6f24)[uVar3 * 4] + (0.0 - fVar7) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  if (param_3[1] * 40.743664 < 0.0) {
    fVar9 = -fVar9;
  }
  local_58 = fVar7 * local_34;
  local_48 = fVar8 * local_34;
  fStack_30 = fVar14 * local_34;
  local_34 = fVar13 * local_34;
  local_38 = -fVar9;
  local_50 = fVar13 * fVar8 + fVar14 * fVar7 * fVar9;
  local_44 = fVar14 * fVar7 + fVar13 * fVar8 * fVar9;
  local_54 = fVar13 * fVar7 * fVar9 - fVar14 * fVar8;
  local_40 = fVar14 * fVar8 * fVar9 - fVar13 * fVar7;
  local_4c = 0;
  local_3c = 0;
  local_2c = 0;
  fn_001ad06c(&local_b8,&local_58,&local_88);
  *(undefined4 *)(iVar1 + 0x4c) = local_b8;
  *(undefined4 *)(iVar1 + 0x5c) = local_a8;
  *(undefined4 *)(iVar1 + 0x6c) = local_98;
  *(undefined4 *)(iVar1 + 0x50) = local_b4;
  *(undefined4 *)(iVar1 + 0x60) = local_a4;
  *(undefined4 *)(iVar1 + 0x70) = local_94;
  *(undefined4 *)(iVar1 + 0x54) = local_b0;
  *(undefined4 *)(iVar1 + 100) = local_a0;
  *(undefined4 *)(iVar1 + 0x74) = local_90;
  uVar10 = *(uint *)(iVar1 + 0x88);
  *(uint *)(iVar1 + 0x88) = uVar10 | 0x800;
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  *(uint *)(iVar1 + 0x88) = uVar10 | 0x800;
  *(undefined4 *)(iVar1 + 0x58) = uVar2;
  *(undefined4 *)(iVar1 + 0x68) = uVar4;
  *(undefined4 *)(iVar1 + 0x78) = uVar5;
  uVar2 = param_4[1];
  uVar4 = param_4[2];
  *(undefined4 *)(iVar1 + 0x7c) = *param_4;
  *(undefined4 *)(iVar1 + 0x80) = uVar2;
  *(undefined4 *)(iVar1 + 0x84) = uVar4;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}


