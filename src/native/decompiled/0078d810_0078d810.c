#include "0078d810_0078d810.h"



void fn_0078d810(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar1 = param_1[2] - *param_1;
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  puVar10 = (undefined4 *)param_1[1];
  uVar1 = (int)puVar10 - *param_1;
  iVar9 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) <= (uint)((iVar9 >> 4) - (iVar9 >> 0x1f))) {
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    uVar3 = (iVar2 >> 4) - (iVar2 >> 0x1f);
    uVar1 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar1 < uVar3 + 0x20) {
      uVar1 = uVar3 + 0x20;
    }
    puVar4 = (undefined4 *)fn_00100fc6(uVar1 * 0x1c,0);
    puVar7 = puVar4;
    for (puVar10 = (undefined4 *)*param_1; puVar10 != param_2; puVar10 = puVar10 + 7) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar11 = puVar10[1];
        uVar12 = puVar10[2];
        uVar13 = puVar10[3];
        uVar14 = puVar10[4];
        uVar15 = puVar10[5];
        uVar16 = puVar10[6];
        *puVar7 = *puVar10;
        puVar7[1] = uVar11;
        puVar7[2] = uVar12;
        puVar7[3] = uVar13;
        puVar7[4] = uVar14;
        puVar7[5] = uVar15;
        puVar7[6] = uVar16;
      }
      puVar7 = puVar7 + 7;
    }
    iVar2 = (int)((longlong)(int)((int)param_2 - *param_1) * -0x6db6db6d +
                  ((ulonglong)((int)param_2 - *param_1) << 0x20) >> 0x20);
    puVar10 = puVar4 + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * 7;
    if (puVar10 != (undefined4 *)0x0) {
      uVar11 = param_3[1];
      uVar12 = param_3[2];
      uVar13 = param_3[3];
      uVar14 = param_3[4];
      uVar15 = param_3[5];
      uVar16 = param_3[6];
      *puVar10 = *param_3;
      puVar10[1] = uVar11;
      puVar10[2] = uVar12;
      puVar10[3] = uVar13;
      puVar10[4] = uVar14;
      puVar10[5] = uVar15;
      puVar10[6] = uVar16;
    }
    puVar7 = (undefined4 *)param_1[1];
    iVar2 = (int)((longlong)(int)((int)param_2 - *param_1) * -0x6db6db6d +
                  ((ulonglong)((int)param_2 - *param_1) << 0x20) >> 0x20);
    puVar10 = puVar4 + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * 7;
    for (; param_2 != puVar7; param_2 = param_2 + 7) {
      puVar5 = puVar10 + 7;
      if (puVar5 != (undefined4 *)0x0) {
        uVar11 = param_2[1];
        uVar12 = param_2[2];
        uVar13 = param_2[3];
        uVar14 = param_2[4];
        uVar15 = param_2[5];
        uVar16 = param_2[6];
        *puVar5 = *param_2;
        puVar10[8] = uVar11;
        puVar10[9] = uVar12;
        puVar10[10] = uVar13;
        puVar10[0xb] = uVar14;
        puVar10[0xc] = uVar15;
        puVar10[0xd] = uVar16;
      }
      puVar10 = puVar5;
    }
    uVar6 = *param_1;
    uVar8 = param_1[1];
    iVar2 = (int)((longlong)(int)(uVar8 - uVar6) * -0x6db6db6d +
                  ((ulonglong)(uVar8 - uVar6) << 0x20) >> 0x20);
    uVar3 = uVar6;
    if (uVar8 < uVar6) {
      do {
        uVar3 = uVar3 + 0x1c;
      } while (uVar3 != uVar8);
    }
    iVar9 = (int)((longlong)(int)(param_1[2] - uVar6) * -0x6db6db6d +
                  ((ulonglong)(param_1[2] - uVar6) << 0x20) >> 0x20);
    fn_001008c4(uVar6,(iVar9 >> 4) - (iVar9 >> 0x1f),0);
    *param_1 = (uint)puVar4;
    param_1[1] = (uint)(puVar4 + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * 7 + 7);
    param_1[2] = (uint)(puVar4 + uVar1 * 7);
    return;
  }
  param_1[1] = (uint)(puVar10 + 7);
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = puVar10[-7];
    puVar10[1] = puVar10[-6];
    puVar10[2] = puVar10[-5];
    puVar10[3] = puVar10[-4];
    puVar10[4] = puVar10[-3];
    puVar10[5] = puVar10[-2];
    puVar10[6] = puVar10[-1];
  }
  puVar7 = puVar10 + -7;
  if (param_2 < puVar7) {
    uVar1 = (int)puVar7 - (int)param_2;
    if (0 < (int)uVar1) {
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
      puVar4 = puVar10;
      if (((iVar2 >> 4) - (iVar2 >> 0x1f) & 1U) != 0) {
        puVar7 = puVar10 + -0xe;
        puVar4 = puVar10 + -7;
        *puVar4 = *puVar7;
        puVar10[-6] = puVar10[-0xd];
        puVar10[-5] = puVar10[-0xc];
        puVar10[-4] = puVar10[-0xb];
        puVar10[-3] = puVar10[-10];
        puVar10[-2] = puVar10[-9];
        puVar10[-1] = puVar10[-8];
      }
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
      for (iVar2 = (iVar2 >> 4) - (iVar2 >> 0x1f) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        uVar11 = puVar7[-6];
        uVar12 = puVar7[-5];
        uVar13 = puVar7[-4];
        uVar14 = puVar7[-3];
        uVar15 = puVar7[-2];
        uVar16 = puVar7[-1];
        puVar4[-7] = puVar7[-7];
        puVar4[-6] = uVar11;
        puVar4[-5] = uVar12;
        puVar4[-4] = uVar13;
        puVar4[-3] = uVar14;
        puVar4[-2] = uVar15;
        puVar4[-1] = uVar16;
        uVar11 = puVar7[-0xd];
        uVar12 = puVar7[-0xc];
        uVar13 = puVar7[-0xb];
        uVar14 = puVar7[-10];
        uVar15 = puVar7[-9];
        uVar16 = puVar7[-8];
        puVar4[-0xe] = puVar7[-0xe];
        puVar4[-0xd] = uVar11;
        puVar4[-0xc] = uVar12;
        puVar4[-0xb] = uVar13;
        puVar4[-10] = uVar14;
        puVar4[-9] = uVar15;
        puVar4[-8] = uVar16;
        puVar7 = puVar7 + -0xe;
        puVar4 = puVar4 + -0xe;
      }
    }
  }
  else {
    while (param_2 != puVar7) {
      uVar11 = puVar7[-6];
      uVar12 = puVar7[-5];
      uVar13 = puVar7[-4];
      uVar14 = puVar7[-3];
      uVar15 = puVar7[-2];
      uVar16 = puVar7[-1];
      puVar10[-7] = puVar7[-7];
      puVar10[-6] = uVar11;
      puVar10[-5] = uVar12;
      puVar10[-4] = uVar13;
      puVar10[-3] = uVar14;
      puVar10[-2] = uVar15;
      puVar10[-1] = uVar16;
      puVar10 = puVar10 + -7;
      puVar7 = puVar7 + -7;
    }
  }
  uVar11 = param_3[1];
  uVar12 = param_3[2];
  uVar13 = param_3[3];
  uVar14 = param_3[4];
  uVar15 = param_3[5];
  uVar16 = param_3[6];
  *param_2 = *param_3;
  param_2[1] = uVar11;
  param_2[2] = uVar12;
  param_2[3] = uVar13;
  param_2[4] = uVar14;
  param_2[5] = uVar15;
  param_2[6] = uVar16;
  return;
}


