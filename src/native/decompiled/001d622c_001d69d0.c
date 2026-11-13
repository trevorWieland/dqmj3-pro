#include "001d622c_001d69d0.h"



void fn_001d69d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0xc) = 0;
  fn_001d68cc(param_1,0);
  iVar1 = fn_006f7a84(DAT_008977e0);
  uVar2 = *(undefined4 *)(iVar1 + 0x2c);
  fn_006a8fac(param_1);
  fn_00764608();
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = 0;
  iVar1 = fn_006f7a84(DAT_008977e0);
  uVar2 = *(undefined4 *)(iVar1 + 0x30);
  fn_005df8f8();
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x15e) = 0;
  return;
}



void fn_001d6988(int param_1,undefined4 param_2)

{
  undefined4 in_s0;
  
  fn_006a8fac();
  fn_00764608();
  *(undefined4 *)(param_1 + 0xa8) = in_s0;
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return;
}



void fn_001d68cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*(char *)(param_1 + 0xd) == '\x06') && (*(int *)(param_1 + 0x17c) != 0)) {
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  *(char *)(param_1 + 0xd) = (char)param_2;
  if (param_2 == 6) {
    iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = fn_006887f0();
    }
    if (*(int *)(param_1 + 0x17c) != iVar2) {
      fn_002feef8(*(int *)(param_1 + 0x17c));
      *(int *)(param_1 + 0x17c) = iVar2;
    }
    uVar3 = fn_003412c0();
    uVar5 = *(undefined4 *)(param_1 + 0x17c);
    uVar4 = fn_006f751c(DAT_008977e0);
    fn_006c18f0(uVar4,uVar5,uVar3,0,param_1 + 0x1c,0);
  }
  return;
}



void fn_001d6828(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_14 = *(undefined4 *)(param_1 + 0x10);
  uStack_10 = *(undefined4 *)(param_1 + 0x14);
  uStack_c = *(undefined4 *)(param_1 + 0x18);
  fn_001d5a74(param_1,&local_14,&local_20,&local_2c,0);
  uVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  fn_005456f4(uVar1,&local_2c);
  iVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(iVar2 + 0x58) = local_20;
  *(undefined4 *)(iVar2 + 0x68) = uStack_1c;
  *(undefined4 *)(iVar2 + 0x78) = uStack_18;
  *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x800;
  fn_001d926c(param_1,&local_20);
  *(undefined4 *)(param_1 + 0x28) = local_2c;
  *(undefined4 *)(param_1 + 0x2c) = uStack_28;
  *(undefined4 *)(param_1 + 0x30) = uStack_24;
  uVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  fn_005456f4(uVar1,param_1 + 0x28);
  return;
}



void fn_001d674c(int param_1)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  
  if (0 < *(int *)(param_1 + 0xa4)) {
    fVar1 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x14);
    fn_005df8f8();
    fVar2 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xa4),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar1 = *(float *)(param_1 + 0x14) + fVar1 / fVar2;
    fn_005df8f8();
    *(float *)(param_1 + 0x14) = fVar1;
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + -1;
  }
  if (0 < *(int *)(param_1 + 0xac)) {
    fn_006a8fac(param_1);
    fVar1 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x10);
    fn_00764608();
    fVar2 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xac),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar1 = *(float *)(param_1 + 0x10) + fVar1 / fVar2;
    fn_006a8fac(param_1);
    fn_00764608();
    *(float *)(param_1 + 0x10) = fVar1;
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
  }
  return;
}



void fn_001d6660(int param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = 0.0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = fVar5;
    DAT_008f9e30 = fVar5;
    DAT_008f9e34 = fVar5;
  }
  fVar8 = DAT_008f9e2c;
  fVar6 = DAT_008f9e30;
  fVar9 = DAT_008f9e34;
  iVar3 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  fVar7 = *param_2 - *(float *)(iVar3 + 0x58);
  fVar4 = param_2[1] - *(float *)(iVar3 + 0x68);
  bVar1 = fVar7 == fVar5;
  fVar2 = *(float *)(iVar3 + 0x78);
  if (bVar1) {
    fVar2 = fVar4;
  }
  if ((!bVar1 || (!bVar1 || fVar2 != fVar5)) || param_2[2] - *(float *)(iVar3 + 0x78) != fVar5) {
    fVar4 = -fVar4;
    fn_00525bd0();
    fVar6 = 0.024543693;
    fVar8 = fVar4 * 0.024543693;
    fn_00525bd0();
    fVar6 = fVar7 * fVar6;
  }
  *(float *)(param_1 + 0x10) = fVar8;
  *(float *)(param_1 + 0x14) = fVar6;
  *(float *)(param_1 + 0x18) = fVar9;
  return;
}



void fn_001d6600(int param_1)

