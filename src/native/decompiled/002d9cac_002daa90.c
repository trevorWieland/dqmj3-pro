#include "002d9cac_002daa90.h"



int fn_002daa90(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_006bb17c();
  if ((iVar1 == 1) && (iVar1 = fn_002dbc64(), iVar1 != 0)) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + param_2;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 < 4) {
    uVar2 = 4U - iVar1 & 1;
  }
  else {
    uVar2 = 0;
  }
  iVar3 = uVar2 + iVar1;
  if (iVar1 < iVar3) {
    iVar4 = iVar1;
    do {
      if ((int)*(short *)(param_1 + iVar4 * 2 + 0x80) <= *(int *)(param_1 + 0x74)) {
        *(int *)(param_1 + 0x78) = iVar4 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (iVar3 < 4) {
    do {
      iVar4 = param_1 + iVar3 * 2;
      if ((int)*(short *)(iVar4 + 0x80) <= *(int *)(param_1 + 0x74)) {
        *(int *)(param_1 + 0x78) = iVar3 + 1;
      }
      if ((int)*(short *)(iVar4 + 0x82) <= *(int *)(param_1 + 0x74)) {
        *(int *)(param_1 + 0x78) = iVar3 + 2;
      }
      iVar3 = iVar3 + 2;
    } while (iVar3 < 4);
  }
  if (iVar1 < *(int *)(param_1 + 0x78)) {
    do {
      iVar3 = 0;
      do {
        iVar4 = fn_00154ac8(iVar3 + 0x2c6);
        if (iVar4 != 0) {
          iVar3 = fn_00163868(10);
          iVar4 = fn_00154ac8(iVar3 + 0x2c6);
          if (iVar4 != 0) {
            fn_00144834(iVar3 + 0x2c6,0);
          }
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 10);
      iVar1 = iVar1 + 1;
      *(undefined1 *)(param_1 + 0x73) = 1;
    } while (iVar1 < *(int *)(param_1 + 0x78));
  }
  return (int)*(char *)(param_1 + 0x73);
}



/* WARNING: Removing unreachable block (ram,0x002da978) */
/* WARNING: Removing unreachable block (ram,0x002da97c) */
/* WARNING: Removing unreachable block (ram,0x002da980) */
/* WARNING: Removing unreachable block (ram,0x002da984) */
/* WARNING: Removing unreachable block (ram,0x002da988) */
/* WARNING: Removing unreachable block (ram,0x002da7e4) */

undefined4 fn_002da774(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int *unaff_r9;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  
  puVar9 = (undefined2 *)0x0;
  puVar10 = (undefined2 *)0x0;
  puVar12 = (undefined2 *)0x0;
  uVar1 = fn_00118290();
  iVar2 = fn_0011c184(L"rom:/data/Parameter/CrackPlaceDarkLordTable.tp",uVar1,0x80,5);
  if ((iVar2 != 0) && (iVar3 = fn_00145ac0(), iVar3 != 0)) {
    uVar1 = fn_00145ac0(iVar2);
    iVar3 = fn_00147e6c(uVar1,DAT_00891204,4);
    if (iVar3 != 0) {
      fn_001008c4(0,0,0);
      return 0;
    }
    uVar15 = fn_0012a26c(iVar2);
    iVar3 = fn_0011c134((uint)uVar15 - 4,
                         (int)((ulonglong)uVar15 >> 0x20) - (uint)((uint)uVar15 < 4),8);
    iVar13 = 0;
    puVar5 = puVar9;
    puVar11 = puVar10;
    if (0 < iVar3) {
      do {
        iVar4 = fn_00145ac0(iVar2);
        unaff_r9 = (int *)(iVar4 + iVar13 * 8 + 4);
        puVar9 = puVar5;
        if (puVar11 == puVar12) {
          uVar8 = (int)puVar11 - (int)puVar5 >> 1;
          if (uVar8 < (uint)((int)puVar12 - (int)puVar5 >> 1)) {
            puVar5 = puVar11 + -1;
            if (puVar11 != (undefined2 *)0x0) {
              *puVar11 = puVar11[-1];
            }
            puVar10 = puVar11 + 1;
            puVar7 = puVar11;
            if (puVar11 < puVar5) {
              iVar4 = (int)puVar5 - (int)puVar11;
              if (0 < iVar4) {
                if (iVar4 * 0x40000000 < 0) {
                  puVar5 = puVar11 + -2;
                  puVar7 = puVar11 + -1;
                  *puVar7 = *puVar5;
                }
                for (iVar4 = iVar4 >> 2; iVar4 != 0; iVar4 = iVar4 + -1) {
                  puVar7[-1] = puVar5[-1];
                  puVar5 = puVar5 + -2;
                  puVar7 = puVar7 + -2;
                  *puVar7 = *puVar5;
                }
              }
            }
            else {
              while (puVar11 != puVar5) {
                puVar5 = puVar5 + -1;
                puVar7[-1] = *puVar5;
                puVar7 = puVar7 + -1;
              }
            }
            *puVar11 = *(undefined2 *)unaff_r9;
          }
          else {
            uVar6 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
            if (uVar6 < uVar8 + 0x20) {
              uVar6 = uVar8 + 0x20;
            }
            puVar9 = (undefined2 *)fn_00100fc6(uVar6 << 1,0);
            puVar7 = puVar9;
            for (puVar10 = puVar5; puVar10 != puVar11; puVar10 = puVar10 + 1) {
              if (puVar7 != (undefined2 *)0x0) {
                *puVar7 = *puVar10;
              }
              puVar7 = puVar7 + 1;
            }
            puVar10 = (undefined2 *)(((int)puVar11 - (int)puVar5 & 0xfffffffeU) + (int)puVar9);
            if (puVar10 != (undefined2 *)0x0) {
              *puVar10 = *(undefined2 *)unaff_r9;
            }
            puVar10 = puVar5;
            if (puVar11 < puVar5) {
              do {
                puVar10 = puVar10 + 1;
              } while (puVar10 != puVar11);
            }
            fn_001008c4(puVar5,(int)puVar12 - (int)puVar5 >> 1,0);
            puVar10 = puVar9 + ((int)puVar11 - (int)puVar5 >> 1) + 1;
            puVar12 = puVar9 + uVar6;
          }
        }
        else {
          if (puVar11 != (undefined2 *)0x0) {
            *puVar11 = *(undefined2 *)unaff_r9;
          }
          puVar10 = puVar11 + 1;
        }
        iVar13 = iVar13 + 1;
        puVar5 = puVar9;
        puVar11 = puVar10;
      } while (iVar13 < iVar3);
    }
  }
  fn_0012d73c(iVar2);
  uVar1 = 0;
  bVar14 = (int)puVar10 - (int)puVar9 >> 1 != 0;
  if (bVar14) {
    unaff_r9 = &DAT_00897804;
  }
  uVar8 = 0;
  if (bVar14) {
    do {
      iVar2 = fn_006b860c(*(undefined4 *)(*unaff_r9 + 0xc),(int)(short)puVar9[uVar8]);
      if (iVar2 == 0) {
        uVar1 = 1;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)((int)puVar10 - (int)puVar9 >> 1));
  }
  puVar5 = puVar9;
  if (puVar10 < puVar9) {
    do {
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar10);
  }
  fn_001008c4(puVar9,(int)puVar12 - (int)puVar9 >> 1,0);
  return uVar1;
}



void fn_002da130(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  iVar4 = (iVar4 >> 5) - (iVar4 >> 0x1f);
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1 + 4) + iVar6 * 0x38;
      if (((*(uint *)(iVar5 + 8) & 1) == 0 && (*(uint *)(iVar5 + 8) & 0x10) == 0) &&
         (*(int *)(iVar5 + 0x14) != -1)) {
        iVar1 = fn_006f7a70(DAT_008977e0);
        piVar2 = *(int **)(*(int *)(iVar1 + 0x30) + *(int *)(iVar5 + 0x14) * 4);
        *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 0x20;
        (**(code **)(*piVar2 + 0x124))();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return;
}



void fn_002d9f78(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x28);
  fn_006979b0(DAT_008977e0,*(undefined4 *)(param_1 + 0x24));
  return;
}



void fn_002d9cac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int extraout_r1;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_30 [8];
  int local_28;
  
  uVar1 = fn_00118290();
  local_28 = fn_0011c184(L"rom:/data/Parameter/CrackPlaceDarkLordTable.tp",uVar1,0x80,5);
  if ((local_28 != 0) && (iVar2 = fn_00145ac0(), iVar2 != 0)) {
    uVar1 = fn_00145ac0(local_28);
    iVar2 = fn_00147e6c(uVar1,DAT_00891208,4);
    if (iVar2 != 0) {
      return;
    }
    uVar10 = fn_0012a26c(local_28);
    uVar10 = fn_0011c134((uint)uVar10 - 4,
                          (int)((ulonglong)uVar10 >> 0x20) - (uint)((uint)uVar10 < 4),8,0);
    iVar2 = (int)((ulonglong)uVar10 >> 0x20);
    iVar9 = 0;
    if (0 < (int)uVar10) {
      do {
        iVar2 = fn_00145ac0(local_28,iVar2);
        fn_00166824(auStack_30,iVar2 + iVar9 * 8 + 4);
        puVar7 = (uint *)(param_1 + 100);
        uVar3 = *(uint *)(param_1 + 0x68);
        if (uVar3 == *(uint *)(param_1 + 0x6c)) {
          uVar4 = (int)(uVar3 - *puVar7) >> 3;
          if (uVar4 < (uint)((int)(*(uint *)(param_1 + 0x6c) - *puVar7) >> 3)) {
            *(uint *)(param_1 + 0x68) = uVar3 + 8;
            if (uVar3 != 0) {
              fn_00166824(uVar3,uVar3 - 8);
            }
            uVar8 = uVar3 - 8;
            uVar4 = uVar3;
            if (uVar3 < uVar8) {
              iVar2 = uVar8 - uVar3;
              if (0 < iVar2) {
                uVar6 = uVar8;
                if (iVar2 * 0x10000000 < 0) {
                  uVar6 = uVar3 - 0x10;
                  fn_00166824(uVar8,uVar6);
                  uVar4 = uVar8;
                }
                for (iVar2 = iVar2 >> 4; iVar2 != 0; iVar2 = iVar2 + -1) {
                  fn_00166824(uVar4 - 8,uVar6 - 8);
                  uVar4 = uVar4 - 0x10;
                  uVar6 = uVar6 - 0x10;
                  fn_00166824();
                }
              }
            }
            else {
              while (uVar3 != uVar8) {
                uVar8 = uVar8 - 8;
                fn_00166824(uVar4 - 8,uVar8);
                uVar4 = uVar4 - 8;
              }
            }
            goto LAB_002d9e44;
          }
          uVar8 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          if (uVar8 < uVar4 + 0x20) {
            uVar8 = uVar4 + 0x20;
          }
          uVar5 = fn_00100fc6(uVar8 << 3,0);
          uVar6 = uVar5;
          for (uVar4 = *puVar7; uVar4 != uVar3; uVar4 = uVar4 + 8) {
            if (uVar6 != 0) {
              fn_00166824(uVar6,uVar4);
            }
            uVar6 = uVar6 + 8;
          }
          iVar2 = (uVar3 - *puVar7 & 0xfffffff8) + uVar5;
          if (iVar2 != 0) {
            fn_00166824(iVar2,auStack_30);
          }
          uVar4 = *(uint *)(param_1 + 0x68);
          iVar2 = (uVar3 - *puVar7 & 0xfffffff8) + uVar5;
          for (; uVar3 != uVar4; uVar3 = uVar3 + 8) {
            iVar2 = iVar2 + 8;
            if (iVar2 != 0) {
              fn_00166824(iVar2,uVar3);
            }
          }
          uVar4 = *puVar7;
          uVar6 = *(uint *)(param_1 + 0x68);
          uVar3 = uVar4;
          if (uVar6 < uVar4) {
            do {
              uVar3 = uVar3 + 8;
            } while (uVar3 != uVar6);
          }
          fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x6c) - uVar4) >> 3,0);
          iVar2 = uVar5 + ((int)(uVar6 - uVar4) >> 3) * 8 + 8;
          *(uint *)(param_1 + 0x6c) = uVar5 + uVar8 * 8;
          *(int *)(param_1 + 0x68) = iVar2;
          *puVar7 = uVar5;
        }
        else {
          iVar2 = uVar3 + 8;
          *(int *)(param_1 + 0x68) = iVar2;
          if (uVar3 != 0) {
LAB_002d9e44:
            fn_00166824(uVar3,auStack_30);
            iVar2 = extraout_r1;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar10);
    }
  }
  fn_0012d73c(local_28);
  return;
}


