#include "00300420_00300950ab.h"



undefined4 fn_003007a0(undefined4 param_1)

{
  fn_00301a9c();
  return param_1;
}



void fn_00300620(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  iVar9 = 0;
  iVar1 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
  if (0 < iVar1) {
    do {
      uVar2 = *(uint *)(*(int *)(param_1 + 0x4c) + iVar9 * 4);
      if (uVar2 >> 0x18 == 2) {
        uVar7 = 0;
        iVar4 = *(int *)(param_1 + 0x18);
        uVar6 = *(int *)(param_1 + 0x1c) - iVar4 >> 2;
        if (uVar6 != 0) {
          do {
            iVar5 = *(int *)(iVar4 + uVar7 * 4);
            if ((iVar5 != 0) && (*(uint *)(iVar5 + 0x13c) == uVar2)) {
              if (uVar7 != 0xffffffff) {
                (**(code **)(**(int **)(iVar4 + uVar7 * 4) + 0xa4))();
                piVar8 = (int *)(*(int *)(param_1 + 0x18) + uVar7 * 4);
                piVar3 = (int *)*piVar8;
                goto joined_r0x00300738;
              }
              break;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar6);
        }
      }
      else if (uVar2 >> 0x18 == 4) {
        uVar7 = 0;
        iVar4 = *(int *)(param_1 + 0xc);
        uVar6 = *(int *)(param_1 + 0x10) - iVar4 >> 2;
        if (uVar6 != 0) {
          do {
            iVar5 = *(int *)(iVar4 + uVar7 * 4);
            if ((iVar5 != 0) && (*(uint *)(iVar5 + 0x13c) == uVar2)) {
              if (uVar7 != 0xffffffff) {
                (**(code **)(**(int **)(iVar4 + uVar7 * 4) + 0xa4))();
                piVar8 = (int *)(*(int *)(param_1 + 0xc) + uVar7 * 4);
                piVar3 = (int *)*piVar8;
joined_r0x00300738:
                if (piVar3 != (int *)0x0) {
                  (**(code **)(*piVar3 + 4))();
                }
                *piVar8 = 0;
              }
              break;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar6);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  uVar2 = *(uint *)(param_1 + 0x4c);
  uVar6 = *(uint *)(param_1 + 0x50);
  if (uVar2 != uVar6) {
    uVar7 = uVar2;
    if (uVar6 <= uVar2) {
      do {
        uVar7 = uVar7 + 4;
      } while (uVar7 != uVar6);
    }
    *(uint *)(param_1 + 0x50) = uVar6 - (uVar6 - uVar2 & 0xfffffffc);
  }
  return;
}


