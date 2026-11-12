#include "0079cfec_0079d618.h"



uint * fn_0079d618(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
  return param_1;
}



void fn_0079d450(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar8 + 1);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *param_2;
    }
    return;
  }
  uVar3 = (int)((int)puVar8 - *param_1) >> 2;
  if (uVar3 < (uint)((int)((int)param_1[2] - *param_1) >> 2)) {
    param_1[1] = (uint)(puVar8 + 1);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = puVar8[-1];
    }
    puVar5 = puVar8 + -1;
    puVar6 = puVar8;
    if (puVar8 < puVar5) {
      iVar4 = (int)puVar5 - (int)puVar8;
      if (0 < iVar4) {
        if (iVar4 * 0x20000000 < 0) {
          puVar5 = puVar8 + -2;
          puVar6 = puVar8 + -1;
          *puVar6 = *puVar5;
        }
        for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar6[-1] = puVar5[-1];
          puVar5 = puVar5 + -2;
          puVar6 = puVar6 + -2;
          *puVar6 = *puVar5;
        }
      }
    }
    else {
      while (puVar8 != puVar5) {
        puVar5 = puVar5 + -1;
        puVar6[-1] = *puVar5;
        puVar6 = puVar6 + -1;
      }
    }
    *puVar8 = *param_2;
    return;
  }
  uVar9 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
  if (uVar9 < uVar3 + 0x20) {
    uVar9 = uVar3 + 0x20;
  }
  puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
  puVar6 = puVar1;
  for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar8; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = *param_2;
  }
  puVar6 = (undefined4 *)param_1[1];
  puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
  for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
    puVar5 = puVar5 + 1;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar8;
    }
  }
  uVar2 = *param_1;
  uVar7 = param_1[1];
  uVar3 = uVar2;
  if (uVar7 < uVar2) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != uVar7);
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
  param_1[2] = (uint)(puVar1 + uVar9);
  param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1);
  *param_1 = (uint)puVar1;
  return;
}



void fn_0079d338(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_20 [2];
  uint *puStack_18;
  uint local_14;
  
  local_14 = param_2;
  puStack_18 = param_1;
  puVar5 = local_20;
  if (0x3fffffff < param_2) {
    local_20[0] = 0x3fffffff;
    fn_002ff628(8,&DAT_008c7671);
  }
  if ((uint)((int)(param_1[2] - *param_1) >> 2) < local_14) {
    uVar8 = (int)(param_1[1] - *param_1) >> 2;
    local_20[0] = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_20[0] < uVar8 + 0x20) {
      local_20[0] = uVar8 + 0x20;
    }
    if (local_20[0] <= local_14) {
      puVar5 = &local_14;
    }
    uVar8 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar8 << 2,0);
    puVar7 = (undefined4 *)param_1[1];
    puVar2 = puVar1;
    for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar6;
      }
      puVar2 = puVar2 + 1;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != param_1[1]);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
    uVar4 = *param_1;
    *param_1 = (uint)puVar1;
    param_1[1] = (param_1[1] - uVar4 & 0xfffffffc) + (int)puVar1;
    param_1[2] = (uint)(puVar1 + uVar8);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0079d17c) */
/* WARNING: Removing unreachable block (ram,0x0079d188) */
/* WARNING: Removing unreachable block (ram,0x0079d154) */
/* WARNING: Removing unreachable block (ram,0x0079d158) */
/* WARNING: Removing unreachable block (ram,0x0079d15c) */
/* WARNING: Removing unreachable block (ram,0x0079d160) */
/* WARNING: Removing unreachable block (ram,0x0079d164) */
/* WARNING: Removing unreachable block (ram,0x0079d1a8) */
/* WARNING: Removing unreachable block (ram,0x0079d1b8) */
/* WARNING: Removing unreachable block (ram,0x0079d190) */
/* WARNING: Removing unreachable block (ram,0x0079d198) */
/* WARNING: Removing unreachable block (ram,0x0079d19c) */
/* WARNING: Removing unreachable block (ram,0x0079d1a0) */

