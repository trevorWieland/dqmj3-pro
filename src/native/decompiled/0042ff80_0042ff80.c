#include "0042ff80_0042ff80.h"



/* WARNING: Removing unreachable block (ram,0x00430560) */
/* WARNING: Removing unreachable block (ram,0x0043056c) */
/* WARNING: Removing unreachable block (ram,0x00430534) */
/* WARNING: Removing unreachable block (ram,0x00430538) */
/* WARNING: Removing unreachable block (ram,0x0043053c) */
/* WARNING: Removing unreachable block (ram,0x00430540) */
/* WARNING: Removing unreachable block (ram,0x00430544) */
/* WARNING: Removing unreachable block (ram,0x0043058c) */
/* WARNING: Removing unreachable block (ram,0x0043059c) */
/* WARNING: Removing unreachable block (ram,0x00430578) */
/* WARNING: Removing unreachable block (ram,0x00430570) */
/* WARNING: Removing unreachable block (ram,0x0043057c) */
/* WARNING: Removing unreachable block (ram,0x00430580) */
/* WARNING: Removing unreachable block (ram,0x00430584) */

void fn_0042ff80(int *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  bool bVar18;
  int *local_48;
  int *local_44;
  int *local_40;
  uint local_3c;
  int *local_38;
  int *piStack_34;
  uint *puStack_30;
  int local_2c;
  int local_28;
  
  ppiVar4 = &local_48;
  uVar13 = param_2[1];
  uVar16 = *param_2;
  if (uVar16 != uVar13) {
    uVar1 = uVar16;
    if (uVar13 <= uVar16) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar13);
    }
    param_2[1] = uVar13 - (uVar13 - uVar16 & 0xfffffffc);
  }
  uVar13 = (uint)(param_4 != 0);
  local_3c = uVar13;
  piStack_34 = param_1;
  puStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  iVar2 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar3 = fn_002bfb90(param_1,iVar2);
  local_44 = (int *)(iVar3 * 0xc);
  if ((int *)0x3fffffff < (int *)(iVar3 * 0xc)) {
    local_48 = (int *)0x3fffffff;
    fn_002ff628(8,&DAT_008c7673);
  }
  if ((int *)((int)(param_2[2] - *param_2) >> 2) < local_44) {
    uVar16 = (int)(param_2[1] - *param_2) >> 2;
    local_48 = (int *)(uVar16 + (uVar16 >> 1) + (uVar16 >> 3));
    if (local_48 < (int *)(uVar16 + 0x20)) {
      local_48 = (int *)(uVar16 + 0x20);
    }
    if (local_48 <= local_44) {
      ppiVar4 = &local_44;
    }
    piVar17 = *ppiVar4;
    puVar5 = (undefined4 *)fn_00100fc6((int)piVar17 << 2,0);
    puVar14 = (undefined4 *)param_2[1];
    puVar11 = puVar5;
    for (puVar6 = (undefined4 *)*param_2; puVar6 != puVar14; puVar6 = puVar6 + 1) {
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = *puVar6;
      }
      puVar11 = puVar11 + 1;
    }
    uVar1 = *param_2;
    uVar16 = uVar1;
    if (param_2[1] < uVar1) {
      do {
        uVar16 = uVar16 + 4;
      } while (uVar16 != param_2[1]);
    }
    fn_001008c4(uVar1,(int)(param_2[2] - uVar1) >> 2,0);
    uVar16 = *param_2;
    *param_2 = (uint)puVar5;
    param_2[1] = (param_2[1] - uVar16 & 0xfffffffc) + (int)puVar5;
    param_2[2] = (uint)(puVar5 + (int)piVar17);
  }
  if (local_28 != 0) {
    piVar17 = (int *)param_2[1];
    if (piVar17 == (int *)param_2[2]) {
      fn_0079df24(param_2,piVar17,&local_28);
    }
    else {
      param_2[1] = (uint)(piVar17 + 1);
      if (piVar17 != (int *)0x0) {
        *piVar17 = local_28;
      }
    }
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      iVar7 = fn_006b85d0(*(undefined4 *)(DAT_00897804 + 0xc),iVar3);
      if ((((iVar7 != 0) && (iVar8 = (**(code **)(*param_1 + 0x1a4))(param_1,iVar7), iVar8 == 0)) &&
          ((local_2c == 0 ||
           (iVar8 = (**(code **)(*param_1 + 0x120))(param_1,iVar7), iVar8 == local_2c)))) &&
         ((local_28 == 0 || (local_28 != iVar7)))) {
        piVar17 = (int *)param_2[1];
        if (piVar17 == (int *)param_2[2]) {
          uVar16 = (int)((int)piVar17 - *param_2) >> 2;
          local_44 = piVar17;
          if (uVar16 < (uint)((int)((int)param_2[2] - *param_2) >> 2)) {
            param_2[1] = (uint)(piVar17 + 1);
            if (piVar17 != (int *)0x0) {
              *piVar17 = piVar17[-1];
            }
            piVar10 = piVar17 + -1;
            piVar15 = piVar17;
            if (piVar17 < piVar10) {
              iVar8 = (int)piVar10 - (int)piVar17;
              if (0 < iVar8) {
                if (iVar8 * 0x20000000 < 0) {
                  piVar10 = piVar17 + -2;
                  piVar15 = piVar17 + -1;
                  *piVar15 = *piVar10;
                }
                for (iVar8 = iVar8 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
                  piVar15[-1] = piVar10[-1];
                  piVar10 = piVar10 + -2;
                  piVar15 = piVar15 + -2;
                  *piVar15 = *piVar10;
                }
              }
            }
            else {
              while (piVar17 != piVar10) {
                piVar10 = piVar10 + -1;
                piVar15[-1] = *piVar10;
                piVar15 = piVar15 + -1;
              }
            }
            *piVar17 = iVar7;
          }
          else {
            local_40 = (int *)(uVar16 + (uVar16 >> 1) + (uVar16 >> 3));
            if (local_40 < (int *)(uVar16 + 0x20)) {
              local_40 = (int *)(uVar16 + 0x20);
            }
            local_48 = (int *)fn_00100fc6((int)local_40 << 2,0);
            piVar10 = local_48;
            for (piVar17 = (int *)*param_2; piVar17 != local_44; piVar17 = piVar17 + 1) {
              if (piVar10 != (int *)0x0) {
                *piVar10 = *piVar17;
              }
              piVar10 = piVar10 + 1;
            }
            piVar17 = (int *)((int)local_48 + ((int)local_44 - *param_2 & 0xfffffffc));
            if (piVar17 != (int *)0x0) {
              *piVar17 = iVar7;
            }
            piVar15 = (int *)param_2[1];
            piVar10 = (int *)((int)local_48 + ((int)local_44 - *param_2 & 0xfffffffc));
            for (piVar17 = local_44; piVar17 != piVar15; piVar17 = piVar17 + 1) {
              piVar10 = piVar10 + 1;
              if (piVar10 != (int *)0x0) {
                *piVar10 = *piVar17;
              }
            }
            uVar1 = param_2[1];
            uVar12 = *param_2;
            uVar16 = uVar12;
            if (uVar1 <= uVar12) {
              for (; uVar16 != uVar1; uVar16 = uVar16 + 4) {
              }
            }
            fn_001008c4(uVar12,(int)(param_2[2] - uVar12) >> 2,0);
            *param_2 = (uint)local_48;
            param_2[1] = (uint)(local_48 + ((int)(uVar1 - uVar12) >> 2) + 1);
            param_2[2] = (uint)(local_48 + (int)local_40);
          }
        }
        else {
          param_2[1] = (uint)(piVar17 + 1);
          if (piVar17 != (int *)0x0) {
            *piVar17 = iVar7;
          }
        }
        uVar13 = uVar13 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar2 = fn_002bfb90(param_1,uVar13);
  local_48 = (int *)(iVar2 * 0xc);
  puVar6 = (undefined4 *)param_2[1];
  puVar11 = (undefined4 *)*param_2;
  piVar17 = (int *)((int)puVar6 - (int)puVar11 >> 2);
  if (piVar17 < local_48) {
    iVar2 = (int)local_48 - (int)piVar17;
    if (iVar2 != 0) {
      piVar17 = (int *)(iVar2 + (int)piVar17);
      if ((int *)((int)(param_2[2] - (int)puVar11) >> 2) < piVar17) {
        local_44 = piVar17;
        uVar16 = (int)(param_2[1] - *param_2) >> 2;
        local_38 = (int *)(uVar16 + (uVar16 >> 1) + (uVar16 >> 3));
        if (local_38 < (int *)(uVar16 + 0x20)) {
          local_38 = (int *)(uVar16 + 0x20);
        }
        ppiVar4 = &local_38;
        if (local_38 <= piVar17) {
          ppiVar4 = &local_44;
        }
        local_40 = *ppiVar4;
        puVar14 = (undefined4 *)fn_00100fc6((int)local_40 << 2,0);
        puVar5 = puVar14;
        for (puVar11 = (undefined4 *)*param_2; puVar11 != puVar6; puVar11 = puVar11 + 1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar11;
          }
          puVar5 = puVar5 + 1;
        }
        puVar11 = (undefined4 *)(((int)puVar6 - *param_2 & 0xfffffffc) + (int)puVar14);
        for (iVar3 = iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = 0;
          }
          puVar11 = puVar11 + 1;
        }
        puVar5 = (undefined4 *)param_2[1];
        puVar11 = puVar14 + iVar2 + ((int)((int)puVar6 - *param_2) >> 2);
        for (; puVar6 != puVar5; puVar6 = puVar6 + 1) {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = *puVar6;
          }
          puVar11 = puVar11 + 1;
        }
        uVar1 = *param_2;
        uVar12 = param_2[1];
        uVar16 = uVar1;
        if (uVar12 < uVar1) {
          do {
            uVar16 = uVar16 + 4;
          } while (uVar16 != uVar12);
        }
        fn_001008c4(uVar1,(int)(param_2[2] - uVar1) >> 2,0);
        param_2[2] = (uint)(puVar14 + (int)local_40);
        param_2[1] = (uint)(puVar14 + ((int)(uVar12 - uVar1) >> 2) + iVar2);
        *param_2 = (uint)puVar14;
      }
      else {
        puVar11 = puVar6 + iVar2;
        param_2[1] = (uint)(puVar6 + iVar2);
        if (puVar11 < puVar6) {
          puVar9 = puVar6 + -iVar2;
          puVar14 = puVar6;
          for (puVar5 = puVar9; puVar5 != puVar6; puVar5 = puVar5 + 1) {
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = *puVar5;
            }
            puVar14 = puVar14 + 1;
          }
          puVar5 = puVar6;
          if (puVar6 < puVar9) {
            iVar2 = (int)puVar9 - (int)puVar6;
            if (0 < iVar2) {
              if (iVar2 * 0x20000000 < 0) {
                puVar9 = puVar9 + -1;
                puVar5 = puVar6 + -1;
                *puVar5 = *puVar9;
              }
              for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                puVar5[-1] = puVar9[-1];
                puVar9 = puVar9 + -2;
                puVar5 = puVar5 + -2;
                *puVar5 = *puVar9;
              }
            }
          }
          else {
            while (puVar6 != puVar9) {
              puVar9 = puVar9 + -1;
              puVar5[-1] = *puVar9;
              puVar5 = puVar5 + -1;
            }
          }
          if (puVar6 < puVar11) {
            iVar2 = (int)puVar11 - (int)puVar6;
            if (0 < iVar2) {
              puVar11 = puVar6;
              if (iVar2 * 0x20000000 < 0) {
                puVar11 = puVar6 + 1;
                *puVar6 = 0;
              }
              for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                puVar6 = puVar11 + 1;
                *puVar11 = 0;
                puVar11 = puVar11 + 2;
                *puVar6 = 0;
              }
            }
          }
          else {
            for (; puVar6 != puVar11; puVar6 = puVar6 + 1) {
              *puVar6 = 0;
            }
          }
        }
        else {
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = 0;
            }
            puVar6 = puVar6 + 1;
          }
        }
      }
    }
  }
  else if ((local_48 < piVar17) && (puVar5 = puVar11 + iVar2 * 0xc, puVar11 != puVar6)) {
    puVar11 = puVar5;
    if (puVar6 <= puVar5) {
      for (; puVar11 != puVar6; puVar11 = puVar11 + 1) {
      }
    }
    param_2[1] = (int)puVar6 - ((int)puVar6 - (int)puVar5 & 0xfffffffcU);
  }
  uVar16 = (int)local_48 - uVar13;
  if (0 < (int)uVar16) {
    iVar2 = 0;
    if ((int)uVar13 < (int)local_48) {
      uVar1 = uVar16 & 1;
      if (uVar1 != 0) {
        iVar2 = 1;
        *(undefined4 *)(*param_2 + uVar13 * 4) = 0;
      }
    }
    else {
      uVar1 = 0;
    }
    for (; (int)uVar1 < (int)uVar16; uVar1 = uVar1 + 2) {
      iVar3 = iVar2 + 1;
      *(undefined4 *)(*param_2 + (uVar13 + iVar2) * 4) = 0;
      iVar2 = iVar2 + 2;
      *(undefined4 *)(*param_2 + (uVar13 + iVar3) * 4) = 0;
    }
  }
  iVar2 = param_1[0x2c];
  bVar18 = iVar2 == 0;
  if (bVar18) {
    iVar2 = param_1[0x2d];
  }
  if (!bVar18 || iVar2 != 0) {
    (**(code **)(*param_1 + 0x1a8))(param_1,local_3c);
  }
  return;
}


