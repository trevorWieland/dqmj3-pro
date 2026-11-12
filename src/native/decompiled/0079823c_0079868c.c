#include "0079823c_0079868c.h"



/* WARNING: Removing unreachable block (ram,0x0079880c) */
/* WARNING: Removing unreachable block (ram,0x00798818) */
/* WARNING: Removing unreachable block (ram,0x007987e4) */
/* WARNING: Removing unreachable block (ram,0x007987e8) */
/* WARNING: Removing unreachable block (ram,0x007987ec) */
/* WARNING: Removing unreachable block (ram,0x007987f0) */
/* WARNING: Removing unreachable block (ram,0x007987f4) */
/* WARNING: Removing unreachable block (ram,0x00798838) */
/* WARNING: Removing unreachable block (ram,0x00798848) */
/* WARNING: Removing unreachable block (ram,0x00798820) */
/* WARNING: Removing unreachable block (ram,0x00798828) */
/* WARNING: Removing unreachable block (ram,0x0079882c) */
/* WARNING: Removing unreachable block (ram,0x00798830) */

void fn_0079868c(uint *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint local_28;
  uint local_24 [2];
  
  puVar9 = (undefined4 *)*param_1;
  puVar10 = (undefined4 *)param_1[1];
  local_28 = (int)puVar10 - (int)puVar9 >> 2;
  if (local_28 < param_2) {
    iVar11 = param_2 - local_28;
    if (iVar11 != 0) {
      local_28 = iVar11 + local_28;
      if ((uint)((int)(param_1[2] - (int)puVar9) >> 2) < local_28) {
        uVar12 = (int)(param_1[1] - *param_1) >> 2;
        local_24[0] = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
        if (local_24[0] < uVar12 + 0x20) {
          local_24[0] = uVar12 + 0x20;
        }
        puVar5 = local_24;
        if (local_24[0] <= local_28) {
          puVar5 = &local_28;
        }
        uVar12 = *puVar5;
        puVar2 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
        puVar7 = puVar2;
        for (puVar9 = (undefined4 *)*param_1; puVar9 != puVar10; puVar9 = puVar9 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar9;
          }
          puVar7 = puVar7 + 1;
        }
        puVar9 = (undefined4 *)(((int)puVar10 - *param_1 & 0xfffffffc) + (int)puVar2);
        for (iVar6 = iVar11; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = param_3;
          }
          puVar9 = puVar9 + 1;
        }
        puVar7 = (undefined4 *)param_1[1];
        puVar9 = puVar2 + iVar11 + ((int)((int)puVar10 - *param_1) >> 2);
        for (; puVar10 != puVar7; puVar10 = puVar10 + 1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = *puVar10;
          }
          puVar9 = puVar9 + 1;
        }
        uVar3 = *param_1;
        uVar8 = param_1[1];
        uVar4 = uVar3;
        if (uVar8 < uVar3) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar4 != uVar8);
        }
        fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
        param_1[2] = (uint)(puVar2 + uVar12);
        param_1[1] = (uint)(puVar2 + ((int)(uVar8 - uVar3) >> 2) + iVar11);
        *param_1 = (uint)puVar2;
        return;
      }
      puVar9 = puVar10 + iVar11;
      param_1[1] = (uint)(puVar10 + iVar11);
      if (puVar9 < puVar10) {
        puVar1 = puVar10 + -iVar11;
        puVar2 = puVar10;
        for (puVar7 = puVar1; puVar7 != puVar10; puVar7 = puVar7 + 1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *puVar7;
          }
          puVar2 = puVar2 + 1;
        }
        puVar7 = puVar10;
        if (puVar10 < puVar1) {
          if (0 < (int)puVar1 - (int)puVar10) {
            iVar11 = (int)puVar1 - (int)puVar10 >> 2;
            iVar6 = 0;
            do {
              iVar11 = iVar11 + -1;
              puVar10[iVar6 + -1] = puVar1[iVar6 + -1];
              iVar6 = iVar6 + -1;
            } while (iVar11 != 0);
          }
        }
        else {
          while (puVar10 != puVar1) {
            puVar1 = puVar1 + -1;
            puVar7[-1] = *puVar1;
            puVar7 = puVar7 + -1;
          }
        }
        if (puVar10 < puVar9) {
          iVar11 = (int)puVar9 - (int)puVar10;
          if (0 < iVar11) {
            puVar9 = puVar10;
            if (iVar11 * 0x20000000 < 0) {
              puVar9 = puVar10 + 1;
              *puVar10 = param_3;
            }
            iVar11 = iVar11 >> 3;
            if (iVar11 != 0) {
              do {
                puVar10 = puVar9 + 1;
                *puVar9 = param_3;
                iVar11 = iVar11 + -1;
                puVar9 = puVar9 + 2;
                *puVar10 = param_3;
              } while (iVar11 != 0);
              return;
            }
          }
        }
        else {
          for (; puVar10 != puVar9; puVar10 = puVar10 + 1) {
            *puVar10 = param_3;
          }
        }
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = param_3;
          }
          puVar10 = puVar10 + 1;
        }
      }
    }
  }
  else if ((param_2 < local_28) && (puVar7 = puVar9 + param_2, puVar9 != puVar10)) {
    puVar9 = puVar7;
    if (puVar10 < puVar7) {
      do {
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar10);
    }
    param_1[1] = (int)puVar10 - ((int)puVar10 - (int)puVar7 & 0xfffffffcU);
    return;
  }
  return;
}



