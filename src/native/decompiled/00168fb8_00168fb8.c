#include "00168fb8_00168fb8.h"



void fn_00168fb8(uint *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint local_30;
  uint local_2c [2];
  
  if (param_3 == 0) {
    return;
  }
  puVar1 = (undefined4 *)param_1[1];
  uVar11 = (int)puVar1 - *param_1;
  iVar12 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
  uVar4 = param_1[2] - *param_1;
  iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
  if ((uint)((iVar5 >> 4) - (iVar5 >> 0x1f)) < (uint)(((iVar12 >> 4) - (iVar12 >> 0x1f)) + param_3))
  {
    iVar5 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
    local_30 = ((iVar5 >> 4) - (iVar5 >> 0x1f)) + param_3;
    iVar5 = (int)((longlong)(int)(param_1[1] - *param_1) * -0x6db6db6d +
                  ((ulonglong)(param_1[1] - *param_1) << 0x20) >> 0x20);
    uVar4 = (iVar5 >> 4) - (iVar5 >> 0x1f);
    uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    local_2c[0] = uVar4 + 0x20;
    if (uVar4 + 0x20 <= uVar11) {
      local_2c[0] = uVar11;
    }
    puVar8 = local_2c;
    if (local_2c[0] <= local_30) {
      puVar8 = &local_30;
    }
    uVar4 = *puVar8;
    puVar2 = (undefined4 *)fn_00100fc6(uVar4 * 0x1c,0);
    puVar9 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 7) {
      if (puVar9 != (undefined4 *)0x0) {
        uVar13 = puVar1[1];
        uVar14 = puVar1[2];
        uVar15 = puVar1[3];
        uVar16 = puVar1[4];
        uVar17 = puVar1[5];
        uVar18 = puVar1[6];
        *puVar9 = *puVar1;
        puVar9[1] = uVar13;
        puVar9[2] = uVar14;
        puVar9[3] = uVar15;
        puVar9[4] = uVar16;
        puVar9[5] = uVar17;
        puVar9[6] = uVar18;
      }
      puVar9 = puVar9 + 7;
    }
    iVar5 = (int)((longlong)(int)((int)param_2 - *param_1) * -0x6db6db6d +
                  ((ulonglong)((int)param_2 - *param_1) << 0x20) >> 0x20);
    puVar1 = puVar2 + ((iVar5 >> 4) - (iVar5 >> 0x1f)) * 7;
    for (iVar5 = param_3; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar1 != (undefined4 *)0x0) {
        uVar13 = param_4[1];
        uVar14 = param_4[2];
        uVar15 = param_4[3];
        uVar16 = param_4[4];
        uVar17 = param_4[5];
        uVar18 = param_4[6];
        *puVar1 = *param_4;
        puVar1[1] = uVar13;
        puVar1[2] = uVar14;
        puVar1[3] = uVar15;
        puVar1[4] = uVar16;
        puVar1[5] = uVar17;
        puVar1[6] = uVar18;
      }
      puVar1 = puVar1 + 7;
    }
    puVar9 = (undefined4 *)param_1[1];
    iVar5 = (int)((longlong)(int)((int)param_2 - *param_1) * -0x6db6db6d +
                  ((ulonglong)((int)param_2 - *param_1) << 0x20) >> 0x20);
    puVar1 = puVar2 + (((iVar5 >> 4) - (iVar5 >> 0x1f)) + param_3) * 7;
    for (; param_2 != puVar9; param_2 = param_2 + 7) {
      if (puVar1 != (undefined4 *)0x0) {
        uVar13 = param_2[1];
        uVar14 = param_2[2];
        uVar15 = param_2[3];
        uVar16 = param_2[4];
        uVar17 = param_2[5];
        uVar18 = param_2[6];
        *puVar1 = *param_2;
        puVar1[1] = uVar13;
        puVar1[2] = uVar14;
        puVar1[3] = uVar15;
        puVar1[4] = uVar16;
        puVar1[5] = uVar17;
        puVar1[6] = uVar18;
      }
      puVar1 = puVar1 + 7;
    }
    uVar3 = *param_1;
    uVar10 = param_1[1];
    iVar5 = (int)((longlong)(int)(uVar10 - uVar3) * -0x6db6db6d +
                  ((ulonglong)(uVar10 - uVar3) << 0x20) >> 0x20);
    uVar11 = uVar3;
    if (uVar10 < uVar3) {
      do {
        uVar11 = uVar11 + 0x1c;
      } while (uVar11 != uVar10);
    }
    iVar12 = (int)((longlong)(int)(param_1[2] - uVar3) * -0x6db6db6d +
                   ((ulonglong)(param_1[2] - uVar3) << 0x20) >> 0x20);
    fn_001008c4(uVar3,(iVar12 >> 4) - (iVar12 >> 0x1f),0);
    *param_1 = (uint)puVar2;
    param_1[1] = (uint)(puVar2 + ((iVar5 >> 4) - (iVar5 >> 0x1f)) * 7 + param_3 * 7);
    param_1[2] = (uint)(puVar2 + uVar4 * 7);
    return;
  }
  puVar9 = param_2 + param_3 * 7;
  param_1[1] = (uint)(puVar1 + param_3 * 7);
  if (puVar9 < puVar1) {
    puVar6 = puVar1 + param_3 * -7;
    puVar2 = puVar1;
    for (puVar7 = puVar6; puVar7 != puVar1; puVar7 = puVar7 + 7) {
      if (puVar2 != (undefined4 *)0x0) {
        uVar13 = puVar7[1];
        uVar14 = puVar7[2];
        uVar15 = puVar7[3];
        uVar16 = puVar7[4];
        uVar17 = puVar7[5];
        uVar18 = puVar7[6];
        *puVar2 = *puVar7;
        puVar2[1] = uVar13;
        puVar2[2] = uVar14;
        puVar2[3] = uVar15;
        puVar2[4] = uVar16;
        puVar2[5] = uVar17;
        puVar2[6] = uVar18;
      }
      puVar2 = puVar2 + 7;
    }
    if (param_2 < puVar6) {
      uVar4 = (int)puVar6 - (int)param_2;
      if (0 < (int)uVar4) {
        iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        puVar2 = puVar1;
        puVar7 = puVar6;
        if (((iVar5 >> 4) - (iVar5 >> 0x1f) & 1U) != 0) {
          puVar7 = puVar6 + -7;
          puVar2 = puVar1 + -7;
          uVar13 = puVar6[-6];
          uVar14 = puVar6[-5];
          uVar15 = puVar6[-4];
          uVar16 = puVar6[-3];
          uVar17 = puVar6[-2];
          uVar18 = puVar6[-1];
          *puVar2 = *puVar7;
          puVar1[-6] = uVar13;
          puVar1[-5] = uVar14;
          puVar1[-4] = uVar15;
          puVar1[-3] = uVar16;
          puVar1[-2] = uVar17;
          puVar1[-1] = uVar18;
        }
        iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        for (iVar5 = (iVar5 >> 4) - (iVar5 >> 0x1f) >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar13 = puVar7[-6];
          uVar14 = puVar7[-5];
          uVar15 = puVar7[-4];
          uVar16 = puVar7[-3];
          uVar17 = puVar7[-2];
          uVar18 = puVar7[-1];
          puVar2[-7] = puVar7[-7];
          puVar2[-6] = uVar13;
          puVar2[-5] = uVar14;
          puVar2[-4] = uVar15;
          puVar2[-3] = uVar16;
          puVar2[-2] = uVar17;
          puVar2[-1] = uVar18;
          uVar13 = puVar7[-0xd];
          uVar14 = puVar7[-0xc];
          uVar15 = puVar7[-0xb];
          uVar16 = puVar7[-10];
          uVar17 = puVar7[-9];
          uVar18 = puVar7[-8];
          puVar2[-0xe] = puVar7[-0xe];
          puVar2[-0xd] = uVar13;
          puVar2[-0xc] = uVar14;
          puVar2[-0xb] = uVar15;
          puVar2[-10] = uVar16;
          puVar2[-9] = uVar17;
          puVar2[-8] = uVar18;
          puVar2 = puVar2 + -0xe;
          puVar7 = puVar7 + -0xe;
        }
      }
    }
    else {
      while (param_2 != puVar6) {
        uVar13 = puVar6[-6];
        uVar14 = puVar6[-5];
        uVar15 = puVar6[-4];
        uVar16 = puVar6[-3];
        uVar17 = puVar6[-2];
        uVar18 = puVar6[-1];
        puVar1[-7] = puVar6[-7];
        puVar1[-6] = uVar13;
        puVar1[-5] = uVar14;
        puVar1[-4] = uVar15;
        puVar1[-3] = uVar16;
        puVar1[-2] = uVar17;
        puVar1[-1] = uVar18;
        puVar1 = puVar1 + -7;
        puVar6 = puVar6 + -7;
      }
    }
    if (param_2 < puVar9) {
      uVar4 = (int)puVar9 - (int)param_2;
      if (0 < (int)uVar4) {
        iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        if (((iVar5 >> 4) - (iVar5 >> 0x1f) & 1U) != 0) {
          uVar13 = param_4[1];
          uVar14 = param_4[2];
          uVar15 = param_4[3];
          uVar16 = param_4[4];
          uVar17 = param_4[5];
          uVar18 = param_4[6];
          *param_2 = *param_4;
          param_2[1] = uVar13;
          param_2[2] = uVar14;
          param_2[3] = uVar15;
          param_2[4] = uVar16;
          param_2[5] = uVar17;
          param_2[6] = uVar18;
          param_2 = param_2 + 7;
        }
        iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        iVar5 = (iVar5 >> 4) - (iVar5 >> 0x1f) >> 1;
        if (iVar5 != 0) {
          do {
            uVar13 = param_4[1];
            uVar14 = param_4[2];
            uVar15 = param_4[3];
            uVar16 = param_4[4];
            uVar17 = param_4[5];
            uVar18 = param_4[6];
            iVar5 = iVar5 + -1;
            *param_2 = *param_4;
            param_2[1] = uVar13;
            param_2[2] = uVar14;
            param_2[3] = uVar15;
            param_2[4] = uVar16;
            param_2[5] = uVar17;
            param_2[6] = uVar18;
            uVar13 = param_4[1];
            uVar14 = param_4[2];
            uVar15 = param_4[3];
            uVar16 = param_4[4];
            uVar17 = param_4[5];
            uVar18 = param_4[6];
            param_2[7] = *param_4;
            param_2[8] = uVar13;
            param_2[9] = uVar14;
            param_2[10] = uVar15;
            param_2[0xb] = uVar16;
            param_2[0xc] = uVar17;
            param_2[0xd] = uVar18;
            param_2 = param_2 + 0xe;
          } while (iVar5 != 0);
          return;
        }
      }
    }
    else {
      for (; param_2 != puVar9; param_2 = param_2 + 7) {
        uVar13 = param_4[1];
        uVar14 = param_4[2];
        uVar15 = param_4[3];
        uVar16 = param_4[4];
        uVar17 = param_4[5];
        uVar18 = param_4[6];
        *param_2 = *param_4;
        param_2[1] = uVar13;
        param_2[2] = uVar14;
        param_2[3] = uVar15;
        param_2[4] = uVar16;
        param_2[5] = uVar17;
        param_2[6] = uVar18;
      }
    }
  }
  else {
    uVar4 = (int)puVar1 - (int)param_2;
    iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
    puVar2 = puVar1;
    for (param_3 = param_3 - ((iVar5 >> 4) - (iVar5 >> 0x1f)); puVar7 = param_2, param_3 != 0;
        param_3 = param_3 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        uVar13 = param_4[1];
        uVar14 = param_4[2];
        uVar15 = param_4[3];
        uVar16 = param_4[4];
        uVar17 = param_4[5];
        uVar18 = param_4[6];
        *puVar2 = *param_4;
        puVar2[1] = uVar13;
        puVar2[2] = uVar14;
        puVar2[3] = uVar15;
        puVar2[4] = uVar16;
        puVar2[5] = uVar17;
        puVar2[6] = uVar18;
      }
      puVar2 = puVar2 + 7;
    }
    for (; puVar7 != puVar1; puVar7 = puVar7 + 7) {
      if (puVar9 != (undefined4 *)0x0) {
        uVar13 = puVar7[1];
        uVar14 = puVar7[2];
        uVar15 = puVar7[3];
        uVar16 = puVar7[4];
        uVar17 = puVar7[5];
        uVar18 = puVar7[6];
        *puVar9 = *puVar7;
        puVar9[1] = uVar13;
        puVar9[2] = uVar14;
        puVar9[3] = uVar15;
        puVar9[4] = uVar16;
        puVar9[5] = uVar17;
        puVar9[6] = uVar18;
      }
      puVar9 = puVar9 + 7;
    }
    if (param_2 < puVar1) {
      if (0 < (int)uVar4) {
        iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        if (((iVar5 >> 4) - (iVar5 >> 0x1f) & 1U) != 0) {
          uVar13 = param_4[1];
          uVar14 = param_4[2];
          uVar15 = param_4[3];
          uVar16 = param_4[4];
          uVar17 = param_4[5];
          uVar18 = param_4[6];
          *param_2 = *param_4;
          param_2[1] = uVar13;
          param_2[2] = uVar14;
          param_2[3] = uVar15;
          param_2[4] = uVar16;
          param_2[5] = uVar17;
          param_2[6] = uVar18;
          param_2 = param_2 + 7;
        }
        iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        iVar5 = (iVar5 >> 4) - (iVar5 >> 0x1f) >> 1;
        if (iVar5 != 0) {
          do {
            uVar13 = param_4[1];
            uVar14 = param_4[2];
            uVar15 = param_4[3];
            uVar16 = param_4[4];
            uVar17 = param_4[5];
            uVar18 = param_4[6];
            iVar5 = iVar5 + -1;
            *param_2 = *param_4;
            param_2[1] = uVar13;
            param_2[2] = uVar14;
            param_2[3] = uVar15;
            param_2[4] = uVar16;
            param_2[5] = uVar17;
            param_2[6] = uVar18;
            uVar13 = param_4[1];
            uVar14 = param_4[2];
            uVar15 = param_4[3];
            uVar16 = param_4[4];
            uVar17 = param_4[5];
            uVar18 = param_4[6];
            param_2[7] = *param_4;
            param_2[8] = uVar13;
            param_2[9] = uVar14;
            param_2[10] = uVar15;
            param_2[0xb] = uVar16;
            param_2[0xc] = uVar17;
            param_2[0xd] = uVar18;
            param_2 = param_2 + 0xe;
          } while (iVar5 != 0);
          return;
        }
      }
    }
    else if (param_2 != puVar1) {
      do {
        uVar13 = param_4[1];
        uVar14 = param_4[2];
        uVar15 = param_4[3];
        uVar16 = param_4[4];
        uVar17 = param_4[5];
        uVar18 = param_4[6];
        puVar9 = param_2 + 7;
        *param_2 = *param_4;
        param_2[1] = uVar13;
        param_2[2] = uVar14;
        param_2[3] = uVar15;
        param_2[4] = uVar16;
        param_2[5] = uVar17;
        param_2[6] = uVar18;
        param_2 = puVar9;
      } while (puVar9 != puVar1);
      return;
    }
  }
  return;
}


