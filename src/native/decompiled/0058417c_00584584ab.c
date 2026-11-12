#include "0058417c_00584584ab.h"



void fn_00584404(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00584434(iVar1,param_1);
  return;
}



void fn_005843a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 in_lr;
  
  fn_0039536c();
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar3 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar2 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar4 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_002feef8(uVar3,(int)(iVar4 - uVar3) >> 2,0,uVar3,unaff_r4,in_lr);
  return;
}



void fn_005841e4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar9 = (uint *)(param_1 + 0x1c);
  puVar8 = *(undefined4 **)(param_1 + 0x20);
  if (puVar8 != *(undefined4 **)(param_1 + 0x24)) {
    *(undefined4 **)(param_1 + 0x20) = puVar8 + 1;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = param_2;
    }
    return;
  }
  uVar2 = (int)((int)puVar8 - *puVar9) >> 2;
  if (uVar2 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x24) - *puVar9) >> 2)) {
    *(undefined4 **)(param_1 + 0x20) = puVar8 + 1;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = puVar8[-1];
    }
    puVar5 = puVar8 + -1;
    puVar6 = puVar8;
    if (puVar8 < puVar5) {
      iVar3 = (int)puVar5 - (int)puVar8;
      if (0 < iVar3) {
        if (iVar3 * 0x20000000 < 0) {
          puVar5 = puVar8 + -2;
          puVar6 = puVar8 + -1;
          *puVar6 = *puVar5;
        }
        for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar6[-1] = puVar5[-1];
          puVar5 = puVar5 + -2;
          puVar6 = puVar6 + -2;
          *puVar6 = *puVar5;
        }
      }
    }
    else {
      while (puVar8 != puVar5) {
        puVar5 = puVar5 + -1;
        puVar6[-1] = *puVar5;
        puVar6 = puVar6 + -1;
      }
    }
    *puVar8 = param_2;
    return;
  }
  uVar4 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
  uVar10 = uVar2 + 0x20;
  if (uVar2 + 0x20 <= uVar4) {
    uVar10 = uVar4;
  }
  puVar1 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
  puVar6 = puVar1;
  for (puVar5 = (undefined4 *)*puVar9; puVar5 != puVar8; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(((int)puVar8 - *puVar9 & 0xfffffffc) + (int)puVar1);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = param_2;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x20);
  puVar5 = (undefined4 *)(((int)puVar8 - *puVar9 & 0xfffffffc) + (int)puVar1);
  for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
    puVar5 = puVar5 + 1;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar8;
    }
  }
  uVar4 = *puVar9;
  uVar7 = *(uint *)(param_1 + 0x20);
  uVar2 = uVar4;
  if (uVar7 < uVar4) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != uVar7);
  }
  fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x24) - uVar4) >> 2,0);
  *(undefined4 **)(param_1 + 0x24) = puVar1 + uVar10;
  *(undefined4 **)(param_1 + 0x20) = puVar1 + ((int)(uVar7 - uVar4) >> 2) + 1;
  *puVar9 = (uint)puVar1;
  return;
}


