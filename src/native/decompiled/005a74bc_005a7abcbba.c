#include "005a74bc_005a7abcbba.h"



void fn_005a789c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint in_fpscr;
  
  iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
  if (iVar1 == 0) {
    uVar12 = 0;
  }
  else {
    VectorSignedToFloat((int)*(char *)(*(int *)(param_1 + 0x40) + 0xe0),(byte)(in_fpscr >> 0x16) & 3
                       );
    uVar12 = fn_005f777c(iVar1,*(undefined4 *)(param_1 + 0x60),(int)*(char *)(param_1 + 0x58));
  }
  fn_005f729c(uVar12,param_2);
  fn_005f7320(uVar12,param_3,param_4);
  puVar10 = (uint *)(param_1 + 0x4c);
  puVar9 = *(undefined4 **)(param_1 + 0x50);
  if (puVar9 != *(undefined4 **)(param_1 + 0x54)) {
    *(undefined4 **)(param_1 + 0x50) = puVar9 + 1;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uVar12;
    }
    return;
  }
  uVar4 = (int)((int)puVar9 - *puVar10) >> 2;
  if ((uint)((int)((int)*(undefined4 **)(param_1 + 0x54) - *puVar10) >> 2) <= uVar4) {
    uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar11 < uVar4 + 0x20) {
      uVar11 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar7 = puVar2;
    for (puVar6 = (undefined4 *)*puVar10; puVar6 != puVar9; puVar6 = puVar6 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar6;
      }
      puVar7 = puVar7 + 1;
    }
    puVar6 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = uVar12;
    }
    puVar7 = *(undefined4 **)(param_1 + 0x50);
    puVar6 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
    for (; puVar9 != puVar7; puVar9 = puVar9 + 1) {
      puVar6 = puVar6 + 1;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar9;
      }
    }
    uVar3 = *puVar10;
    uVar8 = *(uint *)(param_1 + 0x50);
    uVar4 = uVar3;
    if (uVar8 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar8);
    }
    fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x54) - uVar3) >> 2,0);
    *(undefined4 **)(param_1 + 0x54) = puVar2 + uVar11;
    *(undefined4 **)(param_1 + 0x50) = puVar2 + ((int)(uVar8 - uVar3) >> 2) + 1;
    *puVar10 = (uint)puVar2;
    return;
  }
  *(undefined4 **)(param_1 + 0x50) = puVar9 + 1;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = puVar9[-1];
  }
  puVar6 = puVar9 + -1;
  puVar7 = puVar9;
  if (puVar9 < puVar6) {
    if (0 < (int)puVar6 - (int)puVar9) {
      iVar1 = (int)puVar6 - (int)puVar9 >> 2;
      iVar5 = 0;
      do {
        iVar1 = iVar1 + -1;
        puVar9[iVar5 + -1] = puVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    while (puVar9 != puVar6) {
      puVar6 = puVar6 + -1;
      puVar7[-1] = *puVar6;
      puVar7 = puVar7 + -1;
    }
  }
  *puVar9 = uVar12;
  return;
}


