#include "007914f4_00791cc8.h"



void fn_00791cc8(int *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  
  puVar7 = (undefined1 *)param_1[1];
  if (puVar7 != (undefined1 *)param_1[2]) {
    param_1[1] = (int)(puVar7 + 0x18);
    if (puVar7 != (undefined1 *)0x0) {
      fn_004246b8(puVar7);
    }
    return;
  }
  uVar6 = ((int)puVar7 - *param_1) / 0x18;
  if (uVar6 < (uint)((param_1[2] - *param_1) / 0x18)) {
    param_1[1] = (int)(puVar7 + 0x18);
    if (puVar7 != (undefined1 *)0x0) {
      fn_004246b8(puVar7,puVar7 + -0x18);
    }
    puVar10 = puVar7;
    puVar1 = puVar7 + -0x18;
    while (puVar7 != puVar1) {
      puVar10[-0x18] = puVar1[-0x18];
      *(undefined4 *)(puVar10 + -0x14) = *(undefined4 *)(puVar1 + -0x14);
      fn_0079823c(puVar10 + -0x10,puVar1 + -0x10);
      puVar10[-4] = puVar1[-4];
      puVar10 = puVar10 + -0x18;
      puVar1 = puVar1 + -0x18;
    }
    *puVar7 = *param_2;
    *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_2 + 4);
    fn_0079823c(puVar7 + 8,param_2 + 8);
    puVar7[0x14] = param_2[0x14];
    return;
  }
  uVar8 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
  if (uVar8 < uVar6 + 0x20) {
    uVar8 = uVar6 + 0x20;
  }
  iVar2 = fn_00100fc6(uVar8 * 0x18,0);
  iVar3 = iVar2;
  for (puVar10 = (undefined1 *)*param_1; puVar10 != puVar7; puVar10 = puVar10 + 0x18) {
    if (iVar3 != 0) {
      fn_004246b8(iVar3,puVar10);
    }
    iVar3 = iVar3 + 0x18;
  }
  iVar3 = iVar2 + (((int)puVar7 - *param_1) / 0x18) * 0x18;
  if (iVar3 != 0) {
    fn_004246b8(iVar3,param_2);
  }
  puVar10 = (undefined1 *)param_1[1];
  iVar3 = iVar2 + (((int)puVar7 - *param_1) / 0x18) * 0x18;
  for (; puVar7 != puVar10; puVar7 = puVar7 + 0x18) {
    iVar3 = iVar3 + 0x18;
    if (iVar3 != 0) {
      fn_004246b8(iVar3,puVar7);
    }
  }
  iVar3 = *param_1;
  iVar9 = param_1[1];
  iVar4 = iVar9 - iVar3;
  for (; iVar3 != iVar9; iVar3 = iVar3 + 0x18) {
    uVar5 = *(uint *)(iVar3 + 8);
    uVar6 = uVar5;
    if (*(uint *)(iVar3 + 0xc) < uVar5) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != *(uint *)(iVar3 + 0xc));
    }
    fn_001008c4(uVar5,(int)(*(int *)(iVar3 + 0x10) - uVar5) >> 2,0);
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x18,0);
  *param_1 = iVar2;
  param_1[1] = iVar2 + (iVar4 / 0x18) * 0x18 + 0x18;
  param_1[2] = iVar2 + uVar8 * 0x18;
  return;
}



void fn_00791a4c(uint *param_1,undefined4 *param_2,undefined4 *param_3)

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



undefined4 * fn_007914f4(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar4 = (undefined4 *)param_1[1];
  if ((undefined4 *)*param_1 != puVar4) {
    puVar5 = param_3;
    puVar2 = param_2;
    if (param_3 < puVar4) {
      if (0 < (int)puVar4 - (int)param_3) {
        uVar1 = ((int)puVar4 - (int)param_3) / 0x14;
        puVar4 = param_2 + -5;
        puVar5 = param_3 + -5;
        if ((uVar1 & 1) != 0) {
          uVar6 = param_3[1];
          uVar7 = param_3[2];
          uVar8 = param_3[3];
          uVar9 = param_3[4];
          *param_2 = *param_3;
          param_2[1] = uVar6;
          param_2[2] = uVar7;
          param_2[3] = uVar8;
          param_2[4] = uVar9;
          puVar4 = param_2;
          puVar5 = param_3;
        }
        for (iVar3 = (int)uVar1 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          uVar6 = puVar5[6];
          uVar7 = puVar5[7];
          uVar8 = puVar5[8];
          uVar9 = puVar5[9];
          puVar4[5] = puVar5[5];
          puVar4[6] = uVar6;
          puVar4[7] = uVar7;
          puVar4[8] = uVar8;
          puVar4[9] = uVar9;
          uVar6 = puVar5[0xb];
          uVar7 = puVar5[0xc];
          uVar8 = puVar5[0xd];
          uVar9 = puVar5[0xe];
          puVar4[10] = puVar5[10];
          puVar4[0xb] = uVar6;
          puVar4[0xc] = uVar7;
          puVar4[0xd] = uVar8;
          puVar4[0xe] = uVar9;
          puVar4 = puVar4 + 10;
          puVar5 = puVar5 + 10;
        }
        puVar2 = param_2 + uVar1 * 5;
      }
    }
    else {
      for (; puVar5 != puVar4; puVar5 = puVar5 + 5) {
        uVar6 = puVar5[1];
        uVar7 = puVar5[2];
        uVar8 = puVar5[3];
        uVar9 = puVar5[4];
        *puVar2 = *puVar5;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        puVar2[4] = uVar9;
        puVar2 = puVar2 + 5;
      }
    }
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar4; puVar2 = puVar2 + 5) {
      fn_002feef8(puVar2[3]);
      puVar2[3] = 0;
      fn_002feef8(puVar2[2]);
      puVar2[2] = 0;
      if (puVar2[1] != 0) {
        iVar3 = fn_00120ec8(puVar2[1] + 0x60);
        fn_002feef8(iVar3 + -0x60);
      }
      puVar2[1] = 0;
    }
    param_1[1] = param_1[1] + (((int)param_3 - (int)param_2) / 0x14) * -0x14;
  }
  return param_2;
}


