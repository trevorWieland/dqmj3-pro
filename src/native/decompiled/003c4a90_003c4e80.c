#include "003c4a90_003c4e80.h"



undefined1 * fn_003c4e80(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar12;
  float fVar13;
  undefined4 in_s1;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 in_s2;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar29;
  undefined8 uVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
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
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [36];
  
  iVar1 = fn_006be0f4(*(undefined4 *)(param_1 + 0x1a8));
  if ((*(char *)(iVar1 + 0x514) == -1) ||
     (iVar1 = iVar1 + *(char *)(iVar1 + 0x514) * 0xf0 + 0x154, iVar1 == 0)) {
    iVar1 = fn_006be0f4(*(undefined4 *)(param_1 + 0x1a8),param_2);
    bVar11 = *(short *)(iVar1 + 0x120) == 0x1b;
    fn_006be058(*(undefined4 *)(param_1 + 0x1c4),param_2,bVar11);
    *(undefined4 *)(param_1 + 0x9c) = in_s0;
    *(undefined4 *)(param_1 + 0xa0) = in_s1;
    *(undefined4 *)(param_1 + 0xa4) = in_s2;
    puVar5 = (undefined1 *)fn_006be0a4(*(undefined4 *)(param_1 + 0x1c4),param_2,bVar11);
    *(undefined4 *)(param_1 + 0xa8) = in_s0;
    *(undefined4 *)(param_1 + 0xac) = in_s1;
    *(undefined4 *)(param_1 + 0xb0) = in_s2;
    return puVar5;
  }
  pfVar2 = (float *)fn_00171634();
  local_9c = *pfVar2;
  local_98 = pfVar2[1];
  local_94 = pfVar2[2];
  puVar3 = (undefined4 *)fn_00171634();
  uVar29 = *puVar3;
  fVar32 = (float)puVar3[1];
  fVar31 = (float)puVar3[2];
  fVar25 = 0.0;
  fn_00171634();
  fn_0020bbc4(auStack_48,iVar1);
  fn_006bfda8(auStack_44);
  iVar1 = fn_00242a30();
  iVar4 = fn_006bfe90(auStack_44);
  uVar28 = CONCAT44(uVar29,0x3c23d70a);
  fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(&DAT_007c89e4 + iVar4 * 4),
                                      (byte)(in_fpscr >> 0x16) & 3);
  fVar14 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar1 + 2),(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = local_94 + fVar12 * 0.01 * fVar14 * 1.2;
  local_94 = fVar12;
  iVar1 = fn_006bfe90(auStack_44);
  fn_006bfda8(auStack_44);
  iVar4 = fn_00242b0c();
  fVar14 = 10.0;
  fn_002cd59c(iVar1);
  fVar12 = fVar12 * fVar14;
  if (iVar4 == 1) {
    fVar16 = (float)VectorSignedToFloat(*(undefined4 *)(&DAT_007c89d0 + iVar1 * 4),
                                        (byte)(in_fpscr >> 0x16) & 3);
    fVar12 = fVar16 * (float)uVar28 * fVar12;
  }
  fVar12 = fVar12 + local_98;
  local_98 = fVar12;
  iVar1 = fn_006bfe90(auStack_44);
  fn_006bfda8(auStack_44);
  iVar4 = fn_00242b0c();
  fn_002cd59c(iVar1);
  fVar12 = fVar12 * fVar14;
  if (iVar4 == 1) {
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(&DAT_007c89d0 + iVar1 * 4),
                                        (byte)(in_fpscr >> 0x16) & 3);
    fVar12 = fVar14 * (float)uVar28 * fVar12;
  }
  fVar32 = fVar12 + fVar32;
  local_90 = fVar25;
  local_8c = fVar25;
  local_88 = fVar25;
  if (((DAT_008c62f8 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62f8), iVar1 != 0)) {
    fVar12 = 1.0;
    DAT_008f9e20 = 1.0;
    DAT_008f9e24 = 1.0;
    DAT_008f9e28 = 1.0;
  }
  fVar30 = (float)((ulonglong)uVar28 >> 0x20);
  fn_006bfe90(auStack_44);
  fn_002cd59c();
  fVar15 = DAT_008f9e20 * fVar12;
  fVar17 = DAT_008f9e24 * fVar12;
  fVar12 = DAT_008f9e28 * fVar12;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1ac) + param_2 * 4) + 0x148);
  local_84 = fVar15;
  fStack_80 = fVar17;
  local_7c = fVar12;
  uVar29 = fn_00171634();
  uVar6 = fn_006bfe90(auStack_44);
  uVar7 = fn_0017fde4(*(undefined4 *)(iVar1 + 0x14));
  fn_0017ab7c(&local_90,uVar7,uVar6,uVar29,&local_84);
  fVar27 = *(float *)(iVar1 + 0x1c);
  fVar33 = *(float *)(iVar1 + 0x20);
  fVar34 = *(float *)(iVar1 + 0x24);
  fVar26 = local_8c;
  fn_006be01c(*(undefined4 *)(param_1 + 0x1c4),param_2);
  in_fpscr = in_fpscr & 0xfffffff;
  fVar16 = ABS(fVar15 * 40.743664);
  fVar13 = ABS(fVar17 * 40.743664);
  for (fVar14 = ABS(fVar12 * 40.743664); 0x477fffff < (int)fVar14; fVar14 = fVar14 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar16; fVar16 = fVar16 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar13; fVar13 = fVar13 - 65536.0) {
  }
  uVar18 = VectorFloatToUnsigned(fVar14,3);
  uVar19 = VectorFloatToUnsigned(fVar16,3);
  uVar10 = uVar18 & 0xff;
  uVar20 = VectorFloatToUnsigned(fVar13,3);
  uVar8 = uVar19 & 0xff;
  uVar9 = uVar20 & 0xff;
  fVar23 = (float)VectorUnsignedToFloat(uVar18 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar24 = (float)VectorUnsignedToFloat(uVar19 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar22 = (float)VectorUnsignedToFloat(uVar20 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar21 = (float)(&DAT_007d6f20)[uVar10 * 4] +
           (fVar14 - fVar23) * (float)(&DAT_007d6f28)[uVar10 * 4];
  fVar23 = (float)(&DAT_007d6f24)[uVar10 * 4] +
           (fVar14 - fVar23) * (float)(&DAT_007d6f2c)[uVar10 * 4];
  fVar14 = (float)(&DAT_007d6f20)[uVar8 * 4] + (fVar16 - fVar24) * (float)(&DAT_007d6f28)[uVar8 * 4]
  ;
  local_50 = (float)(&DAT_007d6f24)[uVar8 * 4] +
             (fVar16 - fVar24) * (float)(&DAT_007d6f2c)[uVar8 * 4];
  if (fVar12 * 40.743664 < fVar25) {
    fVar21 = -fVar21;
  }
  fVar16 = (float)(&DAT_007d6f20)[uVar9 * 4] + (fVar13 - fVar22) * (float)(&DAT_007d6f28)[uVar9 * 4]
  ;
  fVar12 = (float)(&DAT_007d6f24)[uVar9 * 4] + (fVar13 - fVar22) * (float)(&DAT_007d6f2c)[uVar9 * 4]
  ;
  if (fVar15 * 40.743664 < fVar25) {
    fVar14 = -fVar14;
  }
  if (fVar17 * 40.743664 < fVar25) {
    fVar16 = -fVar16;
  }
  local_68 = fVar16 * local_50;
  local_78 = fVar12 * local_50;
  local_54 = fVar21 * local_50;
  local_50 = fVar23 * local_50;
  local_58 = -fVar14;
  local_70 = fVar21 * fVar16 + fVar23 * fVar12 * fVar14;
  local_64 = fVar23 * fVar12 + fVar21 * fVar16 * fVar14;
  local_74 = fVar21 * fVar12 * fVar14 - fVar23 * fVar16;
  local_60 = fVar23 * fVar16 * fVar14 - fVar21 * fVar12;
  local_6c = 0;
  local_5c = 0;
  local_4c = 0;
  fn_0016947c(&local_9c,&local_78);
  fVar32 = fVar32 + fVar26 * 0.4;
  local_98 = local_98 + fVar26 * 0.6;
  pfVar2 = (float *)fn_00171634();
  fVar14 = *pfVar2;
  fVar12 = pfVar2[1];
  *(float *)(param_1 + 0xb4) = local_9c;
  *(float *)(param_1 + 0xb8) = local_98;
  *(float *)(param_1 + 0xbc) = local_94;
  *(float *)(param_1 + 0xc0) = fVar30;
  *(float *)(param_1 + 0xc4) = fVar32;
  *(float *)(param_1 + 200) = fVar31;
  *(float *)(param_1 + 0x9c) = local_9c + fVar27 + fVar14;
  *(float *)(param_1 + 0xa0) = local_98 + fVar33 + fVar12;
  *(float *)(param_1 + 0xa4) = local_94 + fVar34 + 270.0;
  *(float *)(param_1 + 0xa8) = fVar30 + fVar27;
  *(float *)(param_1 + 0xac) = fVar32 + fVar33;
  *(float *)(param_1 + 0xb0) = fVar31 + fVar34;
  return auStack_48;
}



undefined4 fn_003c4dac(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  uVar1 = fn_00292f20();
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar2 == &DAT_008969a8) goto LAB_003c4df8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_003c4df8:
  *(undefined4 **)(param_1 + 0x1bc) = puVar6;
  iVar3 = fn_00145b00(0x10,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_0028bf74(iVar3,*(undefined4 *)(param_1 + 0x78));
  }
  piVar5 = *(int **)(param_1 + 0x1c0);
  if (piVar5 != piVar4) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x1c0) = piVar4;
  }
  fn_0028bed4(*(undefined4 *)(param_1 + 0x1c0));
  fn_0028bf3c(*(undefined4 *)(param_1 + 0x1c0));
  fn_003c5f98(param_1);
  fn_001cae80(*(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 4),0);
  return 1;
}



