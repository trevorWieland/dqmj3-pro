#include "0078cb6c_0078cf1c.h"



/* WARNING: Removing unreachable block (ram,0x0078d168) */
/* WARNING: Removing unreachable block (ram,0x0078d180) */
/* WARNING: Removing unreachable block (ram,0x0078d138) */
/* WARNING: Removing unreachable block (ram,0x0078d140) */
/* WARNING: Removing unreachable block (ram,0x0078d14c) */
/* WARNING: Removing unreachable block (ram,0x0078d1b0) */
/* WARNING: Removing unreachable block (ram,0x0078d1d4) */
/* WARNING: Removing unreachable block (ram,0x0078d18c) */
/* WARNING: Removing unreachable block (ram,0x0078d194) */
/* WARNING: Removing unreachable block (ram,0x0078d19c) */
/* WARNING: Removing unreachable block (ram,0x0078d1a8) */

void fn_0078cf1c(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint local_38;
  uint local_34 [4];
  
  puVar8 = (undefined4 *)*param_1;
  puVar10 = (undefined4 *)param_1[1];
  local_38 = ((int)puVar10 - (int)puVar8) / 0xc;
  if (local_38 < param_2) {
    iVar11 = param_2 - local_38;
    if (iVar11 != 0) {
      local_38 = local_38 + iVar11;
      if ((uint)((int)(param_1[2] - (int)puVar8) / 0xc) < local_38) {
        uVar14 = (int)(param_1[1] - *param_1) / 0xc;
        local_34[0] = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
        if (local_34[0] < uVar14 + 0x20) {
          local_34[0] = uVar14 + 0x20;
        }
        puVar4 = local_34;
        if (local_34[0] <= local_38) {
          puVar4 = &local_38;
        }
        uVar14 = *puVar4;
        puVar1 = (undefined4 *)fn_00100fc6(uVar14 * 0xc,0);
        puVar6 = puVar1;
        for (puVar8 = (undefined4 *)*param_1; puVar8 != puVar10; puVar8 = puVar8 + 3) {
          if (puVar6 != (undefined4 *)0x0) {
            uVar12 = puVar8[1];
            uVar13 = puVar8[2];
            *puVar6 = *puVar8;
            puVar6[1] = uVar12;
            puVar6[2] = uVar13;
          }
          puVar6 = puVar6 + 3;
        }
        puVar8 = puVar1 + ((int)((int)puVar10 - *param_1) / 0xc) * 3;
        for (iVar5 = iVar11; iVar5 != 0; iVar5 = iVar5 + -1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = param_3;
            puVar8[1] = param_4;
            puVar8[2] = param_5;
          }
          puVar8 = puVar8 + 3;
        }
        puVar6 = (undefined4 *)param_1[1];
        puVar8 = puVar1 + ((int)((int)puVar10 - *param_1) / 0xc + iVar11) * 3;
        for (; puVar10 != puVar6; puVar10 = puVar10 + 3) {
          if (puVar8 != (undefined4 *)0x0) {
            uVar12 = puVar10[1];
            uVar13 = puVar10[2];
            *puVar8 = *puVar10;
            puVar8[1] = uVar12;
            puVar8[2] = uVar13;
          }
          puVar8 = puVar8 + 3;
        }
        uVar2 = *param_1;
        uVar7 = param_1[1];
        uVar3 = uVar2;
        if (uVar7 < uVar2) {
          do {
            uVar3 = uVar3 + 0xc;
          } while (uVar3 != uVar7);
        }
        fn_001008c4(uVar2,(int)(param_1[2] - uVar2) / 0xc,0);
        *param_1 = (uint)puVar1;
        param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar2) / 0xc) * 3 + iVar11 * 3);
        param_1[2] = (uint)(puVar1 + uVar14 * 3);
        return;
      }
      puVar8 = puVar10 + iVar11 * 3;
      param_1[1] = (uint)(puVar10 + iVar11 * 3);
      if (puVar8 < puVar10) {
        puVar9 = puVar10 + iVar11 * -3;
        puVar6 = puVar10;
        for (puVar1 = puVar9; puVar1 != puVar10; puVar1 = puVar1 + 3) {
          if (puVar6 != (undefined4 *)0x0) {
            uVar12 = puVar1[1];
            uVar13 = puVar1[2];
            *puVar6 = *puVar1;
            puVar6[1] = uVar12;
            puVar6[2] = uVar13;
          }
          puVar6 = puVar6 + 3;
        }
        puVar6 = puVar10;
        if (puVar10 < puVar9) {
          if (0 < (int)puVar9 - (int)puVar10) {
            uVar14 = ((int)puVar9 - (int)puVar10) / 0xc;
            puVar6 = puVar9;
            puVar1 = puVar10;
            if ((uVar14 & 1) != 0) {
              puVar6 = puVar9 + -3;
              puVar1 = puVar10 + -3;
              uVar12 = puVar9[-2];
              uVar13 = puVar9[-1];
              *puVar1 = *puVar6;
              puVar10[-2] = uVar12;
              puVar10[-1] = uVar13;
            }
            for (iVar11 = (int)uVar14 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
              uVar12 = puVar6[-2];
              uVar13 = puVar6[-1];
              puVar1[-3] = puVar6[-3];
              puVar1[-2] = uVar12;
              puVar1[-1] = uVar13;
              uVar12 = puVar6[-5];
              uVar13 = puVar6[-4];
              puVar1[-6] = puVar6[-6];
              puVar1[-5] = uVar12;
              puVar1[-4] = uVar13;
              puVar6 = puVar6 + -6;
              puVar1 = puVar1 + -6;
            }
          }
        }
        else {
          while (puVar10 != puVar9) {
            uVar12 = puVar9[-2];
            uVar13 = puVar9[-1];
            puVar6[-3] = puVar9[-3];
            puVar6[-2] = uVar12;
            puVar6[-1] = uVar13;
            puVar6 = puVar6 + -3;
            puVar9 = puVar9 + -3;
          }
        }
        if (puVar10 < puVar8) {
          if (0 < (int)puVar8 - (int)puVar10) {
            uVar14 = ((int)puVar8 - (int)puVar10) / 0xc;
            if ((uVar14 & 1) != 0) {
              *puVar10 = param_3;
              puVar10[1] = param_4;
              puVar10[2] = param_5;
              puVar10 = puVar10 + 3;
            }
            iVar11 = (int)uVar14 >> 1;
            if (iVar11 != 0) {
              do {
                *puVar10 = param_3;
                puVar10[1] = param_4;
                puVar10[2] = param_5;
                puVar10[3] = param_3;
                puVar10[4] = param_4;
                iVar11 = iVar11 + -1;
                puVar10[5] = param_5;
                puVar10 = puVar10 + 6;
              } while (iVar11 != 0);
              return;
            }
          }
        }
        else {
          for (; puVar10 != puVar8; puVar10 = puVar10 + 3) {
            *puVar10 = param_3;
            puVar10[1] = param_4;
            puVar10[2] = param_5;
          }
        }
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = param_3;
            puVar10[1] = param_4;
            puVar10[2] = param_5;
          }
          puVar10 = puVar10 + 3;
        }
      }
    }
  }
  else if ((local_38 != param_2) && (puVar6 = puVar8 + param_2 * 3, puVar8 != puVar10)) {
    puVar8 = puVar6;
    if (puVar10 <= puVar6) {
      for (; puVar8 != puVar10; puVar8 = puVar8 + 3) {
      }
    }
    param_1[1] = (uint)(puVar10 + (((int)puVar10 - (int)puVar6) / 0xc) * -3);
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0078cd3c) */
/* WARNING: Removing unreachable block (ram,0x0078cd50) */
/* WARNING: Removing unreachable block (ram,0x0078cd10) */
/* WARNING: Removing unreachable block (ram,0x0078cd18) */
/* WARNING: Removing unreachable block (ram,0x0078cd20) */
/* WARNING: Removing unreachable block (ram,0x0078cd70) */
/* WARNING: Removing unreachable block (ram,0x0078cd88) */
/* WARNING: Removing unreachable block (ram,0x0078cd58) */
/* WARNING: Removing unreachable block (ram,0x0078cd60) */
/* WARNING: Removing unreachable block (ram,0x0078cd64) */
/* WARNING: Removing unreachable block (ram,0x0078cd68) */

