#include "0033f4c4_0033f830.h"



void fn_0033f830(int param_1,int param_2)

{
  param_2 = *(int *)(param_1 + 0x34) - param_2;
  *(int *)(param_1 + 0x34) = param_2;
  if (param_2 < 1) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x34) = param_2;
  fn_00341d34(*(undefined4 *)(param_1 + 0x3c),param_2 != 0);
  return;
}



void fn_0033f7f8(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x3c) == 0) || (fn_00341c04(), param_2 == 0)) {
    return;
  }
  fn_00688bf4(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x2c));
  return;
}



void fn_0033f7b0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x40) == (undefined4 *)0x0) {
    return;
  }
  *(undefined4 *)**(undefined4 **)(param_1 + 0x40) = 0;
  return;
}



void fn_0033f4c4(int param_1,undefined4 param_2,undefined1 param_3,undefined2 param_4,
                 undefined1 param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 in_s0;
  undefined4 local_38;
  undefined4 uStack_24;
  
  local_38 = CONCAT22(param_4,CONCAT11(param_5,param_3));
  uVar11 = *param_6;
  uVar12 = param_6[1];
  uVar19 = param_6[2];
  fn_006c1c58(param_1);
  puVar13 = (uint *)(param_1 + 0x1c);
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != *(undefined4 **)(param_1 + 0x24)) {
    *(undefined4 **)(param_1 + 0x20) = puVar1 + 7;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_38;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar19;
      puVar1[4] = in_s0;
      puVar1[5] = uStack_24;
      puVar1[6] = 0;
    }
    return;
  }
  uVar6 = (int)*(undefined4 **)(param_1 + 0x24) - *puVar13;
  iVar7 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
  uVar6 = (int)puVar1 - *puVar13;
  iVar20 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
  if ((uint)((iVar20 >> 4) - (iVar20 >> 0x1f)) < (uint)((iVar7 >> 4) - (iVar7 >> 0x1f))) {
    *(undefined4 **)(param_1 + 0x20) = puVar1 + 7;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar1[-7];
      puVar1[1] = puVar1[-6];
      puVar1[2] = puVar1[-5];
      puVar1[3] = puVar1[-4];
      puVar1[4] = puVar1[-3];
      puVar1[5] = puVar1[-2];
      puVar1[6] = puVar1[-1];
    }
    puVar8 = puVar1 + -7;
    puVar9 = puVar1;
    if (puVar1 < puVar8) {
      uVar6 = (int)puVar8 - (int)puVar1;
      if (0 < (int)uVar6) {
        iVar7 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
        if (((iVar7 >> 4) - (iVar7 >> 0x1f) & 1U) != 0) {
          puVar8 = puVar1 + -0xe;
          puVar9 = puVar1 + -7;
          *puVar9 = *puVar8;
          puVar1[-6] = puVar1[-0xd];
          puVar1[-5] = puVar1[-0xc];
          puVar1[-4] = puVar1[-0xb];
          puVar1[-3] = puVar1[-10];
          puVar1[-2] = puVar1[-9];
          puVar1[-1] = puVar1[-8];
        }
        iVar7 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
        for (iVar7 = (iVar7 >> 4) - (iVar7 >> 0x1f) >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          uVar14 = puVar8[-6];
          uVar15 = puVar8[-5];
          uVar16 = puVar8[-4];
          uVar17 = puVar8[-3];
          uVar18 = puVar8[-2];
          uVar21 = puVar8[-1];
          puVar9[-7] = puVar8[-7];
          puVar9[-6] = uVar14;
          puVar9[-5] = uVar15;
          puVar9[-4] = uVar16;
          puVar9[-3] = uVar17;
          puVar9[-2] = uVar18;
          puVar9[-1] = uVar21;
          uVar14 = puVar8[-0xd];
          uVar15 = puVar8[-0xc];
          uVar16 = puVar8[-0xb];
          uVar17 = puVar8[-10];
          uVar18 = puVar8[-9];
          uVar21 = puVar8[-8];
          puVar9[-0xe] = puVar8[-0xe];
          puVar9[-0xd] = uVar14;
          puVar9[-0xc] = uVar15;
          puVar9[-0xb] = uVar16;
          puVar9[-10] = uVar17;
          puVar9[-9] = uVar18;
          puVar9[-8] = uVar21;
          puVar9 = puVar9 + -0xe;
          puVar8 = puVar8 + -0xe;
        }
      }
    }
    else {
      while (puVar1 != puVar8) {
        uVar14 = puVar8[-6];
        uVar15 = puVar8[-5];
        uVar16 = puVar8[-4];
        uVar17 = puVar8[-3];
        uVar18 = puVar8[-2];
        uVar21 = puVar8[-1];
        puVar9[-7] = puVar8[-7];
        puVar9[-6] = uVar14;
        puVar9[-5] = uVar15;
        puVar9[-4] = uVar16;
        puVar9[-3] = uVar17;
        puVar9[-2] = uVar18;
        puVar9[-1] = uVar21;
        puVar9 = puVar9 + -7;
        puVar8 = puVar8 + -7;
      }
    }
    *puVar1 = local_38;
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar19;
    puVar1[4] = in_s0;
    puVar1[5] = uStack_24;
    puVar1[6] = 0;
    return;
  }
  iVar7 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
  uVar2 = (iVar7 >> 4) - (iVar7 >> 0x1f);
  uVar6 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
  if (uVar6 < uVar2 + 0x20) {
    uVar6 = uVar2 + 0x20;
  }
  puVar3 = (undefined4 *)fn_00100fc6(uVar6 * 0x1c,0);
  puVar9 = puVar3;
  for (puVar8 = (undefined4 *)*puVar13; puVar8 != puVar1; puVar8 = puVar8 + 7) {
    if (puVar9 != (undefined4 *)0x0) {
      uVar14 = puVar8[1];
      uVar15 = puVar8[2];
      uVar16 = puVar8[3];
      uVar17 = puVar8[4];
      uVar18 = puVar8[5];
      uVar21 = puVar8[6];
      *puVar9 = *puVar8;
      puVar9[1] = uVar14;
      puVar9[2] = uVar15;
      puVar9[3] = uVar16;
      puVar9[4] = uVar17;
      puVar9[5] = uVar18;
      puVar9[6] = uVar21;
    }
    puVar9 = puVar9 + 7;
  }
  iVar7 = (int)((longlong)(int)((int)puVar1 - *puVar13) * -0x6db6db6d +
                ((ulonglong)((int)puVar1 - *puVar13) << 0x20) >> 0x20);
  puVar8 = puVar3 + ((iVar7 >> 4) - (iVar7 >> 0x1f)) * 7;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = local_38;
    puVar8[1] = uVar11;
    puVar8[2] = uVar12;
    puVar8[3] = uVar19;
    puVar8[4] = in_s0;
    puVar8[5] = uStack_24;
    puVar8[6] = 0;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x20);
  iVar7 = (int)((longlong)(int)((int)puVar1 - *puVar13) * -0x6db6db6d +
                ((ulonglong)((int)puVar1 - *puVar13) << 0x20) >> 0x20);
  puVar8 = puVar3 + ((iVar7 >> 4) - (iVar7 >> 0x1f)) * 7;
  for (; puVar1 != puVar9; puVar1 = puVar1 + 7) {
    puVar4 = puVar8 + 7;
    if (puVar4 != (undefined4 *)0x0) {
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar19 = puVar1[3];
      uVar14 = puVar1[4];
      uVar15 = puVar1[5];
      uVar16 = puVar1[6];
      *puVar4 = *puVar1;
      puVar8[8] = uVar11;
      puVar8[9] = uVar12;
      puVar8[10] = uVar19;
      puVar8[0xb] = uVar14;
      puVar8[0xc] = uVar15;
      puVar8[0xd] = uVar16;
    }
    puVar8 = puVar4;
  }
  uVar5 = *puVar13;
  uVar10 = *(uint *)(param_1 + 0x20);
  iVar7 = (int)((longlong)(int)(uVar10 - uVar5) * -0x6db6db6d +
                ((ulonglong)(uVar10 - uVar5) << 0x20) >> 0x20);
  uVar2 = uVar5;
  if (uVar10 < uVar5) {
    do {
      uVar2 = uVar2 + 0x1c;
    } while (uVar2 != uVar10);
  }
  uVar2 = *(int *)(param_1 + 0x24) - uVar5;
  iVar20 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
  fn_001008c4(uVar5,(iVar20 >> 4) - (iVar20 >> 0x1f),0);
  *puVar13 = (uint)puVar3;
  *(undefined4 **)(param_1 + 0x20) = puVar3 + ((iVar7 >> 4) - (iVar7 >> 0x1f)) * 7 + 7;
  *(undefined4 **)(param_1 + 0x24) = puVar3 + uVar6 * 7;
  return;
}


