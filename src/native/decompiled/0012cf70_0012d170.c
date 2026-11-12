#include "0012cf70_0012d170.h"



void fn_0012d170(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 0x14;
      } while (uVar1 != uVar3);
    }
    param_1[1] = uVar3 + ((int)(uVar3 - uVar2) / 0x14) * -0x14;
  }
  return;
}



undefined4 fn_0012cf70(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  
  puVar10 = *(undefined4 **)(param_1 + 8);
  uVar4 = 0;
  uVar9 = (int)puVar10 - *(int *)(param_1 + 4) >> 2;
  if (uVar9 != 0) {
    do {
      if (*(int **)(*(int *)(param_1 + 4) + uVar4 * 4) == param_2) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar9);
  }
  puVar11 = (uint *)(param_1 + 4);
  if (puVar10 == *(undefined4 **)(param_1 + 0xc)) {
    if (uVar9 < (uint)((int)*(undefined4 **)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2)) {
      *(undefined4 **)(param_1 + 8) = puVar10 + 1;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = puVar10[-1];
      }
      puVar2 = puVar10 + -1;
      puVar6 = puVar10;
      if (puVar10 < puVar2) {
        if (0 < (int)puVar2 - (int)puVar10) {
          iVar7 = (int)puVar2 - (int)puVar10 >> 2;
          iVar5 = 0;
          do {
            iVar7 = iVar7 + -1;
            puVar10[iVar5 + -1] = puVar2[iVar5 + -1];
            iVar5 = iVar5 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        while (puVar10 != puVar2) {
          puVar2 = puVar2 + -1;
          puVar6[-1] = *puVar2;
          puVar6 = puVar6 + -1;
        }
      }
      *puVar10 = param_2;
    }
    else {
      uVar4 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (uVar4 < uVar9 + 0x20) {
        uVar4 = uVar9 + 0x20;
      }
      puVar1 = (undefined4 *)fn_00100fc6(uVar4 << 2,0);
      puVar6 = puVar1;
      for (puVar2 = (undefined4 *)*puVar11; puVar2 != puVar10; puVar2 = puVar2 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar2;
        }
        puVar6 = puVar6 + 1;
      }
      puVar2 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_2;
      }
      puVar6 = *(undefined4 **)(param_1 + 8);
      puVar2 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar1);
      for (; puVar10 != puVar6; puVar10 = puVar10 + 1) {
        puVar2 = puVar2 + 1;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar10;
        }
      }
      uVar8 = *puVar11;
      uVar3 = *(uint *)(param_1 + 8);
      uVar9 = uVar8;
      if (uVar3 < uVar8) {
        do {
          uVar9 = uVar9 + 4;
        } while (uVar9 != uVar3);
      }
      fn_001008c4(uVar8,(int)(*(int *)(param_1 + 0xc) - uVar8) >> 2,0);
      *(undefined4 **)(param_1 + 0xc) = puVar1 + uVar4;
      *(undefined4 **)(param_1 + 8) = puVar1 + ((int)(uVar3 - uVar8) >> 2) + 1;
      *puVar11 = (uint)puVar1;
    }
  }
  else {
    *(undefined4 **)(param_1 + 8) = puVar10 + 1;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = param_2;
    }
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  return 1;
}


