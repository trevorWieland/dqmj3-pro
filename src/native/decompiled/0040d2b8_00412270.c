#include "0040d2b8_00412270.h"



void fn_00412270(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_30;
  undefined4 *local_2c [2];
  
  uVar8 = 0;
  do {
    iVar1 = fn_006ba284(param_1);
    uVar6 = uVar8 + iVar1 * 8;
    if ((int)uVar6 < *(int *)(param_1 + 0xbc)) {
      uVar4 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1;
      if (uVar4 <= uVar6) {
        local_30 = uVar4;
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6);
      }
      iVar7 = (int)*(short *)(*(int *)(param_1 + 0xe0) + uVar6 * 2);
      fn_0023097c(local_2c,iVar7,0);
      fn_0031b78c(param_1,uVar8,0,local_2c[0]);
      uVar2 = fn_001d5844(iVar7,*(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x28));
      fn_002c3df8(param_1,uVar8,4,uVar2);
      iVar1 = fn_005c1ab0(param_1,iVar7);
      iVar3 = fn_00660fe0(iVar7);
      uVar6 = fn_001d5844(iVar7,*(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x28));
      if ((iVar3 == iVar1) ||
         (uVar4 = fn_002b0af8(*(undefined4 *)(DAT_00897804 + 100)), uVar4 < uVar6)) {
        local_30 = 0xff808080;
        fn_002c37e0(param_1,uVar8,&local_30);
      }
      else {
        local_30 = 0xffffffff;
        fn_002c37e0(param_1,uVar8,&local_30);
      }
      iVar1 = fn_006b7a80(*(undefined4 *)(DAT_00897804 + 0x24),iVar7);
      if (iVar1 == 0) {
        fn_002c32c4(param_1,uVar8,1);
      }
      else {
        fn_002c32c4(param_1,uVar8,0);
      }
      if (local_2c[0] != &DAT_008f9cf4) {
        piVar5 = local_2c[0] + -3;
        iVar1 = *piVar5;
        if (iVar1 == -1) {
LAB_0041246c:
          fn_001008c4(local_2c[0] + -3,local_2c[0][-2] + 8,0);
        }
        else if (piVar5 != &DAT_008f9ce8) {
          *piVar5 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_0041246c;
        }
      }
    }
    else if (7 < *(int *)(param_1 + 0xbc)) {
      uVar6 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
      if (uVar6 <= uVar8) {
        local_30 = uVar6;
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar8);
      }
      fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar8 * 4),0xffffffff);
    }
    uVar8 = uVar8 + 1;
    if (7 < (int)uVar8) {
      if (*(int *)(param_1 + 0xec) != 0) {
        fn_00289d5c(*(undefined4 *)(DAT_00897804 + 0x24),(int)(short)*(int *)(param_1 + 0xec));
                    /* WARNING: Subroutine does not return */
        fn_006ba250(param_1);
      }
      return;
    }
  } while( true );
}



