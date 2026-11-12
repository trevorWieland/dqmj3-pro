#include "005845b4_005849ec.h"



void fn_005849ec(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2 != 0) {
    fn_0043edc8(*(undefined4 *)(*(int *)(param_1 + 0x2c) + -4),1);
  }
  puVar8 = *(undefined4 **)(param_1 + 0x2c);
  puVar9 = (uint *)(param_1 + 0x28);
  if (puVar8 == *(undefined4 **)(param_1 + 0x30)) {
    uVar3 = (int)((int)puVar8 - *puVar9) >> 2;
    if (uVar3 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x30) - *puVar9) >> 2)) {
      *(undefined4 **)(param_1 + 0x2c) = puVar8 + 1;
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = puVar8[-1];
      }
      puVar5 = puVar8 + -1;
      puVar6 = puVar8;
      if (puVar8 < puVar5) {
        if (0 < (int)puVar5 - (int)puVar8) {
          iVar11 = (int)puVar5 - (int)puVar8 >> 2;
          iVar4 = 0;
          do {
            iVar11 = iVar11 + -1;
            puVar8[iVar4 + -1] = puVar5[iVar4 + -1];
            iVar4 = iVar4 + -1;
          } while (iVar11 != 0);
        }
      }
      else {
        while (puVar8 != puVar5) {
          puVar5 = puVar5 + -1;
          puVar6[-1] = *puVar5;
          puVar6 = puVar6 + -1;
        }
      }
      *puVar8 = param_2;
    }
    else {
      uVar10 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
      if (uVar10 < uVar3 + 0x20) {
        uVar10 = uVar3 + 0x20;
      }
      puVar1 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
      puVar6 = puVar1;
      for (puVar5 = (undefined4 *)*puVar9; puVar5 != puVar8; puVar5 = puVar5 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar5;
        }
        puVar6 = puVar6 + 1;
      }
      puVar5 = (undefined4 *)(((int)puVar8 - *puVar9 & 0xfffffffc) + (int)puVar1);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = param_2;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x2c);
      puVar5 = (undefined4 *)(((int)puVar8 - *puVar9 & 0xfffffffc) + (int)puVar1);
      for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
        puVar5 = puVar5 + 1;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar8;
        }
      }
      uVar2 = *puVar9;
      uVar7 = *(uint *)(param_1 + 0x2c);
      uVar3 = uVar2;
      if (uVar7 < uVar2) {
        do {
          uVar3 = uVar3 + 4;
        } while (uVar3 != uVar7);
      }
      fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x30) - uVar2) >> 2,0);
      *(undefined4 **)(param_1 + 0x30) = puVar1 + uVar10;
      *(undefined4 **)(param_1 + 0x2c) = puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1;
      *puVar9 = (uint)puVar1;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x2c) = puVar8 + 1;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = param_2;
    }
  }
  *(undefined4 *)(param_1 + 0x20) =
       *(undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c) * 8 + 4);
  fn_00190e00();
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_005849d4(int param_1)

