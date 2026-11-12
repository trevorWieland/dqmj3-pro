#include "0079b3c0_0079b86c.h"



void fn_0079b86c(int *param_1,undefined1 *param_2,int param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  if (param_3 == 0) {
    return;
  }
  puVar1 = (undefined1 *)param_1[1];
  puVar2 = puVar1 + (param_3 - *param_1);
  if ((undefined1 *)(param_1[2] - *param_1) < puVar2) {
    uVar5 = param_1[1] - *param_1;
    puVar1 = (undefined1 *)(uVar5 + (uVar5 >> 1) + (uVar5 >> 3));
    if (puVar1 < (undefined1 *)(uVar5 + 0x20)) {
      puVar1 = (undefined1 *)(uVar5 + 0x20);
    }
    if (puVar1 <= puVar2) {
      puVar1 = puVar2;
    }
    puVar8 = (undefined1 *)fn_0015ece0(puVar1);
    puVar7 = puVar8;
    for (puVar2 = (undefined1 *)*param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = *puVar2;
      }
      puVar7 = puVar7 + 1;
    }
    puVar2 = puVar8 + ((int)param_2 - *param_1);
    for (iVar6 = param_3; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = *param_4;
      }
      puVar2 = puVar2 + 1;
    }
    puVar7 = (undefined1 *)param_1[1];
    puVar2 = puVar8 + (int)(param_2 + (param_3 - *param_1));
    for (; param_2 != puVar7; param_2 = param_2 + 1) {
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = *param_2;
      }
      puVar2 = puVar2 + 1;
    }
    iVar6 = *param_1;
    iVar4 = param_1[1];
    fn_0014f1bc();
    *param_1 = (int)puVar8;
    param_1[1] = (int)(puVar8 + param_3 + (iVar4 - iVar6));
    param_1[2] = (int)(puVar8 + (int)puVar1);
    return;
  }
  puVar2 = param_2 + param_3;
  param_1[1] = (int)(puVar1 + param_3);
  if (puVar2 < puVar1) {
    puVar3 = puVar1 + -param_3;
    puVar8 = puVar1;
    for (puVar7 = puVar3; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      if (puVar8 != (undefined1 *)0x0) {
        *puVar8 = *puVar7;
      }
      puVar8 = puVar8 + 1;
    }
    uVar5 = (int)puVar3 - (int)param_2;
    if (0 < (int)uVar5) {
      if ((uVar5 & 1) != 0) {
        puVar3 = puVar3 + -1;
        puVar1 = puVar1 + -1;
        *puVar1 = *puVar3;
      }
      for (iVar6 = (int)uVar5 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar1[-1] = puVar3[-1];
        puVar3 = puVar3 + -2;
        puVar1 = puVar1 + -2;
        *puVar1 = *puVar3;
      }
    }
    uVar5 = (int)puVar2 - (int)param_2;
    if (0 < (int)uVar5) {
      puVar1 = param_2 + -1;
      if ((uVar5 & 1) != 0) {
        *param_2 = *param_4;
        puVar1 = param_2;
      }
      for (iVar6 = (int)uVar5 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar1[1] = *param_4;
        puVar1 = puVar1 + 2;
        *puVar1 = *param_4;
      }
    }
  }
  else {
    uVar5 = (int)puVar1 - (int)param_2;
    puVar7 = puVar1;
    for (param_3 = param_3 - uVar5; puVar8 = param_2, param_3 != 0; param_3 = param_3 + -1) {
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = *param_4;
      }
      puVar7 = puVar7 + 1;
    }
    for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = *puVar8;
      }
      puVar2 = puVar2 + 1;
    }
    if (0 < (int)uVar5) {
      puVar1 = param_2 + -1;
      if ((uVar5 & 1) != 0) {
        *param_2 = *param_4;
        puVar1 = param_2;
      }
      iVar6 = (int)uVar5 >> 1;
      if (iVar6 != 0) {
        do {
          iVar6 = iVar6 + -1;
          puVar1[1] = *param_4;
          puVar1 = puVar1 + 2;
          *puVar1 = *param_4;
        } while (iVar6 != 0);
        return;
      }
    }
  }
  return;
}



void fn_0079b730(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  puVar1 = (undefined1 *)param_1[1];
  uVar4 = (int)puVar1 - *param_1;
  if (uVar4 < (uint)(param_1[2] - *param_1)) {
    param_1[1] = (int)(puVar1 + 1);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = puVar1[-1];
    }
    puVar5 = puVar1 + -1;
    uVar4 = (int)puVar5 - (int)param_2;
    if (0 < (int)uVar4) {
      if ((uVar4 & 1) != 0) {
        puVar5 = puVar1 + -2;
        puVar1 = puVar1 + -1;
        *puVar1 = *puVar5;
      }
      for (iVar7 = (int)uVar4 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar1[-1] = puVar5[-1];
        puVar5 = puVar5 + -2;
        puVar1 = puVar1 + -2;
        *puVar1 = *puVar5;
      }
    }
    *param_2 = *param_3;
    return;
  }
  uVar8 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  uVar2 = uVar4 + 0x20;
  if (uVar4 + 0x20 <= uVar8) {
    uVar2 = uVar8;
  }
  puVar3 = (undefined1 *)fn_0015ece0();
  puVar5 = puVar3;
  for (puVar1 = (undefined1 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = *puVar1;
    }
    puVar5 = puVar5 + 1;
  }
  if (puVar3 + ((int)param_2 - *param_1) != (undefined1 *)0x0) {
    puVar3[(int)param_2 - *param_1] = *param_3;
  }
  puVar5 = (undefined1 *)param_1[1];
  puVar1 = puVar3 + ((int)param_2 - *param_1);
  for (; param_2 != puVar5; param_2 = param_2 + 1) {
    puVar1 = puVar1 + 1;
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_2;
    }
  }
  iVar7 = *param_1;
  iVar6 = param_1[1];
  fn_0014f1bc();
  *param_1 = (int)puVar3;
  param_1[1] = (int)(puVar3 + (iVar6 - iVar7) + 1);
  param_1[2] = (int)(puVar3 + uVar2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0079b560) */
