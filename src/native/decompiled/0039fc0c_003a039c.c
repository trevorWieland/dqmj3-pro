#include "0039fc0c_003a039c.h"



undefined4 * fn_003a039c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_0082d554;
  fn_0028e434(puVar1[4],&DAT_007c9188);
  fn_0028e434(puVar1[5],&DAT_007c9214);
  fn_0028e434(puVar1[3],&DAT_007c9584);
  fn_0028e434(puVar1[6],&DAT_007c95d4);
  return puVar1;
}



undefined4 * fn_003a030c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082d544;
  uVar1 = param_1[5];
  uVar2 = uVar1;
  if ((uint)param_1[6] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[6]);
  }
  fn_001008c4(uVar1,(int)(param_1[7] - uVar1) >> 2,0);
  uVar1 = param_1[2];
  uVar2 = uVar1;
  if ((uint)param_1[3] <= uVar1) {
    for (; uVar2 != param_1[3]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[4] - uVar1) >> 2,0);
  return param_1;
}



void fn_003a0280(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082d544;
  uVar1 = param_1[5];
  uVar2 = uVar1;
  if ((uint)param_1[6] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[6]);
  }
  fn_001008c4(uVar1,(int)(param_1[7] - uVar1) >> 2,0);
  uVar1 = param_1[2];
  uVar2 = uVar1;
  if ((uint)param_1[3] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[3]);
  }
  fn_001008c4(uVar1,(int)(param_1[4] - uVar1) >> 2,0);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_003a0154(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint local_20;
  uint local_1c [2];
  
  param_1[1] = 0;
  *param_1 = &DAT_0082d544;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_20 = 0x80;
  puVar8 = param_1 + 2;
  if ((uint)((int)(param_1[4] - param_1[2]) >> 2) < 0x80) {
    uVar9 = (int)(param_1[3] - param_1[2]) >> 2;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar5 = local_1c;
    if (local_1c[0] < 0x81) {
      puVar5 = &local_20;
    }
    uVar9 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar7 = (undefined4 *)param_1[3];
    puVar2 = puVar1;
    for (puVar6 = (undefined4 *)*puVar8; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar6;
      }
      puVar2 = puVar2 + 1;
    }
    uVar3 = *puVar8;
    uVar4 = uVar3;
    if ((uint)param_1[3] < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != param_1[3]);
    }
    fn_001008c4(uVar3,(int)(param_1[4] - uVar3) >> 2,0);
    uVar4 = *puVar8;
    param_1[2] = puVar1;
    param_1[3] = (param_1[3] - uVar4 & 0xfffffffc) + (int)puVar1;
    param_1[4] = puVar1 + uVar9;
  }
  return param_1;
}



undefined4 * fn_003a0014(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint local_20;
  uint local_1c;
  
  *param_1 = &DAT_0082d544;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_20 = 0x80;
  puVar8 = param_1 + 2;
  if ((uint)((int)(param_1[4] - param_1[2]) >> 2) < 0x80) {
    uVar9 = (int)(param_1[3] - param_1[2]) >> 2;
    local_1c = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c < uVar9 + 0x20) {
      local_1c = uVar9 + 0x20;
    }
    puVar5 = &local_1c;
    if (local_1c < 0x81) {
      puVar5 = &local_20;
    }
    uVar9 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar6 = (undefined4 *)param_1[3];
    puVar2 = puVar1;
    for (puVar7 = (undefined4 *)*puVar8; puVar7 != puVar6; puVar7 = puVar7 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar7;
      }
      puVar2 = puVar2 + 1;
    }
    uVar3 = *puVar8;
    uVar4 = uVar3;
    if ((uint)param_1[3] < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != param_1[3]);
    }
    fn_001008c4(uVar3,(int)(param_1[4] - uVar3) >> 2,0);
    uVar4 = *puVar8;
    param_1[2] = puVar1;
    param_1[3] = (param_1[3] - uVar4 & 0xfffffffc) + (int)puVar1;
    param_1[4] = puVar1 + uVar9;
  }
  param_1[1] = param_2;
  fn_0039fc0c(param_1,param_2);
  return param_1;
}



