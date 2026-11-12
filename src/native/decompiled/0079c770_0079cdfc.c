#include "0079c770_0079cdfc.h"



uint * fn_0079cdfc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 1) {
    }
  }
  fn_001008c4(uVar2,param_1[2] - uVar2,0);
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0079cc58) */
/* WARNING: Removing unreachable block (ram,0x0079cc64) */
/* WARNING: Removing unreachable block (ram,0x0079cc30) */
/* WARNING: Removing unreachable block (ram,0x0079cc34) */
/* WARNING: Removing unreachable block (ram,0x0079cc38) */
/* WARNING: Removing unreachable block (ram,0x0079cc3c) */
/* WARNING: Removing unreachable block (ram,0x0079cc40) */
/* WARNING: Removing unreachable block (ram,0x0079cc84) */
/* WARNING: Removing unreachable block (ram,0x0079cc94) */
/* WARNING: Removing unreachable block (ram,0x0079cc6c) */
/* WARNING: Removing unreachable block (ram,0x0079cc74) */
/* WARNING: Removing unreachable block (ram,0x0079cc78) */
/* WARNING: Removing unreachable block (ram,0x0079cc7c) */

void fn_0079cac8(uint *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint local_28;
  uint local_24 [2];
  
  puVar10 = (undefined1 *)param_1[1];
  puVar12 = (undefined1 *)*param_1;
  local_28 = (int)puVar10 - (int)puVar12;
  if (local_28 < param_2) {
    iVar11 = param_2 - local_28;
    if (iVar11 != 0) {
      local_28 = local_28 + iVar11;
      uVar1 = SUB41(param_3,0);
      if (param_1[2] - (int)puVar12 < local_28) {
        uVar3 = param_1[1] - *param_1;
        local_24[0] = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
        if (local_24[0] < uVar3 + 0x20) {
          local_24[0] = uVar3 + 0x20;
        }
        puVar6 = local_24;
        if (local_24[0] <= local_28) {
          puVar6 = &local_28;
        }
        uVar3 = *puVar6;
        puVar13 = (undefined1 *)fn_00100fc6(uVar3,0);
        puVar9 = puVar13;
        for (puVar12 = (undefined1 *)*param_1; puVar12 != puVar10; puVar12 = puVar12 + 1) {
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = *puVar12;
          }
          puVar9 = puVar9 + 1;
        }
        puVar12 = puVar13 + ((int)puVar10 - *param_1);
        for (iVar7 = iVar11; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (puVar12 != (undefined1 *)0x0) {
            *puVar12 = uVar1;
          }
          puVar12 = puVar12 + 1;
        }
        puVar9 = (undefined1 *)param_1[1];
        puVar12 = puVar13 + (int)(puVar10 + (iVar11 - *param_1));
        for (; puVar10 != puVar9; puVar10 = puVar10 + 1) {
          if (puVar12 != (undefined1 *)0x0) {
            *puVar12 = *puVar10;
          }
          puVar12 = puVar12 + 1;
        }
        uVar4 = *param_1;
        uVar8 = param_1[1];
        uVar5 = uVar4;
        if (uVar8 < uVar4) {
          do {
            uVar5 = uVar5 + 1;
          } while (uVar5 != uVar8);
        }
        fn_001008c4(uVar4,param_1[2] - uVar4,0);
        *param_1 = (uint)puVar13;
        param_1[1] = (uint)(puVar13 + iVar11 + (uVar8 - uVar4));
        param_1[2] = (uint)(puVar13 + uVar3);
        return;
      }
      puVar12 = puVar10 + iVar11;
      param_1[1] = (uint)(puVar10 + iVar11);
      if (puVar12 < puVar10) {
        puVar2 = puVar10 + -iVar11;
        puVar13 = puVar10;
        for (puVar9 = puVar2; puVar9 != puVar10; puVar9 = puVar9 + 1) {
          if (puVar13 != (undefined1 *)0x0) {
            *puVar13 = *puVar9;
          }
          puVar13 = puVar13 + 1;
        }
        puVar9 = puVar10;
        if (puVar10 < puVar2) {
          uVar3 = (int)puVar2 - (int)puVar10;
          if (0 < (int)uVar3) {
            if ((uVar3 & 1) != 0) {
              puVar2 = puVar2 + -1;
              puVar9 = puVar10 + -1;
              *puVar9 = *puVar2;
            }
            for (iVar11 = (int)uVar3 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
              puVar9[-1] = puVar2[-1];
              puVar2 = puVar2 + -2;
              puVar9 = puVar9 + -2;
              *puVar9 = *puVar2;
            }
          }
        }
        else {
          while (puVar10 != puVar2) {
            puVar2 = puVar2 + -1;
            puVar9[-1] = *puVar2;
            puVar9 = puVar9 + -1;
          }
        }
        if (puVar10 < puVar12) {
          uVar3 = (int)puVar12 - (int)puVar10;
          if (0 < (int)uVar3) {
            puVar12 = puVar10;
            if ((uVar3 & 1) != 0) {
              puVar12 = puVar10 + 1;
              *puVar10 = uVar1;
            }
            iVar11 = (int)uVar3 >> 1;
            if (iVar11 != 0) {
              do {
                puVar10 = puVar12 + 1;
                *puVar12 = uVar1;
                iVar11 = iVar11 + -1;
                puVar12 = puVar12 + 2;
                *puVar10 = uVar1;
              } while (iVar11 != 0);
              return;
            }
          }
        }
        else {
          for (; puVar10 != puVar12; puVar10 = puVar10 + 1) {
            *puVar10 = uVar1;
          }
        }
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (puVar10 != (undefined1 *)0x0) {
            *puVar10 = uVar1;
          }
          puVar10 = puVar10 + 1;
        }
      }
    }
  }
  else {
    if (local_28 != param_2) {
      param_3 = puVar12 + param_2;
    }
    if (local_28 != param_2 && puVar12 != puVar10) {
      puVar12 = param_3;
      if (puVar10 < param_3) {
        do {
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar10);
      }
      param_1[1] = (uint)param_3;
      return;
    }
  }
  return;
}



