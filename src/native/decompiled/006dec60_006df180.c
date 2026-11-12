#include "006dec60_006df180.h"



void fn_006df180(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int *param_6)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  undefined4 unaff_r5;
  int iVar9;
  undefined2 unaff_r11;
  int local_48;
  int local_44;
  int local_40;
  uint uStack_3c;
  int *piStack_34;
  undefined4 local_30;
  int *piStack_2c;
  int iStack_28;
  
  local_44 = *param_6 + param_4;
  local_48 = param_4;
  piStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  iStack_28 = param_4;
  fn_0017dc74(&local_40,&local_48,param_6[7],4);
  uVar7 = 0;
  *param_3 = local_40;
  uStack_3c = uStack_3c / 0x158;
  if (uStack_3c != 0) {
    unaff_r5 = 0;
    unaff_r11 = 0x100;
  }
  param_3[1] = uStack_3c;
  uVar4 = 0;
  if (uStack_3c != 0) {
    do {
      puVar2 = (undefined2 *)(*param_3 + uVar7 * 0x158);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = unaff_r11;
        uVar1 = (undefined1)unaff_r5;
        *(undefined1 *)(puVar2 + 1) = uVar1;
        *(undefined1 *)((int)puVar2 + 3) = uVar1;
        *(undefined4 *)(puVar2 + 2) = unaff_r5;
        *(undefined4 *)(puVar2 + 6) = unaff_r5;
        *(undefined4 *)(puVar2 + 8) = unaff_r5;
        *(undefined4 *)(puVar2 + 0xe) = unaff_r5;
        puVar2[0x10] = (short)unaff_r5;
        puVar2[0x11] = (short)unaff_r5;
        iVar3 = fn_00101a1c(puVar2 + 0x12,fn_0017d8f8,4,0xc);
        iVar3 = fn_0017d8f8(iVar3 + 0x30);
        *(undefined1 *)(iVar3 + 0x94) = uVar1;
        iVar3 = fn_00101a1c(iVar3 + 0x98,&DAT_00548ec8,0x18,3);
        iVar3 = fn_00101a1c(iVar3 + 0x48,fn_0017d8f8,4,3);
        *(undefined4 *)(iVar3 + 0xc) = unaff_r5;
        *(undefined4 *)(iVar3 + 0x10) = unaff_r5;
        *(undefined4 *)(iVar3 + 0x14) = unaff_r5;
        *(undefined4 *)(iVar3 + 0x18) = unaff_r5;
        *(undefined4 *)(iVar3 + 0x1c) = unaff_r5;
        *(undefined4 *)(iVar3 + 0x20) = unaff_r5;
        *(undefined4 *)(iVar3 + -0x120) = unaff_r5;
        *(undefined4 *)(iVar3 + -0x11c) = unaff_r5;
      }
      uVar4 = param_3[1];
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  iVar3 = *param_3;
  sVar8 = 0;
  iVar9 = iVar3 + uVar4 * 0x158;
  for (; iVar3 != iVar9; iVar3 = iVar3 + 0x158) {
    uVar4 = fn_00169f1c(param_6[9],param_6[8]);
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = param_5 + 0xfU & 0xfffffff0;
      param_5 = uVar7 + uVar4;
    }
    *(uint *)(iVar3 + 4) = uVar4 >> 3;
    iVar5 = 0;
    do {
      iVar6 = *(int *)(iVar3 + 4) * 4;
      if (iVar6 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar7 + 0xf & 0xfffffff0;
        uVar7 = uVar4 + iVar6;
      }
      iVar6 = iVar5 + 1;
      *(uint *)(iVar3 + 0x14 + iVar5 * 4) = uVar4;
      iVar5 = iVar6;
    } while (iVar6 < 2);
    fn_006dec60(local_30,sVar8);
    sVar8 = sVar8 + 1;
  }
  *param_1 = local_48;
  param_1[1] = 0;
  return;
}



