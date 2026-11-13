#include "002abf30_002aca88.h"



void fn_002aca88(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined8 in_d8;
  float fVar12;
  float fVar13;
  undefined8 in_d9;
  float fVar14;
  undefined8 in_d10;
  float fVar15;
  undefined8 in_d11;
  
  uVar2 = fn_006f7a48(DAT_008977e0);
  iVar3 = fn_006a7eb8();
  fn_006f72b4(DAT_008977e0);
  iVar4 = fn_006b1564();
  iVar5 = fn_006a7ca4(uVar2);
  if (iVar3 != 0 || iVar4 != 0) {
    fn_00271448(param_1[2]);
    uVar2 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar2,2);
    iVar3 = fn_006f7a5c(DAT_008977e0);
    *(undefined1 *)(iVar3 + 0xc) = 0;
    fn_001d68cc(iVar3,1);
    fn_001d8894(iVar3,iVar3 + 0x1c);
    fn_00698fb8(DAT_008977e0,1);
    fn_006f72b4(DAT_008977e0);
    fn_0021a4cc();
    fn_006f7ab8(DAT_008977e0);
    fn_001f6464();
    (**(code **)(*(int *)param_1[0x15] + 0x40))();
    param_1[5] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if (iVar5 != 0) {
    fn_006f7ab8(DAT_008977e0);
    fn_001f6464();
    *(undefined1 *)(param_1 + 1) = 10;
    fn_00271248(param_1[2],0);
    (**(code **)(*(int *)param_1[0x15] + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x002acbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[0x15] + 0x58))();
    return;
  }
  iVar3 = (**(code **)(*param_1 + 0x98))(param_1);
  if ((iVar3 == 0) || (iVar3 = fn_006a7e5c(uVar2), iVar3 == 0)) {
    iVar3 = fn_006a7e50(uVar2);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    return;
  }
  (**(code **)(*(int *)param_1[0x15] + 0x48))();
  if (param_1[0x19] != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
  }
  iVar3 = fn_0023e194(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7582,0,param_4,in_d8,in_d9,in_d10,
                       in_d11,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8);
  param_1[0x19] = iVar3;
  iVar3 = fn_006f7a5c(DAT_008977e0);
  iVar4 = fn_006f7a5c(DAT_008977e0);
  fVar13 = *(float *)(iVar4 + 0x14);
  piVar6 = (int *)fn_006f7508(DAT_008977e0);
  iVar4 = (**(code **)(*piVar6 + 0x70))();
  iVar5 = 0;
  if (0 < iVar4) {
    fVar14 = 150.0;
    fVar15 = 0.024543693;
    do {
      piVar6 = (int *)fn_006f7508(DAT_008977e0);
      iVar7 = (**(code **)(*piVar6 + 0x74))(piVar6,iVar5);
      cVar1 = '\0';
      if (iVar7 != 0) {
        cVar1 = *(char *)(iVar7 + 0x58);
      }
      if (iVar7 != 0 && cVar1 != '\0') {
        pfVar8 = *(float **)(iVar7 + 0x100);
        fVar12 = (*(float *)(iVar7 + 0x20) + *pfVar8) - *(float *)(iVar3 + 0x1c);
        fVar10 = (*(float *)(iVar7 + 0x24) + pfVar8[1]) - *(float *)(iVar3 + 0x20);
        fVar11 = (*(float *)(iVar7 + 0x28) + pfVar8[2]) - *(float *)(iVar3 + 0x24);
        fVar11 = fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11;
        fVar10 = *(float *)(*(int *)(iVar7 + 0x100) + 0xc) + fVar14;
        fn_001a4a80();
        if (fVar11 < fVar10) {
          fn_00525bd0();
          fVar10 = fVar12 * fVar15 - fVar13;
          fn_005df8f8();
          fVar10 = ABS(fVar10);
          fVar12 = -DAT_008920ec;
          bVar9 = NAN(fVar10) || NAN(fVar12);
          if (fVar10 >= fVar12) {
            bVar9 = NAN(DAT_008920ec) || NAN(fVar10);
          }
          if ((fVar10 < fVar12 || DAT_008920ec < fVar10) == bVar9) {
            fn_00683320(iVar7,0xd,0);
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  param_1[0x18] = 0x5a;
  return;
}



void fn_002ac900(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = fn_006f7a5c(DAT_008977e0);
  fVar6 = *(float *)(param_1 + 0x34) + 3.0;
  fVar5 = 45.0;
  if (fVar6 <= 45.0) {
    fVar5 = fVar6;
  }
  *(float *)(param_1 + 0x34) = fVar5;
  fn_0017fe34();
  fn_001d6600(uVar1);
  iVar2 = fn_001cf540(*(undefined4 *)(DAT_008977e0 + 0x30));
  if ((iVar2 == 0) && (*(float *)(param_1 + 0x34) == 45.0)) {
    if (*(char *)(param_1 + 0x31) == '\0') {
      iVar2 = fn_006f7a5c(DAT_008977e0);
      *(undefined1 *)(iVar2 + 0xc) = 3;
      iVar2 = fn_006f7a5c(DAT_008977e0);
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      uVar3 = *(undefined4 *)(iVar2 + 0x24);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(undefined4 *)(param_1 + 0x70) = uVar3;
      iVar2 = fn_006f7a5c(DAT_008977e0);
      uVar1 = *(undefined4 *)(iVar2 + 0x28);
      uVar3 = *(undefined4 *)(iVar2 + 0x2c);
      uVar4 = *(undefined4 *)(iVar2 + 0x30);
      *(undefined4 *)(param_1 + 0x2c) = 0x37;
      *(undefined4 *)(param_1 + 0x74) = uVar1;
      *(undefined4 *)(param_1 + 0x78) = uVar3;
      *(undefined4 *)(param_1 + 0x7c) = uVar4;
      *(undefined1 *)(param_1 + 4) = 7;
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    else {
      iVar2 = fn_0027191c(*(undefined4 *)(param_1 + 8));
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 4) = 8;
        if (*(char *)(param_1 + 0x8c) == '\0') {
          uVar1 = fn_006f7a48(DAT_008977e0);
          fn_00128744(uVar1,3);
        }
        *(undefined1 *)(param_1 + 0x8c) = 0;
        iVar2 = fn_006f7a5c(DAT_008977e0);
        *(undefined1 *)(iVar2 + 0xc) = 3;
        uVar1 = fn_006f7a5c(DAT_008977e0);
        fn_001d68cc(uVar1,5);
        (**(code **)(**(int **)(param_1 + 0x54) + 0x10))();
        fn_00274e4c(*(undefined4 *)(param_1 + 8),1);
        fn_00698fb8(DAT_008977e0,0xffffffff);
        return;
      }
    }
  }
  return;
}



void fn_002ac31c(int param_1)

{
  undefined4 uVar1;
  
  fn_00270018(*(undefined4 *)(param_1 + 8));
  uVar1 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar1,2);
  fn_00698fb8(DAT_008977e0,1);
  *(undefined1 *)(param_1 + 4) = 1;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_002abf30(int param_1,undefined4 param_2,float *param_3,undefined1 param_4)

{
  bool bVar1;
  longlong lVar2;
  float fVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 in_s0;
  undefined4 in_s1;
  float fVar17;
  float fVar18;
  
  fVar17 = *param_3;
  fVar18 = param_3[1];
  bVar1 = 0.0 <= param_3[2];
  fVar3 = param_3[2];
  if (bVar1) {
    fVar3 = fVar17;
  }
  if ((((!bVar1 || (!bVar1 || fVar3 < 0.0)) || (0x43c7ffff < (int)fVar17)) || (fVar18 < 0.0)) ||
     (0x436fffff < (int)fVar18)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  puVar15 = (undefined4 *)(param_1 + 0x20);
  puVar4 = (undefined4 *)*puVar15;
  piVar16 = (int *)(param_1 + 0x1c);
  if (puVar4 != *(undefined4 **)(param_1 + 0x24)) {
    *puVar15 = puVar4 + 7;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &DAT_00851808;
      puVar4[1] = param_2;
      puVar4[4] = in_s0;
      *(undefined1 *)(puVar4 + 5) = param_4;
      *(undefined1 *)((int)puVar4 + 0x15) = uVar8;
      puVar4[6] = in_s1;
      puVar4[2] = fVar17;
      puVar4[3] = fVar18;
    }
    return;
  }
  uVar10 = (int)*(undefined4 **)(param_1 + 0x24) - *piVar16;
  iVar11 = (int)((longlong)(int)uVar10 * -0x6db6db6d + ((ulonglong)uVar10 << 0x20) >> 0x20);
  uVar10 = (int)puVar4 - *piVar16;
  iVar14 = (int)((longlong)(int)uVar10 * -0x6db6db6d + ((ulonglong)uVar10 << 0x20) >> 0x20);
  if ((uint)((iVar14 >> 4) - (iVar14 >> 0x1f)) < (uint)((iVar11 >> 4) - (iVar11 >> 0x1f))) {
    *puVar15 = puVar4 + 7;
    puVar15 = puVar4;
    puVar7 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &DAT_00851808;
      puVar4[1] = puVar4[-6];
      puVar4[2] = puVar4[-5];
      puVar4[3] = puVar4[-4];
      puVar4[4] = puVar4[-3];
      *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(puVar4 + -2);
      *(undefined1 *)((int)puVar4 + 0x15) = *(undefined1 *)((int)puVar4 + -7);
      puVar4[6] = puVar4[-1];
    }
    while (puVar4 != puVar7 + -7) {
      puVar15[-6] = puVar7[-0xd];
      uVar12 = puVar7[-0xb];
      puVar15[-5] = puVar7[-0xc];
      puVar15[-4] = uVar12;
      puVar15[-3] = puVar7[-10];
      *(undefined1 *)(puVar15 + -2) = *(undefined1 *)(puVar7 + -9);
      *(undefined1 *)((int)puVar15 + -7) = *(undefined1 *)((int)puVar7 + -0x23);
      puVar15[-1] = puVar7[-8];
      puVar15 = puVar15 + -7;
      puVar7 = puVar7 + -7;
    }
    puVar4[1] = param_2;
    puVar4[4] = in_s0;
    *(undefined1 *)(puVar4 + 5) = param_4;
    *(undefined1 *)((int)puVar4 + 0x15) = uVar8;
    puVar4[6] = in_s1;
    puVar4[2] = fVar17;
    puVar4[3] = fVar18;
    return;
  }
  lVar2 = (longlong)(int)uVar10 * -0x6db6db6d + ((ulonglong)uVar10 << 0x20);
  iVar11 = (int)((ulonglong)lVar2 >> 0x20);
  uVar5 = (iVar11 >> 4) - (iVar11 >> 0x1f);
  uVar10 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
  if (uVar10 < uVar5 + 0x20) {
    uVar10 = uVar5 + 0x20;
  }
  puVar6 = (undefined4 *)fn_00100fc6(uVar10 * 0x1c,0,(int)lVar2);
  puVar9 = puVar6;
  for (puVar7 = (undefined4 *)*piVar16; puVar7 != puVar4; puVar7 = puVar7 + 7) {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = &DAT_00851808;
      puVar9[1] = puVar7[1];
      uVar12 = puVar7[3];
      puVar9[2] = puVar7[2];
      puVar9[3] = uVar12;
      puVar9[4] = puVar7[4];
      *(undefined1 *)(puVar9 + 5) = *(undefined1 *)(puVar7 + 5);
      *(undefined1 *)((int)puVar9 + 0x15) = *(undefined1 *)((int)puVar7 + 0x15);
      puVar9[6] = puVar7[6];
    }
    puVar9 = puVar9 + 7;
  }
  iVar11 = (int)((longlong)((int)puVar4 - *piVar16) * -0x6db6db6d +
                 ((ulonglong)(uint)((int)puVar4 - *piVar16) << 0x20) >> 0x20);
  puVar7 = puVar6 + ((iVar11 >> 4) - (iVar11 >> 0x1f)) * 7;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = &DAT_00851808;
    puVar7[1] = param_2;
    puVar7[4] = in_s0;
    *(undefined1 *)(puVar7 + 5) = param_4;
    *(undefined1 *)((int)puVar7 + 0x15) = uVar8;
    puVar7[6] = in_s1;
    puVar7[2] = fVar17;
    puVar7[3] = fVar18;
  }
  puVar9 = (undefined4 *)*puVar15;
  iVar11 = (int)((longlong)((int)puVar4 - *piVar16) * -0x6db6db6d +
                 ((ulonglong)(uint)((int)puVar4 - *piVar16) << 0x20) >> 0x20);
  puVar7 = puVar6 + ((iVar11 >> 4) - (iVar11 >> 0x1f)) * 7;
  for (; puVar4 != puVar9; puVar4 = puVar4 + 7) {
    puVar13 = puVar7 + 7;
    if (puVar13 != (undefined4 *)0x0) {
      *puVar13 = &DAT_00851808;
      puVar7[8] = puVar4[1];
      uVar12 = puVar4[3];
      puVar7[9] = puVar4[2];
      puVar7[10] = uVar12;
      puVar7[0xb] = puVar4[4];
      *(undefined1 *)(puVar7 + 0xc) = *(undefined1 *)(puVar4 + 5);
      *(undefined1 *)((int)puVar7 + 0x31) = *(undefined1 *)((int)puVar4 + 0x15);
      puVar7[0xd] = puVar4[6];
    }
    puVar7 = puVar13;
  }
  puVar4 = (undefined4 *)*piVar16;
  puVar7 = (undefined4 *)*puVar15;
  uVar5 = (int)puVar7 - (int)puVar4;
  iVar11 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
  for (; puVar4 != puVar7; puVar4 = puVar4 + 7) {
    (**(code **)*puVar4)(puVar4);
  }
  uVar5 = *(int *)(param_1 + 0x24) - *piVar16;
  iVar14 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
  fn_001008c4(*piVar16,(iVar14 >> 4) - (iVar14 >> 0x1f),0);
  *piVar16 = (int)puVar6;
  *puVar15 = puVar6 + ((iVar11 >> 4) - (iVar11 >> 0x1f)) * 7 + 7;
  *(undefined4 **)(param_1 + 0x24) = puVar6 + uVar10 * 7;
  return;
}