/* WARNING: Removing unreachable block (ram,0x0079b56c) */
/* WARNING: Removing unreachable block (ram,0x0079b538) */
/* WARNING: Removing unreachable block (ram,0x0079b53c) */
/* WARNING: Removing unreachable block (ram,0x0079b540) */
/* WARNING: Removing unreachable block (ram,0x0079b544) */
/* WARNING: Removing unreachable block (ram,0x0079b548) */
/* WARNING: Removing unreachable block (ram,0x0079b590) */
/* WARNING: Removing unreachable block (ram,0x0079b5a4) */
/* WARNING: Removing unreachable block (ram,0x0079b578) */
/* WARNING: Removing unreachable block (ram,0x0079b580) */
/* WARNING: Removing unreachable block (ram,0x0079b584) */
/* WARNING: Removing unreachable block (ram,0x0079b588) */

void fn_0079b3c0(uint *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 in_s0;
  uint local_28;
  uint local_24 [3];
  
  puVar9 = (undefined4 *)param_1[1];
  puVar12 = (undefined4 *)*param_1;
  local_28 = (int)puVar9 - (int)puVar12 >> 2;
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
        puVar2 = &local_28;
        if (local_28 < local_24[0]) {
          puVar2 = local_24;
        }
        uVar11 = *puVar2;
        puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
        puVar7 = puVar3;
        for (puVar12 = (undefined4 *)*param_1; puVar12 != puVar9; puVar12 = puVar12 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar12;
          }
          puVar7 = puVar7 + 1;
        }
        puVar12 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffffc) + (int)puVar3);
        for (iVar6 = iVar10; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = in_s0;
          }
          puVar12 = puVar12 + 1;
        }
        puVar7 = (undefined4 *)param_1[1];
        puVar12 = puVar3 + iVar10 + ((int)((int)puVar9 - *param_1) >> 2);
        for (; puVar9 != puVar7; puVar9 = puVar9 + 1) {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = *puVar9;
          }
          puVar12 = puVar12 + 1;
        }
        uVar4 = *param_1;
        uVar8 = param_1[1];
        uVar5 = uVar4;
        if (uVar8 < uVar4) {
          do {
            uVar5 = uVar5 + 4;
          } while (uVar5 != uVar8);
        }
        fn_001008c4(uVar4,(int)(param_1[2] - uVar4) >> 2,0);
        param_1[2] = (uint)(puVar3 + uVar11);
        param_1[1] = (uint)(puVar3 + ((int)(uVar8 - uVar4) >> 2) + iVar10);
        *param_1 = (uint)puVar3;
        return;
      }
      puVar12 = puVar9 + iVar10;
      param_1[1] = (uint)(puVar9 + iVar10);
      if (puVar12 < puVar9) {
        puVar1 = puVar9 + -iVar10;
        puVar3 = puVar9;
        for (puVar7 = puVar1; puVar7 != puVar9; puVar7 = puVar7 + 1) {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *puVar7;
          }
          puVar3 = puVar3 + 1;
        }
        puVar7 = puVar9;
        if (puVar9 < puVar1) {
          iVar10 = (int)puVar1 - (int)puVar9;
          if (0 < iVar10) {
            if (iVar10 * 0x20000000 < 0) {
              puVar1 = puVar1 + -1;
              puVar7 = puVar9 + -1;
              *puVar7 = *puVar1;
            }
            for (iVar10 = iVar10 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar7[-1] = puVar1[-1];
              puVar1 = puVar1 + -2;
              puVar7 = puVar7 + -2;
              *puVar7 = *puVar1;
            }
          }
        }
        else {
          while (puVar9 != puVar1) {
            puVar1 = puVar1 + -1;
            puVar7[-1] = *puVar1;
            puVar7 = puVar7 + -1;
          }
        }
        if (puVar9 < puVar12) {
          iVar10 = (int)puVar12 - (int)puVar9;
          if (0 < iVar10) {
            if (iVar10 * 0x20000000 < 0) {
              *puVar9 = in_s0;
              puVar9 = puVar9 + 1;
            }
            iVar10 = iVar10 >> 3;
            if (iVar10 != 0) {
              do {
                *puVar9 = in_s0;
                puVar9[1] = in_s0;
                iVar10 = iVar10 + -1;
                puVar9 = puVar9 + 2;
              } while (iVar10 != 0);
              return;
            }
          }
        }
        else {
          for (; puVar9 != puVar12; puVar9 = puVar9 + 1) {
            *puVar9 = in_s0;
          }
        }
      }
      else {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = in_s0;
          }
          puVar9 = puVar9 + 1;
        }
      }
    }
  }
  else {
    if (param_2 != local_28) {
      param_4 = puVar12 + param_2;
    }
    if (param_2 != local_28 && puVar12 != puVar9) {
      puVar12 = param_4;
      if (puVar9 < param_4) {
        do {
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar9);
      }
      param_1[1] = (int)puVar9 - ((int)puVar9 - (int)param_4 & 0xfffffffcU);
      return;
    }
  }
  return;
}