void fn_0039fc0c(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0xc);
  if (uVar3 != uVar8) {
    uVar1 = uVar3;
    if (uVar8 <= uVar3) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar8);
    }
    *(uint *)(param_1 + 0xc) = uVar8 - (uVar8 - uVar3 & 0xfffffffc);
  }
  iVar14 = 8;
  iVar13 = 0;
  iVar12 = param_2 + 0xc;
  if ('\0' < *(char *)(param_2 + 8)) {
    do {
      piVar10 = *(int **)(param_1 + 0xc);
      puVar11 = (uint *)(param_1 + 8);
      if (piVar10 == *(int **)(param_1 + 0x10)) {
        uVar3 = (int)((int)piVar10 - *puVar11) >> 2;
        if (uVar3 < (uint)((int)((int)*(int **)(param_1 + 0x10) - *puVar11) >> 2)) {
          *(int **)(param_1 + 0xc) = piVar10 + 1;
          if (piVar10 != (int *)0x0) {
            *piVar10 = piVar10[-1];
          }
          piVar5 = piVar10 + -1;
          piVar6 = piVar10;
          if (piVar10 < piVar5) {
            if (0 < (int)piVar5 - (int)piVar10) {
              iVar9 = (int)piVar5 - (int)piVar10 >> 2;
              iVar4 = 0;
              do {
                iVar9 = iVar9 + -1;
                piVar10[iVar4 + -1] = piVar5[iVar4 + -1];
                iVar4 = iVar4 + -1;
              } while (iVar9 != 0);
            }
          }
          else {
            while (piVar10 != piVar5) {
              piVar5 = piVar5 + -1;
              piVar6[-1] = *piVar5;
              piVar6 = piVar6 + -1;
            }
          }
          *piVar10 = iVar12;
        }
        else {
          uVar1 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          uVar8 = uVar3 + 0x20;
          if (uVar3 + 0x20 <= uVar1) {
            uVar8 = uVar1;
          }
          piVar2 = (int *)fn_00100fc6(uVar8 << 2,0);
          piVar6 = piVar2;
          for (piVar5 = (int *)*puVar11; piVar5 != piVar10; piVar5 = piVar5 + 1) {
            if (piVar6 != (int *)0x0) {
              *piVar6 = *piVar5;
            }
            piVar6 = piVar6 + 1;
          }
          piVar5 = (int *)(((int)piVar10 - *puVar11 & 0xfffffffc) + (int)piVar2);
          if (piVar5 != (int *)0x0) {
            *piVar5 = iVar12;
          }
          piVar6 = *(int **)(param_1 + 0xc);
          piVar5 = (int *)(((int)piVar10 - *puVar11 & 0xfffffffc) + (int)piVar2);
          for (; piVar10 != piVar6; piVar10 = piVar10 + 1) {
            piVar5 = piVar5 + 1;
            if (piVar5 != (int *)0x0) {
              *piVar5 = *piVar10;
            }
          }
          uVar1 = *puVar11;
          uVar7 = *(uint *)(param_1 + 0xc);
          uVar3 = uVar1;
          if (uVar7 < uVar1) {
            do {
              uVar3 = uVar3 + 4;
            } while (uVar3 != uVar7);
          }
          fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0x10) - uVar1) >> 2,0);
          *(int **)(param_1 + 0x10) = piVar2 + uVar8;
          *(int **)(param_1 + 0xc) = piVar2 + ((int)(uVar7 - uVar1) >> 2) + 1;
          *puVar11 = (uint)piVar2;
        }
      }
      else {
        *(int **)(param_1 + 0xc) = piVar10 + 1;
        if (piVar10 != (int *)0x0) {
          *piVar10 = iVar12;
        }
      }
      iVar13 = iVar13 + 1;
      iVar14 = iVar14 + (uint)*(byte *)(iVar12 + 3) * 0x10 + 8;
      iVar12 = param_2 + iVar14 + 4;
    } while (iVar13 < *(char *)(param_2 + 8));
  }
  iVar13 = 0;
  if ('\0' < *(char *)(param_2 + 9)) {
    do {
      piVar10 = *(int **)(param_1 + 0x18);
      puVar11 = (uint *)(param_1 + 0x14);
      if (piVar10 == *(int **)(param_1 + 0x1c)) {
        uVar3 = (int)((int)piVar10 - *puVar11) >> 2;
        if (uVar3 < (uint)((int)((int)*(int **)(param_1 + 0x1c) - *puVar11) >> 2)) {
          *(int **)(param_1 + 0x18) = piVar10 + 1;
          if (piVar10 != (int *)0x0) {
            *piVar10 = piVar10[-1];
          }
          piVar5 = piVar10 + -1;
          piVar6 = piVar10;
          if (piVar10 < piVar5) {
            if (0 < (int)piVar5 - (int)piVar10) {
              iVar14 = (int)piVar5 - (int)piVar10 >> 2;
              iVar9 = 0;
              do {
                iVar14 = iVar14 + -1;
                piVar10[iVar9 + -1] = piVar5[iVar9 + -1];
                iVar9 = iVar9 + -1;
              } while (iVar14 != 0);
            }
          }
          else {
            while (piVar10 != piVar5) {
              piVar5 = piVar5 + -1;
              piVar6[-1] = *piVar5;
              piVar6 = piVar6 + -1;
            }
          }
          *piVar10 = iVar12;
        }
        else {
          uVar8 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          if (uVar8 < uVar3 + 0x20) {
            uVar8 = uVar3 + 0x20;
          }
          piVar2 = (int *)fn_00100fc6(uVar8 << 2,0);
          piVar6 = piVar2;
          for (piVar5 = (int *)*puVar11; piVar5 != piVar10; piVar5 = piVar5 + 1) {
            if (piVar6 != (int *)0x0) {
              *piVar6 = *piVar5;
            }
            piVar6 = piVar6 + 1;
          }
          piVar5 = (int *)(((int)piVar10 - *puVar11 & 0xfffffffc) + (int)piVar2);
          if (piVar5 != (int *)0x0) {
            *piVar5 = iVar12;
          }
          piVar6 = *(int **)(param_1 + 0x18);
          piVar5 = (int *)(((int)piVar10 - *puVar11 & 0xfffffffc) + (int)piVar2);
          for (; piVar10 != piVar6; piVar10 = piVar10 + 1) {
            piVar5 = piVar5 + 1;
            if (piVar5 != (int *)0x0) {
              *piVar5 = *piVar10;
            }
          }
          uVar1 = *puVar11;
          uVar7 = *(uint *)(param_1 + 0x18);
          uVar3 = uVar1;
          if (uVar7 < uVar1) {
            do {
              uVar3 = uVar3 + 4;
            } while (uVar3 != uVar7);
          }
          fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0x1c) - uVar1) >> 2,0);
          *(int **)(param_1 + 0x1c) = piVar2 + uVar8;
          *(int **)(param_1 + 0x18) = piVar2 + ((int)(uVar7 - uVar1) >> 2) + 1;
          *puVar11 = (uint)piVar2;
        }
      }
      else {
        *(int **)(param_1 + 0x18) = piVar10 + 1;
        if (piVar10 != (int *)0x0) {
          *piVar10 = iVar12;
        }
      }
      iVar13 = iVar13 + 1;
      iVar12 = iVar12 + 0x48;
    } while (iVar13 < *(char *)(param_2 + 9));
  }
  return;
}


