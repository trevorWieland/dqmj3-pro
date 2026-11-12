#include "003b8d3c_003b9d34bb.h"



void fn_003b9d34(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar9 = (uint *)(param_1 + 0xc);
  puVar1 = (undefined4 *)*puVar9;
  puVar10 = (uint *)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar9 = (uint)(puVar1 + 1);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
    }
    return;
  }
  uVar4 = (int)((int)puVar1 - *puVar10) >> 2;
  if (uVar4 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x10) - *puVar10) >> 2)) {
    *puVar9 = (uint)(puVar1 + 1);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar1[-1];
    }
    puVar6 = puVar1 + -1;
    puVar7 = puVar1;
    if (puVar1 < puVar6) {
      iVar5 = (int)puVar6 - (int)puVar1;
      if (0 < iVar5) {
        if (iVar5 * 0x20000000 < 0) {
          puVar6 = puVar1 + -2;
          puVar7 = puVar1 + -1;
          *puVar7 = *puVar6;
        }
        for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar7[-1] = puVar6[-1];
          puVar6 = puVar6 + -2;
          puVar7 = puVar7 + -2;
          *puVar7 = *puVar6;
        }
      }
    }
    else {
      while (puVar1 != puVar6) {
        puVar6 = puVar6 + -1;
        puVar7[-1] = *puVar6;
        puVar7 = puVar7 + -1;
      }
    }
    *puVar1 = *param_2;
    return;
  }
  uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  if (uVar11 < uVar4 + 0x20) {
    uVar11 = uVar4 + 0x20;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
  puVar7 = puVar2;
  for (puVar6 = (undefined4 *)*puVar10; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar6;
    }
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)(((int)puVar1 - *puVar10 & 0xfffffffc) + (int)puVar2);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_2;
  }
  puVar7 = (undefined4 *)*puVar9;
  puVar6 = (undefined4 *)(((int)puVar1 - *puVar10 & 0xfffffffc) + (int)puVar2);
  for (; puVar1 != puVar7; puVar1 = puVar1 + 1) {
    puVar6 = puVar6 + 1;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar1;
    }
  }
  uVar3 = *puVar10;
  uVar8 = *puVar9;
  uVar4 = uVar3;
  if (uVar8 < uVar3) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != uVar8);
  }
  fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x10) - uVar3) >> 2,0);
  *(undefined4 **)(param_1 + 0x10) = puVar2 + uVar11;
  *puVar9 = (uint)(puVar2 + ((int)(uVar8 - uVar3) >> 2) + 1);
  *puVar10 = (uint)puVar2;
  return;
}



void fn_003b9d30(void)

{
  return;
}



void fn_003b9cfc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &PTR_LAB_0082f17c;
  return;
}


