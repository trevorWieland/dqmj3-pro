#include "003696cc_00369b3c.h"



void fn_003696e8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int unaff_r5;
  bool bVar3;
  float in_s0;
  
  bVar1 = *(byte *)(param_1 + 0x14);
  if ((bVar1 & 1) == 0) {
    bVar3 = (bVar1 & 2) != 0;
    if (bVar3) {
      unaff_r5 = *(int *)(param_1 + 0x1c);
    }
    if (!bVar3 || unaff_r5 == -1) {
      unaff_r5 = *(int *)(param_1 + 0x18);
    }
  }
  else {
    unaff_r5 = *(int *)(param_1 + 0x20);
  }
  if (*(byte *)(param_1 + 0x15) != bVar1) {
    fn_0036a2cc(param_1,unaff_r5);
  }
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x14);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x24))();
  *(float *)(*(int *)(param_1 + 0x2c) + 4) = in_s0 * 0.1;
  *(float *)(*(int *)(param_1 + 0x30) + 4) = in_s0 * 0.1;
  fn_003697d8(param_1,unaff_r5);
  fn_00369b3c(param_1,unaff_r5);
  if ((*(uint *)(param_1 + 100) != 0) &&
     (uVar2 = *(int *)(param_1 + 0x68) + 1, *(uint *)(param_1 + 0x68) = uVar2,
     *(uint *)(param_1 + 100) <= uVar2)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}



void fn_003696cc(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int unaff_r5;
  bool bVar3;
  float in_s0;
  
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
  }
  bVar1 = *(byte *)(param_1 + 0x14);
  if ((bVar1 & 1) == 0) {
    bVar3 = (bVar1 & 2) != 0;
    if (bVar3) {
      unaff_r5 = *(int *)(param_1 + 0x1c);
    }
    if (!bVar3 || unaff_r5 == -1) {
      unaff_r5 = *(int *)(param_1 + 0x18);
    }
  }
  else {
    unaff_r5 = *(int *)(param_1 + 0x20);
  }
  if (*(byte *)(param_1 + 0x15) != bVar1) {
    fn_0036a2cc(param_1,unaff_r5);
  }
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x14);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x24))();
  *(float *)(*(int *)(param_1 + 0x2c) + 4) = in_s0 * 0.1;
  *(float *)(*(int *)(param_1 + 0x30) + 4) = in_s0 * 0.1;
  fn_003697d8(param_1,unaff_r5);
  fn_00369b3c(param_1,unaff_r5);
  if ((*(uint *)(param_1 + 100) != 0) &&
     (uVar2 = *(int *)(param_1 + 0x68) + 1, *(uint *)(param_1 + 0x68) = uVar2,
     *(uint *)(param_1 + 100) <= uVar2)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}



