#include "00162e28_00162e28.h"



int fn_00162e28(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint local_90;
  uint local_8c [22];
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  *param_1 = &DAT_00858e0c;
  *(short *)(param_1 + 1) = (short)param_4;
  param_1[2] = param_2;
  puStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar2 = fn_001739c0(param_1 + 3,param_2,param_4);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  local_90 = 8;
  piVar9 = (int *)(iVar2 + 0x10);
  if ((uint)((*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x10)) / 0x54) < 8) {
    uVar12 = (*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10)) / 0x54;
    local_8c[0] = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
    if (local_8c[0] < uVar12 + 0x20) {
      local_8c[0] = uVar12 + 0x20;
    }
    puVar3 = local_8c;
    if (local_8c[0] < 9) {
      puVar3 = &local_90;
    }
    uVar12 = *puVar3;
    puVar4 = (undefined4 *)fn_00100fc6(uVar12 * 0x54,0);
    iVar7 = *(int *)(iVar2 + 0x14);
    puVar10 = puVar4;
    for (iVar6 = *piVar9; iVar6 != iVar7; iVar6 = iVar6 + 0x54) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = &DAT_00858ac8;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(iVar6 + 4);
        puVar10[2] = *(undefined4 *)(iVar6 + 8);
        uVar14 = *(undefined4 *)(iVar6 + 0x10);
        uVar15 = *(undefined4 *)(iVar6 + 0x14);
        uVar16 = *(undefined4 *)(iVar6 + 0x18);
        uVar17 = *(undefined4 *)(iVar6 + 0x1c);
        uVar18 = *(undefined4 *)(iVar6 + 0x20);
        uVar19 = *(undefined4 *)(iVar6 + 0x24);
        uVar20 = *(undefined4 *)(iVar6 + 0x28);
        puVar10[3] = *(undefined4 *)(iVar6 + 0xc);
        puVar10[4] = uVar14;
        puVar10[5] = uVar15;
        puVar10[6] = uVar16;
        puVar10[7] = uVar17;
        puVar10[8] = uVar18;
        puVar10[9] = uVar19;
        puVar10[10] = uVar20;
        puVar10[0xb] = *(undefined4 *)(iVar6 + 0x2c);
        uVar14 = *(undefined4 *)(iVar6 + 0x34);
        uVar15 = *(undefined4 *)(iVar6 + 0x38);
        puVar10[0xc] = *(undefined4 *)(iVar6 + 0x30);
        puVar10[0xd] = uVar14;
        puVar10[0xe] = uVar15;
        puVar10[0xf] = *(undefined4 *)(iVar6 + 0x3c);
        puVar10[0x10] = *(undefined4 *)(iVar6 + 0x40);
        puVar10[0x11] = *(undefined4 *)(iVar6 + 0x44);
        *(undefined1 *)(puVar10 + 0x12) = *(undefined1 *)(iVar6 + 0x48);
        puVar10[0x13] = *(undefined4 *)(iVar6 + 0x4c);
        puVar10[0x14] = *(undefined4 *)(iVar6 + 0x50);
      }
      puVar10 = puVar10 + 0x15;
    }
    puVar11 = *(undefined4 **)(iVar2 + 0x14);
    for (puVar10 = (undefined4 *)*piVar9; puVar10 != puVar11; puVar10 = puVar10 + 0x15) {
      (**(code **)*puVar10)(puVar10);
    }
    fn_001008c4(*piVar9,(*(int *)(iVar2 + 0x18) - *piVar9) / 0x54,0);
    iVar6 = *piVar9;
    *piVar9 = (int)puVar4;
    *(undefined4 **)(iVar2 + 0x14) = puVar4 + ((*(int *)(iVar2 + 0x14) - iVar6) / 0x54) * 0x15;
    *(undefined4 **)(iVar2 + 0x18) = puVar4 + uVar12 * 0x15;
  }
  uVar12 = 0;
  do {
    piVar9 = (int *)(iVar2 + 0x10);
    local_90 = uVar12;
    iVar6 = fn_001739e0(local_8c,local_30,uStack_2c,*(undefined2 *)(iVar2 + -8));
    puVar10 = *(undefined4 **)(iVar2 + 0x14);
    if (puVar10 == *(undefined4 **)(iVar2 + 0x18)) {
      uVar1 = ((int)puVar10 - *piVar9) / 0x54;
      if (uVar1 < (uint)(((int)*(undefined4 **)(iVar2 + 0x18) - *piVar9) / 0x54)) {
        *(undefined4 **)(iVar2 + 0x14) = puVar10 + 0x15;
        puVar4 = puVar10;
        puVar11 = puVar10;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = &DAT_00858ac8;
          *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar10 + -0x14);
          puVar10[2] = puVar10[-0x13];
          puVar10[3] = puVar10[-0x12];
          puVar10[4] = puVar10[-0x11];
          puVar10[5] = puVar10[-0x10];
          puVar10[6] = puVar10[-0xf];
          puVar10[7] = puVar10[-0xe];
          puVar10[8] = puVar10[-0xd];
          puVar10[9] = puVar10[-0xc];
          puVar10[10] = puVar10[-0xb];
          puVar10[0xb] = puVar10[-10];
          puVar10[0xc] = puVar10[-9];
          puVar10[0xd] = puVar10[-8];
          puVar10[0xe] = puVar10[-7];
          puVar10[0xf] = puVar10[-6];
          puVar10[0x10] = puVar10[-5];
          puVar10[0x11] = puVar10[-4];
          *(undefined1 *)(puVar10 + 0x12) = *(undefined1 *)(puVar10 + -3);
          puVar10[0x13] = puVar10[-2];
          puVar10[0x14] = puVar10[-1];
        }
        while (puVar10 != puVar11 + -0x15) {
          *(undefined2 *)(puVar4 + -0x14) = *(undefined2 *)(puVar11 + -0x29);
          puVar4[-0x13] = puVar11[-0x28];
          uVar14 = puVar11[-0x26];
          uVar15 = puVar11[-0x25];
          uVar16 = puVar11[-0x24];
          uVar17 = puVar11[-0x23];
          uVar18 = puVar11[-0x22];
          uVar19 = puVar11[-0x21];
          uVar20 = puVar11[-0x20];
          puVar4[-0x12] = puVar11[-0x27];
          puVar4[-0x11] = uVar14;
          puVar4[-0x10] = uVar15;
          puVar4[-0xf] = uVar16;
          puVar4[-0xe] = uVar17;
          puVar4[-0xd] = uVar18;
          puVar4[-0xc] = uVar19;
          puVar4[-0xb] = uVar20;
          puVar4[-10] = puVar11[-0x1f];
          uVar14 = puVar11[-0x1d];
          uVar15 = puVar11[-0x1c];
          puVar4[-9] = puVar11[-0x1e];
          puVar4[-8] = uVar14;
          puVar4[-7] = uVar15;
          puVar4[-6] = puVar11[-0x1b];
          puVar4[-5] = puVar11[-0x1a];
          puVar4[-4] = puVar11[-0x19];
          *(undefined1 *)(puVar4 + -3) = *(undefined1 *)(puVar11 + -0x18);
          puVar4[-2] = puVar11[-0x17];
          puVar4[-1] = puVar11[-0x16];
          puVar4 = puVar4 + -0x15;
          puVar11 = puVar11 + -0x15;
        }
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(iVar6 + 4);
        puVar10[2] = *(undefined4 *)(iVar6 + 8);
        uVar14 = *(undefined4 *)(iVar6 + 0x10);
        uVar15 = *(undefined4 *)(iVar6 + 0x14);
        uVar16 = *(undefined4 *)(iVar6 + 0x18);
        uVar17 = *(undefined4 *)(iVar6 + 0x1c);
        uVar18 = *(undefined4 *)(iVar6 + 0x20);
        uVar19 = *(undefined4 *)(iVar6 + 0x24);
        uVar20 = *(undefined4 *)(iVar6 + 0x28);
        puVar10[3] = *(undefined4 *)(iVar6 + 0xc);
        puVar10[4] = uVar14;
        puVar10[5] = uVar15;
        puVar10[6] = uVar16;
        puVar10[7] = uVar17;
        puVar10[8] = uVar18;
        puVar10[9] = uVar19;
        puVar10[10] = uVar20;
        puVar10[0xb] = *(undefined4 *)(iVar6 + 0x2c);
        uVar14 = *(undefined4 *)(iVar6 + 0x34);
        uVar15 = *(undefined4 *)(iVar6 + 0x38);
        puVar10[0xc] = *(undefined4 *)(iVar6 + 0x30);
        puVar10[0xd] = uVar14;
        puVar10[0xe] = uVar15;
        puVar10[0xf] = *(undefined4 *)(iVar6 + 0x3c);
        puVar10[0x10] = *(undefined4 *)(iVar6 + 0x40);
        puVar10[0x11] = *(undefined4 *)(iVar6 + 0x44);
        *(undefined1 *)(puVar10 + 0x12) = *(undefined1 *)(iVar6 + 0x48);
        puVar10[0x13] = *(undefined4 *)(iVar6 + 0x4c);
        puVar10[0x14] = *(undefined4 *)(iVar6 + 0x50);
      }
      else {
        uVar13 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar13 < uVar1 + 0x20) {
          uVar13 = uVar1 + 0x20;
        }
        puVar5 = (undefined4 *)fn_00100fc6(uVar13 * 0x54,0);
        puVar11 = puVar5;
        for (puVar4 = (undefined4 *)*piVar9; puVar4 != puVar10; puVar4 = puVar4 + 0x15) {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = &DAT_00858ac8;
            *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(puVar4 + 1);
            puVar11[2] = puVar4[2];
            uVar14 = puVar4[4];
            uVar15 = puVar4[5];
            uVar16 = puVar4[6];
            uVar17 = puVar4[7];
            uVar18 = puVar4[8];
            uVar19 = puVar4[9];
            uVar20 = puVar4[10];
            puVar11[3] = puVar4[3];
            puVar11[4] = uVar14;
            puVar11[5] = uVar15;
            puVar11[6] = uVar16;
            puVar11[7] = uVar17;
            puVar11[8] = uVar18;
            puVar11[9] = uVar19;
            puVar11[10] = uVar20;
            puVar11[0xb] = puVar4[0xb];
            uVar14 = puVar4[0xd];
            uVar15 = puVar4[0xe];
            puVar11[0xc] = puVar4[0xc];
            puVar11[0xd] = uVar14;
            puVar11[0xe] = uVar15;
            puVar11[0xf] = puVar4[0xf];
            puVar11[0x10] = puVar4[0x10];
            puVar11[0x11] = puVar4[0x11];
            *(undefined1 *)(puVar11 + 0x12) = *(undefined1 *)(puVar4 + 0x12);
            puVar11[0x13] = puVar4[0x13];
            puVar11[0x14] = puVar4[0x14];
          }
          puVar11 = puVar11 + 0x15;
        }
        puVar4 = puVar5 + (((int)puVar10 - *piVar9) / 0x54) * 0x15;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = &DAT_00858ac8;
          *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(iVar6 + 4);
          puVar4[2] = *(undefined4 *)(iVar6 + 8);
          uVar14 = *(undefined4 *)(iVar6 + 0x10);
          uVar15 = *(undefined4 *)(iVar6 + 0x14);
          uVar16 = *(undefined4 *)(iVar6 + 0x18);
          uVar17 = *(undefined4 *)(iVar6 + 0x1c);
          uVar18 = *(undefined4 *)(iVar6 + 0x20);
          uVar19 = *(undefined4 *)(iVar6 + 0x24);
          uVar20 = *(undefined4 *)(iVar6 + 0x28);
          puVar4[3] = *(undefined4 *)(iVar6 + 0xc);
          puVar4[4] = uVar14;
          puVar4[5] = uVar15;
          puVar4[6] = uVar16;
          puVar4[7] = uVar17;
          puVar4[8] = uVar18;
          puVar4[9] = uVar19;
          puVar4[10] = uVar20;
          puVar4[0xb] = *(undefined4 *)(iVar6 + 0x2c);
          uVar14 = *(undefined4 *)(iVar6 + 0x34);
          uVar15 = *(undefined4 *)(iVar6 + 0x38);
          puVar4[0xc] = *(undefined4 *)(iVar6 + 0x30);
          puVar4[0xd] = uVar14;
          puVar4[0xe] = uVar15;
          puVar4[0xf] = *(undefined4 *)(iVar6 + 0x3c);
          puVar4[0x10] = *(undefined4 *)(iVar6 + 0x40);
          puVar4[0x11] = *(undefined4 *)(iVar6 + 0x44);
          *(undefined1 *)(puVar4 + 0x12) = *(undefined1 *)(iVar6 + 0x48);
          puVar4[0x13] = *(undefined4 *)(iVar6 + 0x4c);
          puVar4[0x14] = *(undefined4 *)(iVar6 + 0x50);
        }
        puVar11 = *(undefined4 **)(iVar2 + 0x14);
        puVar4 = puVar5 + (((int)puVar10 - *piVar9) / 0x54) * 0x15;
        for (; puVar10 != puVar11; puVar10 = puVar10 + 0x15) {
          puVar8 = puVar4 + 0x15;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = &DAT_00858ac8;
            *(undefined2 *)(puVar4 + 0x16) = *(undefined2 *)(puVar10 + 1);
            puVar4[0x17] = puVar10[2];
            uVar14 = puVar10[4];
            uVar15 = puVar10[5];
            uVar16 = puVar10[6];
            uVar17 = puVar10[7];
            uVar18 = puVar10[8];
            uVar19 = puVar10[9];
            uVar20 = puVar10[10];
            puVar4[0x18] = puVar10[3];
            puVar4[0x19] = uVar14;
            puVar4[0x1a] = uVar15;
            puVar4[0x1b] = uVar16;
            puVar4[0x1c] = uVar17;
            puVar4[0x1d] = uVar18;
            puVar4[0x1e] = uVar19;
            puVar4[0x1f] = uVar20;
            puVar4[0x20] = puVar10[0xb];
            uVar14 = puVar10[0xd];
            uVar15 = puVar10[0xe];
            puVar4[0x21] = puVar10[0xc];
            puVar4[0x22] = uVar14;
            puVar4[0x23] = uVar15;
            puVar4[0x24] = puVar10[0xf];
            puVar4[0x25] = puVar10[0x10];
            puVar4[0x26] = puVar10[0x11];
            *(undefined1 *)(puVar4 + 0x27) = *(undefined1 *)(puVar10 + 0x12);
            puVar4[0x28] = puVar10[0x13];
            puVar4[0x29] = puVar10[0x14];
          }
          puVar4 = puVar8;
        }
        puVar10 = (undefined4 *)*piVar9;
        puVar4 = *(undefined4 **)(iVar2 + 0x14);
        local_90 = ((int)puVar4 - (int)puVar10) / 0x54;
        for (; puVar10 != puVar4; puVar10 = puVar10 + 0x15) {
          (**(code **)*puVar10)(puVar10);
        }
        fn_001008c4(*piVar9,(*(int *)(iVar2 + 0x18) - *piVar9) / 0x54,0);
        *piVar9 = (int)puVar5;
        *(undefined4 **)(iVar2 + 0x14) = puVar5 + local_90 * 0x15 + 0x15;
        *(undefined4 **)(iVar2 + 0x18) = puVar5 + uVar13 * 0x15;
      }
    }
    else {
      *(undefined4 **)(iVar2 + 0x14) = puVar10 + 0x15;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = &DAT_00858ac8;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(iVar6 + 4);
        puVar10[2] = *(undefined4 *)(iVar6 + 8);
        uVar14 = *(undefined4 *)(iVar6 + 0x10);
        uVar15 = *(undefined4 *)(iVar6 + 0x14);
        uVar16 = *(undefined4 *)(iVar6 + 0x18);
        uVar17 = *(undefined4 *)(iVar6 + 0x1c);
        uVar18 = *(undefined4 *)(iVar6 + 0x20);
        uVar19 = *(undefined4 *)(iVar6 + 0x24);
        uVar20 = *(undefined4 *)(iVar6 + 0x28);
        puVar10[3] = *(undefined4 *)(iVar6 + 0xc);
        puVar10[4] = uVar14;
        puVar10[5] = uVar15;
        puVar10[6] = uVar16;
        puVar10[7] = uVar17;
        puVar10[8] = uVar18;
        puVar10[9] = uVar19;
        puVar10[10] = uVar20;
        puVar10[0xb] = *(undefined4 *)(iVar6 + 0x2c);
        uVar14 = *(undefined4 *)(iVar6 + 0x34);
        uVar15 = *(undefined4 *)(iVar6 + 0x38);
        puVar10[0xc] = *(undefined4 *)(iVar6 + 0x30);
        puVar10[0xd] = uVar14;
        puVar10[0xe] = uVar15;
        puVar10[0xf] = *(undefined4 *)(iVar6 + 0x3c);
        puVar10[0x10] = *(undefined4 *)(iVar6 + 0x40);
        puVar10[0x11] = *(undefined4 *)(iVar6 + 0x44);
        *(undefined1 *)(puVar10 + 0x12) = *(undefined1 *)(iVar6 + 0x48);
        puVar10[0x13] = *(undefined4 *)(iVar6 + 0x4c);
        puVar10[0x14] = *(undefined4 *)(iVar6 + 0x50);
      }
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 8);
  return iVar2 + -0xc;
}


