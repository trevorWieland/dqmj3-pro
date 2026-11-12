#include "006e1328_006e16f0.h"



void fn_006e16f0(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *unaff_r11;
  uint *puVar11;
  uint local_808;
  uint local_804;
  uint local_800;
  uint local_7fc;
  uint local_448 [4];
  uint local_438 [238];
  undefined1 auStack_80 [48];
  byte *local_50;
  undefined4 local_4c;
  int local_48 [4];
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  int local_2c;
  
  local_4c = param_5;
  iStack_38 = param_1;
  piStack_34 = param_2;
  iStack_30 = param_3;
  local_2c = param_4;
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  pbVar9 = *(byte **)(param_1 + 0x10);
  local_50 = pbVar9 + *(int *)(param_1 + 0x14) * 0x34;
  if (local_50 != pbVar9) {
    unaff_r11 = &local_808;
  }
  if (local_50 != pbVar9) {
    do {
      if ((*pbVar9 & 1) == 0) {
        if ((*pbVar9 & 2) != 0) {
          iVar6 = 0;
          uVar1 = 0;
          if (*(short *)(pbVar9 + 2) != 0) {
            do {
              fn_001ad39c(local_448 + iVar6 * 0xc,local_4c,
                           *(int *)(param_3 + 0x14) +
                           (uint)*(ushort *)(pbVar9 + iVar6 * 2 + 4) * 0x30);
              uVar1 = (uint)*(ushort *)(pbVar9 + 2);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uVar1);
          }
          puVar10 = (uint *)*param_2;
          *puVar10 = *(byte *)(local_2c + 2) | 0x80000000;
          puVar10[1] = 0xf02c0;
          iVar6 = uVar1 * 3 + -1;
          puVar10[2] = local_448[3];
          puVar10[3] = uVar1 * 0xc00000 - 0x100000 | 0xf02c1;
          puVar10[4] = local_448[2];
          puVar10[5] = local_448[1];
          puVar7 = puVar10 + 7;
          puVar10[6] = local_448[0];
          if (0 < iVar6) {
            puVar2 = local_438 + 3;
            puVar3 = local_438 + 2;
            puVar11 = local_438 + 1;
            puVar5 = local_438;
            puVar10 = puVar7;
            do {
              iVar6 = iVar6 + -1;
              *puVar10 = *puVar2;
              puVar2 = puVar2 + 4;
              puVar10[1] = *puVar3;
              puVar3 = puVar3 + 4;
              puVar10[2] = *puVar11;
              puVar11 = puVar11 + 4;
              puVar10[3] = *puVar5;
              puVar5 = puVar5 + 4;
              puVar10 = puVar10 + 4;
            } while (iVar6 != 0);
            puVar7 = puVar7 + uVar1 * 0xc;
            goto LAB_006e1990;
          }
          goto LAB_006e1994;
        }
        fn_001ad39c(auStack_80,local_4c,
                     *(int *)(param_3 + 0x14) + (uint)*(ushort *)(pbVar9 + 4) * 0x30);
        puVar7 = (uint *)*param_2;
        *puVar7 = *(byte *)(local_2c + 2) | 0x80000000;
        puVar7[1] = 0xf02c0;
        fn_001ad578(puVar7 + 2,auStack_80,0xbf02c1);
        *param_2 = (int)(puVar7 + 0x10);
      }
      else {
        iVar6 = 0;
        uVar1 = 0;
        if (*(short *)(pbVar9 + 2) != 0) {
          do {
            puVar7 = unaff_r11 + iVar6 * 0xc;
            fn_001ad39c(puVar7,local_4c,
                         *(int *)(param_3 + 0x14) + (uint)*(ushort *)(pbVar9 + iVar6 * 2 + 4) * 0x30
                        );
            fn_001ad06c(puVar7,puVar7,
                         *(int *)(*(int *)(param_1 + 0x2c) + 0x70) +
                         (uint)*(ushort *)(pbVar9 + iVar6 * 2 + 4) * 100 + 0x2c);
            uVar1 = (uint)*(ushort *)(pbVar9 + 2);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar1);
        }
        puVar10 = (uint *)*param_2;
        *puVar10 = *(byte *)(local_2c + 2) | 0x80000000;
        puVar10[1] = 0xf02c0;
        iVar6 = uVar1 * 3 + -1;
        puVar10[2] = local_7fc;
        puVar10[3] = uVar1 * 0xc00000 - 0x100000 | 0xf02c1;
        puVar10[4] = local_800;
        puVar10[5] = local_804;
        puVar7 = puVar10 + 7;
        puVar10[6] = local_808;
        if (0 < iVar6) {
          puVar3 = unaff_r11 + 7;
          puVar5 = unaff_r11 + 6;
          puVar11 = unaff_r11 + 5;
          puVar2 = puVar7;
          puVar10 = unaff_r11;
          do {
            puVar10 = puVar10 + 4;
            iVar6 = iVar6 + -1;
            *puVar2 = *puVar3;
            puVar3 = puVar3 + 4;
            puVar2[1] = *puVar5;
            puVar5 = puVar5 + 4;
            puVar2[2] = *puVar11;
            puVar11 = puVar11 + 4;
            puVar2[3] = *puVar10;
            puVar2 = puVar2 + 4;
          } while (iVar6 != 0);
          puVar7 = puVar7 + uVar1 * 0xc;
LAB_006e1990:
          puVar7 = puVar7 + -4;
        }
LAB_006e1994:
        *puVar7 = 0;
        *param_2 = (int)(puVar7 + 1);
      }
      iVar6 = *param_2;
      iVar4 = *(int *)(pbVar9 + 0x30);
      iVar8 = *(int *)(pbVar9 + 0x2c);
      if (iVar6 != 0 && iVar8 != 0) {
        iVar6 = fn_0044ef7c(iVar6,(iVar6 - param_2[2] & 0xfffffffcU) + 0x18);
        *param_2 = iVar6;
        iVar6 = fn_0044efc8(iVar6,local_48,iVar8,iVar4 << 2);
        *param_2 = iVar6;
        if ((uint *)param_2[3] != (uint *)0x0) {
          *(uint *)param_2[3] = (uint)(iVar6 - param_2[2]) >> 3;
        }
        param_2[2] = *param_2;
        param_2[3] = local_48[0];
        if (param_2[4] == 0) {
          param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
        }
      }
      pbVar9 = pbVar9 + 0x34;
    } while (local_50 != pbVar9);
  }
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
  return;
}



