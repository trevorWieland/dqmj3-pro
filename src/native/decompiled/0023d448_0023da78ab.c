#include "0023d448_0023da78ab.h"



void fn_0023d964(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xc);
  if (*(int **)(param_1 + 0x10) != piVar2) {
    do {
      if (((int *)*piVar2 != (int *)0x0) &&
         (iVar1 = (**(code **)(*(int *)*piVar2 + 0x40))(), iVar1 == 0)) {
        (**(code **)(*(int *)*piVar2 + 0x60))((int *)*piVar2,param_2);
      }
      piVar2 = piVar2 + 1;
    } while (*(int **)(param_1 + 0x10) != piVar2);
  }
  return;
}



void fn_0023d604(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  
  piVar16 = (int *)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if ((int *)*piVar16 != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)*piVar16 + 0x48))();
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 != 0) {
      iVar2 = (**(code **)(*(int *)*piVar16 + 0x48))();
      piVar8 = *(int **)(iVar1 + 0x18);
      piVar14 = *(int **)(iVar1 + 0x1c);
      while( true ) {
        if (piVar8 != piVar14) {
          param_3 = *piVar8;
        }
        if (piVar8 == piVar14 || param_3 == iVar2) break;
        piVar8 = piVar8 + 1;
      }
      if (piVar8 != piVar14) {
        piVar12 = piVar8 + 1;
        if (piVar12 < piVar14) {
          iVar19 = (int)piVar14 - (int)piVar12;
          if (0 < iVar19) {
            piVar14 = piVar8;
            if (iVar19 * 0x20000000 < 0) {
              iVar15 = *piVar12;
              piVar12 = piVar8 + 2;
              if (iVar15 != iVar2) {
                piVar14 = piVar8 + 1;
                *piVar8 = iVar15;
              }
            }
            piVar8 = piVar14;
            for (iVar19 = iVar19 >> 3; iVar19 != 0; iVar19 = iVar19 + -1) {
              piVar14 = piVar8;
              if (*piVar12 != iVar2) {
                piVar14 = piVar8 + 1;
                *piVar8 = *piVar12;
              }
              piVar13 = piVar12 + 1;
              piVar12 = piVar12 + 2;
              piVar8 = piVar14;
              if (*piVar13 != iVar2) {
                piVar8 = piVar14 + 1;
                *piVar14 = *piVar13;
              }
            }
          }
        }
        else {
          while (piVar12 != piVar14) {
            iVar19 = *piVar12;
            piVar12 = piVar12 + 1;
            if (iVar19 != iVar2) {
              *piVar8 = iVar19;
              piVar8 = piVar8 + 1;
            }
          }
        }
      }
      piVar14 = *(int **)(iVar1 + 0x1c);
      *(int **)(iVar1 + 0x1c) = piVar8;
      if (piVar14 != piVar8) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      (**(code **)(*(int *)*piVar16 + 0x44))();
      fn_00162d44(*(undefined4 *)(*(int *)(param_1 + 4) + 0x24));
    }
    iVar2 = *(int *)(param_1 + 8);
    iVar1 = fn_00182d34(iVar2,*(undefined4 *)(*piVar16 + 8));
    if ((-1 < iVar1) && (*(char *)(*(int *)(iVar2 + 0x1c) + iVar1 * 0x28 + 0x24) != '\0')) {
      fn_005ed79c(*piVar16);
    }
    puVar17 = (uint *)(param_1 + 0x18);
    iVar1 = *piVar16;
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar3 == *(undefined4 **)(param_1 + 0x20)) {
      uVar7 = (int)((int)puVar3 - *puVar17) >> 3;
      if (uVar7 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x20) - *puVar17) >> 3)) {
        *(undefined4 **)(param_1 + 0x1c) = puVar3 + 2;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = puVar3[-2];
          puVar3[1] = puVar3[-1];
        }
        puVar9 = puVar3 + -2;
        puVar10 = puVar3;
        if (puVar3 < puVar9) {
          iVar2 = (int)puVar9 - (int)puVar3;
          if (0 < iVar2) {
            if (iVar2 * 0x10000000 < 0) {
              puVar9 = puVar3 + -4;
              puVar10 = puVar3 + -2;
              *puVar10 = *puVar9;
              puVar3[-1] = puVar3[-3];
            }
            for (iVar2 = iVar2 >> 4; iVar2 != 0; iVar2 = iVar2 + -1) {
              uVar20 = puVar9[-1];
              puVar10[-2] = puVar9[-2];
              puVar10[-1] = uVar20;
              uVar20 = puVar9[-3];
              puVar10[-4] = puVar9[-4];
              puVar10[-3] = uVar20;
              puVar10 = puVar10 + -4;
              puVar9 = puVar9 + -4;
            }
          }
        }
        else {
          while (puVar3 != puVar9) {
            uVar20 = puVar9[-1];
            puVar10[-2] = puVar9[-2];
            puVar10[-1] = uVar20;
            puVar10 = puVar10 + -2;
            puVar9 = puVar9 + -2;
          }
        }
        *puVar3 = 1;
        puVar3[1] = iVar1;
      }
      else {
        uVar18 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
        if (uVar18 < uVar7 + 0x20) {
          uVar18 = uVar7 + 0x20;
        }
        puVar4 = (undefined4 *)fn_00100fc6(uVar18 << 3,0);
        puVar10 = puVar4;
        for (puVar9 = (undefined4 *)*puVar17; puVar9 != puVar3; puVar9 = puVar9 + 2) {
          if (puVar10 != (undefined4 *)0x0) {
            uVar20 = puVar9[1];
            *puVar10 = *puVar9;
            puVar10[1] = uVar20;
          }
          puVar10 = puVar10 + 2;
        }
        puVar9 = (undefined4 *)(((int)puVar3 - *puVar17 & 0xfffffff8) + (int)puVar4);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 1;
          puVar9[1] = iVar1;
        }
        puVar10 = *(undefined4 **)(param_1 + 0x1c);
        puVar9 = (undefined4 *)(((int)puVar3 - *puVar17 & 0xfffffff8) + (int)puVar4);
        for (; puVar3 != puVar10; puVar3 = puVar3 + 2) {
          puVar5 = puVar9 + 2;
          if (puVar5 != (undefined4 *)0x0) {
            uVar20 = puVar3[1];
            *puVar5 = *puVar3;
            puVar9[3] = uVar20;
          }
          puVar9 = puVar5;
        }
        uVar6 = *puVar17;
        uVar11 = *(uint *)(param_1 + 0x1c);
        uVar7 = uVar6;
        if (uVar11 < uVar6) {
          do {
            uVar7 = uVar7 + 8;
          } while (uVar7 != uVar11);
        }
        fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0x20) - uVar6) >> 3,0);
        *(undefined4 **)(param_1 + 0x20) = puVar4 + uVar18 * 2;
        *(undefined4 **)(param_1 + 0x1c) = puVar4 + ((int)(uVar11 - uVar6) >> 3) * 2 + 2;
        *puVar17 = (uint)puVar4;
      }
    }
    else {
      *(undefined4 **)(param_1 + 0x1c) = puVar3 + 2;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 1;
        puVar3[1] = iVar1;
      }
    }
    *piVar16 = 0;
  }
  return;
}


