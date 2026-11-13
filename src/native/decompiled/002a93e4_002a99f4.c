#include "002a93e4_002a99f4.h"



void fn_002a99f4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  fn_0028a66c(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0028acf4(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar13 = 0;
  do {
    iVar2 = fn_002c11d0(param_1,1,0);
    iVar3 = fn_002c11d0(param_1,2,0);
    piVar11 = (int *)(iVar2 + 4);
    uVar1 = *(int *)(iVar2 + 8) - *piVar11 >> 2;
    uVar14 = 0x20;
    if (0x1f < uVar1) {
      uVar14 = uVar1;
    }
    puVar4 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
    puVar9 = *(undefined4 **)(iVar2 + 8);
    puVar5 = puVar4;
    for (puVar7 = (undefined4 *)*piVar11; puVar7 != puVar9; puVar7 = puVar7 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar7;
      }
      puVar5 = puVar5 + 1;
    }
    iVar2 = *(int *)(iVar2 + 8);
    iVar8 = *piVar11;
    uVar1 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2;
    uVar12 = 0x20;
    if (0x1f < uVar1) {
      uVar12 = uVar1;
    }
    puVar9 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
    puVar10 = *(undefined4 **)(iVar3 + 8);
    puVar5 = puVar9;
    for (puVar7 = *(undefined4 **)(iVar3 + 4); puVar7 != puVar10; puVar7 = puVar7 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar7;
      }
      puVar5 = puVar5 + 1;
    }
    iVar6 = *(int *)(iVar3 + 8);
    iVar3 = *(int *)(iVar3 + 4);
    if (puVar4[iVar13] != 0) {
      fn_0028b7ac(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    puVar7 = puVar9;
    if (puVar9[iVar13] != 0) {
      fn_0028a588(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    for (; puVar7 != (undefined4 *)((iVar6 - iVar3 & 0xfffffffcU) + (int)puVar9);
        puVar7 = puVar7 + 1) {
    }
    fn_001008c4(puVar9,(int)(uVar12 * 4) >> 2,0);
    for (puVar7 = puVar4; puVar7 != (undefined4 *)((iVar2 - iVar8 & 0xfffffffcU) + (int)puVar4);
        puVar7 = puVar7 + 1) {
    }
    fn_001008c4(puVar4,(int)(uVar14 * 4) >> 2,0);
    iVar13 = iVar13 + 1;
  } while (iVar13 < 4);
  return;
}



void fn_002a9910(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x108) != '\0') {
    piVar1 = (int *)fn_002c11d0(param_1,1,0);
    iVar6 = 0;
    do {
      iVar2 = (**(code **)(*piVar1 + 8))(piVar1,0,iVar6);
      if (param_2 == 0) {
        if ((*(int *)(param_1 + 0x100) == 0) ||
           (iVar3 = fn_002e3e9c(piVar1,0,iVar6), iVar3 != *(int *)(param_1 + 0x100))) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        *(undefined1 *)(iVar2 + 0x27) = uVar4;
      }
      else {
        if ((*(int *)(param_1 + 0x104) == 0) ||
           (iVar3 = fn_002e3e9c(piVar1,0,iVar6), iVar3 != *(int *)(param_1 + 0x104))) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        fn_002b3d78(iVar2,uVar5,0);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
  }
  return;
}



void fn_002a9850(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 100) == 4) && (param_2 == 1 || param_2 == 2)) {
    uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0xb0) + 0x10) + 0x5c))();
    iVar2 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb0),0,uVar1);
    if (iVar2 != 0) {
      uVar1 = fn_003467f8(*(undefined4 *)(param_1 + 0xb0),uVar1);
      iVar3 = fn_002b2a48();
      if (iVar3 != 0) {
        fn_002906e0(iVar2);
      }
      uVar4 = fn_00290544(iVar2);
      fn_002b2cbc(uVar1,uVar4);
    }
  }
  fn_002c07e4(param_1,param_2,param_3,param_4,param_5);
  return;
}



void fn_002a977c(int param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    piVar2 = (int *)fn_003467f8(*(undefined4 *)(param_1 + 0xb0),iVar6);
    if (param_2 == 0) {
LAB_002a9838:
      *(undefined1 *)((int)piVar2 + 0x33) = 0;
    }
    else {
      iVar3 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb0),0,iVar6);
      iVar4 = iVar3;
      if (iVar3 == 0x232b) {
        iVar4 = fn_00154ac8(0x3d);
      }
      if (iVar4 == 0) goto LAB_002a9838;
      uVar1 = fn_00259f7c(iVar3);
      *(undefined1 *)((int)piVar2 + 0x33) = uVar1;
      iVar4 = fn_00259f5c(iVar3);
      (**(code **)(*piVar2 + 0x20))(piVar2,iVar4 != 0);
      uVar5 = fn_00290544(iVar3);
      fn_002b2cbc(piVar2,uVar5);
    }
    iVar6 = iVar6 + 1;
    if (0xb < iVar6) {
      return;
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x002a9574) */
/* WARNING: Removing unreachable block (ram,0x002a9580) */
/* WARNING: Removing unreachable block (ram,0x002a954c) */
/* WARNING: Removing unreachable block (ram,0x002a9550) */
/* WARNING: Removing unreachable block (ram,0x002a9554) */
/* WARNING: Removing unreachable block (ram,0x002a9558) */
/* WARNING: Removing unreachable block (ram,0x002a955c) */
/* WARNING: Removing unreachable block (ram,0x002a959c) */
/* WARNING: Removing unreachable block (ram,0x002a95ac) */
/* WARNING: Removing unreachable block (ram,0x002a9584) */
/* WARNING: Removing unreachable block (ram,0x002a958c) */
/* WARNING: Removing unreachable block (ram,0x002a9590) */
/* WARNING: Removing unreachable block (ram,0x002a9594) */

