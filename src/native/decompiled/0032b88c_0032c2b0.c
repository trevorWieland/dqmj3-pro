#include "0032b88c_0032c2b0.h"



undefined4 fn_0032c2b0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  
  piVar8 = *(int **)(param_1 + 0x90);
  piVar9 = *(int **)(param_1 + 0x94);
  piVar5 = piVar8;
  if (piVar8 != piVar9) {
    for (; piVar9 != piVar5; piVar5 = piVar5 + 1) {
      if (*(char *)(*piVar5 + 0x104) == *(char *)(param_2 + 0x104)) {
        return 0;
      }
    }
    puVar10 = (uint *)(param_1 + 0x90);
    if (piVar9 == *(int **)(param_1 + 0x98)) {
      uVar3 = (int)piVar9 - (int)piVar8 >> 2;
      if (uVar3 < (uint)((int)*(int **)(param_1 + 0x98) - (int)piVar8 >> 2)) {
        *(int **)(param_1 + 0x94) = piVar9 + 1;
        if (piVar9 != (int *)0x0) {
          *piVar9 = piVar9[-1];
        }
        piVar5 = piVar9 + -1;
        piVar8 = piVar9;
        if (piVar9 < piVar5) {
          if (0 < (int)piVar5 - (int)piVar9) {
            iVar7 = (int)piVar5 - (int)piVar9 >> 2;
            iVar4 = 0;
            do {
              iVar7 = iVar7 + -1;
              piVar9[iVar4 + -1] = piVar5[iVar4 + -1];
              iVar4 = iVar4 + -1;
            } while (iVar7 != 0);
          }
        }
        else {
          while (piVar9 != piVar5) {
            piVar5 = piVar5 + -1;
            piVar8[-1] = *piVar5;
            piVar8 = piVar8 + -1;
          }
        }
        *piVar9 = param_2;
      }
      else {
        uVar11 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
        if (uVar11 < uVar3 + 0x20) {
          uVar11 = uVar3 + 0x20;
        }
        piVar1 = (int *)fn_00100fc6(uVar11 << 2,0);
        piVar8 = piVar1;
        for (piVar5 = (int *)*puVar10; piVar5 != piVar9; piVar5 = piVar5 + 1) {
          if (piVar8 != (int *)0x0) {
            *piVar8 = *piVar5;
          }
          piVar8 = piVar8 + 1;
        }
        piVar5 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar1);
        if (piVar5 != (int *)0x0) {
          *piVar5 = param_2;
        }
        piVar8 = *(int **)(param_1 + 0x94);
        piVar5 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar1);
        for (; piVar9 != piVar8; piVar9 = piVar9 + 1) {
          piVar5 = piVar5 + 1;
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar9;
          }
        }
        uVar2 = *puVar10;
        uVar6 = *(uint *)(param_1 + 0x94);
        uVar3 = uVar2;
        if (uVar6 < uVar2) {
          do {
            uVar3 = uVar3 + 4;
          } while (uVar3 != uVar6);
        }
        fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x98) - uVar2) >> 2,0);
        *(int **)(param_1 + 0x98) = piVar1 + uVar11;
        *(int **)(param_1 + 0x94) = piVar1 + ((int)(uVar6 - uVar2) >> 2) + 1;
        *puVar10 = (uint)piVar1;
      }
    }
    else {
      *(int **)(param_1 + 0x94) = piVar9 + 1;
      if (piVar9 != (int *)0x0) {
        *piVar9 = param_2;
      }
    }
  }
  return 1;
}



int fn_0032c264(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008242e8;
  iVar1 = fn_003a0154(param_1 + 1);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  return iVar1 + -4;
}



