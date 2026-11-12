#include "0043cd80_0043cd80.h"



undefined4 fn_0043cd80(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 extraout_r1;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 **ppuVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 *local_70 [3];
  undefined1 auStack_64 [12];
  int local_58;
  undefined1 auStack_50 [4];
  undefined4 *local_4c [7];
  int local_30;
  undefined4 *local_2c [2];
  
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1,&local_30);
  iVar16 = 0;
  if (0 < local_30) {
    do {
      puVar5 = (undefined4 *)(iVar1 + iVar16 * 0x10);
      puVar11 = (undefined4 *)param_1[0x3d];
      puVar15 = (uint *)(param_1 + 0x3c);
      if (puVar11 == (undefined4 *)param_1[0x3e]) {
        uVar13 = (int)((int)puVar11 - *puVar15) >> 4;
        if (uVar13 < (uint)((int)(param_1[0x3e] - *puVar15) >> 4)) {
          param_1[0x3d] = (int)(puVar11 + 4);
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = puVar11[-4];
            puVar11[1] = puVar11[-3];
            puVar11[2] = puVar11[-2];
            puVar11[3] = puVar11[-1];
          }
          puVar7 = puVar11 + -4;
          puVar12 = puVar11;
          if (puVar11 < puVar7) {
            iVar6 = (int)puVar7 - (int)puVar11;
            if (0 < iVar6) {
              if (iVar6 * 0x8000000 < 0) {
                puVar7 = puVar11 + -8;
                puVar12 = puVar11 + -4;
                *puVar12 = *puVar7;
                puVar11[-3] = puVar11[-7];
                puVar11[-2] = puVar11[-6];
                puVar11[-1] = puVar11[-5];
              }
              for (iVar6 = iVar6 >> 5; iVar6 != 0; iVar6 = iVar6 + -1) {
                uVar9 = puVar7[-3];
                uVar10 = puVar7[-2];
                uVar18 = puVar7[-1];
                puVar12[-4] = puVar7[-4];
                puVar12[-3] = uVar9;
                puVar12[-2] = uVar10;
                puVar12[-1] = uVar18;
                uVar9 = puVar7[-7];
                uVar10 = puVar7[-6];
                uVar18 = puVar7[-5];
                puVar12[-8] = puVar7[-8];
                puVar12[-7] = uVar9;
                puVar12[-6] = uVar10;
                puVar12[-5] = uVar18;
                puVar7 = puVar7 + -8;
                puVar12 = puVar12 + -8;
              }
            }
          }
          else {
            while (puVar11 != puVar7) {
              uVar9 = puVar7[-3];
              uVar10 = puVar7[-2];
              uVar18 = puVar7[-1];
              puVar12[-4] = puVar7[-4];
              puVar12[-3] = uVar9;
              puVar12[-2] = uVar10;
              puVar12[-1] = uVar18;
              puVar12 = puVar12 + -4;
              puVar7 = puVar7 + -4;
            }
          }
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          uVar18 = puVar5[3];
          *puVar11 = *puVar5;
          puVar11[1] = uVar9;
          puVar11[2] = uVar10;
          puVar11[3] = uVar18;
        }
        else {
          uVar17 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
          if (uVar17 < uVar13 + 0x20) {
            uVar17 = uVar13 + 0x20;
          }
          puVar2 = (undefined4 *)fn_00100fc6(uVar17 << 4,0);
          puVar12 = puVar2;
          for (puVar7 = (undefined4 *)*puVar15; puVar7 != puVar11; puVar7 = puVar7 + 4) {
            if (puVar12 != (undefined4 *)0x0) {
              uVar9 = puVar7[1];
              uVar10 = puVar7[2];
              uVar18 = puVar7[3];
              *puVar12 = *puVar7;
              puVar12[1] = uVar9;
              puVar12[2] = uVar10;
              puVar12[3] = uVar18;
            }
            puVar12 = puVar12 + 4;
          }
          puVar7 = (undefined4 *)(((int)puVar11 - *puVar15 & 0xfffffff0) + (int)puVar2);
          if (puVar7 != (undefined4 *)0x0) {
            uVar9 = puVar5[1];
            uVar10 = puVar5[2];
            uVar18 = puVar5[3];
            *puVar7 = *puVar5;
            puVar7[1] = uVar9;
            puVar7[2] = uVar10;
            puVar7[3] = uVar18;
          }
          puVar7 = (undefined4 *)param_1[0x3d];
          puVar5 = (undefined4 *)(((int)puVar11 - *puVar15 & 0xfffffff0) + (int)puVar2);
          for (; puVar11 != puVar7; puVar11 = puVar11 + 4) {
            puVar12 = puVar5 + 4;
            if (puVar12 != (undefined4 *)0x0) {
              uVar9 = puVar11[1];
              uVar10 = puVar11[2];
              uVar18 = puVar11[3];
              *puVar12 = *puVar11;
              puVar5[5] = uVar9;
              puVar5[6] = uVar10;
              puVar5[7] = uVar18;
            }
            puVar5 = puVar12;
          }
          uVar3 = *puVar15;
          uVar8 = param_1[0x3d];
          uVar13 = uVar3;
          if (uVar8 < uVar3) {
            do {
              uVar13 = uVar13 + 0x10;
            } while (uVar13 != uVar8);
          }
          fn_001008c4(uVar3,(int)(param_1[0x3e] - uVar3) >> 4);
          param_1[0x3e] = (int)(puVar2 + uVar17 * 4);
          param_1[0x3d] = (int)(puVar2 + ((int)(uVar8 - uVar3) >> 4) * 4 + 4);
          *puVar15 = (uint)puVar2;
        }
      }
      else {
        param_1[0x3d] = (int)(puVar11 + 4);
        if (puVar11 != (undefined4 *)0x0) {
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          uVar18 = puVar5[3];
          *puVar11 = *puVar5;
          puVar11[1] = uVar9;
          puVar11[2] = uVar10;
          puVar11[3] = uVar18;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < local_30);
  }
  fn_00397774(&local_8c);
  local_8c = DAT_008965b0;
  local_88 = DAT_008965b4;
  local_84 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar9 = (**(code **)(*param_1 + 0x160))(param_1);
  fn_00300f74(uVar9,local_84);
  local_80 = extraout_r1;
  uVar9 = (**(code **)(*param_1 + 0x160))(param_1);
  local_7c = fn_00300f74(uVar9,local_84);
  local_78 = param_1[0x3d] - param_1[0x3c] >> 4;
  uVar9 = fn_0022f750(param_1[0x3a]);
  iVar1 = fn_00100b58();
  if (iVar1 == 0) {
    piVar4 = local_70[0] + -3;
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      local_70[0][-1] = 0;
      *(undefined2 *)local_70[0] = 0;
    }
    else {
      if ((local_70[0] != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(local_70[0] + -3,local_70[0][-2] + 8,0);
      }
      local_70[0] = &DAT_008f9cf4;
    }
  }
  else {
    fn_00177c88(local_70,0,local_70[0][-1],uVar9,iVar1,0,iVar1);
  }
  local_58 = (**(code **)(*param_1 + 0x158))(param_1);
  uVar13 = 0;
  if (0 < local_58) {
    do {
      ppuVar14 = local_4c + uVar13 * 2;
      (**(code **)(*param_1 + 0x15c))(local_2c,param_1,uVar13 & 0xff);
      piVar4 = local_2c[0] + -3;
      if (*piVar4 + 1 == 0) {
        if (ppuVar14 != local_2c) {
          fn_00177c88(ppuVar14,0,(*ppuVar14)[-1],local_2c[0],local_2c[0][-1],0,local_2c[0][-1]);
        }
      }
      else {
        if (piVar4 != &DAT_008f9ce8) {
          *piVar4 = *piVar4 + 1;
        }
        if (*ppuVar14 != &DAT_008f9cf4) {
          piVar4 = *ppuVar14 + -3;
          iVar1 = *piVar4;
          if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
            fn_001008c4(*ppuVar14 + -3,(*ppuVar14)[-2] + 8,0);
          }
        }
        *ppuVar14 = local_2c[0];
      }
      if (local_2c[0] != &DAT_008f9cf4) {
        piVar4 = local_2c[0] + -3;
        iVar1 = *piVar4;
        if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(local_2c[0] + -3,local_2c[0][-2] + 8,0);
        }
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < local_58);
  }
  fn_00397618(param_1,&local_8c);
  (**(code **)(*param_1 + 0x124))(param_1);
  if ((char)param_1[0x3b] != '\0') {
    fn_0031f8fc(param_1[0x1d],0,0,0,0xffffffff);
    iVar1 = param_1[0x1d];
    *(undefined1 *)(iVar1 + 0x81) = 1;
    fn_0031f3f4(iVar1,0);
  }
  puVar11 = (undefined4 *)fn_001f74d8(param_1,0x39);
  if (puVar11 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar11)(puVar11);
    do {
      if (puVar5 == &DAT_00894d28) goto LAB_0043d2e0;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar11 = (undefined4 *)0x0;
LAB_0043d2e0:
  param_1[0x3f] = (int)puVar11;
  fn_00100414(auStack_50,&LAB_0059e0e0,8,4);
  iVar1 = fn_001588d4(auStack_64);
  iVar1 = fn_001588d4(iVar1 + -4);
  iVar1 = fn_001588d4(iVar1 + -4);
  fn_001588d4(iVar1 + -4);
  return 1;
}