void fn_003c4bd0(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x1b0) - *(int *)(param_1 + 0x1ac) >> 2 != 0) {
    do {
      fn_0024405c(*(undefined4 *)(*(int *)(param_1 + 0x1ac) + uVar3 * 4),0);
      fn_00243d10(*(undefined4 *)(*(int *)(param_1 + 0x1ac) + uVar3 * 4));
      piVar1 = *(int **)(*(int *)(param_1 + 0x1ac) + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x1b0) - *(int *)(param_1 + 0x1ac) >> 2));
  }
  uVar5 = *(uint *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  uVar2 = *(uint *)(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  iVar4 = *(int *)(param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  uVar3 = uVar5;
  if (uVar2 < uVar5) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != uVar2);
  }
  fn_001008c4(uVar5,(int)(iVar4 - uVar5) >> 2,0);
  if (*(int *)(param_1 + 0x19c) != -1) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 0xc))();
  }
  if (*(int **)(param_1 + 0x1c0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c0) + 4))();
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  fn_00159f34(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x90));
  fn_0016a43c(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x8c));
  fn_0016a43c(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x88));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x84));
}



void fn_003c4b98(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = &DAT_00830398;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  return;
}



void fn_003c4a90(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 100) + 8);
  if (*(char *)(param_1 + 0x6c) != '\0') {
    if ((uVar1 & 0x40) == 0) {
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 100) + 8) = 0;
    fn_006899f4(param_1,0xd7,1);
    return;
  }
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x6c) = 1;
    fn_00689930(param_1,0,1,1);
    return;
  }
  if ((uVar1 & 2) == 0) {
    return;
  }
  uVar1 = fn_006f6a38(param_1);
  if ((uVar1 & 0x400000) == 0) {
    if (0x3b < *(int *)(param_1 + 0x68)) {
      uVar1 = *(uint *)(*(int *)(param_1 + 100) + 8);
      if ((uVar1 & 8) != 0) {
        *(uint *)(*(int *)(param_1 + 100) + 8) = uVar1 | 0x10;
        *(undefined4 *)(param_1 + 0x68) = 0;
        goto LAB_003c4b88;
      }
    }
    if (0x27 < *(int *)(param_1 + 0x68)) {
      uVar1 = *(uint *)(*(int *)(param_1 + 100) + 8);
      if ((uVar1 & 0x20) != 0) {
        uVar1 = uVar1 & 0xffffffdf;
        *(uint *)(*(int *)(param_1 + 100) + 8) = uVar1;
        *(uint *)(*(int *)(param_1 + 100) + 8) = uVar1 | 0x10;
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
    }
  }
  else {
    *(uint *)(*(int *)(param_1 + 100) + 8) = *(uint *)(*(int *)(param_1 + 100) + 8) | 4;
  }
LAB_003c4b88:
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}