int * fn_00369b3c(int param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
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
  float local_a0;
  float local_9c [2];
  float local_94 [3];
  uint local_88;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48 [9];
  
  fn_00117984();
  fn_0010fa20();
  uVar3 = fn_006eb278();
  iVar4 = fn_005e19a4(uVar3,0);
  fn_005eff40(iVar4,1);
  if (((*(byte *)(param_1 + 0x14) & 1) == 0) && (*(int *)(param_1 + 100) != 0)) {
    fVar18 = 1.0;
    fVar13 = (float)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x68),(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 100),(byte)(in_fpscr >> 0x16) & 3);
    local_9c[0] = fVar13 / fVar12;
    local_94[0] = 0.0;
    local_a0 = 1.0;
    if (0.0 <= fVar13 / fVar12) {
      pfVar5 = local_9c;
    }
    else {
      pfVar5 = local_94;
    }
    fVar12 = *pfVar5;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 < 1.0) << 0x1f | (uint)(fVar12 == 1.0) << 0x1e;
    uVar11 = uVar1 | (uint)NAN(fVar12) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar11 >> 0x1c) & 1)) {
      pfVar5 = &local_a0;
    }
    fVar12 = *pfVar5;
    local_64 = 0xffffffff;
    local_60 = 0xffffffff;
    piVar6 = *(int **)(param_1 + 0x5c);
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = (int *)piVar6[1];
    }
    if (iVar8 != 0 && piVar6 != (int *)0x0) {
      local_70 = iVar8;
      fn_006eb6a0(&local_84,&local_70);
      fVar17 = 0.003921569;
      fVar18 = fVar18 - fVar12;
      fVar16 = (float)VectorSignedToFloat(local_84 & 0xff,(byte)(uVar11 >> 0x16) & 3);
      fVar13 = (float)VectorSignedToFloat((local_84 & 0xffff) >> 8,(byte)(uVar11 >> 0x16) & 3);
      fVar15 = (float)VectorSignedToFloat((local_84 & 0xffffff) >> 0x10,(byte)(uVar11 >> 0x16) & 3);
      fVar14 = (float)VectorSignedToFloat(local_84 >> 0x18,(byte)(uVar11 >> 0x16) & 3);
      local_6c = **(undefined4 **)(param_1 + 0x60);
      fVar21 = fVar16 * 0.003921569 * fVar18;
      fVar20 = fVar13 * 0.003921569 * fVar18;
      fVar19 = fVar15 * 0.003921569 * fVar18;
      fVar22 = fVar14 * 0.003921569 * fVar18;
      fn_006eb6a0(&local_84,&local_6c);
      fVar16 = (float)VectorSignedToFloat(local_84 & 0xff,(byte)(uVar11 >> 0x16) & 3);
      fVar15 = (float)VectorSignedToFloat((local_84 & 0xffff) >> 8,(byte)(uVar11 >> 0x16) & 3);
      fVar14 = (float)VectorSignedToFloat((local_84 & 0xffffff) >> 0x10,(byte)(uVar11 >> 0x16) & 3);
      fVar13 = (float)VectorSignedToFloat(local_84 >> 0x18,(byte)(uVar11 >> 0x16) & 3);
      local_80 = fVar21 + fVar16 * fVar17 * fVar12;
      local_7c = fVar20 + fVar15 * fVar17 * fVar12;
      local_78 = fVar19 + fVar14 * fVar17 * fVar12;
      local_74 = fVar22 + fVar13 * fVar17 * fVar12;
      fn_006dc544(&local_84,&local_80);
      local_64 = local_84;
      local_5c = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 4);
      fn_006eb730(&local_88,&local_5c);
      fVar15 = (float)VectorSignedToFloat(local_88 & 0xff,(byte)(uVar11 >> 0x16) & 3);
      fVar14 = (float)VectorSignedToFloat((local_88 & 0xffff) >> 8,(byte)(uVar11 >> 0x16) & 3);
      fVar16 = (float)VectorSignedToFloat((local_88 & 0xffffff) >> 0x10,(byte)(uVar11 >> 0x16) & 3);
      fVar13 = (float)VectorSignedToFloat(local_88 >> 0x18,(byte)(uVar11 >> 0x16) & 3);
      local_48[0] = *(undefined4 *)(*(int *)(param_1 + 0x60) + 4);
      fVar19 = fVar15 * fVar17 * fVar18;
      fVar20 = fVar14 * fVar17 * fVar18;
      fVar21 = fVar16 * fVar17 * fVar18;
      fVar18 = fVar13 * fVar17 * fVar18;
      fn_006eb730(&local_88,local_48);
      fVar14 = (float)VectorSignedToFloat(local_88 & 0xff,(byte)(uVar11 >> 0x16) & 3);
      fVar13 = (float)VectorSignedToFloat((local_88 & 0xffff) >> 8,(byte)(uVar11 >> 0x16) & 3);
      fVar16 = (float)VectorSignedToFloat((local_88 & 0xffffff) >> 0x10,(byte)(uVar11 >> 0x16) & 3);
      fVar15 = (float)VectorSignedToFloat(local_88 >> 0x18,(byte)(uVar11 >> 0x16) & 3);
      local_58 = fVar19 + fVar14 * fVar17 * fVar12;
      local_54 = fVar20 + fVar13 * fVar17 * fVar12;
      local_50 = fVar21 + fVar16 * fVar17 * fVar12;
      local_4c = fVar18 + fVar15 * fVar17 * fVar12;
      fn_006dc544(&local_88,&local_58);
      local_60 = local_88;
    }
    fn_005e42a8(iVar4 + 0xc,&local_64);
    uVar3 = fn_005eff2c(iVar4,0);
    piVar6 = (int *)fn_005e51b0(uVar3,&local_60);
    return piVar6;
  }
  iVar10 = 0;
  iVar8 = fn_006f7a9c(DAT_008977e0);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar8 + 8) - *(int *)(iVar8 + 4)) / 0x34) <= param_2))
  {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(iVar8 + 4) + param_2 * 0x34;
  }
  piVar6 = (int *)fn_006eb358(iVar8);
  iVar9 = 0;
  if ((int)piVar6 < 1) {
    return piVar6;
  }
  do {
    fn_005e7a3c(&local_68,iVar8,iVar9);
    fn_005e8724(*(undefined4 *)(param_1 + 0x30),&local_68);
    if (*(char *)(local_68 + 0x18) == '\x02') {
      fn_005e8724(*(undefined4 *)(param_1 + 0x30),&local_68);
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(param_1 + 0x30);
      fn_005e4218(iVar4 + 0xc);
    }
    else {
      iVar7 = fn_005eff2c(iVar4,iVar10);
      iVar10 = iVar10 + 1;
      *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(param_1 + 0x30);
      fn_005e5470(iVar7);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < (int)piVar6);
  return &local_68;
}