void fn_0032b88c(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint local_40;
  uint local_3c [2];
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 *puStack_28;
  
  puVar9 = (uint *)(param_1 + 0xc);
  puVar10 = (uint *)(param_2 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  if (puVar10 != puVar9) {
    puVar1 = *(undefined4 **)(param_2 + 0xc);
    puVar12 = (undefined4 *)*puVar10;
    puVar7 = (undefined4 *)*puVar9;
    uVar5 = (int)puVar1 - (int)puVar12;
    uVar11 = (int)uVar5 >> 2;
    if ((uint)(*(int *)(param_1 + 0x14) - (int)puVar7 >> 2) < uVar11) {
      local_40 = uVar11;
      uVar5 = *(int *)(param_1 + 0x10) - (int)puVar7 >> 2;
      local_3c[0] = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (local_3c[0] < uVar5 + 0x20) {
        local_3c[0] = uVar5 + 0x20;
      }
      puVar2 = local_3c;
      if (local_3c[0] <= uVar11) {
        puVar2 = &local_40;
      }
      uVar11 = *puVar2;
      puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
      puVar8 = *(undefined4 **)(param_2 + 0xc);
      puVar7 = puVar1;
      for (puVar12 = (undefined4 *)*puVar10; puVar12 != puVar8; puVar12 = puVar12 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar12;
        }
        puVar7 = puVar7 + 1;
      }
      uVar3 = *puVar9;
      uVar5 = uVar3;
      if (*(uint *)(param_1 + 0x10) < uVar3) {
        do {
          uVar5 = uVar5 + 4;
        } while (uVar5 != *(uint *)(param_1 + 0x10));
      }
      fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x14) - uVar3) >> 2,0);
      *puVar9 = (uint)puVar1;
      *(uint *)(param_1 + 0x10) = (*(int *)(param_2 + 0xc) - *puVar10 & 0xfffffffc) + (int)puVar1;
      *(undefined4 **)(param_1 + 0x14) = puVar1 + uVar11;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x10) - (int)puVar7 >> 2;
      if (uVar3 < uVar11) {
        puVar1 = puVar12 + uVar3;
        if (puVar12 < puVar1) {
          if (0 < (int)puVar1 - (int)puVar12) {
            iVar4 = 0;
            if (puVar12 < puVar1) {
              uVar11 = ((int)puVar1 - (int)puVar12 & 7U) >> 2;
              if (uVar11 != 0) {
                iVar4 = 1;
                *puVar7 = *puVar12;
              }
            }
            else {
              uVar11 = 0;
            }
            for (; (int)uVar11 < (int)puVar1 - (int)puVar12 >> 2; uVar11 = uVar11 + 2) {
              puVar7[iVar4] = puVar12[iVar4];
              puVar7[iVar4 + 1] = puVar12[iVar4 + 1];
              iVar4 = iVar4 + 2;
            }
          }
        }
        else {
          for (; puVar12 != puVar1; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        *(uint *)(param_1 + 0x10) = (*(int *)(param_2 + 0xc) - *puVar10 & 0xfffffffc) + *puVar9;
        puVar1 = *(undefined4 **)(param_2 + 0xc);
        puVar7 = (undefined4 *)(*puVar9 + uVar3 * 4);
        for (puVar12 = (undefined4 *)(*puVar10 + uVar3 * 4); puVar12 != puVar1;
            puVar12 = puVar12 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar12;
          }
          puVar7 = puVar7 + 1;
        }
      }
      else {
        if (puVar12 < puVar1) {
          if (0 < (int)uVar5) {
            iVar4 = 0;
            if (puVar12 < puVar1) {
              uVar3 = (uVar5 & 7) >> 2;
              if (uVar3 != 0) {
                iVar4 = 1;
                *puVar7 = *puVar12;
              }
            }
            else {
              uVar3 = 0;
            }
            for (; (int)uVar3 < (int)uVar11; uVar3 = uVar3 + 2) {
              puVar7[iVar4] = puVar12[iVar4];
              puVar7[iVar4 + 1] = puVar12[iVar4 + 1];
              iVar4 = iVar4 + 2;
            }
            puVar7 = (undefined4 *)((int)puVar7 + (uVar5 & 0xfffffffc));
          }
        }
        else {
          for (; puVar12 != puVar1; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        if (*(undefined4 **)(param_1 + 0x10) < puVar7) {
          do {
            puVar7 = puVar7 + 1;
          } while (puVar7 != *(undefined4 **)(param_1 + 0x10));
        }
        iVar4 = (*(int *)(param_2 + 0xc) - *puVar10 & 0xfffffffc) + *puVar9;
        *(int *)(param_1 + 0x10) = iVar4;
        *(int *)(param_1 + 0x14) = iVar4;
      }
    }
  }
  puVar9 = (uint *)(param_1 + 0x18);
  puVar10 = (uint *)(param_2 + 0x14);
  if (puVar10 != puVar9) {
    puVar12 = (undefined4 *)*puVar10;
    puVar1 = *(undefined4 **)(param_2 + 0x18);
    puVar7 = (undefined4 *)*puVar9;
    uVar5 = (int)puVar1 - (int)puVar12;
    uVar11 = (int)uVar5 >> 2;
    if ((uint)(*(int *)(param_1 + 0x20) - (int)puVar7 >> 2) < uVar11) {
      local_40 = uVar11;
      uVar5 = (int)(*(int *)(param_1 + 0x1c) - *puVar9) >> 2;
      local_3c[0] = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (local_3c[0] < uVar5 + 0x20) {
        local_3c[0] = uVar5 + 0x20;
      }
      puVar2 = local_3c;
      if (local_3c[0] <= uVar11) {
        puVar2 = &local_40;
      }
      uVar11 = *puVar2;
      puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
      puVar8 = *(undefined4 **)(param_2 + 0x18);
      puVar7 = puVar1;
      for (puVar12 = (undefined4 *)*puVar10; puVar12 != puVar8; puVar12 = puVar12 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar12;
        }
        puVar7 = puVar7 + 1;
      }
      uVar3 = *puVar9;
      uVar5 = uVar3;
      if (*(uint *)(param_1 + 0x1c) < uVar3) {
        do {
          uVar5 = uVar5 + 4;
        } while (uVar5 != *(uint *)(param_1 + 0x1c));
      }
      fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x20) - uVar3) >> 2,0);
      *puVar9 = (uint)puVar1;
      *(uint *)(param_1 + 0x1c) = (*(int *)(param_2 + 0x18) - *puVar10 & 0xfffffffc) + (int)puVar1;
      *(undefined4 **)(param_1 + 0x20) = puVar1 + uVar11;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x1c) - (int)puVar7 >> 2;
      if (uVar3 < uVar11) {
        puVar1 = puVar12 + uVar3;
        if (puVar12 < puVar1) {
          if (0 < (int)puVar1 - (int)puVar12) {
            iVar4 = 0;
            if (puVar12 < puVar1) {
              uVar11 = ((int)puVar1 - (int)puVar12 & 7U) >> 2;
              if (uVar11 != 0) {
                iVar4 = 1;
                *puVar7 = *puVar12;
              }
            }
            else {
              uVar11 = 0;
            }
            for (; (int)uVar11 < (int)puVar1 - (int)puVar12 >> 2; uVar11 = uVar11 + 2) {
              puVar7[iVar4] = puVar12[iVar4];
              puVar7[iVar4 + 1] = puVar12[iVar4 + 1];
              iVar4 = iVar4 + 2;
            }
          }
        }
        else {
          for (; puVar12 != puVar1; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        *(uint *)(param_1 + 0x1c) = (*(int *)(param_2 + 0x18) - *puVar10 & 0xfffffffc) + *puVar9;
        puVar1 = *(undefined4 **)(param_2 + 0x18);
        puVar7 = (undefined4 *)(*puVar9 + uVar3 * 4);
        for (puVar12 = (undefined4 *)(*puVar10 + uVar3 * 4); puVar12 != puVar1;
            puVar12 = puVar12 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar12;
          }
          puVar7 = puVar7 + 1;
        }
      }
      else {
        if (puVar12 < puVar1) {
          if (0 < (int)uVar5) {
            iVar4 = 0;
            if (puVar12 < puVar1) {
              uVar3 = (uVar5 & 7) >> 2;
              if (uVar3 != 0) {
                iVar4 = 1;
                *puVar7 = *puVar12;
              }
            }
            else {
              uVar3 = 0;
            }
            for (; (int)uVar3 < (int)uVar11; uVar3 = uVar3 + 2) {
              puVar7[iVar4] = puVar12[iVar4];
              puVar7[iVar4 + 1] = puVar12[iVar4 + 1];
              iVar4 = iVar4 + 2;
            }
            puVar7 = (undefined4 *)((int)puVar7 + (uVar5 & 0xfffffffc));
          }
        }
        else {
          for (; puVar12 != puVar1; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        if (*(undefined4 **)(param_1 + 0x1c) < puVar7) {
          do {
            puVar7 = puVar7 + 1;
          } while (puVar7 != *(undefined4 **)(param_1 + 0x1c));
        }
        iVar4 = (*(int *)(param_2 + 0x18) - *puVar10 & 0xfffffffc) + *puVar9;
        *(int *)(param_1 + 0x1c) = iVar4;
        *(int *)(param_1 + 0x20) = iVar4;
      }
    }
  }
  fn_00301a9c(param_1 + 0x24,local_2c,0x4c);
  uVar6 = param_4[1];
  *(undefined4 *)(param_1 + 0x70) = *param_4;
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  return;
}


