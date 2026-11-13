#include "002fcf5c_002fd648.h"



void fn_002fd648(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 8) != iVar1) {
    do {
      if (*(short *)(iVar1 + 6) == param_2) {
        fn_00242710(*(undefined4 *)(DAT_00897804 + 0x1c),*(undefined4 *)(iVar1 + 0x20),0);
        if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
          if (*(int *)(param_1 + 8) != iVar1 + 0x24) {
            fn_007b867c();
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x24;
        }
        if (*(int *)(param_1 + 8) == iVar1) break;
      }
      else {
        iVar1 = iVar1 + 0x24;
      }
    } while (*(int *)(param_1 + 8) != iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) != iVar1) {
    do {
      if (*(short *)(iVar1 + 8) == param_2) {
        if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x2c)) {
          if (*(int *)(param_1 + 0x2c) != iVar1 + 0x24) {
            fn_007b8758();
          }
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -0x24;
        }
        if (*(int *)(param_1 + 0x2c) == iVar1) {
          return;
        }
      }
      else {
        iVar1 = iVar1 + 0x24;
      }
    } while (*(int *)(param_1 + 0x2c) != iVar1);
  }
  return;
}



void fn_002fcf5c(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  int *piVar17;
  int in_r12;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint local_88;
  int local_84 [2];
  int *local_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  int *local_68;
  uint local_64 [2];
  int *local_5c;
  undefined4 local_58;
  int local_48;
  int iStack_44;
  uint local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  uint local_28;
  
  local_58 = *(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4);
  iVar2 = fn_006f7a0c(DAT_008977e0);
  local_5c = (int *)(**(code **)(**(int **)(iVar2 + 0x50) + 0x38))();
  local_64[0] = (local_5c[1] - *local_5c) / 0x2c;
  local_88 = 0x20;
  puVar16 = local_64;
  if (local_64[0] < 0x20) {
    puVar16 = &local_88;
  }
  local_40 = *puVar16;
  piVar3 = (int *)fn_00100fc6(local_40 * 0x2c,0);
  piVar17 = (int *)local_5c[1];
  piVar10 = piVar3;
  for (piVar15 = (int *)*local_5c; piVar15 != piVar17; piVar15 = piVar15 + 0xb) {
    if (piVar10 != (int *)0x0) {
      iVar2 = *piVar15;
      if (*(int *)(iVar2 + -0xc) == -1) {
        uVar9 = *(uint *)(iVar2 + -4);
        if (0xfffffff1 < uVar9) {
          fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar9,0xfffffff1);
        }
        if (uVar9 == 0) {
          puVar8 = &DAT_008f9cf8;
        }
        else {
          puVar8 = (undefined4 *)fn_00100fc6(uVar9 + 0xe,0);
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
          }
          puVar13 = (undefined1 *)((int)puVar8 + uVar9 + 0xc);
          *puVar8 = 0;
          puVar8[1] = uVar9;
          puVar8[2] = uVar9;
          if (puVar13 != (undefined1 *)0x0) {
            *puVar13 = 0;
          }
        }
        *piVar10 = (int)(puVar8 + 3);
        fn_00301a9c(puVar8 + 3,*piVar15,uVar9);
      }
      else {
        piVar4 = (int *)(iVar2 + -0xc);
        *piVar10 = iVar2;
        if (piVar4 != &DAT_008f9cf8) {
          *piVar4 = *piVar4 + 1;
        }
      }
      iVar14 = piVar15[3];
      iVar2 = piVar15[2];
      piVar10[1] = piVar15[1];
      piVar10[2] = iVar2;
      piVar10[3] = iVar14;
      iVar2 = piVar15[5];
      iVar14 = piVar15[6];
      piVar10[4] = piVar15[4];
      piVar10[5] = iVar2;
      piVar10[6] = iVar14;
      iVar2 = piVar15[8];
      iVar14 = piVar15[9];
      piVar10[7] = piVar15[7];
      piVar10[8] = iVar2;
      piVar10[9] = iVar14;
      piVar10[10] = piVar15[10];
    }
    piVar10 = piVar10 + 0xb;
  }
  local_5c = piVar3 + ((local_5c[1] - *local_5c) / 0x2c) * 0xb;
  local_68 = piVar3 + local_40 * 0xb;
  sVar1 = fn_006c8a2c(local_58);
  local_7c = (int *)0x0;
  local_78 = (int *)0x0;
  local_74 = (int *)0x0;
  piVar15 = local_78;
  while (local_78 = piVar15,
        (uint)((int)local_78 - (int)local_7c >> 2) < (uint)(int)(short)(sVar1 + 4)) {
    local_84[0] = fn_00163868(((int)local_5c - (int)piVar3) / 0x2c);
    piVar10 = local_7c;
    while( true ) {
      if (piVar10 != local_78) {
        in_r12 = *piVar10;
      }
      if (piVar10 == local_78 || in_r12 == local_84[0]) break;
      piVar10 = piVar10 + 1;
    }
    piVar15 = local_78;
    if (local_78 == piVar10) {
      if (local_78 == local_74) {
        fn_0079ce44(&local_7c,local_78,local_84);
        piVar15 = local_78;
      }
      else {
        piVar15 = local_78 + 1;
        if (local_78 != (int *)0x0) {
          *local_78 = local_84[0];
        }
      }
    }
  }
  uVar9 = *(uint *)(param_1 + 0x34);
  uVar12 = *(uint *)(param_1 + 0x38);
  if (uVar9 != uVar12) {
    uVar5 = uVar9;
    if (uVar12 <= uVar9) {
      do {
        uVar5 = uVar5 + 0x24;
      } while (uVar5 != uVar12);
    }
    *(uint *)(param_1 + 0x38) = uVar12 + ((int)(uVar12 - uVar9) / 0x24) * -0x24;
  }
  uVar9 = 0;
  if ((int)local_78 - (int)local_7c >> 2 != 0) {
    do {
      iVar2 = local_7c[uVar9];
      puVar16 = (uint *)(param_1 + 0x34);
      local_48 = piVar3[iVar2 * 0xb + 1];
      iStack_44 = piVar3[iVar2 * 0xb + 2];
      local_40 = piVar3[iVar2 * 0xb + 3];
      local_3c = piVar3[iVar2 * 0xb + 4];
      iStack_38 = piVar3[iVar2 * 0xb + 5];
      iStack_34 = piVar3[iVar2 * 0xb + 6];
      local_28 = local_28 & 0xffffff00;
      local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,(short)piVar3[iVar2 * 0xb + 10]);
      piVar15 = *(int **)(param_1 + 0x38);
      if (piVar15 == *(int **)(param_1 + 0x3c)) {
        local_70 = &local_48;
        uVar12 = (int)((int)piVar15 - *puVar16) / 0x24;
        if (uVar12 < (uint)((int)((int)*(int **)(param_1 + 0x3c) - *puVar16) / 0x24)) {
          *(int **)(param_1 + 0x38) = piVar15 + 9;
          if (piVar15 != (int *)0x0) {
            *piVar15 = piVar15[-9];
            piVar15[1] = piVar15[-8];
            piVar15[2] = piVar15[-7];
            piVar15[3] = piVar15[-6];
            piVar15[4] = piVar15[-5];
            piVar15[5] = piVar15[-4];
            piVar15[6] = piVar15[-3];
            piVar15[7] = piVar15[-2];
            piVar15[8] = piVar15[-1];
          }
          piVar17 = piVar15 + -9;
          piVar10 = piVar15;
          if (piVar15 < piVar17) {
            iVar2 = (int)piVar17 - (int)piVar15;
            iVar14 = 1;
            if (1 < iVar2 / 0x24 + 1) {
              do {
                piVar17 = piVar17 + -9;
                piVar10 = piVar10 + -9;
                fn_0017821c(piVar10,piVar17,0x21);
                iVar14 = iVar14 + 1;
              } while (iVar14 < iVar2 / 0x24 + 1);
            }
          }
          else {
            while (piVar15 != piVar17) {
              piVar17 = piVar17 + -9;
              fn_0017821c(piVar10 + -9,piVar17,0x21);
              piVar10 = piVar10 + -9;
            }
          }
          fn_0017821c(piVar15,local_70,0x21);
        }
        else {
          uVar5 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
          if (uVar5 < uVar12 + 0x20) {
            uVar5 = uVar12 + 0x20;
          }
          piVar4 = (int *)fn_00100fc6(uVar5 * 0x24,0);
          piVar17 = piVar4;
          for (piVar10 = (int *)*puVar16; piVar10 != piVar15; piVar10 = piVar10 + 9) {
            if (piVar17 != (int *)0x0) {
              iVar2 = piVar10[1];
              iVar14 = piVar10[2];
              iVar18 = piVar10[3];
              iVar19 = piVar10[4];
              iVar20 = piVar10[5];
              iVar21 = piVar10[6];
              iVar22 = piVar10[7];
              *piVar17 = *piVar10;
              piVar17[1] = iVar2;
              piVar17[2] = iVar14;
              piVar17[3] = iVar18;
              piVar17[4] = iVar19;
              piVar17[5] = iVar20;
              piVar17[6] = iVar21;
              piVar17[7] = iVar22;
              piVar17[8] = piVar10[8];
            }
            piVar17 = piVar17 + 9;
          }
          piVar10 = piVar4 + ((int)((int)piVar15 - *puVar16) / 0x24) * 9;
          if (piVar10 != (int *)0x0) {
            *piVar10 = local_48;
            piVar10[1] = iStack_44;
            piVar10[2] = local_40;
            piVar10[3] = local_3c;
            piVar10[4] = iStack_38;
            piVar10[5] = iStack_34;
            piVar10[6] = local_30;
            piVar10[7] = iStack_2c;
            piVar10[8] = local_28;
          }
          piVar17 = *(int **)(param_1 + 0x38);
          piVar10 = piVar4 + ((int)((int)piVar15 - *puVar16) / 0x24) * 9;
          for (; piVar15 != piVar17; piVar15 = piVar15 + 9) {
            piVar6 = piVar10 + 9;
            if (piVar6 != (int *)0x0) {
              iVar2 = piVar15[1];
              iVar14 = piVar15[2];
              iVar18 = piVar15[3];
              iVar19 = piVar15[4];
              iVar20 = piVar15[5];
              iVar21 = piVar15[6];
              iVar22 = piVar15[7];
              *piVar6 = *piVar15;
              piVar10[10] = iVar2;
              piVar10[0xb] = iVar14;
              piVar10[0xc] = iVar18;
              piVar10[0xd] = iVar19;
              piVar10[0xe] = iVar20;
              piVar10[0xf] = iVar21;
              piVar10[0x10] = iVar22;
              piVar10[0x11] = piVar15[8];
            }
            piVar10 = piVar6;
          }
          uVar7 = *puVar16;
          uVar11 = *(uint *)(param_1 + 0x38);
          uVar12 = uVar7;
          if (uVar11 < uVar7) {
            do {
              uVar12 = uVar12 + 0x24;
            } while (uVar12 != uVar11);
          }
          fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0x3c) - uVar7) / 0x24,0);
          *puVar16 = (uint)piVar4;
          *(int **)(param_1 + 0x38) = piVar4 + ((int)(uVar11 - uVar7) / 0x24) * 9 + 9;
          *(int **)(param_1 + 0x3c) = piVar4 + uVar5 * 9;
        }
      }
      else {
        *(int **)(param_1 + 0x38) = piVar15 + 9;
        if (piVar15 != (int *)0x0) {
          *piVar15 = local_48;
          piVar15[1] = iStack_44;
          piVar15[2] = local_40;
          piVar15[3] = local_3c;
          piVar15[4] = iStack_38;
          piVar15[5] = iStack_34;
          piVar15[6] = local_30;
          piVar15[7] = iStack_2c;
          piVar15[8] = local_28;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)local_78 - (int)local_7c >> 2));
  }
  piVar15 = local_7c;
  if (local_78 < local_7c) {
    do {
      piVar15 = piVar15 + 1;
    } while (piVar15 != local_78);
  }
  fn_001008c4(local_7c,(int)local_74 - (int)local_7c >> 2,0);
  piVar10 = local_5c;
  for (piVar15 = piVar3; piVar15 != piVar10; piVar15 = piVar15 + 0xb) {
    if ((undefined1 *)*piVar15 != &DAT_008f9d04) {
      piVar17 = (int *)((undefined1 *)*piVar15 + -0xc);
      iVar2 = *piVar17;
      if ((iVar2 == -1) || ((piVar17 != &DAT_008f9cf8 && (*piVar17 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(*piVar15 + -0xc,*(int *)(*piVar15 + -8) + 0xe,0);
      }
    }
  }
  fn_001008c4(piVar3,((int)local_68 - (int)piVar3) / 0x2c,0);
  return;
}