void fn_006e1328(int param_1,int *param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  byte *pbVar10;
  uint *unaff_r11;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_7d8;
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  uint local_418 [4];
  uint local_408 [238];
  byte *local_50;
  int local_4c [5];
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  int local_2c;
  
  iStack_38 = param_1;
  piStack_34 = param_2;
  iStack_30 = param_3;
  local_2c = param_4;
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  pbVar10 = *(byte **)(param_1 + 0x10);
  local_50 = pbVar10 + *(int *)(param_1 + 0x14) * 0x34;
  if (local_50 != pbVar10) {
    unaff_r11 = &local_7d8;
  }
  if (local_50 != pbVar10) {
    do {
      if ((*pbVar10 & 1) == 0) {
        if ((*pbVar10 & 2) == 0) {
          puVar3 = (uint *)*param_2;
          iVar7 = *(int *)(param_3 + 0x14);
          uVar1 = *(ushort *)(pbVar10 + 4);
          *puVar3 = *(byte *)(local_2c + 2) | 0x80000000;
          puVar3[1] = 0xf02c0;
          fn_001ad578(puVar3 + 2,iVar7 + (uint)uVar1 * 0x30,0xbf02c1);
          puVar3 = puVar3 + 0x10;
          goto LAB_006e1628;
        }
        iVar7 = 0;
        if (*(short *)(pbVar10 + 2) != 0) {
          do {
            iVar9 = iVar7 + 1;
            puVar3 = (uint *)(*(int *)(param_3 + 0x14) +
                             (uint)*(ushort *)(pbVar10 + iVar7 * 2 + 4) * 0x30);
            uVar2 = puVar3[1];
            uVar12 = puVar3[2];
            uVar13 = puVar3[3];
            uVar14 = puVar3[4];
            uVar15 = puVar3[5];
            uVar16 = puVar3[6];
            uVar17 = puVar3[7];
            local_418[iVar7 * 0xc] = *puVar3;
            local_418[iVar7 * 0xc + 1] = uVar2;
            local_418[iVar7 * 0xc + 2] = uVar12;
            local_418[iVar7 * 0xc + 3] = uVar13;
            local_418[iVar7 * 0xc + 4] = uVar14;
            local_418[iVar7 * 0xc + 5] = uVar15;
            local_418[iVar7 * 0xc + 6] = uVar16;
            local_418[iVar7 * 0xc + 7] = uVar17;
            uVar12 = puVar3[9];
            uVar13 = puVar3[10];
            uVar2 = puVar3[0xb];
            local_418[iVar7 * 0xc + 8] = puVar3[8];
            local_418[iVar7 * 0xc + 0xb] = uVar2;
            local_418[iVar7 * 0xc + 9] = uVar12;
            local_418[iVar7 * 0xc + 10] = uVar13;
            iVar7 = iVar9;
          } while (iVar9 < (int)(uint)*(ushort *)(pbVar10 + 2));
        }
        uVar2 = (uint)*(ushort *)(pbVar10 + 2);
        puVar3 = (uint *)*param_2;
        *puVar3 = *(byte *)(local_2c + 2) | 0x80000000;
        puVar3[1] = 0xf02c0;
        iVar7 = uVar2 * 3 + -1;
        puVar3[2] = local_418[3];
        puVar3[3] = uVar2 * 0xc00000 - 0x100000 | 0xf02c1;
        puVar3[4] = local_418[2];
        puVar3[5] = local_418[1];
        puVar4 = puVar3 + 7;
        puVar3[6] = local_418[0];
        if (0 < iVar7) {
          puVar6 = local_418 + 7;
          puVar11 = local_418 + 6;
          puVar8 = local_418 + 5;
          puVar3 = local_418;
          puVar5 = puVar4;
          do {
            puVar3 = puVar3 + 4;
            iVar7 = iVar7 + -1;
            *puVar5 = *puVar6;
            puVar6 = puVar6 + 4;
            puVar5[1] = *puVar11;
            puVar11 = puVar11 + 4;
            puVar5[2] = *puVar8;
            puVar8 = puVar8 + 4;
            puVar5[3] = *puVar3;
            puVar5 = puVar5 + 4;
          } while (iVar7 != 0);
          puVar4 = puVar4 + uVar2 * 0xc + -4;
        }
        *puVar4 = 0;
        *param_2 = (int)(puVar4 + 1);
      }
      else {
        iVar7 = 0;
        uVar2 = 0;
        if (*(short *)(pbVar10 + 2) != 0) {
          do {
            fn_001ad06c(unaff_r11 + iVar7 * 0xc,
                         *(int *)(param_3 + 0x14) +
                         (uint)*(ushort *)(pbVar10 + iVar7 * 2 + 4) * 0x30,
                         *(int *)(*(int *)(param_1 + 0x2c) + 0x70) +
                         (uint)*(ushort *)(pbVar10 + iVar7 * 2 + 4) * 100 + 0x2c);
            uVar2 = (uint)*(ushort *)(pbVar10 + 2);
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)uVar2);
        }
        puVar3 = (uint *)*param_2;
        *puVar3 = *(byte *)(local_2c + 2) | 0x80000000;
        iVar7 = uVar2 * 3 + -1;
        puVar3[1] = 0xf02c0;
        puVar3[2] = local_7cc;
        puVar3[3] = uVar2 * 0xc00000 - 0x100000 | 0xf02c1;
        puVar3[4] = local_7d0;
        puVar3[5] = local_7d4;
        puVar4 = puVar3 + 7;
        puVar3[6] = local_7d8;
        if (0 < iVar7) {
          puVar6 = unaff_r11 + 7;
          puVar11 = unaff_r11 + 6;
          puVar8 = unaff_r11 + 5;
          puVar5 = puVar4;
          puVar3 = unaff_r11;
          do {
            puVar3 = puVar3 + 4;
            iVar7 = iVar7 + -1;
            *puVar5 = *puVar6;
            puVar6 = puVar6 + 4;
            puVar5[1] = *puVar11;
            puVar11 = puVar11 + 4;
            puVar5[2] = *puVar8;
            puVar8 = puVar8 + 4;
            puVar5[3] = *puVar3;
            puVar5 = puVar5 + 4;
          } while (iVar7 != 0);
          puVar4 = puVar4 + uVar2 * 0xc + -4;
        }
        puVar3 = puVar4 + 1;
        *puVar4 = 0;
LAB_006e1628:
        *param_2 = (int)puVar3;
      }
      iVar7 = *param_2;
      iVar9 = *(int *)(pbVar10 + 0x2c);
      if (iVar7 != 0 && iVar9 != 0) {
        iVar7 = fn_0044ef7c(iVar7,(iVar7 - param_2[2] & 0xfffffffcU) + 0x18);
        *param_2 = iVar7;
        iVar7 = fn_0044efc8(iVar7,local_4c,iVar9);
        *param_2 = iVar7;
        if ((uint *)param_2[3] != (uint *)0x0) {
          *(uint *)param_2[3] = (uint)(iVar7 - param_2[2]) >> 3;
        }
        param_2[2] = *param_2;
        param_2[3] = local_4c[0];
        if (param_2[4] == 0) {
          param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
        }
      }
      pbVar10 = pbVar10 + 0x34;
    } while (local_50 != pbVar10);
  }
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
  return;
}


