#include "0078fa28_0078fd10.h"



int * fn_0078fd10(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[1];
  for (iVar3 = *param_1; iVar3 != iVar4; iVar3 = iVar3 + 0x20) {
    uVar1 = *(uint *)(iVar3 + 0x14);
    uVar2 = uVar1;
    if (*(uint *)(iVar3 + 0x18) <= uVar1) {
      for (; uVar2 != *(uint *)(iVar3 + 0x18); uVar2 = uVar2 + 2) {
      }
    }
    fn_001008c4(uVar1,(int)(*(int *)(iVar3 + 0x1c) - uVar1) >> 1,0);
    uVar1 = *(uint *)(iVar3 + 8);
    uVar2 = uVar1;
    if (*(uint *)(iVar3 + 0xc) < uVar1) {
      do {
        uVar2 = uVar2 + 2;
      } while (uVar2 != *(uint *)(iVar3 + 0xc));
    }
    fn_001008c4(uVar1,(int)(*(int *)(iVar3 + 0x10) - uVar1) >> 1,0);
  }
  fn_001008c4(*param_1,param_1[2] - *param_1 >> 5,0);
  return param_1;
}



void fn_0078fa28(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  
  puVar9 = (undefined4 *)param_1[1];
  if (puVar9 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar9 + 0xd);
    if (puVar9 != (undefined4 *)0x0) {
      uVar10 = param_2[1];
      uVar11 = param_2[2];
      uVar12 = param_2[3];
      uVar13 = param_2[4];
      uVar14 = param_2[5];
      uVar15 = param_2[6];
      uVar17 = param_2[7];
      *puVar9 = *param_2;
      puVar9[1] = uVar10;
      puVar9[2] = uVar11;
      puVar9[3] = uVar12;
      puVar9[4] = uVar13;
      puVar9[5] = uVar14;
      puVar9[6] = uVar15;
      puVar9[7] = uVar17;
      uVar10 = param_2[9];
      uVar11 = param_2[10];
      uVar12 = param_2[0xb];
      uVar13 = param_2[0xc];
      puVar9[8] = param_2[8];
      puVar9[9] = uVar10;
      puVar9[10] = uVar11;
      puVar9[0xb] = uVar12;
      puVar9[0xc] = uVar13;
    }
    return;
  }
  uVar4 = (int)((int)puVar9 - *param_1) / 0x34;
  if (uVar4 < (uint)((int)((int)param_1[2] - *param_1) / 0x34)) {
    param_1[1] = (uint)(puVar9 + 0xd);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = puVar9[-0xd];
      puVar9[1] = puVar9[-0xc];
      puVar9[2] = puVar9[-0xb];
      puVar9[3] = puVar9[-10];
      puVar9[4] = puVar9[-9];
      puVar9[5] = puVar9[-8];
      puVar9[6] = puVar9[-7];
      puVar9[7] = puVar9[-6];
      puVar9[8] = puVar9[-5];
      puVar9[9] = puVar9[-4];
      puVar9[10] = puVar9[-3];
      puVar9[0xb] = puVar9[-2];
      puVar9[0xc] = puVar9[-1];
    }
    puVar6 = puVar9 + -0xd;
    puVar7 = puVar9;
    if (puVar9 < puVar6) {
      if (0 < (int)puVar6 - (int)puVar9) {
        uVar4 = ((int)puVar6 - (int)puVar9) / 0x34;
        if ((uVar4 & 1) != 0) {
          puVar9[-0xd] = puVar9[-0x1a];
          puVar9[-0xc] = puVar9[-0x19];
          puVar9[-0xb] = puVar9[-0x18];
          puVar9[-10] = puVar9[-0x17];
          puVar9[-9] = puVar9[-0x16];
          puVar9[-8] = puVar9[-0x15];
          puVar9[-7] = puVar9[-0x14];
          puVar9[-6] = puVar9[-0x13];
          puVar6 = puVar9 + -0x1a;
          puVar9[-5] = puVar9[-0x12];
          puVar9[-4] = puVar9[-0x11];
          puVar9[-3] = puVar9[-0x10];
          puVar9[-2] = puVar9[-0xf];
          puVar9[-1] = puVar9[-0xe];
          puVar7 = puVar9 + -0xd;
        }
        for (iVar5 = (int)uVar4 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar10 = puVar6[-0xc];
          uVar11 = puVar6[-0xb];
          uVar12 = puVar6[-10];
          uVar13 = puVar6[-9];
          uVar14 = puVar6[-8];
          uVar15 = puVar6[-7];
          uVar17 = puVar6[-6];
          puVar7[-0xd] = puVar6[-0xd];
          puVar7[-0xc] = uVar10;
          puVar7[-0xb] = uVar11;
          puVar7[-10] = uVar12;
          puVar7[-9] = uVar13;
          puVar7[-8] = uVar14;
          puVar7[-7] = uVar15;
          puVar7[-6] = uVar17;
          uVar10 = puVar6[-4];
          uVar11 = puVar6[-3];
          uVar12 = puVar6[-2];
          uVar13 = puVar6[-1];
          puVar7[-5] = puVar6[-5];
          puVar7[-4] = uVar10;
          puVar7[-3] = uVar11;
          puVar7[-2] = uVar12;
          puVar7[-1] = uVar13;
          uVar10 = puVar6[-0x19];
          uVar11 = puVar6[-0x18];
          uVar12 = puVar6[-0x17];
          uVar13 = puVar6[-0x16];
          uVar14 = puVar6[-0x15];
          uVar15 = puVar6[-0x14];
          uVar17 = puVar6[-0x13];
          puVar2 = puVar6 + -0x12;
          puVar7[-0x1a] = puVar6[-0x1a];
          puVar7[-0x19] = uVar10;
          puVar7[-0x18] = uVar11;
          puVar7[-0x17] = uVar12;
          puVar7[-0x16] = uVar13;
          puVar7[-0x15] = uVar14;
          puVar7[-0x14] = uVar15;
          puVar7[-0x13] = uVar17;
          uVar10 = puVar6[-0x11];
          uVar11 = puVar6[-0x10];
          uVar12 = puVar6[-0xf];
          uVar13 = puVar6[-0xe];
          puVar6 = puVar6 + -0x1a;
          puVar7[-0x12] = *puVar2;
          puVar7[-0x11] = uVar10;
          puVar7[-0x10] = uVar11;
          puVar7[-0xf] = uVar12;
          puVar7[-0xe] = uVar13;
          puVar7 = puVar7 + -0x1a;
        }
      }
    }
    else {
      for (; puVar9 != puVar6; puVar6 = puVar6 + -0xd) {
        uVar10 = puVar6[-0xc];
        uVar11 = puVar6[-0xb];
        uVar12 = puVar6[-10];
        uVar13 = puVar6[-9];
        uVar14 = puVar6[-8];
        uVar15 = puVar6[-7];
        uVar17 = puVar6[-6];
        puVar7[-0xd] = puVar6[-0xd];
        puVar7[-0xc] = uVar10;
        puVar7[-0xb] = uVar11;
        puVar7[-10] = uVar12;
        puVar7[-9] = uVar13;
        puVar7[-8] = uVar14;
        puVar7[-7] = uVar15;
        puVar7[-6] = uVar17;
        uVar10 = puVar6[-4];
        uVar11 = puVar6[-3];
        uVar12 = puVar6[-2];
        uVar13 = puVar6[-1];
        puVar7[-5] = puVar6[-5];
        puVar7[-4] = uVar10;
        puVar7[-3] = uVar11;
        puVar7[-2] = uVar12;
        puVar7[-1] = uVar13;
        puVar7 = puVar7 + -0xd;
      }
    }
    uVar10 = param_2[1];
    uVar11 = param_2[2];
    uVar12 = param_2[3];
    uVar13 = param_2[4];
    uVar14 = param_2[5];
    uVar15 = param_2[6];
    uVar17 = param_2[7];
    *puVar9 = *param_2;
    puVar9[1] = uVar10;
    puVar9[2] = uVar11;
    puVar9[3] = uVar12;
    puVar9[4] = uVar13;
    puVar9[5] = uVar14;
    puVar9[6] = uVar15;
    puVar9[7] = uVar17;
    uVar10 = param_2[9];
    uVar11 = param_2[10];
    uVar12 = param_2[0xb];
    uVar13 = param_2[0xc];
    puVar9[8] = param_2[8];
    puVar9[9] = uVar10;
    puVar9[10] = uVar11;
    puVar9[0xb] = uVar12;
    puVar9[0xc] = uVar13;
    return;
  }
  uVar1 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  uVar16 = uVar4 + 0x20;
  if (uVar4 + 0x20 <= uVar1) {
    uVar16 = uVar1;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar16 * 0x34,0);
  puVar7 = puVar2;
  for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar9; puVar6 = puVar6 + 0xd) {
    if (puVar7 != (undefined4 *)0x0) {
      uVar10 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      uVar13 = puVar6[4];
      uVar14 = puVar6[5];
      uVar15 = puVar6[6];
      uVar17 = puVar6[7];
      *puVar7 = *puVar6;
      puVar7[1] = uVar10;
      puVar7[2] = uVar11;
      puVar7[3] = uVar12;
      puVar7[4] = uVar13;
      puVar7[5] = uVar14;
      puVar7[6] = uVar15;
      puVar7[7] = uVar17;
      uVar10 = puVar6[9];
      uVar11 = puVar6[10];
      uVar12 = puVar6[0xb];
      uVar13 = puVar6[0xc];
      puVar7[8] = puVar6[8];
      puVar7[9] = uVar10;
      puVar7[10] = uVar11;
      puVar7[0xb] = uVar12;
      puVar7[0xc] = uVar13;
    }
    puVar7 = puVar7 + 0xd;
  }
  puVar6 = puVar2 + ((int)((int)puVar9 - *param_1) / 0x34) * 0xd;
  if (puVar6 != (undefined4 *)0x0) {
    uVar10 = param_2[1];
    uVar11 = param_2[2];
    uVar12 = param_2[3];
    uVar13 = param_2[4];
    uVar14 = param_2[5];
    uVar15 = param_2[6];
    uVar17 = param_2[7];
    *puVar6 = *param_2;
    puVar6[1] = uVar10;
    puVar6[2] = uVar11;
    puVar6[3] = uVar12;
    puVar6[4] = uVar13;
    puVar6[5] = uVar14;
    puVar6[6] = uVar15;
    puVar6[7] = uVar17;
    uVar10 = param_2[9];
    uVar11 = param_2[10];
    uVar12 = param_2[0xb];
    uVar13 = param_2[0xc];
    puVar6[8] = param_2[8];
    puVar6[9] = uVar10;
    puVar6[10] = uVar11;
    puVar6[0xb] = uVar12;
    puVar6[0xc] = uVar13;
  }
  puVar7 = (undefined4 *)param_1[1];
  puVar6 = puVar2 + ((int)((int)puVar9 - *param_1) / 0x34) * 0xd;
  for (; puVar9 != puVar7; puVar9 = puVar9 + 0xd) {
    puVar3 = puVar6 + 0xd;
    if (puVar3 != (undefined4 *)0x0) {
      uVar10 = puVar9[1];
      uVar11 = puVar9[2];
      uVar12 = puVar9[3];
      uVar13 = puVar9[4];
      uVar14 = puVar9[5];
      uVar15 = puVar9[6];
      uVar17 = puVar9[7];
      *puVar3 = *puVar9;
      puVar6[0xe] = uVar10;
      puVar6[0xf] = uVar11;
      puVar6[0x10] = uVar12;
      puVar6[0x11] = uVar13;
      puVar6[0x12] = uVar14;
      puVar6[0x13] = uVar15;
      puVar6[0x14] = uVar17;
      uVar10 = puVar9[9];
      uVar11 = puVar9[10];
      uVar12 = puVar9[0xb];
      uVar13 = puVar9[0xc];
      puVar6[0x15] = puVar9[8];
      puVar6[0x16] = uVar10;
      puVar6[0x17] = uVar11;
      puVar6[0x18] = uVar12;
      puVar6[0x19] = uVar13;
    }
    puVar6 = puVar3;
  }
  uVar1 = *param_1;
  uVar8 = param_1[1];
  uVar4 = uVar1;
  if (uVar8 < uVar1) {
    do {
      uVar4 = uVar4 + 0x34;
    } while (uVar4 != uVar8);
  }
  fn_001008c4(uVar1,(int)(param_1[2] - uVar1) / 0x34,0);
  *param_1 = (uint)puVar2;
  param_1[1] = (uint)(puVar2 + ((int)(uVar8 - uVar1) / 0x34) * 0xd + 0xd);
  param_1[2] = (uint)(puVar2 + uVar16 * 0xd);
  return;
}


