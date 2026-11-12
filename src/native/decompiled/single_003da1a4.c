#include "single_003da1a4.h"
void fn_003da1a4(int *param_1)
{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined4 uStack_b8;
  undefined1 *local_9c;
  uint local_94;
  uint local_90;
  int local_8c;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  uVar16 = *(undefined4 *)(DAT_008977e0 + 0xa8);
  uVar4 = fn_006f7508();
  fn_00366dbc(uVar4,&local_94,uVar16,0xffffffff);
  iVar20 = 0;
  iVar2 = (int)(local_90 - local_94) / 0x34;
  if (0 < iVar2) {
    do {
      iVar19 = local_94 + iVar20 * 0x34;
      fn_00368ce8(&local_5c);
      puVar17 = (uint *)(param_1 + 1);
      local_58 = CONCAT31(((unsigned int)(local_58) >> 8) & 0xffffff,*(short *)(iVar19 + 6) != 0);
      local_58 = CONCAT13(0xff,(undefined3)local_58);
      local_50 = CONCAT22(((unsigned int)(local_50) >> 16) & 0xffff,0xffff);
      local_5c = CONCAT22(*(undefined2 *)(iVar19 + 8),*(undefined2 *)(iVar19 + 2));
      local_4c = *(undefined4 *)(iVar19 + 0x10);
      uStack_48 = *(undefined4 *)(iVar19 + 0x14);
      uStack_44 = *(undefined4 *)(iVar19 + 0x18);
      local_40 = *(undefined4 *)(iVar19 + 0x1c);
      local_3c = *(undefined4 *)(iVar19 + 0x20);
      uStack_38 = *(undefined4 *)(iVar19 + 0x24);
      local_34 = *(undefined4 *)(iVar19 + 0x28);
      uStack_30 = *(undefined4 *)(iVar19 + 0x2c);
      uStack_2c = *(undefined4 *)(iVar19 + 0x30);
      puVar12 = (undefined4 *)param_1[2];
      if (puVar12 == (undefined4 *)param_1[3]) {
        uVar11 = (int)((int)puVar12 - *puVar17) / 0x34;
        if (uVar11 < (uint)((int)(param_1[3] - *puVar17) / 0x34)) {
          param_1[2] = (int)(puVar12 + 0xd);
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = puVar12[-0xd];
            puVar12[1] = puVar12[-0xc];
            puVar12[2] = puVar12[-0xb];
            puVar12[3] = puVar12[-10];
            puVar12[4] = puVar12[-9];
            puVar12[5] = puVar12[-8];
            puVar12[6] = puVar12[-7];
            puVar12[7] = puVar12[-6];
            puVar12[8] = puVar12[-5];
            puVar12[9] = puVar12[-4];
            puVar12[10] = puVar12[-3];
            puVar12[0xb] = puVar12[-2];
            puVar12[0xc] = puVar12[-1];
          }
          puVar13 = puVar12 + -0xd;
          puVar14 = puVar12;
          if (puVar12 < puVar13) {
            if (0 < (int)puVar13 - (int)puVar12) {
              uVar11 = ((int)puVar13 - (int)puVar12) / 0x34;
              if ((uVar11 & 1) != 0) {
                puVar12[-0xd] = puVar12[-0x1a];
                puVar12[-0xc] = puVar12[-0x19];
                puVar12[-0xb] = puVar12[-0x18];
                puVar12[-10] = puVar12[-0x17];
                puVar12[-9] = puVar12[-0x16];
                puVar12[-8] = puVar12[-0x15];
                puVar12[-7] = puVar12[-0x14];
                puVar12[-6] = puVar12[-0x13];
                puVar13 = puVar12 + -0x1a;
                puVar12[-5] = puVar12[-0x12];
                puVar12[-4] = puVar12[-0x11];
                puVar12[-3] = puVar12[-0x10];
                puVar12[-2] = puVar12[-0xf];
                puVar12[-1] = puVar12[-0xe];
                puVar14 = puVar12 + -0xd;
              }
              for (iVar19 = (int)uVar11 >> 1; iVar19 != 0; iVar19 = iVar19 + -1) {
                uVar4 = puVar13[-0xc];
                uVar16 = puVar13[-0xb];
                uVar21 = puVar13[-10];
                uVar22 = puVar13[-9];
                uVar23 = puVar13[-8];
                uVar24 = puVar13[-7];
                uVar25 = puVar13[-6];
                puVar14[-0xd] = puVar13[-0xd];
                puVar14[-0xc] = uVar4;
                puVar14[-0xb] = uVar16;
                puVar14[-10] = uVar21;
                puVar14[-9] = uVar22;
                puVar14[-8] = uVar23;
                puVar14[-7] = uVar24;
                puVar14[-6] = uVar25;
                uVar4 = puVar13[-4];
                uVar16 = puVar13[-3];
                uVar21 = puVar13[-2];
                uVar22 = puVar13[-1];
                puVar14[-5] = puVar13[-5];
                puVar14[-4] = uVar4;
                puVar14[-3] = uVar16;
                puVar14[-2] = uVar21;
                puVar14[-1] = uVar22;
                uVar4 = puVar13[-0x19];
                uVar16 = puVar13[-0x18];
                uVar21 = puVar13[-0x17];
                uVar22 = puVar13[-0x16];
                uVar23 = puVar13[-0x15];
                uVar24 = puVar13[-0x14];
                uVar25 = puVar13[-0x13];
                puVar8 = puVar13 + -0x12;
                puVar14[-0x1a] = puVar13[-0x1a];
                puVar14[-0x19] = uVar4;
                puVar14[-0x18] = uVar16;
                puVar14[-0x17] = uVar21;
                puVar14[-0x16] = uVar22;
                puVar14[-0x15] = uVar23;
                puVar14[-0x14] = uVar24;
                puVar14[-0x13] = uVar25;
                uVar4 = puVar13[-0x11];
                uVar16 = puVar13[-0x10];
                uVar21 = puVar13[-0xf];
                uVar22 = puVar13[-0xe];
                puVar13 = puVar13 + -0x1a;
                puVar14[-0x12] = *puVar8;
                puVar14[-0x11] = uVar4;
                puVar14[-0x10] = uVar16;
                puVar14[-0xf] = uVar21;
                puVar14[-0xe] = uVar22;
                puVar14 = puVar14 + -0x1a;
              }
            }
          }
          else {
            for (; puVar12 != puVar13; puVar13 = puVar13 + -0xd) {
              uVar4 = puVar13[-0xc];
              uVar16 = puVar13[-0xb];
              uVar21 = puVar13[-10];
              uVar22 = puVar13[-9];
              uVar23 = puVar13[-8];
              uVar24 = puVar13[-7];
              uVar25 = puVar13[-6];
              puVar14[-0xd] = puVar13[-0xd];
              puVar14[-0xc] = uVar4;
              puVar14[-0xb] = uVar16;
              puVar14[-10] = uVar21;
              puVar14[-9] = uVar22;
              puVar14[-8] = uVar23;
              puVar14[-7] = uVar24;
              puVar14[-6] = uVar25;
              uVar4 = puVar13[-4];
              uVar16 = puVar13[-3];
              uVar21 = puVar13[-2];
              uVar22 = puVar13[-1];
              puVar14[-5] = puVar13[-5];
              puVar14[-4] = uVar4;
              puVar14[-3] = uVar16;
              puVar14[-2] = uVar21;
              puVar14[-1] = uVar22;
              puVar14 = puVar14 + -0xd;
            }
          }
          *puVar12 = local_5c;
          puVar12[1] = local_58;
          puVar12[2] = uStack_54;
          puVar12[3] = local_50;
          puVar12[4] = local_4c;
          puVar12[5] = uStack_48;
          puVar12[6] = uStack_44;
          puVar12[7] = local_40;
          puVar12[8] = local_3c;
          puVar12[9] = uStack_38;
          puVar12[10] = local_34;
          puVar12[0xb] = uStack_30;
          puVar12[0xc] = uStack_2c;
        }
        else {
          uVar10 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
          uVar18 = uVar11 + 0x20;
          if (uVar11 + 0x20 <= uVar10) {
            uVar18 = uVar10;
          }
          puVar8 = (undefined4 *)fn_00100fc6(uVar18 * 0x34,0);
          puVar14 = puVar8;
          for (puVar13 = (undefined4 *)*puVar17; puVar13 != puVar12; puVar13 = puVar13 + 0xd) {
            if (puVar14 != (undefined4 *)0x0) {
              uVar4 = puVar13[1];
              uVar16 = puVar13[2];
              uVar21 = puVar13[3];
              uVar22 = puVar13[4];
              uVar23 = puVar13[5];
              uVar24 = puVar13[6];
              uVar25 = puVar13[7];
              *puVar14 = *puVar13;
              puVar14[1] = uVar4;
              puVar14[2] = uVar16;
              puVar14[3] = uVar21;
              puVar14[4] = uVar22;
              puVar14[5] = uVar23;
              puVar14[6] = uVar24;
              puVar14[7] = uVar25;
              uVar4 = puVar13[9];
              uVar16 = puVar13[10];
              uVar21 = puVar13[0xb];
              uVar22 = puVar13[0xc];
              puVar14[8] = puVar13[8];
              puVar14[9] = uVar4;
              puVar14[10] = uVar16;
              puVar14[0xb] = uVar21;
              puVar14[0xc] = uVar22;
            }
            puVar14 = puVar14 + 0xd;
          }
          puVar13 = puVar8 + ((int)((int)puVar12 - *puVar17) / 0x34) * 0xd;
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = local_5c;
            puVar13[1] = local_58;
            puVar13[2] = uStack_54;
            puVar13[3] = local_50;
            puVar13[4] = local_4c;
            puVar13[5] = uStack_48;
            puVar13[6] = uStack_44;
            puVar13[7] = local_40;
            puVar13[8] = local_3c;
            puVar13[9] = uStack_38;
            puVar13[10] = local_34;
            puVar13[0xb] = uStack_30;
            puVar13[0xc] = uStack_2c;
          }
          puVar14 = (undefined4 *)param_1[2];
          puVar13 = puVar8 + ((int)((int)puVar12 - *puVar17) / 0x34) * 0xd;
          for (; puVar12 != puVar14; puVar12 = puVar12 + 0xd) {
            if (puVar13 + 0xd != (undefined4 *)0x0) {
              uVar4 = puVar12[1];
              uVar16 = puVar12[2];
              uVar21 = puVar12[3];
              uVar22 = puVar12[4];
              uVar23 = puVar12[5];
              uVar24 = puVar12[6];
              uVar25 = puVar12[7];
              puVar13[0xd] = *puVar12;
              puVar13[0xe] = uVar4;
              puVar13[0xf] = uVar16;
              puVar13[0x10] = uVar21;
              puVar13[0x11] = uVar22;
              puVar13[0x12] = uVar23;
              puVar13[0x13] = uVar24;
              puVar13[0x14] = uVar25;
              uVar4 = puVar12[9];
              uVar16 = puVar12[10];
              uVar21 = puVar12[0xb];
              uVar22 = puVar12[0xc];
              puVar13[0x15] = puVar12[8];
              puVar13[0x16] = uVar4;
              puVar13[0x17] = uVar16;
              puVar13[0x18] = uVar21;
              puVar13[0x19] = uVar22;
            }
            puVar13 = puVar13 + 0xd;
          }
          uVar10 = *puVar17;
          uVar15 = param_1[2];
          uVar11 = uVar10;
          if (uVar15 < uVar10) {
            do {
              uVar11 = uVar11 + 0x34;
            } while (uVar11 != uVar15);
          }
          fn_001008c4(uVar10,(int)(param_1[3] - uVar10) / 0x34,0);
          *puVar17 = (uint)puVar8;
          param_1[2] = (int)(puVar8 + ((int)(uVar15 - uVar10) / 0x34) * 0xd + 0xd);
          param_1[3] = (int)(puVar8 + uVar18 * 0xd);
        }
      }
      else {
        param_1[2] = (int)(puVar12 + 0xd);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = local_5c;
          puVar12[1] = local_58;
          puVar12[2] = uStack_54;
          puVar12[3] = local_50;
          puVar12[4] = local_4c;
          puVar12[5] = uStack_48;
          puVar12[6] = uStack_44;
          puVar12[7] = local_40;
          puVar12[8] = local_3c;
          puVar12[9] = uStack_38;
          puVar12[10] = local_34;
          puVar12[0xb] = uStack_30;
          puVar12[0xc] = uStack_2c;
        }
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar2);
  }
  fn_00763d5c(param_1[1],param_1[2],&LAB_0065c330);
  fn_00763d5c(param_1[4],param_1[5],&LAB_0065c330);
  iVar2 = param_1[2] - param_1[1] >> 0x1f;
  if ((param_1[2] - param_1[1]) / 0x34 + iVar2 != iVar2) {
    uVar11 = 0;
    do {
      psVar5 = (short *)(param_1[1] + uVar11 * 0x34);
      local_c8 = 0;
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1,0,(int)*psVar5,(int)*(char *)((int)psVar5 + 7))
      ;
      uVar18 = uVar11 + 1;
      *(undefined2 *)(param_1[1] + uVar11 * 0x34 + 0xc) = uVar3;
      uVar11 = uVar18;
    } while (uVar18 < (uint)((param_1[2] - param_1[1]) / 0x34));
  }
  fn_003da994(param_1);
  iVar20 = 0;
  iVar2 = (*(int *)(param_1[10] + 8) - *(int *)(param_1[10] + 4)) / 0x28;
  if (0 < iVar2) {
    do {
      puVar6 = (undefined2 *)fn_003b3780(param_1[10],iVar20);
      if (puVar6 == (undefined2 *)0x0) break;
      fn_00368d34(&local_c8);
      local_b9 = 0;
      uStack_b8 = uStack_b8 & 0xffffff00;
      local_ba = 1;
      local_c4 = CONCAT22(puVar6[4],puVar6[1]);
      local_bc = 1;
      local_c0 = 0;
      local_c8 = CONCAT22(*puVar6,puVar6[5]);
      sVar1 = puVar6[6];
      iVar19 = 0;
      do {
        iVar7 = iVar19 + 1;
        *(bool *)((int)&uStack_b8 + iVar19 + 1) = sVar1 != 0;
        iVar19 = iVar7;
      } while (iVar7 < 2);
      puVar12 = (undefined4 *)param_1[8];
      puVar17 = (uint *)(param_1 + 7);
      if (puVar12 == (undefined4 *)param_1[9]) {
        uVar11 = (int)((int)puVar12 - *puVar17) / 0x14;
        if (uVar11 < (uint)((int)(param_1[9] - *puVar17) / 0x14)) {
          param_1[8] = (int)(puVar12 + 5);
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = puVar12[-5];
            puVar12[1] = puVar12[-4];
            puVar12[2] = puVar12[-3];
            puVar12[3] = puVar12[-2];
            puVar12[4] = puVar12[-1];
          }
          puVar14 = puVar12 + -5;
          puVar13 = puVar12;
          local_9c = (undefined1 *)&local_c8;
          if (puVar12 < puVar14) {
            iVar19 = (int)puVar14 - (int)puVar12;
            iVar7 = 1;
            local_9c = (undefined1 *)&local_c8;
            if (1 < iVar19 / 0x14 + 1) {
              local_9c = (undefined1 *)&local_c8;
              do {
                puVar14 = puVar14 + -5;
                puVar13 = puVar13 + -5;
                fn_0017821c(puVar13,puVar14,0x13);
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar19 / 0x14 + 1);
            }
          }
          else {
            while (puVar12 != puVar14) {
              puVar14 = puVar14 + -5;
              fn_0017821c(puVar13 + -5,puVar14,0x13);
              puVar13 = puVar13 + -5;
            }
          }
          fn_0017821c(puVar12,local_9c,0x13);
        }
        else {
          uVar18 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
          if (uVar18 < uVar11 + 0x20) {
            uVar18 = uVar11 + 0x20;
          }
          local_9c = (undefined1 *)&local_c8;
          puVar8 = (undefined4 *)fn_00100fc6(uVar18 * 0x14,0);
          puVar14 = puVar8;
          for (puVar13 = (undefined4 *)*puVar17; puVar13 != puVar12; puVar13 = puVar13 + 5) {
            if (puVar14 != (undefined4 *)0x0) {
              uVar4 = puVar13[1];
              uVar16 = puVar13[2];
              uVar21 = puVar13[3];
              uVar22 = puVar13[4];
              *puVar14 = *puVar13;
              puVar14[1] = uVar4;
              puVar14[2] = uVar16;
              puVar14[3] = uVar21;
              puVar14[4] = uVar22;
            }
            puVar14 = puVar14 + 5;
          }
          puVar13 = puVar8 + ((int)((int)puVar12 - *puVar17) / 0x14) * 5;
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = local_c8;
            puVar13[1] = local_c4;
            puVar13[2] = local_c0;
            puVar13[3] = CONCAT13(local_b9,CONCAT12(local_ba,local_bc));
            puVar13[4] = uStack_b8;
          }
          puVar14 = (undefined4 *)param_1[8];
          puVar13 = puVar8 + ((int)((int)puVar12 - *puVar17) / 0x14) * 5;
          for (; puVar12 != puVar14; puVar12 = puVar12 + 5) {
            puVar9 = puVar13 + 5;
            if (puVar9 != (undefined4 *)0x0) {
              uVar4 = puVar12[1];
              uVar16 = puVar12[2];
              uVar21 = puVar12[3];
              uVar22 = puVar12[4];
              *puVar9 = *puVar12;
              puVar13[6] = uVar4;
              puVar13[7] = uVar16;
              puVar13[8] = uVar21;
              puVar13[9] = uVar22;
            }
            puVar13 = puVar9;
          }
          uVar10 = *puVar17;
          uVar15 = param_1[8];
          uVar11 = uVar10;
          if (uVar15 < uVar10) {
            do {
              uVar11 = uVar11 + 0x14;
            } while (uVar11 != uVar15);
          }
          fn_001008c4(uVar10,(int)(param_1[9] - uVar10) / 0x14,0);
          *puVar17 = (uint)puVar8;
          param_1[8] = (int)(puVar8 + ((int)(uVar15 - uVar10) / 0x14) * 5 + 5);
          param_1[9] = (int)(puVar8 + uVar18 * 5);
        }
      }
      else {
        param_1[8] = (int)(puVar12 + 5);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = local_c8;
          puVar12[1] = local_c4;
          puVar12[2] = 0;
          puVar12[3] = 0x10001;
          puVar12[4] = uStack_b8;
        }
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar2);
  }
  uVar11 = local_94;
  if (local_90 < local_94) {
    do {
      uVar11 = uVar11 + 0x34;
    } while (uVar11 != local_90);
  }
  fn_001008c4(local_94,(int)(local_8c - local_94) / 0x34,0);
  return;
}
