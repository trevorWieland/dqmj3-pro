#include "0078d3dc_0078d69c.h"



void fn_0078d69c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_20;
  uint *puStack_1c;
  uint local_18;
  
  local_18 = param_2;
  puStack_1c = param_1;
  puVar5 = &local_20;
  if (0x5d1745d < param_2) {
    local_20 = 0x5d1745d;
    fn_002ff628(8,&DAT_008c7626);
  }
  if ((uint)((int)(param_1[2] - *param_1) / 0x2c) < local_18) {
    uVar8 = (int)(param_1[1] - *param_1) / 0x2c;
    local_20 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_20 < uVar8 + 0x20) {
      local_20 = uVar8 + 0x20;
    }
    if (local_20 <= local_18) {
      puVar5 = &local_18;
    }
    uVar8 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar8 * 0x2c,0);
    puVar7 = (undefined4 *)param_1[1];
    puVar2 = puVar1;
    for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar7; puVar6 = puVar6 + 0xb) {
      if (puVar2 != (undefined4 *)0x0) {
        uVar9 = puVar6[1];
        uVar10 = puVar6[2];
        uVar11 = puVar6[3];
        uVar12 = puVar6[4];
        uVar13 = puVar6[5];
        uVar14 = puVar6[6];
        uVar15 = puVar6[7];
        *puVar2 = *puVar6;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        puVar2[4] = uVar12;
        puVar2[5] = uVar13;
        puVar2[6] = uVar14;
        puVar2[7] = uVar15;
        uVar9 = puVar6[9];
        uVar10 = puVar6[10];
        puVar2[8] = puVar6[8];
        puVar2[9] = uVar9;
        puVar2[10] = uVar10;
      }
      puVar2 = puVar2 + 0xb;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 0x2c;
      } while (uVar4 != param_1[1]);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) / 0x2c,0);
    uVar4 = *param_1;
    *param_1 = (uint)puVar1;
    param_1[1] = (uint)(puVar1 + ((int)(param_1[1] - uVar4) / 0x2c) * 0xb);
    param_1[2] = (uint)(puVar1 + uVar8 * 0xb);
  }
  return;
}