undefined4 * fn_003697d8(int param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_6c [4];
  uint local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c [11];
  
  iVar3 = fn_006f7a9c(DAT_008977e0);
  if (-1 < (int)param_2) {
    if (param_2 < (uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34)) {
      iVar3 = *(int *)(iVar3 + 4) + param_2 * 0x34;
      goto LAB_0036983c;
    }
  }
  iVar3 = 0;
LAB_0036983c:
  iVar4 = fn_006eb2e4(iVar3);
  puVar7 = (undefined4 *)0x0;
  if (iVar4 != 0) {
    fn_005e72e0(auStack_48,iVar3,0);
    fn_005e7c34(*(undefined4 *)(param_1 + 0x2c),auStack_48);
    fn_00117984(auStack_48);
    fn_0010fa20();
    uVar5 = fn_006eb278();
    iVar3 = fn_005e29c4(uVar5,0);
    if (((*(byte *)(param_1 + 0x14) & 1) != 0) || (*(int *)(param_1 + 100) == 0)) {
      *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_1 + 0x2c);
      iVar4 = *(int *)(param_1 + 0x90);
      if (iVar4 != -1) {
        *(undefined1 *)(iVar3 + 0x15) = 1;
        *(char *)(iVar3 + 0x14) = (char)iVar4;
      }
      if (*(int *)(param_1 + 0x84) != -0x40800000) {
        *(int *)(iVar3 + 0x10) = *(int *)(param_1 + 0x84);
        *(undefined1 *)(iVar3 + 0x15) = 1;
      }
      if (*(int *)(param_1 + 0x88) != -0x40800000) {
        *(int *)(iVar3 + 0xc) = *(int *)(param_1 + 0x88);
        *(undefined1 *)(iVar3 + 0x15) = 1;
      }
      if (*(int *)(param_1 + 0x8c) != -0x40800000) {
        *(int *)(iVar3 + 8) = *(int *)(param_1 + 0x8c);
        *(undefined1 *)(iVar3 + 0x15) = 1;
      }
      puVar7 = (undefined4 *)fn_005e950c(iVar3);
      return puVar7;
    }
    fVar9 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x68),(byte)(in_fpscr >> 0x16) & 3);
    fVar10 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 100),(byte)(in_fpscr >> 0x16) & 3);
    local_6c[1] = fVar9 / fVar10;
    local_6c[2] = 0.0;
    local_6c[0] = 1.0;
    if (0.0 <= fVar9 / fVar10) {
      pfVar6 = local_6c + 1;
    }
    else {
      pfVar6 = local_6c + 2;
    }
    fVar9 = *pfVar6;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < 1.0) << 0x1f | (uint)(fVar9 == 1.0) << 0x1e;
    uVar8 = uVar1 | (uint)NAN(fVar9) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar8 >> 0x1c) & 1)) {
      pfVar6 = local_6c;
    }
    fVar13 = *pfVar6;
    fVar14 = 1.0 - fVar13;
    *(float *)(iVar3 + 0x10) =
         *(float *)(param_1 + 0x34) * fVar14 + *(float *)(param_1 + 0x38) * fVar13;
    *(undefined1 *)(iVar3 + 0x15) = 1;
    *(float *)(iVar3 + 0xc) =
         *(float *)(param_1 + 0x44) * fVar14 + *(float *)(param_1 + 0x48) * fVar13;
    *(float *)(iVar3 + 8) =
         *(float *)(param_1 + 0x3c) * fVar14 + *(float *)(param_1 + 0x40) * fVar13;
    local_40 = *(undefined4 *)(param_1 + 0x54);
    fn_006eb49c(&local_5c,&local_40);
    fVar15 = 0.003921569;
    fVar11 = (float)VectorSignedToFloat((local_5c & 0xffff) >> 8,(byte)(uVar8 >> 0x16) & 3);
    local_3c[0] = *(undefined4 *)(param_1 + 0x58);
    fVar12 = (float)VectorSignedToFloat(local_5c & 0xff,(byte)(uVar8 >> 0x16) & 3);
    fVar10 = (float)VectorSignedToFloat((local_5c & 0xffffff) >> 0x10,(byte)(uVar8 >> 0x16) & 3);
    fVar9 = (float)VectorSignedToFloat(local_5c >> 0x18,(byte)(uVar8 >> 0x16) & 3);
    fVar17 = fVar11 * 0.003921569 * fVar14;
    fVar16 = fVar12 * 0.003921569 * fVar14;
    fVar18 = fVar10 * 0.003921569 * fVar14;
    fVar14 = fVar9 * 0.003921569 * fVar14;
    fn_006eb49c(&local_5c,local_3c);
    fVar12 = (float)VectorSignedToFloat(local_5c & 0xff,(byte)(uVar8 >> 0x16) & 3);
    fVar11 = (float)VectorSignedToFloat((local_5c & 0xffff) >> 8,(byte)(uVar8 >> 0x16) & 3);
    fVar10 = (float)VectorSignedToFloat((local_5c & 0xffffff) >> 0x10,(byte)(uVar8 >> 0x16) & 3);
    fVar9 = (float)VectorSignedToFloat(local_5c >> 0x18,(byte)(uVar8 >> 0x16) & 3);
    local_58 = fVar16 + fVar12 * fVar15 * fVar13;
    local_54 = fVar17 + fVar11 * fVar15 * fVar13;
    local_50 = fVar18 + fVar10 * fVar15 * fVar13;
    local_4c = fVar14 + fVar9 * fVar15 * fVar13;
    fn_006dc544(&local_5c,&local_58);
    *(char *)(iVar3 + 2) = (char)local_5c;
    *(char *)(iVar3 + 3) = (char)(local_5c >> 8);
    *(char *)(iVar3 + 4) = (char)(local_5c >> 0x10);
    *(undefined1 *)(iVar3 + 0x15) = 1;
    puVar7 = &local_40;
  }
  return puVar7;
}