{
  fn_005848d4();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



void fn_00584968(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if ((piVar1 != (int *)0x0) && (*(char *)(param_1 + 0x24) == '\0')) {
    if ((float)piVar1[9] != 0.0) {
      (**(code **)(*piVar1 + 0xc))();
                    /* WARNING: Could not recover jumptable at 0x005849c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
      return;
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  return;
}



void fn_00584884(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2 != 0) {
    do {
      fn_0043edc8(*(undefined4 *)(*(int *)(param_1 + 0x28) + uVar1 * 4),0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2));
  }
  return;
}



void fn_005845b4(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  undefined8 uVar17;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar6 = *(uint *)(param_1 + 0x28);
  uVar12 = *(uint *)(param_1 + 0x2c);
  if (uVar6 != uVar12) {
    uVar1 = uVar6;
    if (uVar12 <= uVar6) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar12);
    }
    *(uint *)(param_1 + 0x2c) = uVar12 - (uVar12 - uVar6 & 0xfffffffc);
  }
  fn_005848d4(param_1);
  iVar14 = 0;
  piVar15 = (int *)(&DAT_007c6268 + param_3 * 0x80);
  if (*piVar15 != 0) {
    uVar17 = 0;
    do {
      uVar2 = fn_001853ec(*(undefined4 *)(param_1 + 4),piVar15[iVar14],*(undefined4 *)(param_1 + 8)
                          );
      piVar3 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 4),uVar2);
      (**(code **)(*piVar3 + 0x10))(piVar3,1);
      piVar3[4] = (int)uVar17;
      puVar13 = *(undefined4 **)(param_1 + 0x14);
      puVar16 = (uint *)(param_1 + 0x10);
      if (puVar13 == *(undefined4 **)(param_1 + 0x18)) {
        uVar6 = (int)((int)puVar13 - *puVar16) >> 3;
        if (uVar6 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x18) - *puVar16) >> 3)) {
          *(undefined4 **)(param_1 + 0x14) = puVar13 + 2;
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = puVar13[-2];
            puVar13[1] = puVar13[-1];
          }
          puVar8 = puVar13 + -2;
          puVar9 = puVar13;
          if (puVar13 < puVar8) {
            iVar7 = (int)puVar8 - (int)puVar13;
            if (0 < iVar7) {
              if (iVar7 * 0x10000000 < 0) {
                puVar8 = puVar13 + -4;
                puVar9 = puVar13 + -2;
                *puVar9 = *puVar8;
                puVar13[-1] = puVar13[-3];
              }
              for (iVar7 = iVar7 >> 4; iVar7 != 0; iVar7 = iVar7 + -1) {
                uVar11 = puVar8[-1];
                puVar9[-2] = puVar8[-2];
                puVar9[-1] = uVar11;
                uVar11 = puVar8[-3];
                puVar9[-4] = puVar8[-4];
                puVar9[-3] = uVar11;
                puVar8 = puVar8 + -4;
                puVar9 = puVar9 + -4;
              }
            }
          }
          else {
            while (puVar13 != puVar8) {
              uVar11 = puVar8[-1];
              puVar9[-2] = puVar8[-2];
              puVar9[-1] = uVar11;
              puVar9 = puVar9 + -2;
              puVar8 = puVar8 + -2;
            }
          }
          puVar13[1] = piVar3;
          *puVar13 = uVar2;
        }
        else {
          uVar12 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
          if (uVar12 < uVar6 + 0x20) {
            uVar12 = uVar6 + 0x20;
          }
          puVar4 = (undefined4 *)fn_00100fc6(uVar12 << 3,0);
          puVar9 = puVar4;
          for (puVar8 = (undefined4 *)*puVar16; puVar8 != puVar13; puVar8 = puVar8 + 2) {
            if (puVar9 != (undefined4 *)0x0) {
              uVar11 = puVar8[1];
              *puVar9 = *puVar8;
              puVar9[1] = uVar11;
            }
            puVar9 = puVar9 + 2;
          }
          puVar8 = (undefined4 *)(((int)puVar13 - *puVar16 & 0xfffffff8) + (int)puVar4);
          if (puVar8 != (undefined4 *)0x0) {
            puVar8[1] = piVar3;
            *puVar8 = uVar2;
          }
          puVar9 = *(undefined4 **)(param_1 + 0x14);
          puVar8 = (undefined4 *)(((int)puVar13 - *puVar16 & 0xfffffff8) + (int)puVar4);
          for (; puVar13 != puVar9; puVar13 = puVar13 + 2) {
            puVar5 = puVar8 + 2;
            if (puVar5 != (undefined4 *)0x0) {
              uVar2 = puVar13[1];
              *puVar5 = *puVar13;
              puVar8[3] = uVar2;
            }
            puVar8 = puVar5;
          }
          uVar1 = *puVar16;
          uVar10 = *(uint *)(param_1 + 0x14);
          uVar6 = uVar1;
          if (uVar10 < uVar1) {
            do {
              uVar6 = uVar6 + 8;
            } while (uVar6 != uVar10);
          }
          fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0x18) - uVar1) >> 3,0);
          *puVar16 = (uint)puVar4;
          *(undefined4 **)(param_1 + 0x14) = puVar4 + ((int)(uVar10 - uVar1) >> 3) * 2 + 2;
          *(undefined4 **)(param_1 + 0x18) = puVar4 + uVar12 * 2;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x14) = puVar13 + 2;
        if (puVar13 != (undefined4 *)0x0) {
          puVar13[1] = piVar3;
          *puVar13 = uVar2;
        }
      }
      iVar14 = iVar14 + 1;
    } while (piVar15[iVar14] != 0);
  }
  return;
}



void fn_005848d4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3 != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x10) + uVar3 * 8) != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 4));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3));
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 8;
      } while (uVar1 != uVar3);
    }
    *(uint *)(param_1 + 0x14) = uVar3 - (uVar3 - uVar2 & 0xfffffff8);
  }
  return;
}