{
  undefined4 uVar1;
  undefined1 local_14 [12];
  
  uVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  fn_006dcca4(uVar1,0,local_14,0,0);
  fn_00176d68(*(undefined4 *)(param_1 + 4));
  fn_00545310();
  return;
}



undefined4 fn_001d6560(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005f40b4(iVar1,1);
  }
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 4) = piVar2;
  }
  fn_0024146c(*(undefined4 *)(DAT_008977e0 + 8),*(undefined4 *)(param_1 + 4));
  fn_00240ae0(*(undefined4 *)(DAT_008977e0 + 8),*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xf4) = 0x3f333333;
  *(undefined4 *)(param_1 + 0xf8) = 0x42400000;
  *(undefined4 *)(param_1 + 0xfc) = 0x3c83126f;
  return 1;
}



void fn_001d6534(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



void fn_001d622c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_68;
  float local_64;
  float local_60;
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
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  fn_0033cd5c(param_1 + 0x60);
  iVar1 = fn_006c163c(param_1 + 0x60);
  if (iVar1 == 0) {
    fVar5 = *(float *)(param_1 + 0x160) + *(float *)(param_1 + 0x74);
    fVar16 = *(float *)(param_1 + 0x14);
    fVar17 = *(float *)(param_1 + 0x18);
    fn_005df8f8();
    local_68 = *(float *)(param_1 + 0x164);
    local_64 = *(float *)(param_1 + 0x168);
    local_60 = *(float *)(param_1 + 0x16c);
    in_fpscr = in_fpscr & 0xfffffff;
    fVar7 = ABS(fVar16 * 40.743664);
    fVar6 = ABS(fVar17 * 40.743664);
    for (fVar8 = ABS(fVar5 * 40.743664); 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
    }
    uVar9 = VectorFloatToUnsigned(fVar8,3);
    uVar10 = VectorFloatToUnsigned(fVar7,3);
    uVar4 = uVar9 & 0xff;
    uVar11 = VectorFloatToUnsigned(fVar6,3);
    uVar2 = uVar10 & 0xff;
    fVar13 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = uVar11 & 0xff;
    fVar14 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (float)(&DAT_007d6f20)[uVar4 * 4] +
             (fVar8 - fVar13) * (float)(&DAT_007d6f28)[uVar4 * 4];
    fVar13 = (float)(&DAT_007d6f24)[uVar4 * 4] +
             (fVar8 - fVar13) * (float)(&DAT_007d6f2c)[uVar4 * 4];
    local_30 = (float)(&DAT_007d6f24)[uVar2 * 4] +
               (fVar7 - fVar15) * (float)(&DAT_007d6f2c)[uVar2 * 4];
    fVar8 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar7 - fVar15) * (float)(&DAT_007d6f28)[uVar2 * 4]
    ;
    if (fVar5 * 40.743664 < 0.0) {
      fVar12 = -fVar12;
    }
    fVar7 = (float)(&DAT_007d6f20)[uVar9 * 4] + (fVar6 - fVar14) * (float)(&DAT_007d6f28)[uVar9 * 4]
    ;
    fVar6 = (float)(&DAT_007d6f24)[uVar9 * 4] + (fVar6 - fVar14) * (float)(&DAT_007d6f2c)[uVar9 * 4]
    ;
    if (fVar16 * 40.743664 < 0.0) {
      fVar8 = -fVar8;
    }
    if (fVar17 * 40.743664 < 0.0) {
      fVar7 = -fVar7;
    }
    local_58 = fVar6 * local_30;
    local_48 = fVar7 * local_30;
    local_34 = fVar12 * local_30;
    local_30 = fVar13 * local_30;
    local_38 = -fVar8;
    local_54 = fVar12 * fVar6 * fVar8 - fVar13 * fVar7;
    local_40 = fVar13 * fVar7 * fVar8 - fVar12 * fVar6;
    local_50 = fVar12 * fVar7 + fVar13 * fVar6 * fVar8;
    local_44 = fVar13 * fVar6 + fVar12 * fVar7 * fVar8;
    local_4c = 0;
    local_3c = 0;
    local_2c = 0;
    uVar3 = fn_006a9088(param_1);
    fn_0016947c(&local_68,&local_58,uVar3);
    fVar8 = 1.0 / SQRT(local_68 * local_68 + local_64 * local_64 + local_60 * local_60);
    local_68 = local_68 * fVar8;
    local_64 = local_64 * fVar8;
    local_60 = local_60 * fVar8;
    iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
    local_28 = *(float *)(iVar1 + 0x58) + local_68 * 5.0;
    local_24 = *(float *)(iVar1 + 0x68) + local_64 * 5.0;
    local_20 = *(float *)(iVar1 + 0x78) + local_60 * 5.0;
    uVar3 = fn_00176d68(*(undefined4 *)(param_1 + 4));
    fn_005456f4(uVar3,&local_28);
  }
  else {
    *(undefined1 *)(param_1 + 0x15f) = 0;
  }
  return;
}


