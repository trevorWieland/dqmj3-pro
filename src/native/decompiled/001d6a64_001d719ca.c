#include "001d6a64_001d719ca.h"



void fn_001d6c40(float *param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5,
                 float *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
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
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uVar1 = in_fpscr & 0xfffffff;
  fVar8 = ABS(param_1[1] * 40.743664);
  fVar7 = ABS(param_1[2] * 40.743664);
  for (fVar9 = ABS(*param_1 * 40.743664); 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  uVar10 = VectorFloatToUnsigned(fVar9,3);
  uVar11 = VectorFloatToUnsigned(fVar8,3);
  uVar6 = uVar10 & 0xff;
  uVar12 = VectorFloatToUnsigned(fVar7,3);
  uVar5 = uVar12 & 0xff;
  fVar13 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar10 = uVar11 & 0xff;
  fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar14 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar16 = (float)(&DAT_007d6f20)[uVar6 * 4] + (fVar9 - fVar13) * (float)(&DAT_007d6f28)[uVar6 * 4];
  fVar13 = (float)(&DAT_007d6f24)[uVar6 * 4] + (fVar9 - fVar13) * (float)(&DAT_007d6f2c)[uVar6 * 4];
  fVar9 = (float)(&DAT_007d6f20)[uVar10 * 4] + (fVar8 - fVar15) * (float)(&DAT_007d6f28)[uVar10 * 4]
  ;
  if (*param_1 * 40.743664 < 0.0) {
    fVar16 = -fVar16;
  }
  local_90 = (float)(&DAT_007d6f24)[uVar10 * 4] +
             (fVar8 - fVar15) * (float)(&DAT_007d6f2c)[uVar10 * 4];
  fVar8 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar7 - fVar14) * (float)(&DAT_007d6f28)[uVar5 * 4];
  fVar7 = (float)(&DAT_007d6f24)[uVar5 * 4] + (fVar7 - fVar14) * (float)(&DAT_007d6f2c)[uVar5 * 4];
  if (param_1[1] * 40.743664 < 0.0) {
    fVar9 = -fVar9;
  }
  if (param_1[2] * 40.743664 < 0.0) {
    fVar8 = -fVar8;
  }
  local_b8 = fVar7 * local_90;
  local_a8 = fVar8 * local_90;
  local_94 = fVar16 * local_90;
  local_90 = fVar13 * local_90;
  local_98 = -fVar9;
  local_b4 = fVar16 * fVar7 * fVar9 - fVar13 * fVar8;
  local_a0 = fVar13 * fVar8 * fVar9 - fVar16 * fVar7;
  local_b0 = fVar16 * fVar8 + fVar13 * fVar7 * fVar9;
  local_a4 = fVar13 * fVar7 + fVar16 * fVar8 * fVar9;
  local_ac = 0;
  local_9c = 0;
  local_8c = 0;
  fn_0016947c(&local_58,&local_b8,param_3);
  fVar9 = param_2[1];
  fVar8 = param_2[2];
  *param_5 = local_58 + *param_2;
  param_5[1] = fStack_54 + fVar9;
  param_5[2] = fStack_50 + fVar8;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar7 = param_4[1];
  fVar13 = param_4[2];
  *param_6 = *param_2 + *param_4;
  param_6[1] = fVar8 + fVar7;
  param_6[2] = fVar9 + fVar13;
  iVar2 = fn_006f7a5c(DAT_008977e0);
  iVar2 = fn_00176d68(*(undefined4 *)(iVar2 + 4));
  local_4c = *(undefined4 *)(iVar2 + 0x58);
  uStack_48 = *(undefined4 *)(iVar2 + 0x68);
  uStack_44 = *(undefined4 *)(iVar2 + 0x78);
  iVar2 = fn_006f7a5c(DAT_008977e0);
  fn_00176d68(*(undefined4 *)(iVar2 + 4));
  puVar3 = (undefined4 *)fn_006dcd40();
  local_40 = *puVar3;
  uStack_3c = puVar3[1];
  uStack_38 = puVar3[2];
  uVar4 = fn_006f7388(DAT_008977e0);
  fn_00257d38(uVar4,param_5,param_6,param_3,param_4,&local_4c,&local_40,param_7,param_8,param_9);
  return;
}



void fn_001d6b60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  undefined4 in_s4;
  undefined4 in_s5;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [12];
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x1c) = in_s0;
  *(undefined4 *)(param_1 + 0x20) = in_s1;
  *(undefined4 *)(param_1 + 0x24) = in_s2;
  *(undefined4 *)(param_1 + 0x28) = in_s3;
  *(undefined4 *)(param_1 + 0x2c) = in_s4;
  *(undefined4 *)(param_1 + 0x30) = in_s5;
  puVar3 = (undefined4 *)(param_1 + 4);
  iStack_c = param_1;
  local_24 = in_s0;
  uStack_20 = in_s1;
  uStack_1c = in_s2;
  fn_00176d68(*puVar3);
  uVar1 = fn_006dcd40();
  fn_001c4248(uVar1,local_18);
  iVar2 = fn_00176d68(*puVar3);
  local_40 = *(undefined4 *)(iVar2 + 0x58);
  uStack_3c = *(undefined4 *)(iVar2 + 0x68);
  uStack_38 = *(undefined4 *)(iVar2 + 0x78);
  fn_001c4248(&local_40,&local_24);
  uVar1 = fn_00176d68(*puVar3);
  fn_005456f4(uVar1,local_18);
  iVar2 = fn_00176d68(*puVar3);
  *(undefined4 *)(iVar2 + 0x58) = local_24;
  *(undefined4 *)(iVar2 + 0x68) = uStack_20;
  *(undefined4 *)(iVar2 + 0x78) = uStack_1c;
  *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x800;
  return;
}



void fn_001d6b00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  uVar3 = *(undefined4 *)(iVar1 + 0x68);
  fn_00176d68(*(undefined4 *)(param_1 + 4));
  iVar1 = fn_006dcd40();
  uVar2 = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0x154) = uVar3;
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  fn_0016ddf0(param_1 + 0x60,param_2,param_3,param_4);
  return;
}



void fn_001d6a64(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0xc) = 1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(int *)(param_1 + 0x5c) = param_1 + 0x50;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  fn_005456f4(uVar1,param_1 + 0x28);
  fn_001d926c(param_1,param_3);
  return;
}