void fn_0040d2b8(int *param_1)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  uint *puVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined4 local_84 [2];
  undefined1 local_7c [8];
  undefined1 *local_74;
  int *local_68;
  int *local_64;
  int local_60;
  short local_5c;
  undefined2 local_5a;
  undefined1 local_57;
  char local_55;
  short local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  local_68 = (int *)0x0;
  local_64 = (int *)0x0;
  local_60 = 0;
  iVar3 = fn_006f7a0c(DAT_008977e0);
  (**(code **)(**(int **)(iVar3 + 0x50) + 0x30))(*(int **)(iVar3 + 0x50),&local_68,&DAT_0040d63c);
  iVar14 = 0;
  iVar3 = ((int)local_64 - (int)local_68) / 0x28;
  if (0 < iVar3) {
    do {
      uStack_88 = 0xff;
      uStack_87 = 0xff;
      uStack_86 = 0xff;
      uStack_85 = 0xff;
      bVar1 = false;
      local_98 = &uStack_88;
      local_84[0] = 0xffffffff;
      iVar4 = fn_00102d28(local_68[iVar14 * 10],(char *)&DAT_0040d644,local_7c,local_84);
      if (iVar4 == 3) {
LAB_0040d3ec:
        bVar1 = true;
      }
      else {
        iVar4 = fn_00102d28(local_68[iVar14 * 10],(char *)&DAT_0040d654,local_7c,local_84);
        if (iVar4 != 2) {
          iVar4 = fn_00102d28(local_68[iVar14 * 10],(char *)&DAT_0040d660,local_7c,&uStack_88);
          if (iVar4 == 2) goto LAB_0040d3ec;
          fn_00102d28(local_68[iVar14 * 10],&DAT_0040d66c,local_7c);
        }
      }
      iVar4 = fn_001030bc(local_68[iVar14 * 10],(char *)&DAT_0040d674);
      if (iVar4 == 0) {
        fn_00368ce8(&local_5c);
      }
      else {
        fn_00368ce8(&local_5c);
      }
      local_57 = iVar4 != 0;
      local_5c = ((*(unsigned int *)((unsigned char *)local_7c + 0)) & 0xffff);
      local_5a = 0;
      local_55 = (char)local_84[0];
      local_50 = CONCAT11(uStack_87,uStack_88);
      piVar16 = local_68 + iVar14 * 10;
      local_4c = piVar16[1];
      iStack_48 = piVar16[2];
      iStack_44 = piVar16[3];
      local_40 = piVar16[4];
      iStack_3c = piVar16[5];
      iStack_38 = piVar16[6];
      local_34 = piVar16[7];
      iStack_30 = piVar16[8];
      iStack_2c = piVar16[9];
      (**(code **)(*param_1 + 0x70))(param_1,&local_5c,*piVar16);
      if ((0 < local_5c) && (local_55 < '\x02')) {
        iVar5 = (int)local_50;
        bVar18 = SCARRY4(iVar5,1);
        iVar4 = iVar5 + 1;
        if (iVar5 != -1) {
          bVar18 = SBORROW4(iVar5,99);
          iVar4 = iVar5 + -99;
        }
        if ((iVar5 == -1 || iVar5 == 99) || iVar4 < 0 != bVar18) {
          if (bVar1) {
            piVar16 = param_1 + 4;
          }
          else {
            piVar16 = param_1 + 1;
          }
          fn_0078fa28(piVar16,&local_5c);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar3);
  }
  fn_00763d5c(param_1[1],param_1[2],&LAB_0065cf58);
  fn_00763d5c(param_1[4],param_1[5]);
  iVar3 = param_1[2] - param_1[1] >> 0x1f;
  uVar9 = 0;
  if ((param_1[2] - param_1[1]) / 0x34 + iVar3 != iVar3) {
    do {
      local_98 = (undefined1 *)0x0;
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1,0);
      uVar15 = uVar9 + 1;
      *(undefined2 *)(param_1[1] + uVar9 * 0x34 + 0xc) = uVar2;
      uVar9 = uVar15;
    } while (uVar15 < (uint)((param_1[2] - param_1[1]) / 0x34));
  }
  iVar14 = 0;
  iVar3 = (*(int *)(param_1[10] + 8) - *(int *)(param_1[10] + 4)) / 0x28;
  piVar16 = local_68;
  piVar11 = local_64;
  if (0 < iVar3) {
    do {
      puVar6 = (undefined2 *)fn_003b3780(param_1[10],iVar14);
      piVar16 = local_68;
      piVar11 = local_64;
      if (puVar6 == (undefined2 *)0x0) break;
      fn_00368d34(&local_98);
      local_94 = CONCAT22(((unsigned int)(local_94) >> 16) & 0xffff,puVar6[1]);
      local_89 = (undefined1)puVar6[2];
      uStack_88 = (undefined1)((ushort)puVar6[2] >> 8);
      local_98 = (local_98 & ~((unsigned int)0xffff << 16)) | (((unsigned int)(*puVar6) & 0xffff) << 16);
      iVar4 = fn_00163868(100);
      puVar17 = (uint *)(param_1 + 7);
      local_8a = iVar4 < (short)puVar6[3];
      local_94 = CONCAT22(puVar6[4],(undefined2)local_94);
      local_8c = 0;
      local_90 = 0;
      local_98 = (undefined1 *)CONCAT22(((unsigned int)(local_98) >> 16) & 0xffff,puVar6[5]);
      uStack_87 = puVar6[6] != 0;
      uStack_86 = puVar6[0xd] != 0;
      piVar16 = (int *)param_1[8];
      if (piVar16 == (int *)param_1[9]) {
        uVar9 = (int)((int)piVar16 - *puVar17) / 0x14;
        if (uVar9 < (uint)((int)(param_1[9] - *puVar17) / 0x14)) {
          param_1[8] = (int)(piVar16 + 5);
          if (piVar16 != (int *)0x0) {
            *piVar16 = piVar16[-5];
            piVar16[1] = piVar16[-4];
            piVar16[2] = piVar16[-3];
            piVar16[3] = piVar16[-2];
            piVar16[4] = piVar16[-1];
          }
          piVar12 = piVar16 + -5;
          piVar11 = piVar16;
          local_74 = (undefined1 *)&local_98;
          if (piVar16 < piVar12) {
            iVar4 = (int)piVar12 - (int)piVar16;
            iVar5 = 1;
            local_74 = (undefined1 *)&local_98;
            if (1 < iVar4 / 0x14 + 1) {
              local_74 = (undefined1 *)&local_98;
              do {
                piVar12 = piVar12 + -5;
                piVar11 = piVar11 + -5;
                fn_0017821c(piVar11,piVar12,0x13);
                iVar5 = iVar5 + 1;
              } while (iVar5 < iVar4 / 0x14 + 1);
            }
          }
          else {
            while (piVar16 != piVar12) {
              piVar12 = piVar12 + -5;
              fn_0017821c(piVar11 + -5,piVar12,0x13);
              piVar11 = piVar11 + -5;
            }
          }
          fn_0017821c(piVar16,local_74);
        }
        else {
          uVar15 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
          if (uVar15 < uVar9 + 0x20) {
            uVar15 = uVar9 + 0x20;
          }
          local_74 = (undefined1 *)&local_98;
          piVar10 = (int *)fn_00100fc6(uVar15 * 0x14,0);
          piVar12 = piVar10;
          for (piVar11 = (int *)*puVar17; piVar11 != piVar16; piVar11 = piVar11 + 5) {
            if (piVar12 != (int *)0x0) {
              iVar4 = piVar11[1];
              iVar5 = piVar11[2];
              iVar19 = piVar11[3];
              iVar20 = piVar11[4];
              *piVar12 = *piVar11;
              piVar12[1] = iVar4;
              piVar12[2] = iVar5;
              piVar12[3] = iVar19;
              piVar12[4] = iVar20;
            }
            piVar12 = piVar12 + 5;
          }
          piVar11 = piVar10 + ((int)((int)piVar16 - *puVar17) / 0x14) * 5;
          if (piVar11 != (int *)0x0) {
            *piVar11 = (int)local_98;
            piVar11[1] = local_94;
            piVar11[2] = local_90;
            piVar11[3] = CONCAT13(local_89,CONCAT12(local_8a,local_8c));
            piVar11[4] = CONCAT13(uStack_85,CONCAT12(uStack_86,CONCAT11(uStack_87,uStack_88)));
          }
          piVar12 = (int *)param_1[8];
          piVar11 = piVar10 + ((int)((int)piVar16 - *puVar17) / 0x14) * 5;
          for (; piVar16 != piVar12; piVar16 = piVar16 + 5) {
            piVar7 = piVar11 + 5;
            if (piVar7 != (int *)0x0) {
              iVar4 = piVar16[1];
              iVar5 = piVar16[2];
              iVar19 = piVar16[3];
              iVar20 = piVar16[4];
              *piVar7 = *piVar16;
              piVar11[6] = iVar4;
              piVar11[7] = iVar5;
              piVar11[8] = iVar19;
              piVar11[9] = iVar20;
            }
            piVar11 = piVar7;
          }
          uVar8 = *puVar17;
          uVar13 = param_1[8];
          uVar9 = uVar8;
          if (uVar13 < uVar8) {
            do {
              uVar9 = uVar9 + 0x14;
            } while (uVar9 != uVar13);
          }
          fn_001008c4(uVar8,(int)(param_1[9] - uVar8) / 0x14,0);
          *puVar17 = (uint)piVar10;
          param_1[8] = (int)(piVar10 + ((int)(uVar13 - uVar8) / 0x14) * 5 + 5);
          param_1[9] = (int)(piVar10 + uVar15 * 5);
        }
      }
      else {
        param_1[8] = (int)(piVar16 + 5);
        if (piVar16 != (int *)0x0) {
          *piVar16 = (int)local_98;
          piVar16[1] = local_94;
          piVar16[2] = 0;
          piVar16[3] = (uint)CONCAT11(local_89,local_8a) << 0x10;
          piVar16[4] = CONCAT13(uStack_85,CONCAT12(uStack_86,CONCAT11(uStack_87,uStack_88)));
        }
      }
      iVar14 = iVar14 + 1;
      piVar16 = local_68;
      piVar11 = local_64;
    } while (iVar14 < iVar3);
  }
  for (; piVar12 = local_64, piVar16 != local_64; piVar16 = piVar16 + 10) {
    local_64 = piVar11;
    if ((undefined1 *)*piVar16 != &DAT_008f9d04) {
      piVar10 = (int *)((undefined1 *)*piVar16 + -0xc);
      iVar3 = *piVar10;
      if ((iVar3 == -1) || ((piVar10 != &DAT_008f9cf8 && (*piVar10 = iVar3 + -1, iVar3 == 0)))) {
        fn_001008c4(*piVar16 + -0xc,*(int *)(*piVar16 + -8) + 0xe,0);
      }
    }
    piVar11 = local_64;
    local_64 = piVar12;
  }
  local_64 = piVar11;
  fn_001008c4(local_68,(local_60 - (int)local_68) / 0x28,0);
  return;
}


