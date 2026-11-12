#include "001ca2f4_001caac0.h"



void fn_001caac0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0081bbdc;
  uVar1 = param_1[0x36];
  uVar2 = uVar1;
  if ((uint)param_1[0x37] < uVar1) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != param_1[0x37]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x38] - uVar1) >> 3,0);
  fn_0066055c(param_1);
  fn_002feef8();
  return;
}



void fn_001caa80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00660458();
  puVar1[0x33] = 0;
  puVar1[0x32] = 1;
  *puVar1 = &DAT_0081bbdc;
  puVar1[0x34] = 0;
  *(undefined1 *)(puVar1 + 0x35) = 1;
  *(undefined1 *)((int)puVar1 + 0xd5) = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  return;
}



void fn_001caa40(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(char *)(param_1 + 0x47) = (char)param_2;
  puVar2 = *(undefined4 **)(param_1 + 0x54);
  for (puVar1 = *(undefined4 **)(param_1 + 0x50); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    fn_00689ca0(*(undefined4 *)(param_1 + 8),*puVar1,param_2);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001ca810) */
/* WARNING: Removing unreachable block (ram,0x001ca824) */
/* WARNING: Removing unreachable block (ram,0x001ca480) */
/* WARNING: Removing unreachable block (ram,0x001ca48c) */
/* WARNING: Removing unreachable block (ram,0x001ca458) */
/* WARNING: Removing unreachable block (ram,0x001ca45c) */
/* WARNING: Removing unreachable block (ram,0x001ca460) */
/* WARNING: Removing unreachable block (ram,0x001ca464) */
/* WARNING: Removing unreachable block (ram,0x001ca468) */
/* WARNING: Removing unreachable block (ram,0x001ca4a8) */
/* WARNING: Removing unreachable block (ram,0x001ca4b8) */
/* WARNING: Removing unreachable block (ram,0x001ca7e4) */
/* WARNING: Removing unreachable block (ram,0x001ca7ec) */
/* WARNING: Removing unreachable block (ram,0x001ca7f4) */
/* WARNING: Removing unreachable block (ram,0x001ca84c) */
/* WARNING: Removing unreachable block (ram,0x001ca868) */
/* WARNING: Removing unreachable block (ram,0x001ca82c) */
/* WARNING: Removing unreachable block (ram,0x001ca49c) */
/* WARNING: Removing unreachable block (ram,0x001ca490) */
/* WARNING: Removing unreachable block (ram,0x001ca498) */
/* WARNING: Removing unreachable block (ram,0x001ca4a0) */
/* WARNING: Removing unreachable block (ram,0x001ca834) */
/* WARNING: Removing unreachable block (ram,0x001ca83c) */
/* WARNING: Removing unreachable block (ram,0x001ca844) */

void fn_001ca2f4(uint param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint local_30;
  uint local_2c [2];
  
  uVar16 = param_2 * param_3;
  *(int *)(param_1 + 0x3c) = param_2;
  *(int *)(param_1 + 0x40) = param_3;
  puVar13 = (uint *)(param_1 + 0x50);
  puVar1 = *(undefined4 **)(param_1 + 0x54);
  puVar5 = *(undefined4 **)(param_1 + 0x50);
  puVar12 = (undefined4 *)((int)puVar1 - (int)puVar5);
  local_30 = (int)puVar12 >> 2;
  if (local_30 < uVar16) {
    iVar14 = uVar16 - local_30;
    if (iVar14 != 0) {
      local_30 = iVar14 + local_30;
      if ((uint)(*(int *)(param_1 + 0x58) - (int)puVar5 >> 2) < local_30) {
        uVar3 = (int)(*(int *)(param_1 + 0x54) - *puVar13) >> 2;
        uVar17 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
        local_2c[0] = uVar3 + 0x20;
        if (uVar3 + 0x20 <= uVar17) {
          local_2c[0] = uVar17;
        }
        puVar8 = &local_30;
        if (local_30 < local_2c[0]) {
          puVar8 = local_2c;
        }
        uVar3 = *puVar8;
        puVar2 = (undefined4 *)fn_00100fc6(uVar3 << 2,0);
        puVar5 = puVar2;
        for (puVar12 = (undefined4 *)*puVar13; puVar12 != puVar1; puVar12 = puVar12 + 1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar12;
          }
          puVar5 = puVar5 + 1;
        }
        puVar12 = (undefined4 *)(((int)puVar1 - *puVar13 & 0xfffffffc) + (int)puVar2);
        for (iVar9 = iVar14; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = 0;
          }
          puVar12 = puVar12 + 1;
        }
        puVar5 = *(undefined4 **)(param_1 + 0x54);
        puVar12 = puVar2 + iVar14 + ((int)((int)puVar1 - *puVar13) >> 2);
        for (; puVar1 != puVar5; puVar1 = puVar1 + 1) {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = *puVar1;
          }
          puVar12 = puVar12 + 1;
        }
        uVar11 = *puVar13;
        uVar7 = *(uint *)(param_1 + 0x54);
        uVar17 = uVar11;
        if (uVar7 < uVar11) {
          do {
            uVar17 = uVar17 + 4;
          } while (uVar17 != uVar7);
        }
        fn_001008c4(uVar11,(int)(*(int *)(param_1 + 0x58) - uVar11) >> 2,0);
        *(undefined4 **)(param_1 + 0x58) = puVar2 + uVar3;
        *(undefined4 **)(param_1 + 0x54) = puVar2 + ((int)(uVar7 - uVar11) >> 2) + iVar14;
        *puVar13 = (uint)puVar2;
      }
      else {
        puVar12 = puVar1 + iVar14;
        *(undefined4 **)(param_1 + 0x54) = puVar1 + iVar14;
        if (puVar12 < puVar1) {
          puVar6 = puVar1 + -iVar14;
          puVar2 = puVar1;
          for (puVar5 = puVar6; puVar5 != puVar1; puVar5 = puVar5 + 1) {
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = *puVar5;
            }
            puVar2 = puVar2 + 1;
          }
          puVar5 = puVar1;
          if (puVar1 < puVar6) {
            if (0 < (int)puVar6 - (int)puVar1) {
              iVar14 = (int)puVar6 - (int)puVar1 >> 2;
              iVar9 = 0;
              do {
                iVar14 = iVar14 + -1;
                puVar1[iVar9 + -1] = puVar6[iVar9 + -1];
                iVar9 = iVar9 + -1;
              } while (iVar14 != 0);
            }
          }
          else {
            while (puVar1 != puVar6) {
              puVar6 = puVar6 + -1;
              puVar5[-1] = *puVar6;
              puVar5 = puVar5 + -1;
            }
          }
          if (puVar1 < puVar12) {
            iVar14 = (int)puVar12 - (int)puVar1;
            if (0 < iVar14) {
              puVar12 = puVar1;
              if (iVar14 * 0x20000000 < 0) {
                puVar12 = puVar1 + 1;
                *puVar1 = 0;
              }
              for (iVar14 = iVar14 >> 3; iVar14 != 0; iVar14 = iVar14 + -1) {
                puVar1 = puVar12 + 1;
                *puVar12 = 0;
                puVar12 = puVar12 + 2;
                *puVar1 = 0;
              }
            }
          }
          else {
            for (; puVar1 != puVar12; puVar1 = puVar1 + 1) {
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
  else {
    if (uVar16 != local_30) {
      puVar12 = puVar5 + uVar16;
    }
    if (uVar16 != local_30 && puVar5 != puVar1) {
      puVar5 = puVar12;
      if (puVar1 <= puVar12) {
        for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        }
      }
      *(uint *)(param_1 + 0x54) = (int)puVar1 - ((int)puVar1 - (int)puVar12 & 0xfffffffcU);
    }
  }
  puVar15 = (uint *)(param_1 + 0xd8);
  uVar3 = param_1 & 0xffffff00;
  puVar8 = *(uint **)(param_1 + 0xd8);
  puVar13 = *(uint **)(param_1 + 0xdc);
  local_30 = (int)puVar13 - (int)puVar8 >> 3;
  if (local_30 < uVar16) {
    iVar14 = uVar16 - local_30;
    if (iVar14 != 0) {
      local_30 = iVar14 + local_30;
      if ((uint)(*(int *)(param_1 + 0xe0) - (int)puVar8 >> 3) < local_30) {
        uVar16 = (int)(*(int *)(param_1 + 0xdc) - *puVar15) >> 3;
        local_2c[0] = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
        if (local_2c[0] < uVar16 + 0x20) {
          local_2c[0] = uVar16 + 0x20;
        }
        puVar8 = local_2c;
        if (local_2c[0] <= local_30) {
          puVar8 = &local_30;
        }
        uVar16 = *puVar8;
        puVar4 = (uint *)fn_00100fc6(uVar16 << 3,0);
        puVar10 = puVar4;
        for (puVar8 = (uint *)*puVar15; puVar8 != puVar13; puVar8 = puVar8 + 2) {
          if (puVar10 != (uint *)0x0) {
            uVar17 = puVar8[1];
            *puVar10 = *puVar8;
            puVar10[1] = uVar17;
          }
          puVar10 = puVar10 + 2;
        }
        puVar8 = (uint *)(((int)puVar13 - *puVar15 & 0xfffffff8) + (int)puVar4);
        for (iVar9 = iVar14; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar8 != (uint *)0x0) {
            puVar8[1] = 0;
            *puVar8 = uVar3;
          }
          puVar8 = puVar8 + 2;
        }
        puVar10 = *(uint **)(param_1 + 0xdc);
        puVar8 = puVar4 + (iVar14 + ((int)((int)puVar13 - *puVar15) >> 3)) * 2;
        for (; puVar13 != puVar10; puVar13 = puVar13 + 2) {
          if (puVar8 != (uint *)0x0) {
            uVar3 = puVar13[1];
            *puVar8 = *puVar13;
            puVar8[1] = uVar3;
          }
          puVar8 = puVar8 + 2;
        }
        uVar17 = *puVar15;
        uVar11 = *(uint *)(param_1 + 0xdc);
        uVar3 = uVar17;
        if (uVar11 < uVar17) {
          do {
            uVar3 = uVar3 + 8;
          } while (uVar3 != uVar11);
        }
        fn_001008c4(uVar17,(int)(*(int *)(param_1 + 0xe0) - uVar17) >> 3,0);
        *(uint **)(param_1 + 0xe0) = puVar4 + uVar16 * 2;
        *(uint **)(param_1 + 0xdc) = puVar4 + ((int)(uVar11 - uVar17) >> 3) * 2 + iVar14 * 2;
        *puVar15 = (uint)puVar4;
        return;
      }
      puVar8 = puVar13 + iVar14 * 2;
      *(uint **)(param_1 + 0xdc) = puVar13 + iVar14 * 2;
      if (puVar8 < puVar13) {
        puVar4 = puVar13 + iVar14 * -2;
        puVar15 = puVar13;
        for (puVar10 = puVar4; puVar10 != puVar13; puVar10 = puVar10 + 2) {
          if (puVar15 != (uint *)0x0) {
            uVar16 = puVar10[1];
            *puVar15 = *puVar10;
            puVar15[1] = uVar16;
          }
          puVar15 = puVar15 + 2;
        }
        puVar15 = puVar13;
        if (puVar13 < puVar4) {
          iVar14 = (int)puVar4 - (int)puVar13;
          if (0 < iVar14) {
            puVar15 = puVar4;
            puVar10 = puVar13;
            if (iVar14 * 0x10000000 < 0) {
              puVar15 = puVar4 + -2;
              puVar10 = puVar13 + -2;
              uVar16 = puVar4[-1];
              *puVar10 = *puVar15;
              puVar13[-1] = uVar16;
            }
            for (iVar14 = iVar14 >> 4; iVar14 != 0; iVar14 = iVar14 + -1) {
              uVar16 = puVar15[-1];
              puVar10[-2] = puVar15[-2];
              puVar10[-1] = uVar16;
              uVar16 = puVar15[-3];
              puVar10[-4] = puVar15[-4];
              puVar10[-3] = uVar16;
              puVar15 = puVar15 + -4;
              puVar10 = puVar10 + -4;
            }
          }
        }
        else {
          while (puVar13 != puVar4) {
            uVar16 = puVar4[-1];
            puVar15[-2] = puVar4[-2];
            puVar15[-1] = uVar16;
            puVar15 = puVar15 + -2;
            puVar4 = puVar4 + -2;
          }
        }
        if (puVar13 < puVar8) {
          iVar14 = (int)puVar8 - (int)puVar13;
          if (0 < iVar14) {
            if (iVar14 * 0x10000000 < 0) {
              puVar8 = puVar13 + 1;
              *puVar13 = uVar3;
              puVar13 = puVar13 + 2;
              *puVar8 = 0;
            }
            iVar14 = iVar14 >> 4;
            if (iVar14 != 0) {
              do {
                puVar13[1] = 0;
                *puVar13 = uVar3;
                puVar13[2] = uVar3;
                iVar14 = iVar14 + -1;
                puVar13[3] = 0;
                puVar13 = puVar13 + 4;
              } while (iVar14 != 0);
              return;
            }
          }
        }
        else {
          for (; puVar13 != puVar8; puVar13 = puVar13 + 2) {
            *puVar13 = uVar3;
            puVar13[1] = 0;
          }
        }
      }
      else {
        for (; iVar14 != 0; iVar14 = iVar14 + -1) {
          if (puVar13 != (uint *)0x0) {
            puVar13[1] = 0;
            *puVar13 = uVar3;
          }
          puVar13 = puVar13 + 2;
        }
      }
    }
  }
  else if ((uVar16 < local_30) && (puVar15 = puVar8 + uVar16 * 2, puVar8 != puVar13)) {
    puVar8 = puVar15;
    if (puVar13 <= puVar15) {
      for (; puVar8 != puVar13; puVar8 = puVar8 + 2) {
      }
    }
    *(uint *)(param_1 + 0xdc) = (int)puVar13 - ((int)puVar13 - (int)puVar15 & 0xfffffff8U);
    return;
  }
  return;
}


