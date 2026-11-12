#include "0039ecb8_0039ecf0.h"



/* WARNING: Removing unreachable block (ram,0x0039ee80) */
/* WARNING: Removing unreachable block (ram,0x0039ee8c) */
/* WARNING: Removing unreachable block (ram,0x0039ee58) */
/* WARNING: Removing unreachable block (ram,0x0039ee5c) */
/* WARNING: Removing unreachable block (ram,0x0039ee60) */
/* WARNING: Removing unreachable block (ram,0x0039ee64) */
/* WARNING: Removing unreachable block (ram,0x0039ee68) */
/* WARNING: Removing unreachable block (ram,0x0039eea8) */
/* WARNING: Removing unreachable block (ram,0x0039eeb8) */
/* WARNING: Removing unreachable block (ram,0x0039ee90) */
/* WARNING: Removing unreachable block (ram,0x0039ee98) */
/* WARNING: Removing unreachable block (ram,0x0039ee9c) */
/* WARNING: Removing unreachable block (ram,0x0039eea0) */

void fn_0039ecf0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  uint local_48;
  uint local_44 [8];
  
  puVar13 = (uint *)(param_1 + 0x138);
  puVar1 = *(undefined4 **)(param_1 + 0x13c);
  puVar6 = (undefined4 *)*puVar13;
  uVar11 = (int)puVar1 - (int)puVar6 >> 2;
  if (uVar11 < 10) {
    iVar14 = 10 - uVar11;
    if (iVar14 != 0) {
      uVar11 = iVar14 + uVar11;
      if ((uint)(*(int *)(param_1 + 0x140) - (int)puVar6 >> 2) < uVar11) {
        local_48 = uVar11;
        uVar4 = (int)(*(int *)(param_1 + 0x13c) - *puVar13) >> 2;
        local_44[0] = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (local_44[0] < uVar4 + 0x20) {
          local_44[0] = uVar4 + 0x20;
        }
        puVar7 = local_44;
        if (local_44[0] <= uVar11) {
          puVar7 = &local_48;
        }
        uVar11 = *puVar7;
        puVar2 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
        puVar9 = puVar2;
        for (puVar6 = (undefined4 *)*puVar13; puVar6 != puVar1; puVar6 = puVar6 + 1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = *puVar6;
          }
          puVar9 = puVar9 + 1;
        }
        puVar6 = (undefined4 *)(((int)puVar1 - *puVar13 & 0xfffffffc) + (int)puVar2);
        for (iVar8 = iVar14; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0;
          }
          puVar6 = puVar6 + 1;
        }
        puVar9 = *(undefined4 **)(param_1 + 0x13c);
        puVar6 = puVar2 + iVar14 + ((int)((int)puVar1 - *puVar13) >> 2);
        for (; puVar1 != puVar9; puVar1 = puVar1 + 1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar1;
          }
          puVar6 = puVar6 + 1;
        }
        uVar3 = *puVar13;
        uVar10 = *(uint *)(param_1 + 0x13c);
        uVar4 = uVar3;
        if (uVar10 < uVar3) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar4 != uVar10);
        }
        fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x140) - uVar3) >> 2,0);
        *(undefined4 **)(param_1 + 0x140) = puVar2 + uVar11;
        *(undefined4 **)(param_1 + 0x13c) = puVar2 + ((int)(uVar10 - uVar3) >> 2) + iVar14;
        *puVar13 = (uint)puVar2;
      }
      else {
        puVar6 = puVar1 + iVar14;
        *(undefined4 **)(param_1 + 0x13c) = puVar1 + iVar14;
        if (puVar6 < puVar1) {
          puVar12 = puVar1 + -iVar14;
          puVar2 = puVar1;
          for (puVar9 = puVar12; puVar9 != puVar1; puVar9 = puVar9 + 1) {
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = *puVar9;
            }
            puVar2 = puVar2 + 1;
          }
          puVar9 = puVar1;
          if (puVar1 < puVar12) {
            if (0 < (int)puVar12 - (int)puVar1) {
              iVar14 = (int)puVar12 - (int)puVar1 >> 2;
              iVar8 = 0;
              do {
                iVar14 = iVar14 + -1;
                puVar1[iVar8 + -1] = puVar12[iVar8 + -1];
                iVar8 = iVar8 + -1;
              } while (iVar14 != 0);
            }
          }
          else {
            while (puVar1 != puVar12) {
              puVar12 = puVar12 + -1;
              puVar9[-1] = *puVar12;
              puVar9 = puVar9 + -1;
            }
          }
          if (puVar1 < puVar6) {
            iVar14 = (int)puVar6 - (int)puVar1;
            if (0 < iVar14) {
              puVar6 = puVar1;
              if (iVar14 * 0x20000000 < 0) {
                puVar6 = puVar1 + 1;
                *puVar1 = 0;
              }
              for (iVar14 = iVar14 >> 3; iVar14 != 0; iVar14 = iVar14 + -1) {
                puVar1 = puVar6 + 1;
                *puVar6 = 0;
                puVar6 = puVar6 + 2;
                *puVar1 = 0;
              }
            }
          }
          else {
            for (; puVar1 != puVar6; puVar1 = puVar1 + 1) {
              *puVar1 = 0;
            }
          }
        }
        else {
          for (; iVar14 != 0; iVar14 = iVar14 + -1) {
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0;
            }
            puVar1 = puVar1 + 1;
          }
        }
      }
    }
  }
  else if ((10 < uVar11) && (puVar9 = puVar6 + 10, puVar6 != puVar1)) {
    puVar6 = puVar9;
    if (puVar1 <= puVar9) {
      for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      }
    }
    *(uint *)(param_1 + 0x13c) = (int)puVar1 - ((int)puVar1 - (int)puVar9 & 0xfffffffcU);
  }
  *(undefined4 *)(param_1 + 0x144) = param_2;
  uVar11 = 0;
  if (*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x138) >> 2 != 0) {
    do {
      fn_001028d4(&local_48,(char *)&DAT_0039f0d8,uVar11);
      iVar14 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),&local_48);
      if (iVar14 != 0) {
        bVar5 = *(byte *)(iVar14 + 0x44) & 0xfe;
        if ((int)uVar11 < *(int *)(param_1 + 0x144)) {
          *(byte *)(iVar14 + 0x44) = bVar5 | 1;
          fn_0068b010(iVar14,0);
        }
        else {
          *(byte *)(iVar14 + 0x44) = bVar5;
        }
      }
      *(int *)(*(int *)(param_1 + 0x138) + uVar11 * 4) = iVar14;
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)(*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x138) >> 2));
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0039ee80) */
/* WARNING: Removing unreachable block (ram,0x0039ee8c) */
/* WARNING: Removing unreachable block (ram,0x0039ee58) */
/* WARNING: Removing unreachable block (ram,0x0039ee5c) */
/* WARNING: Removing unreachable block (ram,0x0039ee60) */
/* WARNING: Removing unreachable block (ram,0x0039ee64) */
/* WARNING: Removing unreachable block (ram,0x0039ee68) */
/* WARNING: Removing unreachable block (ram,0x0039eea8) */
/* WARNING: Removing unreachable block (ram,0x0039eeb8) */
/* WARNING: Removing unreachable block (ram,0x0039ee90) */
/* WARNING: Removing unreachable block (ram,0x0039ee98) */
/* WARNING: Removing unreachable block (ram,0x0039ee9c) */
/* WARNING: Removing unreachable block (ram,0x0039eea0) */

