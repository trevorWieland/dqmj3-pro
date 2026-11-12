#include "00209634_00210174.h"



void fn_00210174(undefined4 param_1,undefined4 param_2)

{
  fn_005fe134(param_1,3,param_2);
  return;
}



void fn_0020fd10(undefined4 param_1,undefined4 param_2)

{
  fn_005fe134(param_1,2,param_2);
  return;
}



void fn_0020e628(undefined4 param_1,undefined4 param_2)

{
  fn_005fe134(param_1,4,param_2);
  return;
}



void fn_0020e3a4(undefined4 param_1,undefined4 param_2)

{
  fn_005fe134(param_1,5,param_2);
  return;
}



void fn_0020ddfc(undefined4 param_1,undefined4 param_2)

{
  fn_005fe134(param_1,1,param_2);
  return;
}



void fn_00209634(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  
  piVar7 = (int *)(param_1 + 0x74);
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 != *(int *)(param_1 + 0x7c)) {
    *(int *)(param_1 + 0x78) = iVar2 + 0x60;
    if (iVar2 != 0) {
      fn_002d65b4();
    }
    return;
  }
  uVar1 = (iVar2 - *(int *)(param_1 + 0x74)) / 0x60;
  if (uVar1 < (uint)((*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x74)) / 0x60)) {
    *(int *)(param_1 + 0x78) = iVar2 + 0x60;
    iVar11 = iVar2;
    iVar10 = iVar2;
    if (iVar2 != 0) {
      fn_002d65b4(iVar2,iVar2 + -0x60);
    }
    while (iVar2 != iVar10 + -0x60) {
      *(undefined1 *)(iVar11 + -0x5c) = *(undefined1 *)(iVar10 + -0xbc);
      *(undefined1 *)(iVar11 + -0x5b) = *(undefined1 *)(iVar10 + -0xbb);
      puVar8 = (undefined4 *)(iVar10 + -0xb8);
      puVar9 = (undefined4 *)(iVar11 + -0x58);
      *puVar9 = *puVar8;
      uVar4 = *(undefined4 *)(iVar10 + -0xb4);
      *puVar9 = *puVar8;
      *(undefined4 *)(iVar11 + -0x54) = uVar4;
      *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
      uVar4 = *(undefined4 *)(iVar10 + -0xb4);
      uVar5 = *(undefined4 *)(iVar10 + -0xb0);
      uVar6 = *(undefined4 *)(iVar10 + -0xac);
      uVar15 = *(undefined4 *)(iVar10 + -0xa8);
      puVar17 = (undefined4 *)(iVar10 + -0xa4);
      *puVar9 = *puVar8;
      *(undefined4 *)(iVar11 + -0x54) = uVar4;
      *(undefined4 *)(iVar11 + -0x50) = uVar5;
      *(undefined4 *)(iVar11 + -0x4c) = uVar6;
      *(undefined4 *)(iVar11 + -0x48) = uVar15;
      puVar18 = (undefined4 *)(iVar11 + -0x44);
      fn_0017821c(iVar11 + -0x58,iVar10 + -0xb8,0x48);
      fn_0017821c(iVar11 + -0x58,iVar10 + -0xb8,0x4c);
      puVar8 = (undefined4 *)(iVar10 + -0xb8);
      *(undefined2 *)(iVar11 + -0x58) = *(undefined2 *)puVar8;
      uVar4 = *(undefined4 *)(iVar10 + -0xb4);
      uVar5 = *(undefined4 *)(iVar10 + -0xb0);
      uVar6 = *(undefined4 *)(iVar10 + -0xac);
      uVar15 = *(undefined4 *)(iVar10 + -0xa8);
      uVar12 = *puVar17;
      uVar13 = *(undefined4 *)(iVar10 + -0xa0);
      uVar16 = *(undefined4 *)(iVar10 + -0x9c);
      *(undefined4 *)(iVar11 + -0x58) = *puVar8;
      *(undefined4 *)(iVar11 + -0x54) = uVar4;
      *(undefined4 *)(iVar11 + -0x50) = uVar5;
      *(undefined4 *)(iVar11 + -0x4c) = uVar6;
      *(undefined4 *)(iVar11 + -0x48) = uVar15;
      *puVar18 = uVar12;
      *(undefined4 *)(iVar11 + -0x40) = uVar13;
      *(undefined4 *)(iVar11 + -0x3c) = uVar16;
      *(undefined4 *)(iVar11 + -0x38) = *(undefined4 *)(iVar10 + -0x98);
      uVar4 = *(undefined4 *)(iVar10 + -0xb4);
      uVar5 = *(undefined4 *)(iVar10 + -0xb0);
      uVar6 = *(undefined4 *)(iVar10 + -0xac);
      uVar15 = *(undefined4 *)(iVar10 + -0xa8);
      puVar9 = (undefined4 *)(iVar11 + -0x58);
      *puVar9 = *puVar8;
      *(undefined4 *)(iVar11 + -0x54) = uVar4;
      *(undefined4 *)(iVar11 + -0x50) = uVar5;
      *(undefined4 *)(iVar11 + -0x4c) = uVar6;
      *(undefined4 *)(iVar11 + -0x48) = uVar15;
      uVar4 = *(undefined4 *)(iVar10 + -0xb4);
      uVar5 = *(undefined4 *)(iVar10 + -0xb0);
      uVar6 = *(undefined4 *)(iVar10 + -0xac);
      uVar15 = *(undefined4 *)(iVar10 + -0xa8);
      *puVar9 = *puVar8;
      *(undefined4 *)(iVar11 + -0x54) = uVar4;
      *(undefined4 *)(iVar11 + -0x50) = uVar5;
      *(undefined4 *)(iVar11 + -0x4c) = uVar6;
      *(undefined4 *)(iVar11 + -0x48) = uVar15;
      uVar4 = *(undefined4 *)(iVar10 + -0xb4);
      uVar5 = *(undefined4 *)(iVar10 + -0xb0);
      uVar6 = *(undefined4 *)(iVar10 + -0xac);
      uVar15 = *(undefined4 *)(iVar10 + -0xa8);
      *puVar9 = *puVar8;
      *(undefined4 *)(iVar11 + -0x54) = uVar4;
      *(undefined4 *)(iVar11 + -0x50) = uVar5;
      *(undefined4 *)(iVar11 + -0x4c) = uVar6;
      *(undefined4 *)(iVar11 + -0x48) = uVar15;
      uVar4 = *(undefined4 *)(iVar10 + -0xb4);
      uVar5 = *(undefined4 *)(iVar10 + -0xb0);
      uVar6 = *(undefined4 *)(iVar10 + -0xac);
      uVar15 = *(undefined4 *)(iVar10 + -0xa8);
      *puVar9 = *puVar8;
      *(undefined4 *)(iVar11 + -0x54) = uVar4;
      *(undefined4 *)(iVar11 + -0x50) = uVar5;
      *(undefined4 *)(iVar11 + -0x4c) = uVar6;
      *(undefined4 *)(iVar11 + -0x48) = uVar15;
      uVar4 = *(undefined4 *)(iVar10 + -0xb4);
      uVar5 = *(undefined4 *)(iVar10 + -0xb0);
      uVar6 = *(undefined4 *)(iVar10 + -0xac);
      uVar15 = *(undefined4 *)(iVar10 + -0xa8);
      *puVar9 = *puVar8;
      *(undefined4 *)(iVar11 + -0x54) = uVar4;
      *(undefined4 *)(iVar11 + -0x50) = uVar5;
      *(undefined4 *)(iVar11 + -0x4c) = uVar6;
      *(undefined4 *)(iVar11 + -0x48) = uVar15;
      *(undefined4 *)(iVar11 + -0x58) = *puVar8;
      *(undefined4 *)(iVar11 + -0x58) = *(undefined4 *)(iVar10 + -0xb8);
      uVar4 = *(undefined4 *)(iVar10 + -0xb4);
      *(undefined4 *)(iVar11 + -0x58) = *(undefined4 *)(iVar10 + -0xb8);
      *(undefined4 *)(iVar11 + -0x54) = uVar4;
      fn_0017821c(iVar11 + -0x58,iVar10 + -0xb8,0x58);
      fn_0017821c(iVar11 + -0x58,iVar10 + -0xb8,0x58);
      fn_0017821c(iVar11 + -0x58,iVar10 + -0xb8,0x58);
      puVar8 = (undefined4 *)(iVar10 + -0xb8);
      uVar4 = *(undefined4 *)(iVar10 + -0xb4);
      uVar5 = *(undefined4 *)(iVar10 + -0xb0);
      uVar6 = *(undefined4 *)(iVar10 + -0xac);
      uVar15 = *(undefined4 *)(iVar10 + -0xa8);
      uVar12 = *puVar17;
      *(undefined4 *)(iVar11 + -0x58) = *puVar8;
      *(undefined4 *)(iVar11 + -0x54) = uVar4;
      *(undefined4 *)(iVar11 + -0x50) = uVar5;
      *(undefined4 *)(iVar11 + -0x4c) = uVar6;
      *(undefined4 *)(iVar11 + -0x48) = uVar15;
      *puVar18 = uVar12;
      uVar4 = *(undefined4 *)(iVar10 + -0xb4);
      uVar5 = *(undefined4 *)(iVar10 + -0xb0);
      uVar6 = *(undefined4 *)(iVar10 + -0xac);
      uVar15 = *(undefined4 *)(iVar10 + -0xa8);
      uVar12 = *puVar17;
      *(undefined4 *)(iVar11 + -0x58) = *puVar8;
      *(undefined4 *)(iVar11 + -0x54) = uVar4;
      *(undefined4 *)(iVar11 + -0x50) = uVar5;
      *(undefined4 *)(iVar11 + -0x4c) = uVar6;
      *(undefined4 *)(iVar11 + -0x48) = uVar15;
      *puVar18 = uVar12;
      *(undefined4 *)(iVar11 + -0x58) = *puVar8;
      *(undefined4 *)(iVar11 + -0x58) = *(undefined4 *)(iVar10 + -0xb8);
      *(undefined4 *)(iVar11 + -0x58) = *(undefined4 *)(iVar10 + -0xb8);
      *(undefined2 *)(iVar11 + -0x58) = *(undefined2 *)(iVar10 + -0xb8);
      iVar11 = iVar11 + -0x60;
      iVar10 = iVar10 + -0x60;
    }
    *(undefined1 *)(iVar2 + 4) = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)(iVar2 + 5) = *(undefined1 *)(param_2 + 5);
    puVar9 = (undefined4 *)(param_2 + 8);
    puVar8 = (undefined4 *)(iVar2 + 8);
    *puVar8 = *puVar9;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    *puVar8 = *puVar9;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined2 *)puVar8 = *(undefined2 *)puVar9;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    uVar15 = *(undefined4 *)(param_2 + 0x18);
    puVar17 = (undefined4 *)(param_2 + 0x1c);
    *puVar8 = *puVar9;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = uVar5;
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    *(undefined4 *)(iVar2 + 0x18) = uVar15;
    puVar18 = (undefined4 *)(iVar2 + 0x1c);
    fn_0017821c(iVar2 + 8,param_2 + 8,0x48);
    fn_0017821c(iVar2 + 8,param_2 + 8,0x4c);
    puVar9 = (undefined4 *)(param_2 + 8);
    *(undefined2 *)(iVar2 + 8) = *(undefined2 *)puVar9;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    uVar15 = *(undefined4 *)(param_2 + 0x18);
    uVar12 = *puVar17;
    uVar13 = *(undefined4 *)(param_2 + 0x20);
    uVar16 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(iVar2 + 8) = *puVar9;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = uVar5;
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    *(undefined4 *)(iVar2 + 0x18) = uVar15;
    *puVar18 = uVar12;
    *(undefined4 *)(iVar2 + 0x20) = uVar13;
    *(undefined4 *)(iVar2 + 0x24) = uVar16;
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    uVar15 = *(undefined4 *)(param_2 + 0x18);
    puVar8 = (undefined4 *)(iVar2 + 8);
    *puVar8 = *puVar9;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = uVar5;
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    *(undefined4 *)(iVar2 + 0x18) = uVar15;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    uVar15 = *(undefined4 *)(param_2 + 0x18);
    *puVar8 = *puVar9;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = uVar5;
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    *(undefined4 *)(iVar2 + 0x18) = uVar15;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    uVar15 = *(undefined4 *)(param_2 + 0x18);
    *puVar8 = *puVar9;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = uVar5;
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    *(undefined4 *)(iVar2 + 0x18) = uVar15;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    uVar15 = *(undefined4 *)(param_2 + 0x18);
    *puVar8 = *puVar9;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = uVar5;
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    *(undefined4 *)(iVar2 + 0x18) = uVar15;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    uVar15 = *(undefined4 *)(param_2 + 0x18);
    *puVar8 = *puVar9;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = uVar5;
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    *(undefined4 *)(iVar2 + 0x18) = uVar15;
    *(undefined4 *)(iVar2 + 8) = *puVar9;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    fn_0017821c(iVar2 + 8,param_2 + 8,0x58);
    fn_0017821c(iVar2 + 8,param_2 + 8,0x58);
    fn_0017821c(iVar2 + 8,param_2 + 8,0x58);
    puVar8 = (undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    uVar15 = *(undefined4 *)(param_2 + 0x18);
    uVar12 = *puVar17;
    *(undefined4 *)(iVar2 + 8) = *puVar8;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = uVar5;
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    *(undefined4 *)(iVar2 + 0x18) = uVar15;
    *puVar18 = uVar12;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    uVar15 = *(undefined4 *)(param_2 + 0x18);
    uVar12 = *puVar17;
    *(undefined4 *)(iVar2 + 8) = *puVar8;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = uVar5;
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    *(undefined4 *)(iVar2 + 0x18) = uVar15;
    *puVar18 = uVar12;
    *(undefined4 *)(iVar2 + 8) = *puVar8;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined2 *)(iVar2 + 8) = *(undefined2 *)(param_2 + 8);
    return;
  }
  uVar14 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar14 < uVar1 + 0x20) {
    uVar14 = uVar1 + 0x20;
  }
  iVar3 = fn_00100fc6(uVar14 * 0x60,0);
  iVar10 = iVar3;
  for (iVar11 = *piVar7; iVar11 != iVar2; iVar11 = iVar11 + 0x60) {
    if (iVar10 != 0) {
      fn_002d65b4(iVar10,iVar11);
    }
    iVar10 = iVar10 + 0x60;
  }
  iVar11 = iVar3 + ((iVar2 - *piVar7) / 0x60) * 0x60;
  if (iVar11 != 0) {
    fn_002d65b4(iVar11,param_2);
  }
  iVar10 = *(int *)(param_1 + 0x78);
  iVar11 = iVar3 + ((iVar2 - *piVar7) / 0x60) * 0x60;
  for (; iVar2 != iVar10; iVar2 = iVar2 + 0x60) {
    iVar11 = iVar11 + 0x60;
    if (iVar11 != 0) {
      fn_002d65b4(iVar11,iVar2);
    }
  }
  puVar8 = (undefined4 *)*piVar7;
  puVar9 = *(undefined4 **)(param_1 + 0x78);
  iVar2 = (int)puVar9 - (int)puVar8;
  for (; puVar8 != puVar9; puVar8 = puVar8 + 0x18) {
    (**(code **)*puVar8)(puVar8);
  }
  fn_001008c4(*piVar7,(*(int *)(param_1 + 0x7c) - *piVar7) / 0x60,0);
  *piVar7 = iVar3;
  *(int *)(param_1 + 0x78) = iVar3 + (iVar2 / 0x60) * 0x60 + 0x60;
  *(uint *)(param_1 + 0x7c) = iVar3 + uVar14 * 0x60;
  return;
}


