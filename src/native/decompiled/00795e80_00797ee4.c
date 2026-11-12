#include "00795e80_00797ee4.h"



void fn_00797ee4(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar9 = param_1 + 1;
  puVar1 = (undefined4 *)*puVar9;
  uVar4 = (int)((int)puVar1 - *param_1) >> 2;
  if ((uint)((int)(param_1[2] - *param_1) >> 2) <= uVar4) {
    uVar10 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar10 < uVar4 + 0x20) {
      uVar10 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar6 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar1;
      }
      puVar6 = puVar6 + 1;
    }
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar6 = (undefined4 *)*puVar9;
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    for (; param_2 != puVar6; param_2 = param_2 + 1) {
      puVar1 = puVar1 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_2;
      }
    }
    uVar3 = *param_1;
    uVar7 = *puVar9;
    uVar4 = uVar3;
    if (uVar7 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar7);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
    param_1[2] = (uint)(puVar2 + uVar10);
    *puVar9 = (uint)(puVar2 + ((int)(uVar7 - uVar3) >> 2) + 1);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar9 = (uint)(puVar1 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-1];
  }
  puVar6 = puVar1 + -1;
  if (param_2 < puVar6) {
    if (0 < (int)puVar6 - (int)param_2) {
      iVar8 = (int)puVar6 - (int)param_2 >> 2;
      iVar5 = 0;
      do {
        iVar8 = iVar8 + -1;
        puVar1[iVar5 + -1] = puVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    while (param_2 != puVar6) {
      puVar6 = puVar6 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar6;
    }
  }
  *param_2 = *param_3;
  return;
}



void fn_00796494(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  
  puVar9 = (undefined4 *)param_1[1];
  if (puVar9 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar9 + 2);
    if (puVar9 != (undefined4 *)0x0) {
      uVar10 = param_2[1];
      *puVar9 = *param_2;
      puVar9[1] = uVar10;
    }
    return;
  }
  uVar4 = (int)((int)puVar9 - *param_1) >> 3;
  if (uVar4 < (uint)((int)((int)param_1[2] - *param_1) >> 3)) {
    param_1[1] = (uint)(puVar9 + 2);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = puVar9[-2];
      puVar9[1] = puVar9[-1];
    }
    puVar6 = puVar9 + -2;
    puVar7 = puVar9;
    if (puVar9 < puVar6) {
      iVar5 = (int)puVar6 - (int)puVar9;
      if (0 < iVar5) {
        if (iVar5 * 0x10000000 < 0) {
          puVar6 = puVar9 + -4;
          puVar7 = puVar9 + -2;
          *puVar7 = *puVar6;
          puVar9[-1] = puVar9[-3];
        }
        for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar10 = puVar6[-1];
          puVar7[-2] = puVar6[-2];
          puVar7[-1] = uVar10;
          uVar10 = puVar6[-3];
          puVar7[-4] = puVar6[-4];
          puVar7[-3] = uVar10;
          puVar6 = puVar6 + -4;
          puVar7 = puVar7 + -4;
        }
      }
    }
    else {
      while (puVar9 != puVar6) {
        uVar10 = puVar6[-1];
        puVar7[-2] = puVar6[-2];
        puVar7[-1] = uVar10;
        puVar7 = puVar7 + -2;
        puVar6 = puVar6 + -2;
      }
    }
    uVar10 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar10;
    return;
  }
  uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  if (uVar11 < uVar4 + 0x20) {
    uVar11 = uVar4 + 0x20;
  }
  puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 3,0);
  puVar7 = puVar1;
  for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar9; puVar6 = puVar6 + 2) {
    if (puVar7 != (undefined4 *)0x0) {
      uVar10 = puVar6[1];
      *puVar7 = *puVar6;
      puVar7[1] = uVar10;
    }
    puVar7 = puVar7 + 2;
  }
  puVar6 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffff8) + (int)puVar1);
  if (puVar6 != (undefined4 *)0x0) {
    uVar10 = param_2[1];
    *puVar6 = *param_2;
    puVar6[1] = uVar10;
  }
  puVar7 = (undefined4 *)param_1[1];
  puVar6 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffff8) + (int)puVar1);
  for (; puVar9 != puVar7; puVar9 = puVar9 + 2) {
    puVar2 = puVar6 + 2;
    if (puVar2 != (undefined4 *)0x0) {
      uVar10 = puVar9[1];
      *puVar2 = *puVar9;
      puVar6[3] = uVar10;
    }
    puVar6 = puVar2;
  }
  uVar3 = *param_1;
  uVar8 = param_1[1];
  uVar4 = uVar3;
  if (uVar8 < uVar3) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != uVar8);
  }
  fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 3,0);
  param_1[2] = (uint)(puVar1 + uVar11 * 2);
  param_1[1] = (uint)(puVar1 + ((int)(uVar8 - uVar3) >> 3) * 2 + 2);
  *param_1 = (uint)puVar1;
  return;
}



