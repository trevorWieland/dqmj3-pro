#include "00365fe8_003664f0.h"



void fn_003664f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = param_1[7] - param_1[6] >> 0x1f;
  if ((param_1[7] - param_1[6]) / 0x2c + iVar1 != iVar1) {
    do {
      iVar1 = *(int *)(param_1[6] + uVar2 * 0x2c);
      if (iVar1 != -1) {
        (**(code **)(*param_1 + 0x4c))(param_1,iVar1,1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((param_1[7] - param_1[6]) / 0x2c));
  }
  return;
}



void fn_00366070(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  
  uVar2 = 0;
  iVar7 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar1 = iVar7 >> 0x1f;
  iVar7 = iVar7 / 0x2c + iVar1;
  if (iVar7 != iVar1) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x18) + uVar2 * 0x2c + 0x17) == '\0') {
        uVar11 = param_2[1];
        uVar12 = param_2[2];
        uVar13 = param_2[3];
        uVar15 = param_2[4];
        uVar16 = param_2[5];
        uVar17 = param_2[6];
        uVar19 = param_2[7];
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x18) + uVar2 * 0x2c);
        *puVar3 = *param_2;
        puVar3[1] = uVar11;
        puVar3[2] = uVar12;
        puVar3[3] = uVar13;
        puVar3[4] = uVar15;
        puVar3[5] = uVar16;
        puVar3[6] = uVar17;
        puVar3[7] = uVar19;
        uVar11 = param_2[9];
        uVar12 = param_2[10];
        puVar3[8] = param_2[8];
        puVar3[9] = uVar11;
        puVar3[10] = uVar12;
        iVar7 = *(int *)(param_1 + 0x18) + uVar2 * 0x2c;
        if (iVar7 != 0) goto LAB_003663f4;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(iVar7 - iVar1));
  }
  puVar3 = *(undefined4 **)(param_1 + 0x1c);
  puVar14 = (uint *)(param_1 + 0x18);
  if (puVar3 == *(undefined4 **)(param_1 + 0x20)) {
    uVar2 = (int)((int)puVar3 - *puVar14) / 0x2c;
    if (uVar2 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x20) - *puVar14) / 0x2c)) {
      *(undefined4 **)(param_1 + 0x1c) = puVar3 + 0xb;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = puVar3[-0xb];
        puVar3[1] = puVar3[-10];
        puVar3[2] = puVar3[-9];
        puVar3[3] = puVar3[-8];
        puVar3[4] = puVar3[-7];
        puVar3[5] = puVar3[-6];
        puVar3[6] = puVar3[-5];
        puVar3[7] = puVar3[-4];
        puVar3[8] = puVar3[-3];
        puVar3[9] = puVar3[-2];
        puVar3[10] = puVar3[-1];
      }
      puVar8 = puVar3 + -0xb;
      puVar9 = puVar3;
      if (puVar3 < puVar8) {
        if (0 < (int)puVar8 - (int)puVar3) {
          uVar2 = ((int)puVar8 - (int)puVar3) / 0x2c;
          if ((uVar2 & 1) != 0) {
            puVar3[-0xb] = puVar3[-0x16];
            puVar3[-10] = puVar3[-0x15];
            puVar3[-9] = puVar3[-0x14];
            puVar3[-8] = puVar3[-0x13];
            puVar3[-7] = puVar3[-0x12];
            puVar3[-6] = puVar3[-0x11];
            puVar3[-5] = puVar3[-0x10];
            puVar3[-4] = puVar3[-0xf];
            puVar8 = puVar3 + -0x16;
            puVar3[-3] = puVar3[-0xe];
            puVar3[-2] = puVar3[-0xd];
            puVar3[-1] = puVar3[-0xc];
            puVar9 = puVar3 + -0xb;
          }
          for (iVar7 = (int)uVar2 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            uVar11 = puVar8[-10];
            uVar12 = puVar8[-9];
            uVar13 = puVar8[-8];
            uVar15 = puVar8[-7];
            uVar16 = puVar8[-6];
            uVar17 = puVar8[-5];
            uVar19 = puVar8[-4];
            puVar9[-0xb] = puVar8[-0xb];
            puVar9[-10] = uVar11;
            puVar9[-9] = uVar12;
            puVar9[-8] = uVar13;
            puVar9[-7] = uVar15;
            puVar9[-6] = uVar16;
            puVar9[-5] = uVar17;
            puVar9[-4] = uVar19;
            uVar11 = puVar8[-2];
            uVar12 = puVar8[-1];
            puVar9[-3] = puVar8[-3];
            puVar9[-2] = uVar11;
            puVar9[-1] = uVar12;
            uVar11 = puVar8[-0x15];
            uVar12 = puVar8[-0x14];
            uVar13 = puVar8[-0x13];
            uVar15 = puVar8[-0x12];
            uVar16 = puVar8[-0x11];
            uVar17 = puVar8[-0x10];
            uVar19 = puVar8[-0xf];
            puVar4 = puVar8 + -0xe;
            puVar9[-0x16] = puVar8[-0x16];
            puVar9[-0x15] = uVar11;
            puVar9[-0x14] = uVar12;
            puVar9[-0x13] = uVar13;
            puVar9[-0x12] = uVar15;
            puVar9[-0x11] = uVar16;
            puVar9[-0x10] = uVar17;
            puVar9[-0xf] = uVar19;
            uVar11 = puVar8[-0xd];
            uVar12 = puVar8[-0xc];
            puVar8 = puVar8 + -0x16;
            puVar9[-0xe] = *puVar4;
            puVar9[-0xd] = uVar11;
            puVar9[-0xc] = uVar12;
            puVar9 = puVar9 + -0x16;
          }
        }
      }
      else {
        for (; puVar3 != puVar8; puVar8 = puVar8 + -0xb) {
          uVar11 = puVar8[-10];
          uVar12 = puVar8[-9];
          uVar13 = puVar8[-8];
          uVar15 = puVar8[-7];
          uVar16 = puVar8[-6];
          uVar17 = puVar8[-5];
          uVar19 = puVar8[-4];
          puVar9[-0xb] = puVar8[-0xb];
          puVar9[-10] = uVar11;
          puVar9[-9] = uVar12;
          puVar9[-8] = uVar13;
          puVar9[-7] = uVar15;
          puVar9[-6] = uVar16;
          puVar9[-5] = uVar17;
          puVar9[-4] = uVar19;
          uVar11 = puVar8[-2];
          uVar12 = puVar8[-1];
          puVar9[-3] = puVar8[-3];
          puVar9[-2] = uVar11;
          puVar9[-1] = uVar12;
          puVar9 = puVar9 + -0xb;
        }
      }
      uVar11 = param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      uVar15 = param_2[4];
      uVar16 = param_2[5];
      uVar17 = param_2[6];
      uVar19 = param_2[7];
      *puVar3 = *param_2;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3[4] = uVar15;
      puVar3[5] = uVar16;
      puVar3[6] = uVar17;
      puVar3[7] = uVar19;
      uVar11 = param_2[9];
      uVar12 = param_2[10];
      puVar3[8] = param_2[8];
      puVar3[9] = uVar11;
      puVar3[10] = uVar12;
    }
    else {
      uVar18 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
      if (uVar18 < uVar2 + 0x20) {
        uVar18 = uVar2 + 0x20;
      }
      puVar4 = (undefined4 *)fn_00100fc6(uVar18 * 0x2c,0);
      puVar9 = puVar4;
      for (puVar8 = (undefined4 *)*puVar14; puVar8 != puVar3; puVar8 = puVar8 + 0xb) {
        if (puVar9 != (undefined4 *)0x0) {
          uVar11 = puVar8[1];
          uVar12 = puVar8[2];
          uVar13 = puVar8[3];
          uVar15 = puVar8[4];
          uVar16 = puVar8[5];
          uVar17 = puVar8[6];
          uVar19 = puVar8[7];
          *puVar9 = *puVar8;
          puVar9[1] = uVar11;
          puVar9[2] = uVar12;
          puVar9[3] = uVar13;
          puVar9[4] = uVar15;
          puVar9[5] = uVar16;
          puVar9[6] = uVar17;
          puVar9[7] = uVar19;
          uVar11 = puVar8[9];
          uVar12 = puVar8[10];
          puVar9[8] = puVar8[8];
          puVar9[9] = uVar11;
          puVar9[10] = uVar12;
        }
        puVar9 = puVar9 + 0xb;
      }
      puVar8 = puVar4 + ((int)((int)puVar3 - *puVar14) / 0x2c) * 0xb;
      if (puVar8 != (undefined4 *)0x0) {
        uVar11 = param_2[1];
        uVar12 = param_2[2];
        uVar13 = param_2[3];
        uVar15 = param_2[4];
        uVar16 = param_2[5];
        uVar17 = param_2[6];
        uVar19 = param_2[7];
        *puVar8 = *param_2;
        puVar8[1] = uVar11;
        puVar8[2] = uVar12;
        puVar8[3] = uVar13;
        puVar8[4] = uVar15;
        puVar8[5] = uVar16;
        puVar8[6] = uVar17;
        puVar8[7] = uVar19;
        uVar11 = param_2[9];
        uVar12 = param_2[10];
        puVar8[8] = param_2[8];
        puVar8[9] = uVar11;
        puVar8[10] = uVar12;
      }
      puVar9 = *(undefined4 **)(param_1 + 0x1c);
      puVar8 = puVar4 + ((int)((int)puVar3 - *puVar14) / 0x2c) * 0xb;
      for (; puVar3 != puVar9; puVar3 = puVar3 + 0xb) {
        puVar5 = puVar8 + 0xb;
        if (puVar5 != (undefined4 *)0x0) {
          uVar11 = puVar3[1];
          uVar12 = puVar3[2];
          uVar13 = puVar3[3];
          uVar15 = puVar3[4];
          uVar16 = puVar3[5];
          uVar17 = puVar3[6];
          uVar19 = puVar3[7];
          *puVar5 = *puVar3;
          puVar8[0xc] = uVar11;
          puVar8[0xd] = uVar12;
          puVar8[0xe] = uVar13;
          puVar8[0xf] = uVar15;
          puVar8[0x10] = uVar16;
          puVar8[0x11] = uVar17;
          puVar8[0x12] = uVar19;
          uVar11 = puVar3[9];
          uVar12 = puVar3[10];
          puVar8[0x13] = puVar3[8];
          puVar8[0x14] = uVar11;
          puVar8[0x15] = uVar12;
        }
        puVar8 = puVar5;
      }
      uVar6 = *puVar14;
      uVar10 = *(uint *)(param_1 + 0x1c);
      uVar2 = uVar6;
      if (uVar10 < uVar6) {
        do {
          uVar2 = uVar2 + 0x2c;
        } while (uVar2 != uVar10);
      }
      fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0x20) - uVar6) / 0x2c,0);
      *puVar14 = (uint)puVar4;
      *(undefined4 **)(param_1 + 0x1c) = puVar4 + ((int)(uVar10 - uVar6) / 0x2c) * 0xb + 0xb;
      *(undefined4 **)(param_1 + 0x20) = puVar4 + uVar18 * 0xb;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x1c) = puVar3 + 0xb;
    if (puVar3 != (undefined4 *)0x0) {
      uVar11 = param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      uVar15 = param_2[4];
      uVar16 = param_2[5];
      uVar17 = param_2[6];
      uVar19 = param_2[7];
      *puVar3 = *param_2;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3[4] = uVar15;
      puVar3[5] = uVar16;
      puVar3[6] = uVar17;
      puVar3[7] = uVar19;
      uVar11 = param_2[9];
      uVar12 = param_2[10];
      puVar3[8] = param_2[8];
      puVar3[9] = uVar11;
      puVar3[10] = uVar12;
    }
  }
  iVar7 = *(int *)(param_1 + 0x18) +
          ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c + -1) * 0x2c;
LAB_003663f4:
  *(undefined1 *)(iVar7 + 0x17) = 1;
  return;
}



void fn_00365fe8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x2c + iVar1 != iVar1) {
    do {
      uVar4 = uVar5 * 0xb;
      piVar3 = *(int **)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c + 8);
      if (piVar3 != (int *)0x0) {
        uVar4 = (uint)*(byte *)(piVar3 + 0x16);
      }
      if (piVar3 != (int *)0x0 && uVar4 != 0) {
        (**(code **)(*piVar3 + 0xac))();
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  return;
}


