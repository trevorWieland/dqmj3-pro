#include "00799050_00799478.h"



/* WARNING: Removing unreachable block (ram,0x007995f8) */
/* WARNING: Removing unreachable block (ram,0x00799604) */
/* WARNING: Removing unreachable block (ram,0x007995d0) */
/* WARNING: Removing unreachable block (ram,0x007995d4) */
/* WARNING: Removing unreachable block (ram,0x007995d8) */
/* WARNING: Removing unreachable block (ram,0x007995dc) */
/* WARNING: Removing unreachable block (ram,0x007995e0) */
/* WARNING: Removing unreachable block (ram,0x00799624) */
/* WARNING: Removing unreachable block (ram,0x00799634) */
/* WARNING: Removing unreachable block (ram,0x0079960c) */
/* WARNING: Removing unreachable block (ram,0x00799614) */
/* WARNING: Removing unreachable block (ram,0x00799618) */
/* WARNING: Removing unreachable block (ram,0x0079961c) */

void fn_00799478(uint *param_1,uint param_2,undefined4 param_3)

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



uint * fn_0079942c(uint *param_1)

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



int * fn_00799398(int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint local_18 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = local_18 + 1;
  if (0x1f < param_2) {
    puVar3 = local_18;
  }
  local_18[0] = param_2;
  local_18[1] = 0x20;
  uVar4 = *puVar3;
  puVar1 = (undefined4 *)fn_00100fc6(uVar4 << 2,0);
  *param_1 = (int)puVar1;
  for (uVar2 = local_18[0]; uVar2 != 0; uVar2 = uVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  param_1[1] = *param_1 + local_18[0] * 4;
  param_1[2] = *param_1 + uVar4 * 4;
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x007991d0) */
/* WARNING: Removing unreachable block (ram,0x007991dc) */
/* WARNING: Removing unreachable block (ram,0x007991a8) */
/* WARNING: Removing unreachable block (ram,0x007991ac) */
/* WARNING: Removing unreachable block (ram,0x007991b0) */
/* WARNING: Removing unreachable block (ram,0x007991b4) */
/* WARNING: Removing unreachable block (ram,0x007991b8) */
/* WARNING: Removing unreachable block (ram,0x007991fc) */
/* WARNING: Removing unreachable block (ram,0x0079920c) */
/* WARNING: Removing unreachable block (ram,0x007991e4) */
/* WARNING: Removing unreachable block (ram,0x007991ec) */
/* WARNING: Removing unreachable block (ram,0x007991f0) */
/* WARNING: Removing unreachable block (ram,0x007991f4) */

void fn_00799050(uint *param_1,uint param_2,undefined4 param_3)

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