void fn_00795e80(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar4 + 7);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_2;
      uVar7 = param_2[2];
      puVar4[1] = param_2[1];
      puVar4[2] = uVar7;
      puVar4[3] = param_2[3];
      puVar4[4] = param_2[4];
      puVar4[5] = param_2[5];
      puVar4[6] = param_2[6];
    }
    return;
  }
  uVar8 = (int)param_1[2] - *param_1;
  iVar9 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
  uVar8 = (int)puVar4 - *param_1;
  iVar1 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
  if ((uint)((iVar1 >> 4) - (iVar1 >> 0x1f)) < (uint)((iVar9 >> 4) - (iVar9 >> 0x1f))) {
    param_1[1] = (uint)(puVar4 + 7);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined1 *)puVar4 = *(undefined1 *)(puVar4 + -7);
      puVar4[1] = puVar4[-6];
      puVar4[2] = puVar4[-5];
      puVar4[3] = puVar4[-4];
      puVar4[4] = puVar4[-3];
      puVar4[5] = puVar4[-2];
      puVar4[6] = puVar4[-1];
    }
    puVar5 = puVar4 + -7;
    puVar12 = puVar4;
    if (puVar4 < puVar5) {
      uVar8 = (int)puVar5 - (int)puVar4;
      if (0 < (int)uVar8) {
        iVar1 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
        if (((iVar1 >> 4) - (iVar1 >> 0x1f) & 1U) != 0) {
          puVar5 = puVar4 + -0xe;
          puVar12 = puVar4 + -7;
          *puVar12 = *puVar5;
          puVar4[-6] = puVar4[-0xd];
          puVar4[-5] = puVar4[-0xc];
          puVar4[-4] = puVar4[-0xb];
          puVar4[-3] = puVar4[-10];
          puVar4[-2] = puVar4[-9];
          puVar4[-1] = puVar4[-8];
        }
        iVar1 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
        for (iVar1 = (iVar1 >> 4) - (iVar1 >> 0x1f) >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
          uVar7 = puVar5[-6];
          uVar13 = puVar5[-5];
          uVar14 = puVar5[-4];
          uVar15 = puVar5[-3];
          uVar16 = puVar5[-2];
          uVar17 = puVar5[-1];
          puVar12[-7] = puVar5[-7];
          puVar12[-6] = uVar7;
          puVar12[-5] = uVar13;
          puVar12[-4] = uVar14;
          puVar12[-3] = uVar15;
          puVar12[-2] = uVar16;
          puVar12[-1] = uVar17;
          uVar7 = puVar5[-0xd];
          uVar13 = puVar5[-0xc];
          uVar14 = puVar5[-0xb];
          uVar15 = puVar5[-10];
          uVar16 = puVar5[-9];
          uVar17 = puVar5[-8];
          puVar12[-0xe] = puVar5[-0xe];
          puVar12[-0xd] = uVar7;
          puVar12[-0xc] = uVar13;
          puVar12[-0xb] = uVar14;
          puVar12[-10] = uVar15;
          puVar12[-9] = uVar16;
          puVar12[-8] = uVar17;
          puVar5 = puVar5 + -0xe;
          puVar12 = puVar12 + -0xe;
        }
      }
    }
    else {
      while (puVar4 != puVar5) {
        uVar7 = puVar5[-6];
        uVar13 = puVar5[-5];
        uVar14 = puVar5[-4];
        uVar15 = puVar5[-3];
        uVar16 = puVar5[-2];
        uVar17 = puVar5[-1];
        puVar12[-7] = puVar5[-7];
        puVar12[-6] = uVar7;
        puVar12[-5] = uVar13;
        puVar12[-4] = uVar14;
        puVar12[-3] = uVar15;
        puVar12[-2] = uVar16;
        puVar12[-1] = uVar17;
        puVar12 = puVar12 + -7;
        puVar5 = puVar5 + -7;
      }
    }
    uVar7 = param_2[1];
    uVar13 = param_2[2];
    uVar14 = param_2[3];
    uVar15 = param_2[4];
    uVar16 = param_2[5];
    uVar17 = param_2[6];
    *puVar4 = *param_2;
    puVar4[1] = uVar7;
    puVar4[2] = uVar13;
    puVar4[3] = uVar14;
    puVar4[4] = uVar15;
    puVar4[5] = uVar16;
    puVar4[6] = uVar17;
    return;
  }
  iVar1 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
  uVar2 = (iVar1 >> 4) - (iVar1 >> 0x1f);
  uVar8 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
  if (uVar8 < uVar2 + 0x20) {
    uVar8 = uVar2 + 0x20;
  }
  puVar3 = (undefined1 *)fn_00100fc6(uVar8 * 0x1c,0);
  puVar10 = puVar3;
  for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar4; puVar5 = puVar5 + 7) {
    if (puVar10 != (undefined1 *)0x0) {
      *puVar10 = *(undefined1 *)puVar5;
      uVar7 = puVar5[2];
      *(undefined4 *)(puVar10 + 4) = puVar5[1];
      *(undefined4 *)(puVar10 + 8) = uVar7;
      *(undefined4 *)(puVar10 + 0xc) = puVar5[3];
      *(undefined4 *)(puVar10 + 0x10) = puVar5[4];
      *(undefined4 *)(puVar10 + 0x14) = puVar5[5];
      *(undefined4 *)(puVar10 + 0x18) = puVar5[6];
    }
    puVar10 = puVar10 + 0x1c;
  }
  iVar1 = (int)((longlong)(int)((int)puVar4 - *param_1) * -0x6db6db6d +
                ((ulonglong)((int)puVar4 - *param_1) << 0x20) >> 0x20);
  puVar10 = puVar3 + ((iVar1 >> 4) - (iVar1 >> 0x1f)) * 0x1c;
  if (puVar10 != (undefined1 *)0x0) {
    *puVar10 = *(undefined1 *)param_2;
    uVar7 = param_2[2];
    *(undefined4 *)(puVar10 + 4) = param_2[1];
    *(undefined4 *)(puVar10 + 8) = uVar7;
    *(undefined4 *)(puVar10 + 0xc) = param_2[3];
    *(undefined4 *)(puVar10 + 0x10) = param_2[4];
    *(undefined4 *)(puVar10 + 0x14) = param_2[5];
    *(undefined4 *)(puVar10 + 0x18) = param_2[6];
  }
  puVar5 = (undefined4 *)param_1[1];
  iVar1 = (int)((longlong)(int)((int)puVar4 - *param_1) * -0x6db6db6d +
                ((ulonglong)((int)puVar4 - *param_1) << 0x20) >> 0x20);
  puVar10 = puVar3 + ((iVar1 >> 4) - (iVar1 >> 0x1f)) * 0x1c;
  for (; puVar4 != puVar5; puVar4 = puVar4 + 7) {
    if (puVar10 + 0x1c != (undefined1 *)0x0) {
      puVar10[0x1c] = *(undefined1 *)puVar4;
      uVar7 = puVar4[2];
      *(undefined4 *)(puVar10 + 0x20) = puVar4[1];
      *(undefined4 *)(puVar10 + 0x24) = uVar7;
      *(undefined4 *)(puVar10 + 0x28) = puVar4[3];
      *(undefined4 *)(puVar10 + 0x2c) = puVar4[4];
      *(undefined4 *)(puVar10 + 0x30) = puVar4[5];
      *(undefined4 *)(puVar10 + 0x34) = puVar4[6];
    }
    puVar10 = puVar10 + 0x1c;
  }
  uVar6 = param_1[1];
  uVar11 = *param_1;
  iVar1 = (int)((longlong)(int)(uVar6 - uVar11) * -0x6db6db6d +
                ((ulonglong)(uVar6 - uVar11) << 0x20) >> 0x20);
  uVar2 = uVar11;
  if (uVar6 <= uVar11) {
    for (; uVar2 != uVar6; uVar2 = uVar2 + 0x1c) {
    }
  }
  iVar9 = (int)((longlong)(int)(param_1[2] - uVar11) * -0x6db6db6d +
                ((ulonglong)(param_1[2] - uVar11) << 0x20) >> 0x20);
  fn_001008c4(uVar11,(iVar9 >> 4) - (iVar9 >> 0x1f),0);
  *param_1 = (uint)puVar3;
  param_1[1] = (uint)(puVar3 + ((iVar1 >> 4) - (iVar1 >> 0x1f)) * 0x1c + 0x1c);
  param_1[2] = (uint)(puVar3 + uVar8 * 0x1c);
  return;
}