void fn_0078cb6c(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint local_28;
  uint local_24;
  
  puVar8 = (undefined4 *)*param_1;
  puVar10 = (undefined4 *)param_1[1];
  puVar9 = (undefined4 *)((int)puVar10 - (int)puVar8);
  local_28 = (int)puVar9 >> 3;
  if (local_28 < param_2) {
    iVar11 = param_2 - local_28;
    if (iVar11 != 0) {
      local_28 = iVar11 + local_28;
      if ((uint)((int)(param_1[2] - (int)puVar8) >> 3) < local_28) {
        uVar13 = (int)(param_1[1] - *param_1) >> 3;
        local_24 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        if (local_24 < uVar13 + 0x20) {
          local_24 = uVar13 + 0x20;
        }
        puVar5 = &local_24;
        if (local_24 <= local_28) {
          puVar5 = &local_28;
        }
        uVar13 = *puVar5;
        puVar2 = (undefined4 *)fn_00100fc6(uVar13 << 3,0);
        puVar8 = puVar2;
        for (puVar9 = (undefined4 *)*param_1; puVar9 != puVar10; puVar9 = puVar9 + 2) {
          if (puVar8 != (undefined4 *)0x0) {
            uVar12 = puVar9[1];
            *puVar8 = *puVar9;
            puVar8[1] = uVar12;
          }
          puVar8 = puVar8 + 2;
        }
        puVar9 = (undefined4 *)(((int)puVar10 - *param_1 & 0xfffffff8) + (int)puVar2);
        for (iVar6 = iVar11; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = param_3;
            puVar9[1] = param_4;
          }
          puVar9 = puVar9 + 2;
        }
        puVar8 = (undefined4 *)param_1[1];
        puVar9 = puVar2 + (iVar11 + ((int)((int)puVar10 - *param_1) >> 3)) * 2;
        for (; puVar10 != puVar8; puVar10 = puVar10 + 2) {
          if (puVar9 != (undefined4 *)0x0) {
            uVar12 = puVar10[1];
            *puVar9 = *puVar10;
            puVar9[1] = uVar12;
          }
          puVar9 = puVar9 + 2;
        }
        uVar3 = *param_1;
        uVar7 = param_1[1];
        uVar4 = uVar3;
        if (uVar7 < uVar3) {
          do {
            uVar4 = uVar4 + 8;
          } while (uVar4 != uVar7);
        }
        fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 3,0);
        param_1[2] = (uint)(puVar2 + uVar13 * 2);
        param_1[1] = (uint)(puVar2 + ((int)(uVar7 - uVar3) >> 3) * 2 + iVar11 * 2);
        *param_1 = (uint)puVar2;
        return;
      }
      puVar9 = puVar10 + iVar11 * 2;
      param_1[1] = (uint)(puVar10 + iVar11 * 2);
      if (puVar9 < puVar10) {
        puVar1 = puVar10 + iVar11 * -2;
        puVar8 = puVar10;
        for (puVar2 = puVar1; puVar2 != puVar10; puVar2 = puVar2 + 2) {
          if (puVar8 != (undefined4 *)0x0) {
            uVar12 = puVar2[1];
            *puVar8 = *puVar2;
            puVar8[1] = uVar12;
          }
          puVar8 = puVar8 + 2;
        }
        puVar8 = puVar10;
        if (puVar10 < puVar1) {
          iVar11 = (int)puVar1 - (int)puVar10;
          if (0 < iVar11) {
            puVar8 = puVar1;
            puVar2 = puVar10;
            if (iVar11 * 0x10000000 < 0) {
              puVar8 = puVar1 + -2;
              puVar2 = puVar10 + -2;
              uVar12 = puVar1[-1];
              *puVar2 = *puVar8;
              puVar10[-1] = uVar12;
            }
            for (iVar11 = iVar11 >> 4; iVar11 != 0; iVar11 = iVar11 + -1) {
              uVar12 = puVar8[-1];
              puVar2[-2] = puVar8[-2];
              puVar2[-1] = uVar12;
              uVar12 = puVar8[-3];
              puVar2[-4] = puVar8[-4];
              puVar2[-3] = uVar12;
              puVar8 = puVar8 + -4;
              puVar2 = puVar2 + -4;
            }
          }
        }
        else {
          while (puVar10 != puVar1) {
            uVar12 = puVar1[-1];
            puVar8[-2] = puVar1[-2];
            puVar8[-1] = uVar12;
            puVar8 = puVar8 + -2;
            puVar1 = puVar1 + -2;
          }
        }
        if (puVar10 < puVar9) {
          iVar11 = (int)puVar9 - (int)puVar10;
          if (0 < iVar11) {
            if (iVar11 * 0x10000000 < 0) {
              *puVar10 = param_3;
              puVar10[1] = param_4;
              puVar10 = puVar10 + 2;
            }
            iVar11 = iVar11 >> 4;
            if (iVar11 != 0) {
              do {
                *puVar10 = param_3;
                puVar10[1] = param_4;
                iVar11 = iVar11 + -1;
                puVar10[2] = param_3;
                puVar10[3] = param_4;
                puVar10 = puVar10 + 4;
              } while (iVar11 != 0);
              return;
            }
          }
        }
        else {
          for (; puVar10 != puVar9; puVar10 = puVar10 + 2) {
            *puVar10 = param_3;
            puVar10[1] = param_4;
          }
        }
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = param_3;
            puVar10[1] = param_4;
          }
          puVar10 = puVar10 + 2;
        }
      }
    }
  }
  else {
    if (param_2 != local_28) {
      puVar9 = puVar8 + param_2 * 2;
    }
    if (param_2 != local_28 && puVar8 != puVar10) {
      puVar8 = puVar9;
      if (puVar10 < puVar9) {
        do {
          puVar8 = puVar8 + 2;
        } while (puVar8 != puVar10);
      }
      param_1[1] = (int)puVar10 - ((int)puVar10 - (int)puVar9 & 0xfffffff8U);
      return;
    }
  }
  return;
}


