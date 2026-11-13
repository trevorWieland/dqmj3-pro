#include "00788c1c_00788fb0.h"



void fn_00788fb0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 1;
      } while (uVar1 != uVar3);
    }
    param_1[1] = uVar2;
  }
  return;
}



void fn_00788f48(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)param_1[1];
  puVar3 = (undefined4 *)*param_1;
  puVar1 = puVar3;
  if (puVar3 != puVar2) {
    do {
      (**(code **)*puVar1)(puVar1);
      puVar1 = puVar1 + 0x18;
    } while (puVar1 != puVar2);
    param_1[1] = param_1[1] + (((int)puVar2 - (int)puVar3) / 0x60) * -0x60;
  }
  return;
}



void fn_00788c1c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  
  puVar5 = (undefined4 *)param_1[1];
  if (puVar5 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar5 + 0xe);
    if (puVar5 != (undefined4 *)0x0) {
      uVar7 = param_2[1];
      uVar11 = param_2[2];
      uVar12 = param_2[3];
      uVar13 = param_2[4];
      uVar14 = param_2[5];
      uVar15 = param_2[6];
      uVar16 = param_2[7];
      *puVar5 = *param_2;
      puVar5[1] = uVar7;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      puVar5[4] = uVar13;
      puVar5[5] = uVar14;
      puVar5[6] = uVar15;
      puVar5[7] = uVar16;
      uVar7 = param_2[9];
      uVar11 = param_2[10];
      uVar12 = param_2[0xb];
      uVar13 = param_2[0xc];
      uVar14 = param_2[0xd];
      puVar5[8] = param_2[8];
      puVar5[9] = uVar7;
      puVar5[10] = uVar11;
      puVar5[0xb] = uVar12;
      puVar5[0xc] = uVar13;
      puVar5[0xd] = uVar14;
    }
    return;
  }
  uVar8 = (int)param_1[2] - *param_1;
  iVar9 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
  uVar8 = (int)puVar5 - *param_1;
  iVar17 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
  if ((uint)((iVar17 >> 5) - (iVar17 >> 0x1f)) < (uint)((iVar9 >> 5) - (iVar9 >> 0x1f))) {
    param_1[1] = (uint)(puVar5 + 0xe);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = puVar5[-0xe];
      puVar5[1] = puVar5[-0xd];
      puVar5[2] = puVar5[-0xc];
      puVar5[3] = puVar5[-0xb];
      puVar5[4] = puVar5[-10];
      puVar5[5] = puVar5[-9];
      puVar5[6] = puVar5[-8];
      puVar5[7] = puVar5[-7];
      puVar5[8] = puVar5[-6];
      puVar5[9] = puVar5[-5];
      puVar5[10] = puVar5[-4];
      puVar5[0xb] = puVar5[-3];
      puVar5[0xc] = puVar5[-2];
      puVar5[0xd] = puVar5[-1];
    }
    puVar3 = puVar5 + -0xe;
    puVar10 = puVar5;
    if (puVar5 < puVar3) {
      uVar8 = (int)puVar3 - (int)puVar5;
      if (0 < (int)uVar8) {
        iVar9 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
        if (((iVar9 >> 5) - (iVar9 >> 0x1f) & 1U) != 0) {
          puVar5[-0xe] = puVar5[-0x1c];
          puVar5[-0xd] = puVar5[-0x1b];
          puVar5[-0xc] = puVar5[-0x1a];
          puVar5[-0xb] = puVar5[-0x19];
          puVar5[-10] = puVar5[-0x18];
          puVar5[-9] = puVar5[-0x17];
          puVar5[-8] = puVar5[-0x16];
          puVar5[-7] = puVar5[-0x15];
          puVar3 = puVar5 + -0x1c;
          puVar5[-6] = puVar5[-0x14];
          puVar5[-5] = puVar5[-0x13];
          puVar5[-4] = puVar5[-0x12];
          puVar5[-3] = puVar5[-0x11];
          puVar5[-2] = puVar5[-0x10];
          puVar5[-1] = puVar5[-0xf];
          puVar10 = puVar5 + -0xe;
        }
        iVar9 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
        for (iVar9 = (iVar9 >> 5) - (iVar9 >> 0x1f) >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
          uVar7 = puVar3[-0xd];
          uVar11 = puVar3[-0xc];
          uVar12 = puVar3[-0xb];
          uVar13 = puVar3[-10];
          uVar14 = puVar3[-9];
          uVar15 = puVar3[-8];
          uVar16 = puVar3[-7];
          puVar10[-0xe] = puVar3[-0xe];
          puVar10[-0xd] = uVar7;
          puVar10[-0xc] = uVar11;
          puVar10[-0xb] = uVar12;
          puVar10[-10] = uVar13;
          puVar10[-9] = uVar14;
          puVar10[-8] = uVar15;
          puVar10[-7] = uVar16;
          uVar7 = puVar3[-5];
          uVar11 = puVar3[-4];
          uVar12 = puVar3[-3];
          uVar13 = puVar3[-2];
          uVar14 = puVar3[-1];
          puVar10[-6] = puVar3[-6];
          puVar10[-5] = uVar7;
          puVar10[-4] = uVar11;
          puVar10[-3] = uVar12;
          puVar10[-2] = uVar13;
          puVar10[-1] = uVar14;
          uVar7 = puVar3[-0x1b];
          uVar11 = puVar3[-0x1a];
          uVar12 = puVar3[-0x19];
          uVar13 = puVar3[-0x18];
          uVar14 = puVar3[-0x17];
          uVar15 = puVar3[-0x16];
          uVar16 = puVar3[-0x15];
          puVar2 = puVar3 + -0x14;
          puVar10[-0x1c] = puVar3[-0x1c];
          puVar10[-0x1b] = uVar7;
          puVar10[-0x1a] = uVar11;
          puVar10[-0x19] = uVar12;
          puVar10[-0x18] = uVar13;
          puVar10[-0x17] = uVar14;
          puVar10[-0x16] = uVar15;
          puVar10[-0x15] = uVar16;
          uVar7 = puVar3[-0x13];
          uVar11 = puVar3[-0x12];
          uVar12 = puVar3[-0x11];
          uVar13 = puVar3[-0x10];
          uVar14 = puVar3[-0xf];
          puVar3 = puVar3 + -0x1c;
          puVar10[-0x14] = *puVar2;
          puVar10[-0x13] = uVar7;
          puVar10[-0x12] = uVar11;
          puVar10[-0x11] = uVar12;
          puVar10[-0x10] = uVar13;
          puVar10[-0xf] = uVar14;
          puVar10 = puVar10 + -0x1c;
        }
      }
    }
    else {
      while (puVar5 != puVar3) {
        uVar7 = puVar3[-0xd];
        uVar11 = puVar3[-0xc];
        uVar12 = puVar3[-0xb];
        uVar13 = puVar3[-10];
        uVar14 = puVar3[-9];
        uVar15 = puVar3[-8];
        uVar16 = puVar3[-7];
        puVar10[-0xe] = puVar3[-0xe];
        puVar10[-0xd] = uVar7;
        puVar10[-0xc] = uVar11;
        puVar10[-0xb] = uVar12;
        puVar10[-10] = uVar13;
        puVar10[-9] = uVar14;
        puVar10[-8] = uVar15;
        puVar10[-7] = uVar16;
        uVar7 = puVar3[-5];
        uVar11 = puVar3[-4];
        uVar12 = puVar3[-3];
        uVar13 = puVar3[-2];
        uVar14 = puVar3[-1];
        puVar10[-6] = puVar3[-6];
        puVar10[-5] = uVar7;
        puVar10[-4] = uVar11;
        puVar10[-3] = uVar12;
        puVar10[-2] = uVar13;
        puVar10[-1] = uVar14;
        puVar10 = puVar10 + -0xe;
        puVar3 = puVar3 + -0xe;
      }
    }
    uVar7 = param_2[1];
    uVar11 = param_2[2];
    uVar12 = param_2[3];
    uVar13 = param_2[4];
    uVar14 = param_2[5];
    uVar15 = param_2[6];
    uVar16 = param_2[7];
    *puVar5 = *param_2;
    puVar5[1] = uVar7;
    puVar5[2] = uVar11;
    puVar5[3] = uVar12;
    puVar5[4] = uVar13;
    puVar5[5] = uVar14;
    puVar5[6] = uVar15;
    puVar5[7] = uVar16;
    uVar7 = param_2[9];
    uVar11 = param_2[10];
    uVar12 = param_2[0xb];
    uVar13 = param_2[0xc];
    uVar14 = param_2[0xd];
    puVar5[8] = param_2[8];
    puVar5[9] = uVar7;
    puVar5[10] = uVar11;
    puVar5[0xb] = uVar12;
    puVar5[0xc] = uVar13;
    puVar5[0xd] = uVar14;
    return;
  }
  iVar9 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
  uVar1 = (iVar9 >> 5) - (iVar9 >> 0x1f);
  uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar8 < uVar1 + 0x20) {
    uVar8 = uVar1 + 0x20;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar8 * 0x38,0);
  puVar10 = puVar2;
  for (puVar3 = (undefined4 *)*param_1; puVar3 != puVar5; puVar3 = puVar3 + 0xe) {
    if (puVar10 != (undefined4 *)0x0) {
      uVar7 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      uVar13 = puVar3[4];
      uVar14 = puVar3[5];
      uVar15 = puVar3[6];
      uVar16 = puVar3[7];
      *puVar10 = *puVar3;
      puVar10[1] = uVar7;
      puVar10[2] = uVar11;
      puVar10[3] = uVar12;
      puVar10[4] = uVar13;
      puVar10[5] = uVar14;
      puVar10[6] = uVar15;
      puVar10[7] = uVar16;
      uVar7 = puVar3[9];
      uVar11 = puVar3[10];
      uVar12 = puVar3[0xb];
      uVar13 = puVar3[0xc];
      uVar14 = puVar3[0xd];
      puVar10[8] = puVar3[8];
      puVar10[9] = uVar7;
      puVar10[10] = uVar11;
      puVar10[0xb] = uVar12;
      puVar10[0xc] = uVar13;
      puVar10[0xd] = uVar14;
    }
    puVar10 = puVar10 + 0xe;
  }
  iVar9 = (int)((longlong)(int)((int)puVar5 - *param_1) * -0x6db6db6d +
                ((ulonglong)((int)puVar5 - *param_1) << 0x20) >> 0x20);
  puVar3 = puVar2 + ((iVar9 >> 5) - (iVar9 >> 0x1f)) * 0xe;
  if (puVar3 != (undefined4 *)0x0) {
    uVar7 = param_2[1];
    uVar11 = param_2[2];
    uVar12 = param_2[3];
    uVar13 = param_2[4];
    uVar14 = param_2[5];
    uVar15 = param_2[6];
    uVar16 = param_2[7];
    *puVar3 = *param_2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar11;
    puVar3[3] = uVar12;
    puVar3[4] = uVar13;
    puVar3[5] = uVar14;
    puVar3[6] = uVar15;
    puVar3[7] = uVar16;
    uVar7 = param_2[9];
    uVar11 = param_2[10];
    uVar12 = param_2[0xb];
    uVar13 = param_2[0xc];
    uVar14 = param_2[0xd];
    puVar3[8] = param_2[8];
    puVar3[9] = uVar7;
    puVar3[10] = uVar11;
    puVar3[0xb] = uVar12;
    puVar3[0xc] = uVar13;
    puVar3[0xd] = uVar14;
  }
  puVar10 = (undefined4 *)param_1[1];
  iVar9 = (int)((longlong)(int)((int)puVar5 - *param_1) * -0x6db6db6d +
                ((ulonglong)((int)puVar5 - *param_1) << 0x20) >> 0x20);
  puVar3 = puVar2 + ((iVar9 >> 5) - (iVar9 >> 0x1f)) * 0xe;
  for (; puVar5 != puVar10; puVar5 = puVar5 + 0xe) {
    if (puVar3 + 0xe != (undefined4 *)0x0) {
      uVar7 = puVar5[1];
      uVar11 = puVar5[2];
      uVar12 = puVar5[3];
      uVar13 = puVar5[4];
      uVar14 = puVar5[5];
      uVar15 = puVar5[6];
      uVar16 = puVar5[7];
      puVar3[0xe] = *puVar5;
      puVar3[0xf] = uVar7;
      puVar3[0x10] = uVar11;
      puVar3[0x11] = uVar12;
      puVar3[0x12] = uVar13;
      puVar3[0x13] = uVar14;
      puVar3[0x14] = uVar15;
      puVar3[0x15] = uVar16;
      uVar7 = puVar5[9];
      uVar11 = puVar5[10];
      uVar12 = puVar5[0xb];
      uVar13 = puVar5[0xc];
      uVar14 = puVar5[0xd];
      puVar3[0x16] = puVar5[8];
      puVar3[0x17] = uVar7;
      puVar3[0x18] = uVar11;
      puVar3[0x19] = uVar12;
      puVar3[0x1a] = uVar13;
      puVar3[0x1b] = uVar14;
    }
    puVar3 = puVar3 + 0xe;
  }
  uVar4 = *param_1;
  uVar6 = param_1[1];
  iVar9 = (int)((longlong)(int)(uVar6 - uVar4) * -0x6db6db6d + ((ulonglong)(uVar6 - uVar4) << 0x20)
               >> 0x20);
  uVar1 = uVar4;
  if (uVar6 < uVar4) {
    do {
      uVar1 = uVar1 + 0x38;
    } while (uVar1 != uVar6);
  }
  iVar17 = (int)((longlong)(int)(param_1[2] - uVar4) * -0x6db6db6d +
                 ((ulonglong)(param_1[2] - uVar4) << 0x20) >> 0x20);
  fn_001008c4(uVar4,(iVar17 >> 5) - (iVar17 >> 0x1f),0);
  *param_1 = (uint)puVar2;
  param_1[1] = (uint)(puVar2 + ((iVar9 >> 5) - (iVar9 >> 0x1f)) * 0xe + 0xe);
  param_1[2] = (uint)(puVar2 + uVar8 * 0xe);
  return;
}