void fn_0079c770(uint *param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *local_28;
  undefined1 *local_24 [2];
  
  puVar9 = (undefined1 *)param_1[1];
  puVar10 = (undefined1 *)*param_1;
  if (puVar10 != puVar9) {
    puVar8 = puVar10;
    if (puVar9 <= puVar10) {
      do {
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar9);
    }
    param_1[1] = (uint)puVar10;
  }
  if (param_2 != 0) {
    puVar9 = (undefined1 *)param_1[1];
    local_28 = puVar9 + (param_2 - (int)puVar10);
    if ((undefined1 *)(param_1[2] - (int)puVar10) < local_28) {
      uVar1 = param_1[1] - *param_1;
      local_24[0] = (undefined1 *)(uVar1 + (uVar1 >> 1) + (uVar1 >> 3));
      if (local_24[0] < (undefined1 *)(uVar1 + 0x20)) {
        local_24[0] = (undefined1 *)(uVar1 + 0x20);
      }
      ppuVar7 = &local_28;
      if (local_28 < local_24[0]) {
        ppuVar7 = local_24;
      }
      puVar11 = *ppuVar7;
      puVar3 = (undefined1 *)fn_00100fc6(puVar11,0);
      puVar8 = puVar3;
      for (puVar9 = (undefined1 *)*param_1; puVar9 != puVar10; puVar9 = puVar9 + 1) {
        if (puVar8 != (undefined1 *)0x0) {
          *puVar8 = *puVar9;
        }
        puVar8 = puVar8 + 1;
      }
      puVar9 = puVar3 + ((int)puVar10 - *param_1);
      for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar9 != (undefined1 *)0x0) {
          *puVar9 = *param_3;
        }
        puVar9 = puVar9 + 1;
      }
      puVar8 = (undefined1 *)param_1[1];
      puVar9 = puVar3 + (int)(puVar10 + (param_2 - *param_1));
      for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        if (puVar9 != (undefined1 *)0x0) {
          *puVar9 = *puVar10;
        }
        puVar9 = puVar9 + 1;
      }
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar1 = uVar4;
      if (uVar5 < uVar4) {
        do {
          uVar1 = uVar1 + 1;
        } while (uVar1 != uVar5);
      }
      fn_001008c4(uVar4,param_1[2] - uVar4,0);
      *param_1 = (uint)puVar3;
      param_1[1] = (uint)(puVar3 + param_2 + (uVar5 - uVar4));
      param_1[2] = (uint)(puVar3 + (int)puVar11);
      return;
    }
    puVar8 = puVar10 + param_2;
    param_1[1] = (uint)(puVar9 + param_2);
    if (puVar8 < puVar9) {
      puVar6 = puVar9 + -param_2;
      puVar11 = puVar9;
      for (puVar3 = puVar6; puVar3 != puVar9; puVar3 = puVar3 + 1) {
        if (puVar11 != (undefined1 *)0x0) {
          *puVar11 = *puVar3;
        }
        puVar11 = puVar11 + 1;
      }
      if (puVar10 < puVar6) {
        uVar1 = (int)puVar6 - (int)puVar10;
        if (0 < (int)uVar1) {
          if ((uVar1 & 1) != 0) {
            puVar6 = puVar6 + -1;
            puVar9 = puVar9 + -1;
            *puVar9 = *puVar6;
          }
          for (iVar2 = (int)uVar1 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
            puVar9[-1] = puVar6[-1];
            puVar6 = puVar6 + -2;
            puVar9 = puVar9 + -2;
            *puVar9 = *puVar6;
          }
        }
      }
      else {
        while (puVar10 != puVar6) {
          puVar6 = puVar6 + -1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar6;
        }
      }
      if (puVar10 < puVar8) {
        uVar1 = (int)puVar8 - (int)puVar10;
        if (0 < (int)uVar1) {
          puVar9 = puVar10;
          if ((uVar1 & 1) != 0) {
            puVar9 = puVar10 + 1;
            *puVar10 = *param_3;
          }
          iVar2 = (int)uVar1 >> 1;
          if (iVar2 != 0) {
            do {
              iVar2 = iVar2 + -1;
              puVar10 = puVar9 + 1;
              *puVar9 = *param_3;
              puVar9 = puVar9 + 2;
              *puVar10 = *param_3;
            } while (iVar2 != 0);
            return;
          }
        }
      }
      else {
        for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
          *puVar10 = *param_3;
        }
      }
    }
    else {
      uVar1 = (int)puVar9 - (int)puVar10;
      puVar3 = puVar9;
      for (param_2 = param_2 - uVar1; puVar11 = puVar10, param_2 != 0; param_2 = param_2 + -1) {
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = *param_3;
        }
        puVar3 = puVar3 + 1;
      }
      for (; puVar11 != puVar9; puVar11 = puVar11 + 1) {
        if (puVar8 != (undefined1 *)0x0) {
          *puVar8 = *puVar11;
        }
        puVar8 = puVar8 + 1;
      }
      if (puVar10 < puVar9) {
        if (0 < (int)uVar1) {
          puVar9 = puVar10;
          if ((uVar1 & 1) != 0) {
            puVar9 = puVar10 + 1;
            *puVar10 = *param_3;
          }
          iVar2 = (int)uVar1 >> 1;
          if (iVar2 != 0) {
            do {
              iVar2 = iVar2 + -1;
              puVar10 = puVar9 + 1;
              *puVar9 = *param_3;
              puVar9 = puVar9 + 2;
              *puVar10 = *param_3;
            } while (iVar2 != 0);
            return;
          }
        }
      }
      else if (puVar10 != puVar9) {
        do {
          puVar8 = puVar10 + 1;
          *puVar10 = *param_3;
          puVar10 = puVar8;
        } while (puVar8 != puVar9);
        return;
      }
    }
  }
  return;
}