void fn_0078d3dc(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  puVar4 = (undefined4 *)param_1[1];
  uVar3 = (int)((int)puVar4 - *param_1) / 0x2c;
  if ((uint)((int)(param_1[2] - *param_1) / 0x2c) <= uVar3) {
    uVar6 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    uVar9 = uVar3 + 0x20;
    if (uVar3 + 0x20 <= uVar6) {
      uVar9 = uVar6;
    }
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 * 0x2c,0);
    puVar8 = puVar1;
    for (puVar4 = (undefined4 *)*param_1; puVar4 != param_2; puVar4 = puVar4 + 0xb) {
      if (puVar8 != (undefined4 *)0x0) {
        uVar10 = puVar4[1];
        uVar11 = puVar4[2];
        uVar12 = puVar4[3];
        uVar13 = puVar4[4];
        uVar14 = puVar4[5];
        uVar15 = puVar4[6];
        uVar16 = puVar4[7];
        *puVar8 = *puVar4;
        puVar8[1] = uVar10;
        puVar8[2] = uVar11;
        puVar8[3] = uVar12;
        puVar8[4] = uVar13;
        puVar8[5] = uVar14;
        puVar8[6] = uVar15;
        puVar8[7] = uVar16;
        uVar10 = puVar4[9];
        uVar11 = puVar4[10];
        puVar8[8] = puVar4[8];
        puVar8[9] = uVar10;
        puVar8[10] = uVar11;
      }
      puVar8 = puVar8 + 0xb;
    }
    puVar4 = puVar1 + ((int)((int)param_2 - *param_1) / 0x2c) * 0xb;
    if (puVar4 != (undefined4 *)0x0) {
      uVar10 = param_3[1];
      uVar11 = param_3[2];
      uVar12 = param_3[3];
      uVar13 = param_3[4];
      uVar14 = param_3[5];
      uVar15 = param_3[6];
      uVar16 = param_3[7];
      *puVar4 = *param_3;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      puVar4[4] = uVar13;
      puVar4[5] = uVar14;
      puVar4[6] = uVar15;
      puVar4[7] = uVar16;
      uVar10 = param_3[9];
      uVar11 = param_3[10];
      puVar4[8] = param_3[8];
      puVar4[9] = uVar10;
      puVar4[10] = uVar11;
    }
    puVar8 = (undefined4 *)param_1[1];
    puVar4 = puVar1 + ((int)((int)param_2 - *param_1) / 0x2c) * 0xb;
    for (; param_2 != puVar8; param_2 = param_2 + 0xb) {
      puVar2 = puVar4 + 0xb;
      if (puVar2 != (undefined4 *)0x0) {
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar12 = param_2[3];
        uVar13 = param_2[4];
        uVar14 = param_2[5];
        uVar15 = param_2[6];
        uVar16 = param_2[7];
        *puVar2 = *param_2;
        puVar4[0xc] = uVar10;
        puVar4[0xd] = uVar11;
        puVar4[0xe] = uVar12;
        puVar4[0xf] = uVar13;
        puVar4[0x10] = uVar14;
        puVar4[0x11] = uVar15;
        puVar4[0x12] = uVar16;
        uVar10 = param_2[9];
        uVar11 = param_2[10];
        puVar4[0x13] = param_2[8];
        puVar4[0x14] = uVar10;
        puVar4[0x15] = uVar11;
      }
      puVar4 = puVar2;
    }
    uVar6 = *param_1;
    uVar7 = param_1[1];
    uVar3 = uVar6;
    if (uVar7 < uVar6) {
      do {
        uVar3 = uVar3 + 0x2c;
      } while (uVar3 != uVar7);
    }
    fn_001008c4(uVar6,(int)(param_1[2] - uVar6) / 0x2c,0);
    *param_1 = (uint)puVar1;
    param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar6) / 0x2c) * 0xb + 0xb);
    param_1[2] = (uint)(puVar1 + uVar9 * 0xb);
    return;
  }
  param_1[1] = (uint)(puVar4 + 0xb);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = puVar4[-0xb];
    puVar4[1] = puVar4[-10];
    puVar4[2] = puVar4[-9];
    puVar4[3] = puVar4[-8];
    puVar4[4] = puVar4[-7];
    puVar4[5] = puVar4[-6];
    puVar4[6] = puVar4[-5];
    puVar4[7] = puVar4[-4];
    puVar4[8] = puVar4[-3];
    puVar4[9] = puVar4[-2];
    puVar4[10] = puVar4[-1];
  }
  puVar8 = puVar4 + -0xb;
  if (param_2 < puVar8) {
    if (0 < (int)puVar8 - (int)param_2) {
      uVar3 = ((int)puVar8 - (int)param_2) / 0x2c;
      if ((uVar3 & 1) != 0) {
        puVar4[-0xb] = puVar4[-0x16];
        puVar4[-10] = puVar4[-0x15];
        puVar4[-9] = puVar4[-0x14];
        puVar4[-8] = puVar4[-0x13];
        puVar4[-7] = puVar4[-0x12];
        puVar4[-6] = puVar4[-0x11];
        puVar4[-5] = puVar4[-0x10];
        puVar4[-4] = puVar4[-0xf];
        puVar8 = puVar4 + -0x16;
        puVar4[-3] = puVar4[-0xe];
        puVar4[-2] = puVar4[-0xd];
        puVar4[-1] = puVar4[-0xc];
        puVar4 = puVar4 + -0xb;
      }
      for (iVar5 = (int)uVar3 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar10 = puVar8[-10];
        uVar11 = puVar8[-9];
        uVar12 = puVar8[-8];
        uVar13 = puVar8[-7];
        uVar14 = puVar8[-6];
        uVar15 = puVar8[-5];
        uVar16 = puVar8[-4];
        puVar4[-0xb] = puVar8[-0xb];
        puVar4[-10] = uVar10;
        puVar4[-9] = uVar11;
        puVar4[-8] = uVar12;
        puVar4[-7] = uVar13;
        puVar4[-6] = uVar14;
        puVar4[-5] = uVar15;
        puVar4[-4] = uVar16;
        uVar10 = puVar8[-2];
        uVar11 = puVar8[-1];
        puVar4[-3] = puVar8[-3];
        puVar4[-2] = uVar10;
        puVar4[-1] = uVar11;
        uVar10 = puVar8[-0x15];
        uVar11 = puVar8[-0x14];
        uVar12 = puVar8[-0x13];
        uVar13 = puVar8[-0x12];
        uVar14 = puVar8[-0x11];
        uVar15 = puVar8[-0x10];
        uVar16 = puVar8[-0xf];
        puVar1 = puVar8 + -0xe;
        puVar4[-0x16] = puVar8[-0x16];
        puVar4[-0x15] = uVar10;
        puVar4[-0x14] = uVar11;
        puVar4[-0x13] = uVar12;
        puVar4[-0x12] = uVar13;
        puVar4[-0x11] = uVar14;
        puVar4[-0x10] = uVar15;
        puVar4[-0xf] = uVar16;
        uVar10 = puVar8[-0xd];
        uVar11 = puVar8[-0xc];
        puVar8 = puVar8 + -0x16;
        puVar4[-0xe] = *puVar1;
        puVar4[-0xd] = uVar10;
        puVar4[-0xc] = uVar11;
        puVar4 = puVar4 + -0x16;
      }
    }
  }
  else {
    for (; param_2 != puVar8; puVar8 = puVar8 + -0xb) {
      uVar10 = puVar8[-10];
      uVar11 = puVar8[-9];
      uVar12 = puVar8[-8];
      uVar13 = puVar8[-7];
      uVar14 = puVar8[-6];
      uVar15 = puVar8[-5];
      uVar16 = puVar8[-4];
      puVar4[-0xb] = puVar8[-0xb];
      puVar4[-10] = uVar10;
      puVar4[-9] = uVar11;
      puVar4[-8] = uVar12;
      puVar4[-7] = uVar13;
      puVar4[-6] = uVar14;
      puVar4[-5] = uVar15;
      puVar4[-4] = uVar16;
      uVar10 = puVar8[-2];
      uVar11 = puVar8[-1];
      puVar4[-3] = puVar8[-3];
      puVar4[-2] = uVar10;
      puVar4[-1] = uVar11;
      puVar4 = puVar4 + -0xb;
    }
  }
  uVar10 = param_3[1];
  uVar11 = param_3[2];
  uVar12 = param_3[3];
  uVar13 = param_3[4];
  uVar14 = param_3[5];
  uVar15 = param_3[6];
  uVar16 = param_3[7];
  *param_2 = *param_3;
  param_2[1] = uVar10;
  param_2[2] = uVar11;
  param_2[3] = uVar12;
  param_2[4] = uVar13;
  param_2[5] = uVar14;
  param_2[6] = uVar15;
  param_2[7] = uVar16;
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  param_2[8] = param_3[8];
  param_2[9] = uVar10;
  param_2[10] = uVar11;
  return;
}


