#include "0078f4e0_0078f4e0.h"



void fn_0078f4e0(uint *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
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
  puVar6 = (undefined4 *)param_1[1];
  local_30 = (int)((int)puVar6 - *param_1) / 0x34 + param_3;
  if ((uint)((int)(param_1[2] - *param_1) / 0x34) < local_30) {
    uVar11 = (int)(param_1[1] - *param_1) / 0x34;
    local_2c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_2c[0] < uVar11 + 0x20) {
      local_2c[0] = uVar11 + 0x20;
    }
    puVar2 = &local_30;
    if (local_30 < local_2c[0]) {
      puVar2 = local_2c;
    }
    uVar11 = *puVar2;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 * 0x34,0);
    puVar10 = puVar3;
    for (puVar6 = (undefined4 *)*param_1; puVar6 != param_2; puVar6 = puVar6 + 0xd) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar12 = puVar6[1];
        uVar13 = puVar6[2];
        uVar14 = puVar6[3];
        uVar15 = puVar6[4];
        uVar16 = puVar6[5];
        uVar17 = puVar6[6];
        uVar18 = puVar6[7];
        *puVar10 = *puVar6;
        puVar10[1] = uVar12;
        puVar10[2] = uVar13;
        puVar10[3] = uVar14;
        puVar10[4] = uVar15;
        puVar10[5] = uVar16;
        puVar10[6] = uVar17;
        puVar10[7] = uVar18;
        uVar12 = puVar6[9];
        uVar13 = puVar6[10];
        uVar14 = puVar6[0xb];
        uVar15 = puVar6[0xc];
        puVar10[8] = puVar6[8];
        puVar10[9] = uVar12;
        puVar10[10] = uVar13;
        puVar10[0xb] = uVar14;
        puVar10[0xc] = uVar15;
      }
      puVar10 = puVar10 + 0xd;
    }
    puVar6 = puVar3 + ((int)((int)param_2 - *param_1) / 0x34) * 0xd;
    for (iVar9 = param_3; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (puVar6 != (undefined4 *)0x0) {
        uVar12 = param_4[1];
        uVar13 = param_4[2];
        uVar14 = param_4[3];
        uVar15 = param_4[4];
        uVar16 = param_4[5];
        uVar17 = param_4[6];
        uVar18 = param_4[7];
        *puVar6 = *param_4;
        puVar6[1] = uVar12;
        puVar6[2] = uVar13;
        puVar6[3] = uVar14;
        puVar6[4] = uVar15;
        puVar6[5] = uVar16;
        puVar6[6] = uVar17;
        puVar6[7] = uVar18;
        uVar12 = param_4[9];
        uVar13 = param_4[10];
        uVar14 = param_4[0xb];
        uVar15 = param_4[0xc];
        puVar6[8] = param_4[8];
        puVar6[9] = uVar12;
        puVar6[10] = uVar13;
        puVar6[0xb] = uVar14;
        puVar6[0xc] = uVar15;
      }
      puVar6 = puVar6 + 0xd;
    }
    puVar10 = (undefined4 *)param_1[1];
    puVar6 = puVar3 + ((int)((int)param_2 - *param_1) / 0x34 + param_3) * 0xd;
    for (; param_2 != puVar10; param_2 = param_2 + 0xd) {
      if (puVar6 != (undefined4 *)0x0) {
        uVar12 = param_2[1];
        uVar13 = param_2[2];
        uVar14 = param_2[3];
        uVar15 = param_2[4];
        uVar16 = param_2[5];
        uVar17 = param_2[6];
        uVar18 = param_2[7];
        *puVar6 = *param_2;
        puVar6[1] = uVar12;
        puVar6[2] = uVar13;
        puVar6[3] = uVar14;
        puVar6[4] = uVar15;
        puVar6[5] = uVar16;
        puVar6[6] = uVar17;
        puVar6[7] = uVar18;
        uVar12 = param_2[9];
        uVar13 = param_2[10];
        uVar14 = param_2[0xb];
        uVar15 = param_2[0xc];
        puVar6[8] = param_2[8];
        puVar6[9] = uVar12;
        puVar6[10] = uVar13;
        puVar6[0xb] = uVar14;
        puVar6[0xc] = uVar15;
      }
      puVar6 = puVar6 + 0xd;
    }
    uVar4 = *param_1;
    uVar7 = param_1[1];
    uVar5 = uVar4;
    if (uVar7 < uVar4) {
      do {
        uVar5 = uVar5 + 0x34;
      } while (uVar5 != uVar7);
    }
    fn_001008c4(uVar4,(int)(param_1[2] - uVar4) / 0x34,0);
    *param_1 = (uint)puVar3;
    param_1[1] = (uint)(puVar3 + ((int)(uVar7 - uVar4) / 0x34) * 0xd + param_3 * 0xd);
    param_1[2] = (uint)(puVar3 + uVar11 * 0xd);
    return;
  }
  puVar10 = param_2 + param_3 * 0xd;
  param_1[1] = (uint)(puVar6 + param_3 * 0xd);
  if (puVar10 < puVar6) {
    puVar1 = puVar6 + param_3 * -0xd;
    puVar3 = puVar6;
    for (puVar8 = puVar1; puVar8 != puVar6; puVar8 = puVar8 + 0xd) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar12 = puVar8[1];
        uVar13 = puVar8[2];
        uVar14 = puVar8[3];
        uVar15 = puVar8[4];
        uVar16 = puVar8[5];
        uVar17 = puVar8[6];
        uVar18 = puVar8[7];
        *puVar3 = *puVar8;
        puVar3[1] = uVar12;
        puVar3[2] = uVar13;
        puVar3[3] = uVar14;
        puVar3[4] = uVar15;
        puVar3[5] = uVar16;
        puVar3[6] = uVar17;
        puVar3[7] = uVar18;
        uVar12 = puVar8[9];
        uVar13 = puVar8[10];
        uVar14 = puVar8[0xb];
        uVar15 = puVar8[0xc];
        puVar3[8] = puVar8[8];
        puVar3[9] = uVar12;
        puVar3[10] = uVar13;
        puVar3[0xb] = uVar14;
        puVar3[0xc] = uVar15;
      }
      puVar3 = puVar3 + 0xd;
    }
    if (param_2 < puVar1) {
      if (0 < (int)puVar1 - (int)param_2) {
        uVar11 = ((int)puVar1 - (int)param_2) / 0x34;
        if ((uVar11 & 1) != 0) {
          uVar12 = puVar1[-0xc];
          uVar13 = puVar1[-0xb];
          uVar14 = puVar1[-10];
          uVar15 = puVar1[-9];
          uVar16 = puVar1[-8];
          uVar17 = puVar1[-7];
          uVar18 = puVar1[-6];
          puVar3 = puVar1 + -5;
          puVar6[-0xd] = puVar1[-0xd];
          puVar6[-0xc] = uVar12;
          puVar6[-0xb] = uVar13;
          puVar6[-10] = uVar14;
          puVar6[-9] = uVar15;
          puVar6[-8] = uVar16;
          puVar6[-7] = uVar17;
          puVar6[-6] = uVar18;
          uVar12 = puVar1[-4];
          uVar13 = puVar1[-3];
          uVar14 = puVar1[-2];
          uVar15 = puVar1[-1];
          puVar1 = puVar1 + -0xd;
          puVar6[-5] = *puVar3;
          puVar6[-4] = uVar12;
          puVar6[-3] = uVar13;
          puVar6[-2] = uVar14;
          puVar6[-1] = uVar15;
          puVar6 = puVar6 + -0xd;
        }
        for (iVar9 = (int)uVar11 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
          uVar12 = puVar1[-0xc];
          uVar13 = puVar1[-0xb];
          uVar14 = puVar1[-10];
          uVar15 = puVar1[-9];
          uVar16 = puVar1[-8];
          uVar17 = puVar1[-7];
          uVar18 = puVar1[-6];
          puVar6[-0xd] = puVar1[-0xd];
          puVar6[-0xc] = uVar12;
          puVar6[-0xb] = uVar13;
          puVar6[-10] = uVar14;
          puVar6[-9] = uVar15;
          puVar6[-8] = uVar16;
          puVar6[-7] = uVar17;
          puVar6[-6] = uVar18;
          uVar12 = puVar1[-4];
          uVar13 = puVar1[-3];
          uVar14 = puVar1[-2];
          uVar15 = puVar1[-1];
          puVar6[-5] = puVar1[-5];
          puVar6[-4] = uVar12;
          puVar6[-3] = uVar13;
          puVar6[-2] = uVar14;
          puVar6[-1] = uVar15;
          uVar12 = puVar1[-0x19];
          uVar13 = puVar1[-0x18];
          uVar14 = puVar1[-0x17];
          uVar15 = puVar1[-0x16];
          uVar16 = puVar1[-0x15];
          uVar17 = puVar1[-0x14];
          uVar18 = puVar1[-0x13];
          puVar3 = puVar1 + -0x12;
          puVar6[-0x1a] = puVar1[-0x1a];
          puVar6[-0x19] = uVar12;
          puVar6[-0x18] = uVar13;
          puVar6[-0x17] = uVar14;
          puVar6[-0x16] = uVar15;
          puVar6[-0x15] = uVar16;
          puVar6[-0x14] = uVar17;
          puVar6[-0x13] = uVar18;
          uVar12 = puVar1[-0x11];
          uVar13 = puVar1[-0x10];
          uVar14 = puVar1[-0xf];
          uVar15 = puVar1[-0xe];
          puVar1 = puVar1 + -0x1a;
          puVar6[-0x12] = *puVar3;
          puVar6[-0x11] = uVar12;
          puVar6[-0x10] = uVar13;
          puVar6[-0xf] = uVar14;
          puVar6[-0xe] = uVar15;
          puVar6 = puVar6 + -0x1a;
        }
      }
    }
    else {
      for (; param_2 != puVar1; puVar1 = puVar1 + -0xd) {
        uVar12 = puVar1[-0xc];
        uVar13 = puVar1[-0xb];
        uVar14 = puVar1[-10];
        uVar15 = puVar1[-9];
        uVar16 = puVar1[-8];
        uVar17 = puVar1[-7];
        uVar18 = puVar1[-6];
        puVar6[-0xd] = puVar1[-0xd];
        puVar6[-0xc] = uVar12;
        puVar6[-0xb] = uVar13;
        puVar6[-10] = uVar14;
        puVar6[-9] = uVar15;
        puVar6[-8] = uVar16;
        puVar6[-7] = uVar17;
        puVar6[-6] = uVar18;
        uVar12 = puVar1[-4];
        uVar13 = puVar1[-3];
        uVar14 = puVar1[-2];
        uVar15 = puVar1[-1];
        puVar6[-5] = puVar1[-5];
        puVar6[-4] = uVar12;
        puVar6[-3] = uVar13;
        puVar6[-2] = uVar14;
        puVar6[-1] = uVar15;
        puVar6 = puVar6 + -0xd;
      }
    }
    puVar6 = puVar10;
  }
  else {
    puVar3 = puVar6;
    for (param_3 = param_3 - ((int)puVar6 - (int)param_2) / 0x34; puVar8 = param_2, param_3 != 0;
        param_3 = param_3 + -1) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar12 = param_4[1];
        uVar13 = param_4[2];
        uVar14 = param_4[3];
        uVar15 = param_4[4];
        uVar16 = param_4[5];
        uVar17 = param_4[6];
        uVar18 = param_4[7];
        *puVar3 = *param_4;
        puVar3[1] = uVar12;
        puVar3[2] = uVar13;
        puVar3[3] = uVar14;
        puVar3[4] = uVar15;
        puVar3[5] = uVar16;
        puVar3[6] = uVar17;
        puVar3[7] = uVar18;
        uVar12 = param_4[9];
        uVar13 = param_4[10];
        uVar14 = param_4[0xb];
        uVar15 = param_4[0xc];
        puVar3[8] = param_4[8];
        puVar3[9] = uVar12;
        puVar3[10] = uVar13;
        puVar3[0xb] = uVar14;
        puVar3[0xc] = uVar15;
      }
      puVar3 = puVar3 + 0xd;
    }
    for (; puVar8 != puVar6; puVar8 = puVar8 + 0xd) {
      if (puVar10 != (undefined4 *)0x0) {
        uVar12 = puVar8[1];
        uVar13 = puVar8[2];
        uVar14 = puVar8[3];
        uVar15 = puVar8[4];
        uVar16 = puVar8[5];
        uVar17 = puVar8[6];
        uVar18 = puVar8[7];
        *puVar10 = *puVar8;
        puVar10[1] = uVar12;
        puVar10[2] = uVar13;
        puVar10[3] = uVar14;
        puVar10[4] = uVar15;
        puVar10[5] = uVar16;
        puVar10[6] = uVar17;
        puVar10[7] = uVar18;
        uVar12 = puVar8[9];
        uVar13 = puVar8[10];
        uVar14 = puVar8[0xb];
        uVar15 = puVar8[0xc];
        puVar10[8] = puVar8[8];
        puVar10[9] = uVar12;
        puVar10[10] = uVar13;
        puVar10[0xb] = uVar14;
        puVar10[0xc] = uVar15;
      }
      puVar10 = puVar10 + 0xd;
    }
  }
  fn_007b8bd8(param_2,puVar6,param_4);
  return;
}


