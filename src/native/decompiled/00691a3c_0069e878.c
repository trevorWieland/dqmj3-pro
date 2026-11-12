#include "00691a3c_0069e878.h"



void fn_0069e878(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



void fn_0069d3a0(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00851458;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x27) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 8;
  param_1[0x1b] = 3;
  param_1[0x1c] = &DAT_00859400;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x75) = 0;
  *(undefined1 *)((int)param_1 + 0x76) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return;
}



void fn_0069af50(int param_1,int param_2,undefined4 *param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint unaff_r5;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  uVar21 = *(undefined4 *)(param_4 + 4);
  uVar12 = unaff_r5 & 0xffffff00 | param_5 & 0xff;
  uVar18 = *param_3;
  uVar19 = param_3[1];
  uVar20 = param_3[2];
  uVar1 = fn_00102d78(param_2 + 9);
  puVar10 = (uint *)(param_1 + 0x14);
  puVar9 = *(undefined4 **)(param_1 + 0x18);
  if (puVar9 != *(undefined4 **)(param_1 + 0x1c)) {
    *(undefined4 **)(param_1 + 0x18) = puVar9 + 6;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uVar18;
      puVar9[1] = uVar19;
      puVar9[2] = uVar20;
      puVar9[3] = uVar21;
      puVar9[4] = uVar12;
      puVar9[5] = uVar1;
    }
    return;
  }
  uVar4 = (int)((int)puVar9 - *puVar10) / 0x18;
  if (uVar4 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x1c) - *puVar10) / 0x18)) {
    *(undefined4 **)(param_1 + 0x18) = puVar9 + 6;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = puVar9[-6];
      puVar9[1] = puVar9[-5];
      puVar9[2] = puVar9[-4];
      puVar9[3] = puVar9[-3];
      puVar9[4] = puVar9[-2];
      puVar9[5] = puVar9[-1];
    }
    puVar5 = puVar9 + -6;
    puVar6 = puVar9;
    if (puVar9 < puVar5) {
      if (0 < (int)puVar5 - (int)puVar9) {
        uVar4 = ((int)puVar5 - (int)puVar9) / 0x18;
        if ((uVar4 & 1) != 0) {
          puVar5 = puVar9 + -0xc;
          puVar6 = puVar9 + -6;
          *puVar6 = *puVar5;
          puVar9[-5] = puVar9[-0xb];
          puVar9[-4] = puVar9[-10];
          puVar9[-3] = puVar9[-9];
          puVar9[-2] = puVar9[-8];
          puVar9[-1] = puVar9[-7];
        }
        for (iVar8 = (int)uVar4 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
          uVar13 = puVar5[-5];
          uVar14 = puVar5[-4];
          uVar15 = puVar5[-3];
          uVar16 = puVar5[-2];
          uVar17 = puVar5[-1];
          puVar6[-6] = puVar5[-6];
          puVar6[-5] = uVar13;
          puVar6[-4] = uVar14;
          puVar6[-3] = uVar15;
          puVar6[-2] = uVar16;
          puVar6[-1] = uVar17;
          uVar13 = puVar5[-0xb];
          uVar14 = puVar5[-10];
          uVar15 = puVar5[-9];
          uVar16 = puVar5[-8];
          uVar17 = puVar5[-7];
          puVar6[-0xc] = puVar5[-0xc];
          puVar6[-0xb] = uVar13;
          puVar6[-10] = uVar14;
          puVar6[-9] = uVar15;
          puVar6[-8] = uVar16;
          puVar6[-7] = uVar17;
          puVar6 = puVar6 + -0xc;
          puVar5 = puVar5 + -0xc;
        }
      }
    }
    else {
      while (puVar9 != puVar5) {
        uVar13 = puVar5[-5];
        uVar14 = puVar5[-4];
        uVar15 = puVar5[-3];
        uVar16 = puVar5[-2];
        uVar17 = puVar5[-1];
        puVar6[-6] = puVar5[-6];
        puVar6[-5] = uVar13;
        puVar6[-4] = uVar14;
        puVar6[-3] = uVar15;
        puVar6[-2] = uVar16;
        puVar6[-1] = uVar17;
        puVar6 = puVar6 + -6;
        puVar5 = puVar5 + -6;
      }
    }
    *puVar9 = uVar18;
    puVar9[1] = uVar19;
    puVar9[2] = uVar20;
    puVar9[3] = uVar21;
    puVar9[4] = uVar12;
    puVar9[5] = uVar1;
    return;
  }
  uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  if (uVar11 < uVar4 + 0x20) {
    uVar11 = uVar4 + 0x20;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar11 * 0x18,0);
  puVar6 = puVar2;
  for (puVar5 = (undefined4 *)*puVar10; puVar5 != puVar9; puVar5 = puVar5 + 6) {
    if (puVar6 != (undefined4 *)0x0) {
      uVar13 = puVar5[1];
      uVar14 = puVar5[2];
      uVar15 = puVar5[3];
      uVar16 = puVar5[4];
      uVar17 = puVar5[5];
      *puVar6 = *puVar5;
      puVar6[1] = uVar13;
      puVar6[2] = uVar14;
      puVar6[3] = uVar15;
      puVar6[4] = uVar16;
      puVar6[5] = uVar17;
    }
    puVar6 = puVar6 + 6;
  }
  puVar5 = puVar2 + ((int)((int)puVar9 - *puVar10) / 0x18) * 6;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = uVar18;
    puVar5[1] = uVar19;
    puVar5[2] = uVar20;
    puVar5[3] = uVar21;
    puVar5[4] = uVar12;
    puVar5[5] = uVar1;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  puVar5 = puVar2 + ((int)((int)puVar9 - *puVar10) / 0x18) * 6;
  for (; puVar9 != puVar6; puVar9 = puVar9 + 6) {
    puVar3 = puVar5 + 6;
    if (puVar3 != (undefined4 *)0x0) {
      uVar1 = puVar9[1];
      uVar18 = puVar9[2];
      uVar19 = puVar9[3];
      uVar20 = puVar9[4];
      uVar21 = puVar9[5];
      *puVar3 = *puVar9;
      puVar5[7] = uVar1;
      puVar5[8] = uVar18;
      puVar5[9] = uVar19;
      puVar5[10] = uVar20;
      puVar5[0xb] = uVar21;
    }
    puVar5 = puVar3;
  }
  uVar4 = *puVar10;
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar12 = uVar4;
  if (uVar7 < uVar4) {
    do {
      uVar12 = uVar12 + 0x18;
    } while (uVar12 != uVar7);
  }
  fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x1c) - uVar4) / 0x18,0);
  *puVar10 = (uint)puVar2;
  *(undefined4 **)(param_1 + 0x18) = puVar2 + ((int)(uVar7 - uVar4) / 0x18) * 6 + 6;
  *(undefined4 **)(param_1 + 0x1c) = puVar2 + uVar11 * 6;
  return;
}



