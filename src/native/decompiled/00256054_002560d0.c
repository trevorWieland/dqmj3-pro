#include "00256054_002560d0.h"



/* WARNING: Removing unreachable block (ram,0x00256408) */
/* WARNING: Removing unreachable block (ram,0x00256424) */
/* WARNING: Removing unreachable block (ram,0x002563d8) */
/* WARNING: Removing unreachable block (ram,0x002563e0) */
/* WARNING: Removing unreachable block (ram,0x002563ec) */
/* WARNING: Removing unreachable block (ram,0x00256458) */
/* WARNING: Removing unreachable block (ram,0x00256484) */
/* WARNING: Removing unreachable block (ram,0x0025642c) */
/* WARNING: Removing unreachable block (ram,0x00256434) */
/* WARNING: Removing unreachable block (ram,0x0025643c) */
/* WARNING: Removing unreachable block (ram,0x00256450) */

void fn_002560d0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_238 [260];
  undefined1 auStack_134 [260];
  uint local_30;
  uint local_2c [2];
  
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar4 != uVar3) {
    uVar1 = uVar4;
    if (uVar3 <= uVar4) {
      do {
        uVar1 = uVar1 + 0x104;
      } while (uVar1 != uVar3);
    }
    *(uint *)(param_1 + 0x14) = uVar3 + ((int)(uVar3 - uVar4) / 0x104) * -0x104;
  }
  fn_0078a708(param_1 + 0x10,5);
  if (**(int **)(param_1 + 4) != 0 && (*(int **)(param_1 + 4))[1] != 0) {
    if (*(char *)(param_1 + 0x1c) == '\0') {
      uVar3 = fn_00256cf4(param_1);
    }
    else {
      uVar3 = fn_00256698();
    }
    puVar5 = (uint *)(param_1 + 0x10);
    fn_00301f50(auStack_238,0x104);
    fn_0017821c(auStack_134,auStack_238,0x104);
    uVar1 = *puVar5;
    uVar4 = *(uint *)(param_1 + 0x14);
    local_30 = (int)(uVar4 - uVar1) / 0x104;
    if (local_30 < uVar3) {
      iVar8 = uVar3 - local_30;
      if (iVar8 != 0) {
        local_30 = local_30 + iVar8;
        if ((uint)((int)(*(int *)(param_1 + 0x18) - uVar1) / 0x104) < local_30) {
          uVar3 = (int)(*(int *)(param_1 + 0x14) - *puVar5) / 0x104;
          local_2c[0] = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          if (local_2c[0] < uVar3 + 0x20) {
            local_2c[0] = uVar3 + 0x20;
          }
          puVar2 = local_2c;
          if (local_2c[0] <= local_30) {
            puVar2 = &local_30;
          }
          uVar6 = *puVar2;
          uVar7 = fn_00100fc6(uVar6 * 0x104,0);
          uVar1 = uVar7;
          for (uVar3 = *puVar5; uVar3 != uVar4; uVar3 = uVar3 + 0x104) {
            if (uVar1 != 0) {
              fn_0017821c(uVar1,uVar3,0x104);
            }
            uVar1 = uVar1 + 0x104;
          }
          iVar10 = uVar7 + ((int)(uVar4 - *puVar5) / 0x104) * 0x104;
          for (iVar9 = iVar8; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (iVar10 != 0) {
              fn_0017821c(iVar10,auStack_134,0x104);
            }
            iVar10 = iVar10 + 0x104;
          }
          uVar3 = *(uint *)(param_1 + 0x14);
          iVar9 = uVar7 + ((int)(uVar4 - *puVar5) / 0x104 + iVar8) * 0x104;
          for (; uVar4 != uVar3; uVar4 = uVar4 + 0x104) {
            if (iVar9 != 0) {
              fn_0017821c(iVar9,uVar4,0x104);
            }
            iVar9 = iVar9 + 0x104;
          }
          uVar4 = *puVar5;
          uVar1 = *(uint *)(param_1 + 0x14);
          uVar3 = uVar4;
          if (uVar1 < uVar4) {
            do {
              uVar3 = uVar3 + 0x104;
            } while (uVar3 != uVar1);
          }
          fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x18) - uVar4) / 0x104,0);
          *puVar5 = uVar7;
          *(uint *)(param_1 + 0x14) = uVar7 + ((int)(uVar1 - uVar4) / 0x104) * 0x104 + iVar8 * 0x104
          ;
          *(uint *)(param_1 + 0x18) = uVar7 + uVar6 * 0x104;
          return;
        }
        uVar3 = uVar4 + iVar8 * 0x104;
        *(uint *)(param_1 + 0x14) = uVar4 + iVar8 * 0x104;
        if (uVar3 < uVar4) {
          uVar6 = uVar4 + iVar8 * -0x104;
          uVar1 = uVar4;
          for (uVar7 = uVar6; uVar7 != uVar4; uVar7 = uVar7 + 0x104) {
            if (uVar1 != 0) {
              fn_0017821c(uVar1,uVar7,0x104);
            }
            uVar1 = uVar1 + 0x104;
          }
          uVar1 = uVar4;
          if (uVar4 < uVar6) {
            if (0 < (int)(uVar6 - uVar4)) {
              uVar1 = (int)(uVar6 - uVar4) / 0x104;
              uVar7 = uVar4;
              if ((uVar1 & 1) != 0) {
                uVar6 = uVar6 - 0x104;
                uVar7 = uVar4 - 0x104;
                fn_0017821c(uVar7,uVar6,0x104);
              }
              for (iVar8 = (int)uVar1 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
                fn_0017821c(uVar7 - 0x104,uVar6 - 0x104,0x104);
                uVar6 = uVar6 - 0x208;
                uVar7 = uVar7 - 0x208;
                fn_0017821c(uVar7,uVar6,0x104);
              }
            }
          }
          else {
            while (uVar4 != uVar6) {
              uVar6 = uVar6 - 0x104;
              fn_0017821c(uVar1 - 0x104,uVar6,0x104);
              uVar1 = uVar1 - 0x104;
            }
          }
          if (uVar4 < uVar3) {
            if (0 < (int)(uVar3 - uVar4)) {
              uVar3 = (int)(uVar3 - uVar4) / 0x104;
              if ((uVar3 & 1) != 0) {
                fn_0017821c(uVar4,auStack_134,0x104);
                uVar4 = uVar4 + 0x104;
              }
              iVar8 = (int)uVar3 >> 1;
              if (iVar8 != 0) {
                do {
                  fn_0017821c(uVar4,auStack_134,0x104);
                  fn_0017821c(uVar4 + 0x104,auStack_134,0x104);
                  iVar8 = iVar8 + -1;
                  uVar4 = uVar4 + 0x208;
                } while (iVar8 != 0);
                return;
              }
            }
          }
          else {
            for (; uVar4 != uVar3; uVar4 = uVar4 + 0x104) {
              fn_0017821c(uVar4,auStack_134,0x104);
            }
          }
        }
        else {
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            if (uVar4 != 0) {
              fn_0017821c(uVar4,auStack_134,0x104);
            }
            uVar4 = uVar4 + 0x104;
          }
        }
      }
    }
    else if ((local_30 != uVar3) && (uVar3 = uVar1 + uVar3 * 0x104, uVar1 != uVar4)) {
      uVar1 = uVar3;
      if (uVar4 < uVar3) {
        do {
          uVar1 = uVar1 + 0x104;
        } while (uVar1 != uVar4);
      }
      *(uint *)(param_1 + 0x14) = uVar4 + ((int)(uVar4 - uVar3) / 0x104) * -0x104;
      return;
    }
  }
  return;
}



int fn_00256054(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0081d7a0;
  iVar1 = fn_00101a1c(param_1 + 1,&LAB_001ad898,0xc,4);
  iVar1 = fn_00101a1c(iVar1 + 0x30,fn_00255cd0,0x1c,4);
  return iVar1 + -0x34;
}