void fn_007984ec(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar9 = param_1 + 1;
  puVar1 = (undefined4 *)*puVar9;
  uVar4 = (int)((int)puVar1 - *param_1) >> 2;
  if ((uint)((int)(param_1[2] - *param_1) >> 2) <= uVar4) {
    uVar10 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar10 < uVar4 + 0x20) {
      uVar10 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar6 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar1;
      }
      puVar6 = puVar6 + 1;
    }
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar6 = (undefined4 *)*puVar9;
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    for (; param_2 != puVar6; param_2 = param_2 + 1) {
      puVar1 = puVar1 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_2;
      }
    }
    uVar3 = *param_1;
    uVar7 = *puVar9;
    uVar4 = uVar3;
    if (uVar7 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar7);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
    param_1[2] = (uint)(puVar2 + uVar10);
    *puVar9 = (uint)(puVar2 + ((int)(uVar7 - uVar3) >> 2) + 1);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar9 = (uint)(puVar1 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-1];
  }
  puVar6 = puVar1 + -1;
  if (param_2 < puVar6) {
    if (0 < (int)puVar6 - (int)param_2) {
      iVar8 = (int)puVar6 - (int)param_2 >> 2;
      iVar5 = 0;
      do {
        iVar8 = iVar8 + -1;
        puVar1[iVar5 + -1] = puVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    while (param_2 != puVar6) {
      puVar6 = puVar6 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar6;
    }
  }
  *param_2 = *param_3;
  return;
}



uint * fn_0079823c(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint local_20;
  uint local_1c [2];
  
  if (param_2 == param_1) {
    return param_1;
  }
  puVar1 = (undefined4 *)param_2[1];
  puVar8 = (undefined4 *)*param_2;
  puVar6 = (undefined4 *)*param_1;
  uVar4 = (int)puVar1 - (int)puVar8;
  local_20 = (int)uVar4 >> 2;
  if ((uint)((int)(param_1[2] - (int)puVar6) >> 2) < local_20) {
    uVar4 = (int)(param_1[1] - (int)puVar6) >> 2;
    local_1c[0] = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (local_1c[0] < uVar4 + 0x20) {
      local_1c[0] = uVar4 + 0x20;
    }
    puVar2 = local_1c;
    if (local_1c[0] <= local_20) {
      puVar2 = &local_20;
    }
    uVar4 = *puVar2;
    puVar1 = (undefined4 *)fn_00100fc6(uVar4 << 2,0);
    puVar7 = (undefined4 *)param_2[1];
    puVar6 = puVar1;
    for (puVar8 = (undefined4 *)*param_2; puVar8 != puVar7; puVar8 = puVar8 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar8;
      }
      puVar6 = puVar6 + 1;
    }
    uVar9 = *param_1;
    uVar3 = uVar9;
    if (param_1[1] < uVar9) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != param_1[1]);
    }
    fn_001008c4(uVar9,(int)(param_1[2] - uVar9) >> 2,0);
    *param_1 = (uint)puVar1;
    param_1[1] = (param_2[1] - *param_2 & 0xfffffffc) + (int)puVar1;
    param_1[2] = (uint)(puVar1 + uVar4);
  }
  else {
    uVar3 = (int)(param_1[1] - (int)puVar6) >> 2;
    if (uVar3 < local_20) {
      puVar1 = puVar8 + uVar3;
      if (puVar8 < puVar1) {
        uVar4 = (int)puVar1 - (int)puVar8;
        if (0 < (int)uVar4) {
          uVar9 = (uVar4 & 7) >> 2;
          if (uVar9 != 0) {
            *puVar6 = *puVar8;
          }
          uVar5 = (uint)(uVar9 != 0);
          for (; (int)uVar9 < (int)uVar4 >> 2; uVar9 = uVar9 + 2) {
            puVar6[uVar5] = puVar8[uVar5];
            puVar6[uVar5 + 1] = puVar8[uVar5 + 1];
            uVar5 = uVar5 + 2;
          }
        }
      }
      else {
        for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
          *puVar6 = *puVar8;
          puVar6 = puVar6 + 1;
        }
      }
      param_1[1] = (param_2[1] - *param_2 & 0xfffffffc) + *param_1;
      puVar1 = (undefined4 *)param_2[1];
      puVar6 = (undefined4 *)(*param_1 + uVar3 * 4);
      for (puVar8 = (undefined4 *)(*param_2 + uVar3 * 4); puVar8 != puVar1; puVar8 = puVar8 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar8;
        }
        puVar6 = puVar6 + 1;
      }
    }
    else {
      if (puVar8 < puVar1) {
        if (0 < (int)uVar4) {
          uVar3 = (uVar4 & 7) >> 2;
          if (uVar3 != 0) {
            *puVar6 = *puVar8;
          }
          uVar9 = (uint)(uVar3 != 0);
          for (; (int)uVar3 < (int)local_20; uVar3 = uVar3 + 2) {
            puVar6[uVar9] = puVar8[uVar9];
            puVar6[uVar9 + 1] = puVar8[uVar9 + 1];
            uVar9 = uVar9 + 2;
          }
          puVar6 = (undefined4 *)((int)puVar6 + (uVar4 & 0xfffffffc));
        }
      }
      else {
        for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
          *puVar6 = *puVar8;
          puVar6 = puVar6 + 1;
        }
      }
      if ((undefined4 *)param_1[1] < puVar6) {
        do {
          puVar6 = puVar6 + 1;
        } while (puVar6 != (undefined4 *)param_1[1]);
      }
      uVar4 = (param_2[1] - *param_2 & 0xfffffffc) + *param_1;
      param_1[1] = uVar4;
      param_1[2] = uVar4;
    }
  }
  return param_1;
}


