#include "0018ca4c_0018cdf4bbb.h"



int fn_0018cdf4(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 == 0) {
    return -1;
  }
  uVar10 = *(uint *)(param_2 + 0x88);
  puVar8 = (uint *)(param_1 + 8);
  *(uint *)(param_2 + 0x88) = uVar10 & 0xfffffffe;
  uVar10 = param_4 & 0xffffff00 | (uint)((~uVar10 & 1) == 0);
  piVar7 = *(int **)(param_1 + 0xc);
  if (piVar7 == *(int **)(param_1 + 0x10)) {
    uVar3 = (int)((int)piVar7 - *puVar8) >> 3;
    if (uVar3 < (uint)((int)((int)*(int **)(param_1 + 0x10) - *puVar8) >> 3)) {
      *(int **)(param_1 + 0xc) = piVar7 + 2;
      if (piVar7 != (int *)0x0) {
        *piVar7 = piVar7[-2];
        piVar7[1] = piVar7[-1];
      }
      piVar4 = piVar7 + -2;
      piVar5 = piVar7;
      if (piVar7 < piVar4) {
        iVar11 = (int)piVar4 - (int)piVar7;
        if (0 < iVar11) {
          if (iVar11 * 0x10000000 < 0) {
            piVar4 = piVar7 + -4;
            piVar5 = piVar7 + -2;
            *piVar5 = *piVar4;
            piVar7[-1] = piVar7[-3];
          }
          for (iVar11 = iVar11 >> 4; iVar11 != 0; iVar11 = iVar11 + -1) {
            iVar12 = piVar4[-1];
            piVar5[-2] = piVar4[-2];
            piVar5[-1] = iVar12;
            iVar12 = piVar4[-3];
            piVar5[-4] = piVar4[-4];
            piVar5[-3] = iVar12;
            piVar4 = piVar4 + -4;
            piVar5 = piVar5 + -4;
          }
        }
      }
      else {
        while (piVar7 != piVar4) {
          iVar11 = piVar4[-1];
          piVar5[-2] = piVar4[-2];
          piVar5[-1] = iVar11;
          piVar5 = piVar5 + -2;
          piVar4 = piVar4 + -2;
        }
      }
      *piVar7 = param_2;
      piVar7[1] = uVar10;
    }
    else {
      uVar9 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
      if (uVar9 < uVar3 + 0x20) {
        uVar9 = uVar3 + 0x20;
      }
      piVar1 = (int *)fn_00100fc6(uVar9 << 3,0);
      piVar5 = piVar1;
      for (piVar4 = (int *)*puVar8; piVar4 != piVar7; piVar4 = piVar4 + 2) {
        if (piVar5 != (int *)0x0) {
          iVar11 = piVar4[1];
          *piVar5 = *piVar4;
          piVar5[1] = iVar11;
        }
        piVar5 = piVar5 + 2;
      }
      piVar4 = (int *)(((int)piVar7 - *puVar8 & 0xfffffff8) + (int)piVar1);
      if (piVar4 != (int *)0x0) {
        *piVar4 = param_2;
        piVar4[1] = uVar10;
      }
      piVar5 = *(int **)(param_1 + 0xc);
      piVar4 = (int *)(((int)piVar7 - *puVar8 & 0xfffffff8) + (int)piVar1);
      for (; piVar7 != piVar5; piVar7 = piVar7 + 2) {
        piVar2 = piVar4 + 2;
        if (piVar2 != (int *)0x0) {
          iVar11 = piVar7[1];
          *piVar2 = *piVar7;
          piVar4[3] = iVar11;
        }
        piVar4 = piVar2;
      }
      uVar3 = *puVar8;
      uVar6 = *(uint *)(param_1 + 0xc);
      uVar10 = uVar3;
      if (uVar6 < uVar3) {
        do {
          uVar10 = uVar10 + 8;
        } while (uVar10 != uVar6);
      }
      fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x10) - uVar3) >> 3,0);
      *(int **)(param_1 + 0x10) = piVar1 + uVar9 * 2;
      *(int **)(param_1 + 0xc) = piVar1 + ((int)(uVar6 - uVar3) >> 3) * 2 + 2;
      *puVar8 = (uint)piVar1;
    }
  }
  else {
    *(int **)(param_1 + 0xc) = piVar7 + 2;
    if (piVar7 != (int *)0x0) {
      *piVar7 = param_2;
      piVar7[1] = uVar10;
    }
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3) + -1;
}


