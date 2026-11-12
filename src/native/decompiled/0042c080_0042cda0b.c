#include "0042c080_0042cda0b.h"



void fn_0042cda0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  undefined4 uVar7;
  undefined4 *local_28;
  
  uVar4 = 0;
  uVar5 = 0;
  uVar7 = *(undefined4 *)(DAT_00897804 + 0x14);
  local_28 = param_4;
  if (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2 != 0) {
    do {
      psVar6 = (short *)(*(int *)(param_1 + 0x84) + uVar5 * 4);
      fn_0023097c(&local_28,(int)*psVar6,0);
      fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x74) + uVar4 * 0x10),local_28);
      fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0x74) + uVar4 * 0x10 + 4),(int)psVar6[1],0);
      uVar1 = fn_006b2aa0(uVar7,(int)*psVar6);
      fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0x74) + uVar4 * 0x10 + 0xc),uVar1,0);
      uVar4 = uVar4 + 1;
      if (local_28 != &DAT_008f9cf4) {
        piVar2 = local_28 + -3;
        iVar3 = *piVar2;
        if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
          fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2));
  }
  if (uVar4 < (uint)(*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 4)) {
    do {
      iVar3 = uVar4 * 0x10;
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x74) + iVar3 + 8);
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 4));
  }
  return;
}



void fn_0042ccc0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 100) + 8);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      fn_006899f4(param_1,0x85,0);
      goto LAB_0042ccfc;
    }
    if (cVar1 == '\x02') {
      fn_006899f4(param_1,0x84,0);
      goto LAB_0042ccfc;
    }
  }
  fn_006899f4(param_1,0x82,0);
LAB_0042ccfc:
  fn_004450b8(*(undefined4 *)(param_1 + 100));
  fn_0068ab44(param_1,0x100094c);
  *(undefined1 *)(param_1 + 0xa8) = 2;
  return;
}



void fn_0042c610(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa4) + 4))();
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x98) + iVar1 * 4) + 0x18))();
    piVar3 = (int *)(*(int *)(param_1 + 0x98) + iVar1 * 4);
    piVar2 = (int *)*piVar3;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *piVar3 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 4))();
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x90) + 0x14))();
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x90) + 4))();
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
}



void fn_0042c3c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  
  iVar8 = 0;
  iVar2 = *(int *)(param_1 + 100);
  if (*(byte *)(iVar2 + 8) < 2) {
    iVar8 = (int)*(short *)(iVar2 + 0x10);
  }
  else if (*(byte *)(iVar2 + 8) == 2) {
    iVar8 = (int)*(short *)(iVar2 + 0x1c);
  }
  iVar2 = fn_00203e2c(iVar8);
  iVar14 = 0;
  if (0 < iVar2) {
    do {
      psVar3 = (short *)fn_00203e08(iVar8,iVar14);
      iVar4 = fn_00163940((int)*psVar3);
      if (iVar4 != 0) {
        uVar1 = *(undefined4 *)psVar3;
        puVar12 = *(undefined4 **)(param_1 + 0x88);
        puVar13 = (uint *)(param_1 + 0x84);
        if (puVar12 == *(undefined4 **)(param_1 + 0x8c)) {
          uVar7 = (int)((int)puVar12 - *puVar13) >> 2;
          if (uVar7 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x8c) - *puVar13) >> 2)) {
            *(undefined4 **)(param_1 + 0x88) = puVar12 + 1;
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = puVar12[-1];
            }
            puVar9 = puVar12 + -1;
            puVar10 = puVar12;
            if (puVar12 < puVar9) {
              iVar4 = (int)puVar9 - (int)puVar12;
              if (0 < iVar4) {
                if (iVar4 * 0x20000000 < 0) {
                  puVar9 = puVar12 + -2;
                  puVar10 = puVar12 + -1;
                  *puVar10 = *puVar9;
                }
                for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
                  puVar10[-1] = puVar9[-1];
                  puVar9 = puVar9 + -2;
                  puVar10 = puVar10 + -2;
                  *puVar10 = *puVar9;
                }
              }
            }
            else {
              while (puVar12 != puVar9) {
                puVar9 = puVar9 + -1;
                puVar10[-1] = *puVar9;
                puVar10 = puVar10 + -1;
              }
            }
            *puVar12 = uVar1;
          }
          else {
            uVar15 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
            if (uVar15 < uVar7 + 0x20) {
              uVar15 = uVar7 + 0x20;
            }
            puVar5 = (undefined4 *)fn_00100fc6(uVar15 << 2,0);
            puVar10 = puVar5;
            for (puVar9 = (undefined4 *)*puVar13; puVar9 != puVar12; puVar9 = puVar9 + 1) {
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = *puVar9;
              }
              puVar10 = puVar10 + 1;
            }
            puVar9 = (undefined4 *)(((int)puVar12 - *puVar13 & 0xfffffffc) + (int)puVar5);
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = uVar1;
            }
            puVar10 = *(undefined4 **)(param_1 + 0x88);
            puVar9 = (undefined4 *)(((int)puVar12 - *puVar13 & 0xfffffffc) + (int)puVar5);
            for (; puVar12 != puVar10; puVar12 = puVar12 + 1) {
              puVar9 = puVar9 + 1;
              if (puVar9 != (undefined4 *)0x0) {
                *puVar9 = *puVar12;
              }
            }
            uVar6 = *puVar13;
            uVar11 = *(uint *)(param_1 + 0x88);
            uVar7 = uVar6;
            if (uVar11 < uVar6) {
              do {
                uVar7 = uVar7 + 4;
              } while (uVar7 != uVar11);
            }
            fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0x8c) - uVar6) >> 2,0);
            *(undefined4 **)(param_1 + 0x8c) = puVar5 + uVar15;
            *(undefined4 **)(param_1 + 0x88) = puVar5 + ((int)(uVar11 - uVar6) >> 2) + 1;
            *puVar13 = (uint)puVar5;
          }
        }
        else {
          *(undefined4 **)(param_1 + 0x88) = puVar12 + 1;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = uVar1;
          }
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar2);
  }
  return;
}