void fn_0039ecb8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  uint uStack_48;
  uint auStack_44 [11];
  
  uVar1 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
  fn_0039e5e0(param_1);
  fn_0039e7c4(param_1,uVar1);
  puVar14 = (uint *)(param_1 + 0x138);
  puVar2 = *(undefined4 **)(param_1 + 0x13c);
  puVar7 = (undefined4 *)*puVar14;
  uVar12 = (int)puVar2 - (int)puVar7 >> 2;
  if (uVar12 < 10) {
    iVar15 = 10 - uVar12;
    if (iVar15 != 0) {
      uVar12 = iVar15 + uVar12;
      if ((uint)(*(int *)(param_1 + 0x140) - (int)puVar7 >> 2) < uVar12) {
        uStack_48 = uVar12;
        uVar5 = (int)(*(int *)(param_1 + 0x13c) - *puVar14) >> 2;
        auStack_44[0] = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
        if (auStack_44[0] < uVar5 + 0x20) {
          auStack_44[0] = uVar5 + 0x20;
        }
        puVar8 = auStack_44;
        if (auStack_44[0] <= uVar12) {
          puVar8 = &uStack_48;
        }
        uVar12 = *puVar8;
        puVar3 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
        puVar10 = puVar3;
        for (puVar7 = (undefined4 *)*puVar14; puVar7 != puVar2; puVar7 = puVar7 + 1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = *puVar7;
          }
          puVar10 = puVar10 + 1;
        }
        puVar7 = (undefined4 *)(((int)puVar2 - *puVar14 & 0xfffffffc) + (int)puVar3);
        for (iVar9 = iVar15; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0;
          }
          puVar7 = puVar7 + 1;
        }
        puVar10 = *(undefined4 **)(param_1 + 0x13c);
        puVar7 = puVar3 + iVar15 + ((int)((int)puVar2 - *puVar14) >> 2);
        for (; puVar2 != puVar10; puVar2 = puVar2 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar2;
          }
          puVar7 = puVar7 + 1;
        }
        uVar4 = *puVar14;
        uVar11 = *(uint *)(param_1 + 0x13c);
        uVar5 = uVar4;
        if (uVar11 < uVar4) {
          do {
            uVar5 = uVar5 + 4;
          } while (uVar5 != uVar11);
        }
        fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x140) - uVar4) >> 2,0);
        *(undefined4 **)(param_1 + 0x140) = puVar3 + uVar12;
        *(undefined4 **)(param_1 + 0x13c) = puVar3 + ((int)(uVar11 - uVar4) >> 2) + iVar15;
        *puVar14 = (uint)puVar3;
      }
      else {
        puVar7 = puVar2 + iVar15;
        *(undefined4 **)(param_1 + 0x13c) = puVar2 + iVar15;
        if (puVar7 < puVar2) {
          puVar13 = puVar2 + -iVar15;
          puVar3 = puVar2;
          for (puVar10 = puVar13; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar10;
            }
            puVar3 = puVar3 + 1;
          }
          puVar10 = puVar2;
          if (puVar2 < puVar13) {
            if (0 < (int)puVar13 - (int)puVar2) {
              iVar15 = (int)puVar13 - (int)puVar2 >> 2;
              iVar9 = 0;
              do {
                iVar15 = iVar15 + -1;
                puVar2[iVar9 + -1] = puVar13[iVar9 + -1];
                iVar9 = iVar9 + -1;
              } while (iVar15 != 0);
            }
          }
          else {
            while (puVar2 != puVar13) {
              puVar13 = puVar13 + -1;
              puVar10[-1] = *puVar13;
              puVar10 = puVar10 + -1;
            }
          }
          if (puVar2 < puVar7) {
            iVar15 = (int)puVar7 - (int)puVar2;
            if (0 < iVar15) {
              puVar7 = puVar2;
              if (iVar15 * 0x20000000 < 0) {
                puVar7 = puVar2 + 1;
                *puVar2 = 0;
              }
              for (iVar15 = iVar15 >> 3; iVar15 != 0; iVar15 = iVar15 + -1) {
                puVar2 = puVar7 + 1;
                *puVar7 = 0;
                puVar7 = puVar7 + 2;
                *puVar2 = 0;
              }
            }
          }
          else {
            for (; puVar2 != puVar7; puVar2 = puVar2 + 1) {
              *puVar2 = 0;
            }
          }
        }
        else {
          for (; iVar15 != 0; iVar15 = iVar15 + -1) {
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = 0;
            }
            puVar2 = puVar2 + 1;
          }
        }
      }
    }
  }
  else if ((10 < uVar12) && (puVar10 = puVar7 + 10, puVar7 != puVar2)) {
    puVar7 = puVar10;
    if (puVar2 <= puVar10) {
      for (; puVar7 != puVar2; puVar7 = puVar7 + 1) {
      }
    }
    *(uint *)(param_1 + 0x13c) = (int)puVar2 - ((int)puVar2 - (int)puVar10 & 0xfffffffcU);
  }
  *(undefined4 *)(param_1 + 0x144) = uVar1;
  uVar12 = 0;
  if (*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x138) >> 2 != 0) {
    do {
      fn_001028d4(&uStack_48,"tb_check_%02d",uVar12);
      iVar15 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),&uStack_48);
      if (iVar15 != 0) {
        bVar6 = *(byte *)(iVar15 + 0x44) & 0xfe;
        if ((int)uVar12 < *(int *)(param_1 + 0x144)) {
          *(byte *)(iVar15 + 0x44) = bVar6 | 1;
          fn_0068b010(iVar15,0);
        }
        else {
          *(byte *)(iVar15 + 0x44) = bVar6;
        }
      }
      *(int *)(*(int *)(param_1 + 0x138) + uVar12 * 4) = iVar15;
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)(*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x138) >> 2));
  }
  return;
}