void fn_002a93e4(undefined4 param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint local_28;
  uint local_24;
  
  puVar1 = (undefined4 *)param_2[1];
  puVar7 = (undefined4 *)*param_2;
  uVar11 = (int)puVar1 - (int)puVar7 >> 2;
  if (uVar11 < 0xc) {
    iVar13 = 0xc - uVar11;
    if (iVar13 != 0) {
      uVar11 = iVar13 + uVar11;
      if ((uint)((int)(param_2[2] - (int)puVar7) >> 2) < uVar11) {
        local_28 = uVar11;
        uVar5 = (int)(param_2[1] - *param_2) >> 2;
        local_24 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
        if (local_24 < uVar5 + 0x20) {
          local_24 = uVar5 + 0x20;
        }
        puVar2 = &local_24;
        if (local_24 <= uVar11) {
          puVar2 = &local_28;
        }
        uVar11 = *puVar2;
        puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
        puVar9 = puVar3;
        for (puVar7 = (undefined4 *)*param_2; puVar7 != puVar1; puVar7 = puVar7 + 1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = *puVar7;
          }
          puVar9 = puVar9 + 1;
        }
        puVar7 = (undefined4 *)(((int)puVar1 - *param_2 & 0xfffffffc) + (int)puVar3);
        for (iVar12 = iVar13; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0;
          }
          puVar7 = puVar7 + 1;
        }
        puVar9 = (undefined4 *)param_2[1];
        puVar7 = puVar3 + iVar13 + ((int)((int)puVar1 - *param_2) >> 2);
        for (; puVar1 != puVar9; puVar1 = puVar1 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar1;
          }
          puVar7 = puVar7 + 1;
        }
        uVar4 = *param_2;
        uVar10 = param_2[1];
        uVar5 = uVar4;
        if (uVar10 < uVar4) {
          do {
            uVar5 = uVar5 + 4;
          } while (uVar5 != uVar10);
        }
        fn_001008c4(uVar4,(int)(param_2[2] - uVar4) >> 2,0);
        param_2[2] = (uint)(puVar3 + uVar11);
        param_2[1] = (uint)(puVar3 + ((int)(uVar10 - uVar4) >> 2) + iVar13);
        *param_2 = (uint)puVar3;
      }
      else {
        puVar7 = puVar1 + iVar13;
        param_2[1] = (uint)(puVar1 + iVar13);
        if (puVar7 < puVar1) {
          puVar8 = puVar1 + -iVar13;
          puVar3 = puVar1;
          for (puVar9 = puVar8; puVar9 != puVar1; puVar9 = puVar9 + 1) {
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar9;
            }
            puVar3 = puVar3 + 1;
          }
          puVar9 = puVar1;
          if (puVar1 < puVar8) {
            iVar13 = (int)puVar8 - (int)puVar1;
            if (0 < iVar13) {
              if (iVar13 * 0x20000000 < 0) {
                puVar8 = puVar8 + -1;
                puVar9 = puVar1 + -1;
                *puVar9 = *puVar8;
              }
              for (iVar13 = iVar13 >> 3; iVar13 != 0; iVar13 = iVar13 + -1) {
                puVar9[-1] = puVar8[-1];
                puVar8 = puVar8 + -2;
                puVar9 = puVar9 + -2;
                *puVar9 = *puVar8;
              }
            }
          }
          else {
            while (puVar1 != puVar8) {
              puVar8 = puVar8 + -1;
              puVar9[-1] = *puVar8;
              puVar9 = puVar9 + -1;
            }
          }
          if (puVar1 < puVar7) {
            iVar13 = (int)puVar7 - (int)puVar1;
            if (0 < iVar13) {
              puVar7 = puVar1;
              if (iVar13 * 0x20000000 < 0) {
                puVar7 = puVar1 + 1;
                *puVar1 = 0;
              }
              for (iVar13 = iVar13 >> 3; iVar13 != 0; iVar13 = iVar13 + -1) {
                puVar1 = puVar7 + 1;
                *puVar7 = 0;
                puVar7 = puVar7 + 2;
                *puVar1 = 0;
              }
            }
          }
          else {
            for (; puVar1 != puVar7; puVar1 = puVar1 + 1) {
              *puVar1 = 0;
            }
          }
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0;
            }
            puVar1 = puVar1 + 1;
          }
        }
      }
    }
  }
  else if ((0xc < uVar11) && (puVar9 = puVar7 + 0xc, puVar7 != puVar1)) {
    puVar7 = puVar9;
    if (puVar1 < puVar9) {
      do {
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar1);
    }
    param_2[1] = (int)puVar1 - ((int)puVar1 - (int)puVar9 & 0xfffffffcU);
  }
  iVar13 = 0;
  do {
    uVar6 = fn_006bc570(*(undefined4 *)(DAT_00897804 + 0x20),iVar13);
    iVar12 = iVar13 + 1;
    *(undefined4 *)(*param_2 + iVar13 * 4) = uVar6;
    iVar13 = iVar12;
  } while (iVar12 < 0xc);
  return;
}