void fn_006deea8(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint in_fpscr;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  int local_2c;
  int iStack_28;
  
  uVar7 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar24 = 0x4222f983;
    fVar21 = 65536.0;
    fVar22 = 0.0;
    local_2c = param_1;
    iStack_28 = param_2;
    do {
      puVar8 = (undefined4 *)(*(int *)(param_2 + 0xc) + uVar7 * 0x40);
      puVar6 = (undefined4 *)(*(int *)(local_2c + 0x70) + uVar7 * 100);
      uVar2 = puVar6[3];
      uVar4 = puVar6[4];
      puVar8[1] = puVar6[2];
      puVar8[2] = uVar2;
      puVar8[3] = uVar4;
      pfVar5 = (float *)(puVar8 + 4);
      fVar23 = (float)uVar24;
      in_fpscr = in_fpscr & 0xfffffff;
      fVar12 = ABS((float)puVar6[6] * fVar23);
      fVar13 = ABS((float)puVar6[7] * fVar23);
      for (fVar9 = ABS((float)puVar6[5] * fVar23); 0x477fffff < (int)fVar9; fVar9 = fVar9 - fVar21)
      {
      }
      for (; 0x477fffff < (int)fVar12; fVar12 = fVar12 - fVar21) {
      }
      for (; 0x477fffff < (int)fVar13; fVar13 = fVar13 - fVar21) {
      }
      uVar10 = VectorFloatToUnsigned(fVar9,3);
      uVar14 = VectorFloatToUnsigned(fVar12,3);
      uVar15 = VectorFloatToUnsigned(fVar13,3);
      uVar3 = uVar10 & 0xff;
      fVar20 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      fVar18 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      uVar10 = uVar15 & 0xff;
      fVar19 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      uVar14 = uVar14 & 0xff;
      fVar16 = (float)(&DAT_007d6f20)[uVar3 * 4] +
               (fVar9 - fVar20) * (float)(&DAT_007d6f28)[uVar3 * 4];
      uVar24 = CONCAT44((&DAT_007d6f28)[uVar10 * 4],fVar23);
      fVar11 = (float)(&DAT_007d6f20)[uVar14 * 4] +
               (fVar12 - fVar18) * (float)(&DAT_007d6f28)[uVar14 * 4];
      fVar17 = (float)(&DAT_007d6f20)[uVar10 * 4] +
               (fVar13 - fVar19) * (float)(&DAT_007d6f28)[uVar10 * 4];
      fVar9 = (float)(&DAT_007d6f24)[uVar3 * 4] +
              (fVar9 - fVar20) * (float)(&DAT_007d6f2c)[uVar3 * 4];
      fVar12 = (float)(&DAT_007d6f24)[uVar14 * 4] +
               (fVar12 - fVar18) * (float)(&DAT_007d6f2c)[uVar14 * 4];
      fVar13 = (float)(&DAT_007d6f24)[uVar10 * 4] +
               (fVar13 - fVar19) * (float)(&DAT_007d6f2c)[uVar10 * 4];
      if ((float)puVar6[5] * fVar23 < fVar22) {
        fVar16 = -fVar16;
      }
      if ((float)puVar6[6] * fVar23 < fVar22) {
        fVar11 = -fVar11;
      }
      if ((float)puVar6[7] * fVar23 < fVar22) {
        fVar17 = -fVar17;
      }
      *pfVar5 = fVar13 * fVar12;
      puVar8[8] = fVar17 * fVar12;
      puVar8[0xd] = fVar16 * fVar12;
      puVar8[0xe] = fVar9 * fVar12;
      puVar8[10] = fVar9 * fVar17 * fVar11 - fVar16 * fVar13;
      puVar8[9] = fVar9 * fVar13 + fVar16 * fVar17 * fVar11;
      puVar8[0xc] = -fVar11;
      puVar8[5] = fVar16 * fVar13 * fVar11 - fVar9 * fVar17;
      puVar8[6] = fVar16 * fVar17 + fVar9 * fVar13 * fVar11;
      puVar8[7] = 0;
      puVar8[0xb] = 0;
      puVar8[0xf] = 0;
      local_74 = 0;
      local_78 = 0x3f800000;
      local_70 = 0;
      local_6c = puVar6[8];
      uStack_68 = 0;
      uStack_64 = 0x3f800000;
      local_60 = 0;
      local_5c = puVar6[9];
      uStack_58 = 0;
      local_54 = 0;
      uStack_50 = 0x3f800000;
      local_4c = puVar6[10];
      fn_001ad06c(pfVar5,&local_78,pfVar5);
      *puVar8 = *puVar6;
      puVar1 = (uint *)(*(int *)(param_2 + 0xc) + uVar7 * 0x40);
      uVar7 = uVar7 + 1;
      *puVar1 = *puVar1 | 2;
    } while (uVar7 < *(uint *)(param_2 + 0x10));
  }
  return;
}