void fn_0079cfec(uint *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint local_28;
  uint local_24 [2];
  
  puVar9 = (undefined4 *)param_1[1];
  puVar12 = (undefined4 *)*param_1;
  puVar8 = (undefined4 *)((int)puVar9 - (int)puVar12);
  local_28 = (int)puVar8 >> 2;
  if (local_28 < param_2) {
    iVar10 = param_2 - local_28;
    if (iVar10 != 0) {
      local_28 = iVar10 + local_28;
      if ((uint)((int)(param_1[2] - (int)puVar12) >> 2) < local_28) {
        uVar11 = (int)(param_1[1] - *param_1) >> 2;
        local_24[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
        if (local_24[0] < uVar11 + 0x20) {
          local_24[0] = uVar11 + 0x20;
        }
        puVar2 = local_24;
        if (local_24[0] <= local_28) {
          puVar2 = &local_28;
        }
        uVar11 = *puVar2;
        puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
        puVar12 = puVar3;
        for (puVar8 = (undefined4 *)*param_1; puVar8 != puVar9; puVar8 = puVar8 + 1) {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = *puVar8;
          }
          puVar12 = puVar12 + 1;
        }
        puVar8 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffffc) + (int)puVar3);
        for (iVar6 = iVar10; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = param_3;
          }
          puVar8 = puVar8 + 1;
        }
        puVar12 = (undefined4 *)param_1[1];
        puVar8 = puVar3 + iVar10 + ((int)((int)puVar9 - *param_1) >> 2);
        for (; puVar9 != puVar12; puVar9 = puVar9 + 1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = *puVar9;
          }
          puVar8 = puVar8 + 1;
        }
        uVar4 = *param_1;
        uVar7 = param_1[1];
        uVar5 = uVar4;
        if (uVar7 < uVar4) {
          do {
            uVar5 = uVar5 + 4;
          } while (uVar5 != uVar7);
        }
        fn_001008c4(uVar4,(int)(param_1[2] - uVar4) >> 2,0);
        param_1[2] = (uint)(puVar3 + uVar11);
        param_1[1] = (uint)(puVar3 + ((int)(uVar7 - uVar4) >> 2) + iVar10);
        *param_1 = (uint)puVar3;
        return;
      }
      puVar8 = puVar9 + iVar10;
      param_1[1] = (uint)(puVar9 + iVar10);
      if (puVar8 < puVar9) {
        puVar1 = puVar9 + -iVar10;
        puVar3 = puVar9;
        for (puVar12 = puVar1; puVar12 != puVar9; puVar12 = puVar12 + 1) {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *puVar12;
          }
          puVar3 = puVar3 + 1;
        }
        puVar12 = puVar9;
        if (puVar9 < puVar1) {
          iVar10 = (int)puVar1 - (int)puVar9;
          if (0 < iVar10) {
            if (iVar10 * 0x20000000 < 0) {
              puVar1 = puVar1 + -1;
              puVar12 = puVar9 + -1;
              *puVar12 = *puVar1;
            }
            for (iVar10 = iVar10 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar12[-1] = puVar1[-1];
              puVar1 = puVar1 + -2;
              puVar12 = puVar12 + -2;
              *puVar12 = *puVar1;
            }
          }
        }
        else {
          while (puVar9 != puVar1) {
            puVar1 = puVar1 + -1;
            puVar12[-1] = *puVar1;
            puVar12 = puVar12 + -1;
          }
        }
        if (puVar9 < puVar8) {
          iVar10 = (int)puVar8 - (int)puVar9;
          if (0 < iVar10) {
            puVar8 = puVar9;
            if (iVar10 * 0x20000000 < 0) {
              puVar8 = puVar9 + 1;
              *puVar9 = param_3;
            }
            iVar10 = iVar10 >> 3;
            if (iVar10 != 0) {
              do {
                puVar9 = puVar8 + 1;
                *puVar8 = param_3;
                iVar10 = iVar10 + -1;
                puVar8 = puVar8 + 2;
                *puVar9 = param_3;
              } while (iVar10 != 0);
              return;
            }
          }
        }
        else {
          for (; puVar9 != puVar8; puVar9 = puVar9 + 1) {
            *puVar9 = param_3;
          }
        }
      }
      else {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = param_3;
          }
          puVar9 = puVar9 + 1;
        }
      }
    }
  }
  else {
    if (param_2 != local_28) {
      puVar8 = puVar12 + param_2;
    }
    if (param_2 != local_28 && puVar12 != puVar9) {
      puVar12 = puVar8;
      if (puVar9 < puVar8) {
        do {
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar9);
      }
      param_1[1] = (int)puVar9 - ((int)puVar9 - (int)puVar8 & 0xfffffffcU);
      return;
    }
  }
  return;
}