void fn_00699ba8(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x16e) < '\x03') {
    fn_00694420(param_1);
  }
  if (*(char *)(param_1 + 0x16e) < '\x02') {
    fn_006994e8(param_1);
  }
  if (*(char *)(param_1 + 0x16e) < '\x01') {
    fn_002b040c(*(undefined4 *)(param_1 + 4));
    if ((*(code **)(param_1 + 0x1c4) != (code *)0x0) &&
       ((**(code **)(param_1 + 0x1c4))(), *(char *)(param_1 + 0x1a2) != '\0')) {
      *(undefined4 *)(param_1 + 0x1c4) = 0;
      *(undefined1 *)(param_1 + 0x1a2) = 0;
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  if (*(char *)(param_1 + 0x16e) < '\0') {
    fn_0069531c(param_1);
  }
  *(undefined1 *)(param_1 + 0x16d) = *(undefined1 *)(param_1 + 0x16e);
  *(undefined1 *)(param_1 + 0x16e) = 0xff;
  if (param_2 == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x16f) = uVar1;
  return;
}



void fn_00696994(int param_1)

{
  fn_001f748c(*(undefined4 *)(param_1 + 0x28));
  fn_00128744(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x80) * 4),6
              );
  return;
}



void fn_00693c24(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_1c [16];
  
  (**(code **)(*param_1 + 0x134))(param_1);
  iVar1 = fn_001da9e0(param_1,auStack_1c,0,param_2,0);
  param_1[0x4c] = iVar1;
  (**(code **)(*param_1 + 0x10))(param_1,auStack_1c);
  iVar1 = (**(code **)(*param_1 + 0x134))(param_1);
  if (iVar1 != 0) {
    fn_006a9eb4(param_1,auStack_1c);
  }
  return;
}



void fn_00692eac(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00851244;
  return;
}



void fn_00692e98(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_00851244;
  return;
}



void fn_00692b88(undefined4 *param_1)

{
  *param_1 = &DAT_00851234;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0xffffffff;
  param_1[3] = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  return;
}



undefined4 fn_00691a3c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((*(char *)(param_3 + 1) != '\r') && (iVar1 = fn_001667f0(param_4), iVar1 != 0)) {
    uVar2 = fn_00654ee8(param_1);
    fn_002697b4(uVar2,*(undefined4 *)(param_3 + 0xf0),*(undefined4 *)(param_3 + 0xe8),
                 *(undefined4 *)(param_3 + 0xec),*(undefined4 *)(param_3 + 0xf0),
                 *(undefined4 *)(param_3 + 0xf4),*(undefined4 *)(param_3 + 0xf8),
                 *(undefined4 *)(param_3 + 0xfc));
    iVar1 = fn_0025fe24();
    if (iVar1 == 0x23e) {
      uVar2 = 1;
      bVar3 = *(char *)(DAT_008994a4 + param_2 * 0x60 + 10) == 'D';
      if (!bVar3) {
        param_2 = param_2 + -0x19b;
        bVar3 = param_2 == 0;
      }
      if ((!bVar3) && (param_2 != 8)) {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 0;
}