void fn_006dee2c(int *param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int local_38;
  int local_34;
  undefined4 local_20 [3];
  
  local_34 = *(int *)(param_5 + 0xc) + param_4;
  local_38 = param_4;
  fn_0017dc74(local_20,&local_38,*(undefined4 *)(param_5 + 0x4c),4);
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  *param_3 = local_20[0];
  param_3[1] = uVar1;
  fn_001694e4(local_20[0],*(undefined4 *)(param_2 + 0x7c),*(int *)(param_2 + 0x80) + 7U >> 3);
  *(undefined1 *)(param_3 + 2) = 1;
  *param_1 = local_38;
  param_1[1] = 0;
  return;
}



void fn_006dec60(int param_1,int param_2,ushort *param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x34) + param_2 * 0x2c);
  if (iVar5 != 0) {
    *param_3 = *(ushort *)(iVar5 + 4) | *param_3;
    *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(iVar5 + 0x5c);
    *(undefined4 *)(param_3 + 0x22) = *(undefined4 *)(iVar5 + 0x60);
    *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(iVar5 + 100);
    *(undefined4 *)(param_3 + 0x26) = *(undefined4 *)(iVar5 + 0x68);
    iVar4 = 0;
    do {
      iVar6 = iVar4 + 1;
      *(undefined4 *)(param_3 + iVar4 * 2 + 0x12) = *(undefined4 *)(iVar5 + iVar4 * 4 + 0x6c);
      iVar4 = iVar6;
    } while (iVar6 < 6);
    *(undefined4 *)(param_3 + 0x2a) = *(undefined4 *)(iVar5 + 0x84);
    *(byte *)((int)param_3 + 3) = *(byte *)(iVar5 + 0xa4) >> 4;
    uVar8 = *(undefined4 *)(iVar5 + 0x10);
    uVar9 = *(undefined4 *)(iVar5 + 0x14);
    uVar10 = *(undefined4 *)(iVar5 + 0x18);
    uVar11 = *(undefined4 *)(iVar5 + 0x1c);
    uVar12 = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(param_3 + 0x76) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)(param_3 + 0x78) = uVar8;
    *(undefined4 *)(param_3 + 0x7a) = uVar9;
    *(undefined4 *)(param_3 + 0x7c) = uVar10;
    *(undefined4 *)(param_3 + 0x7e) = uVar11;
    *(undefined4 *)(param_3 + 0x80) = uVar12;
    uVar8 = *(undefined4 *)(iVar5 + 0x28);
    uVar9 = *(undefined4 *)(iVar5 + 0x2c);
    uVar10 = *(undefined4 *)(iVar5 + 0x30);
    uVar11 = *(undefined4 *)(iVar5 + 0x34);
    uVar12 = *(undefined4 *)(iVar5 + 0x38);
    *(undefined4 *)(param_3 + 0x82) = *(undefined4 *)(iVar5 + 0x24);
    *(undefined4 *)(param_3 + 0x84) = uVar8;
    *(undefined4 *)(param_3 + 0x86) = uVar9;
    *(undefined4 *)(param_3 + 0x88) = uVar10;
    *(undefined4 *)(param_3 + 0x8a) = uVar11;
    *(undefined4 *)(param_3 + 0x8c) = uVar12;
    uVar8 = *(undefined4 *)(iVar5 + 0x40);
    uVar9 = *(undefined4 *)(iVar5 + 0x44);
    uVar10 = *(undefined4 *)(iVar5 + 0x48);
    uVar11 = *(undefined4 *)(iVar5 + 0x4c);
    uVar12 = *(undefined4 *)(iVar5 + 0x50);
    *(undefined4 *)(param_3 + 0x8e) = *(undefined4 *)(iVar5 + 0x3c);
    *(undefined4 *)(param_3 + 0x90) = uVar8;
    *(undefined4 *)(param_3 + 0x92) = uVar9;
    *(undefined4 *)(param_3 + 0x94) = uVar10;
    *(undefined4 *)(param_3 + 0x96) = uVar11;
    *(undefined4 *)(param_3 + 0x98) = uVar12;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(iVar5 + 0xc0);
    param_3[0x10] = *(ushort *)(iVar5 + 0x54);
    param_3[0x11] = *(ushort *)(iVar5 + 0x56);
  }
  iVar5 = *(int *)(param_1 + 0x34) + param_2 * 0x2c;
  *(undefined4 *)(param_3 + 0x9a) = *(undefined4 *)(*(int *)(iVar5 + 0x18) + 0xc);
  *(undefined4 *)(param_3 + 0x9c) = *(undefined4 *)(*(int *)(iVar5 + 0x18) + 0x1c);
  *(undefined4 *)(param_3 + 0x9e) = *(undefined4 *)(*(int *)(iVar5 + 0x18) + 0x2c);
  iVar5 = *(int *)(param_1 + 0x34) + param_2 * 0x2c;
  puVar3 = *(undefined4 **)(iVar5 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    cVar1 = *(char *)(puVar3 + 6);
    uVar8 = puVar3[1];
    *(undefined4 *)(param_3 + 0xa0) = *puVar3;
    *(undefined4 *)(param_3 + 0xa2) = uVar8;
    if (cVar1 == '\f') {
      bVar2 = (byte)param_3[1] | 1;
    }
    else {
      bVar2 = (byte)param_3[1] & 0xfe;
    }
    *(byte *)(param_3 + 1) = bVar2;
  }
  iVar4 = *(int *)(iVar5 + 8);
  if (iVar4 != 0) {
    bVar7 = *(char *)(iVar4 + 0x18) == '\f';
    iVar6 = iVar4;
    if (bVar7) {
      iVar6 = 1;
    }
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
    if (!bVar7) {
      iVar6 = 0;
    }
    *(undefined4 *)(param_3 + 0xa4) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(param_3 + 0xa6) = uVar8;
    if (iVar6 == 0) {
      bVar2 = (byte)param_3[1] & 0xfd;
    }
    else {
      bVar2 = (byte)param_3[1] | 2;
    }
    *(byte *)(param_3 + 1) = bVar2;
  }
  iVar5 = *(int *)(iVar5 + 0xc);
  if (iVar5 != 0) {
    bVar7 = *(char *)(iVar5 + 0x18) == '\f';
    iVar4 = iVar5;
    if (bVar7) {
      iVar4 = 1;
    }
    uVar8 = *(undefined4 *)(iVar5 + 0x10);
    if (!bVar7) {
      iVar4 = 0;
    }
    *(undefined4 *)(param_3 + 0xaa) = *(undefined4 *)(iVar5 + 0x14);
    *(undefined4 *)(param_3 + 0xa8) = uVar8;
    if (iVar4 == 0) {
      bVar2 = (byte)param_3[1] & 0xfb;
    }
    else {
      bVar2 = (byte)param_3[1] | 4;
    }
    *(byte *)(param_3 + 1) = bVar2;
  }
  return;
}


