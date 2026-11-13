#include "0078891c_0078891c.h"



void fn_0078891c(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  uVar1 = param_1[2] - *param_1;
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  puVar3 = (undefined4 *)param_1[1];
  uVar1 = (int)puVar3 - *param_1;
  iVar10 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 5) - (iVar2 >> 0x1f)) <= (uint)((iVar10 >> 5) - (iVar10 >> 0x1f))) {
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    uVar4 = (iVar2 >> 5) - (iVar2 >> 0x1f);
    uVar1 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar1 < uVar4 + 0x20) {
      uVar1 = uVar4 + 0x20;
    }
    puVar5 = (undefined4 *)fn_00100fc6(uVar1 * 0x38,0);
    puVar8 = puVar5;
    for (puVar3 = (undefined4 *)*param_1; puVar3 != param_2; puVar3 = puVar3 + 0xe) {
      if (puVar8 != (undefined4 *)0x0) {
        uVar11 = puVar3[1];
        uVar12 = puVar3[2];
        uVar13 = puVar3[3];
        uVar14 = puVar3[4];
        uVar15 = puVar3[5];
        uVar16 = puVar3[6];
        uVar17 = puVar3[7];
        *puVar8 = *puVar3;
        puVar8[1] = uVar11;
        puVar8[2] = uVar12;
        puVar8[3] = uVar13;
        puVar8[4] = uVar14;
        puVar8[5] = uVar15;
        puVar8[6] = uVar16;
        puVar8[7] = uVar17;
        uVar11 = puVar3[9];
        uVar12 = puVar3[10];
        uVar13 = puVar3[0xb];
        uVar14 = puVar3[0xc];
        uVar15 = puVar3[0xd];
        puVar8[8] = puVar3[8];
        puVar8[9] = uVar11;
        puVar8[10] = uVar12;
        puVar8[0xb] = uVar13;
        puVar8[0xc] = uVar14;
        puVar8[0xd] = uVar15;
      }
      puVar8 = puVar8 + 0xe;
    }
    iVar2 = (int)((longlong)(int)((int)param_2 - *param_1) * -0x6db6db6d +
                  ((ulonglong)((int)param_2 - *param_1) << 0x20) >> 0x20);
    puVar3 = puVar5 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * 0xe;
    if (puVar3 != (undefined4 *)0x0) {
      uVar11 = param_3[1];
      uVar12 = param_3[2];
      uVar13 = param_3[3];
      uVar14 = param_3[4];
      uVar15 = param_3[5];
      uVar16 = param_3[6];
      uVar17 = param_3[7];
      *puVar3 = *param_3;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3[4] = uVar14;
      puVar3[5] = uVar15;
      puVar3[6] = uVar16;
      puVar3[7] = uVar17;
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      uVar14 = param_3[0xc];
      uVar15 = param_3[0xd];
      puVar3[8] = param_3[8];
      puVar3[9] = uVar11;
      puVar3[10] = uVar12;
      puVar3[0xb] = uVar13;
      puVar3[0xc] = uVar14;
      puVar3[0xd] = uVar15;
    }
    puVar8 = (undefined4 *)param_1[1];
    iVar2 = (int)((longlong)(int)((int)param_2 - *param_1) * -0x6db6db6d +
                  ((ulonglong)((int)param_2 - *param_1) << 0x20) >> 0x20);
    puVar3 = puVar5 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * 0xe;
    for (; param_2 != puVar8; param_2 = param_2 + 0xe) {
      puVar6 = puVar3 + 0xe;
      if (puVar6 != (undefined4 *)0x0) {
        uVar11 = param_2[1];
        uVar12 = param_2[2];
        uVar13 = param_2[3];
        uVar14 = param_2[4];
        uVar15 = param_2[5];
        uVar16 = param_2[6];
        uVar17 = param_2[7];
        *puVar6 = *param_2;
        puVar3[0xf] = uVar11;
        puVar3[0x10] = uVar12;
        puVar3[0x11] = uVar13;
        puVar3[0x12] = uVar14;
        puVar3[0x13] = uVar15;
        puVar3[0x14] = uVar16;
        puVar3[0x15] = uVar17;
        uVar11 = param_2[9];
        uVar12 = param_2[10];
        uVar13 = param_2[0xb];
        uVar14 = param_2[0xc];
        uVar15 = param_2[0xd];
        puVar3[0x16] = param_2[8];
        puVar3[0x17] = uVar11;
        puVar3[0x18] = uVar12;
        puVar3[0x19] = uVar13;
        puVar3[0x1a] = uVar14;
        puVar3[0x1b] = uVar15;
      }
      puVar3 = puVar6;
    }
    uVar7 = *param_1;
    uVar9 = param_1[1];
    iVar2 = (int)((longlong)(int)(uVar9 - uVar7) * -0x6db6db6d +
                  ((ulonglong)(uVar9 - uVar7) << 0x20) >> 0x20);
    uVar4 = uVar7;
    if (uVar9 < uVar7) {
      do {
        uVar4 = uVar4 + 0x38;
      } while (uVar4 != uVar9);
    }
    iVar10 = (int)((longlong)(int)(param_1[2] - uVar7) * -0x6db6db6d +
                   ((ulonglong)(param_1[2] - uVar7) << 0x20) >> 0x20);
    fn_001008c4(uVar7,(iVar10 >> 5) - (iVar10 >> 0x1f),0);
    *param_1 = (uint)puVar5;
    param_1[1] = (uint)(puVar5 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * 0xe + 0xe);
    param_1[2] = (uint)(puVar5 + uVar1 * 0xe);
    return;
  }
  param_1[1] = (uint)(puVar3 + 0xe);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = puVar3[-0xe];
    puVar3[1] = puVar3[-0xd];
    puVar3[2] = puVar3[-0xc];
    puVar3[3] = puVar3[-0xb];
    puVar3[4] = puVar3[-10];
    puVar3[5] = puVar3[-9];
    puVar3[6] = puVar3[-8];
    puVar3[7] = puVar3[-7];
    puVar3[8] = puVar3[-6];
    puVar3[9] = puVar3[-5];
    puVar3[10] = puVar3[-4];
    puVar3[0xb] = puVar3[-3];
    puVar3[0xc] = puVar3[-2];
    puVar3[0xd] = puVar3[-1];
  }
  puVar8 = puVar3 + -0xe;
  if (param_2 < puVar8) {
    uVar1 = (int)puVar8 - (int)param_2;
    if (0 < (int)uVar1) {
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
      if (((iVar2 >> 5) - (iVar2 >> 0x1f) & 1U) != 0) {
        puVar3[-0xe] = puVar3[-0x1c];
        puVar3[-0xd] = puVar3[-0x1b];
        puVar3[-0xc] = puVar3[-0x1a];
        puVar3[-0xb] = puVar3[-0x19];
        puVar3[-10] = puVar3[-0x18];
        puVar3[-9] = puVar3[-0x17];
        puVar3[-8] = puVar3[-0x16];
        puVar3[-7] = puVar3[-0x15];
        puVar8 = puVar3 + -0x1c;
        puVar3[-6] = puVar3[-0x14];
        puVar3[-5] = puVar3[-0x13];
        puVar3[-4] = puVar3[-0x12];
        puVar3[-3] = puVar3[-0x11];
        puVar3[-2] = puVar3[-0x10];
        puVar3[-1] = puVar3[-0xf];
        puVar3 = puVar3 + -0xe;
      }
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
      for (iVar2 = (iVar2 >> 5) - (iVar2 >> 0x1f) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        uVar11 = puVar8[-0xd];
        uVar12 = puVar8[-0xc];
        uVar13 = puVar8[-0xb];
        uVar14 = puVar8[-10];
        uVar15 = puVar8[-9];
        uVar16 = puVar8[-8];
        uVar17 = puVar8[-7];
        puVar3[-0xe] = puVar8[-0xe];
        puVar3[-0xd] = uVar11;
        puVar3[-0xc] = uVar12;
        puVar3[-0xb] = uVar13;
        puVar3[-10] = uVar14;
        puVar3[-9] = uVar15;
        puVar3[-8] = uVar16;
        puVar3[-7] = uVar17;
        uVar11 = puVar8[-5];
        uVar12 = puVar8[-4];
        uVar13 = puVar8[-3];
        uVar14 = puVar8[-2];
        uVar15 = puVar8[-1];
        puVar3[-6] = puVar8[-6];
        puVar3[-5] = uVar11;
        puVar3[-4] = uVar12;
        puVar3[-3] = uVar13;
        puVar3[-2] = uVar14;
        puVar3[-1] = uVar15;
        uVar11 = puVar8[-0x1b];
        uVar12 = puVar8[-0x1a];
        uVar13 = puVar8[-0x19];
        uVar14 = puVar8[-0x18];
        uVar15 = puVar8[-0x17];
        uVar16 = puVar8[-0x16];
        uVar17 = puVar8[-0x15];
        puVar5 = puVar8 + -0x14;
        puVar3[-0x1c] = puVar8[-0x1c];
        puVar3[-0x1b] = uVar11;
        puVar3[-0x1a] = uVar12;
        puVar3[-0x19] = uVar13;
        puVar3[-0x18] = uVar14;
        puVar3[-0x17] = uVar15;
        puVar3[-0x16] = uVar16;
        puVar3[-0x15] = uVar17;
        uVar11 = puVar8[-0x13];
        uVar12 = puVar8[-0x12];
        uVar13 = puVar8[-0x11];
        uVar14 = puVar8[-0x10];
        uVar15 = puVar8[-0xf];
        puVar8 = puVar8 + -0x1c;
        puVar3[-0x14] = *puVar5;
        puVar3[-0x13] = uVar11;
        puVar3[-0x12] = uVar12;
        puVar3[-0x11] = uVar13;
        puVar3[-0x10] = uVar14;
        puVar3[-0xf] = uVar15;
        puVar3 = puVar3 + -0x1c;
      }
    }
  }
  else {
    while (param_2 != puVar8) {
      uVar11 = puVar8[-0xd];
      uVar12 = puVar8[-0xc];
      uVar13 = puVar8[-0xb];
      uVar14 = puVar8[-10];
      uVar15 = puVar8[-9];
      uVar16 = puVar8[-8];
      uVar17 = puVar8[-7];
      puVar3[-0xe] = puVar8[-0xe];
      puVar3[-0xd] = uVar11;
      puVar3[-0xc] = uVar12;
      puVar3[-0xb] = uVar13;
      puVar3[-10] = uVar14;
      puVar3[-9] = uVar15;
      puVar3[-8] = uVar16;
      puVar3[-7] = uVar17;
      uVar11 = puVar8[-5];
      uVar12 = puVar8[-4];
      uVar13 = puVar8[-3];
      uVar14 = puVar8[-2];
      uVar15 = puVar8[-1];
      puVar3[-6] = puVar8[-6];
      puVar3[-5] = uVar11;
      puVar3[-4] = uVar12;
      puVar3[-3] = uVar13;
      puVar3[-2] = uVar14;
      puVar3[-1] = uVar15;
      puVar3 = puVar3 + -0xe;
      puVar8 = puVar8 + -0xe;
    }
  }
  uVar11 = param_3[1];
  uVar12 = param_3[2];
  uVar13 = param_3[3];
  uVar14 = param_3[4];
  uVar15 = param_3[5];
  uVar16 = param_3[6];
  uVar17 = param_3[7];
  *param_2 = *param_3;
  param_2[1] = uVar11;
  param_2[2] = uVar12;
  param_2[3] = uVar13;
  param_2[4] = uVar14;
  param_2[5] = uVar15;
  param_2[6] = uVar16;
  param_2[7] = uVar17;
  uVar11 = param_3[9];
  uVar12 = param_3[10];
  uVar13 = param_3[0xb];
  uVar14 = param_3[0xc];
  uVar15 = param_3[0xd];
  param_2[8] = param_3[8];
  param_2[9] = uVar11;
  param_2[10] = uVar12;
  param_2[0xb] = uVar13;
  param_2[0xc] = uVar14;
  param_2[0xd] = uVar15;
  return;
}


