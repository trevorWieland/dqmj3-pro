#include "00240ae0_00240dc4.h"



void fn_00240dc4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 unaff_r4;
  int *piVar9;
  undefined4 unaff_r5;
  uint *puVar10;
  uint uVar11;
  
  fn_00202818(*(undefined4 *)(param_1 + 0xc),5,param_2,0,0xf,param_3);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  fn_006622a0(param_1,*(undefined4 *)(param_1 + 0xc),param_1 + 0x18,0);
  fn_006622a0(param_1,*(undefined4 *)(param_1 + 0xc),param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 8);
  puVar10 = (uint *)(iVar1 + 0x68);
  piVar9 = *(int **)(iVar1 + 0x6c);
  if (piVar9 != *(int **)(iVar1 + 0x70)) {
    *(int **)(iVar1 + 0x6c) = piVar9 + 1;
    if (piVar9 != (int *)0x0) {
      *piVar9 = param_1;
    }
    return;
  }
  uVar4 = (int)((int)piVar9 - *puVar10) >> 2;
  if ((uint)((int)((int)*(int **)(iVar1 + 0x70) - *puVar10) >> 2) <= uVar4) {
    uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar11 < uVar4 + 0x20) {
      uVar11 = uVar4 + 0x20;
    }
    piVar2 = (int *)fn_00100fc6(uVar11 << 2,0);
    piVar7 = piVar2;
    for (piVar6 = (int *)*puVar10; piVar6 != piVar9; piVar6 = piVar6 + 1) {
      if (piVar7 != (int *)0x0) {
        *piVar7 = *piVar6;
      }
      piVar7 = piVar7 + 1;
    }
    piVar6 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar2);
    if (piVar6 != (int *)0x0) {
      *piVar6 = param_1;
    }
    piVar7 = *(int **)(iVar1 + 0x6c);
    piVar6 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar2);
    for (; piVar9 != piVar7; piVar9 = piVar9 + 1) {
      piVar6 = piVar6 + 1;
      if (piVar6 != (int *)0x0) {
        *piVar6 = *piVar9;
      }
    }
    uVar3 = *puVar10;
    uVar8 = *(uint *)(iVar1 + 0x6c);
    uVar4 = uVar3;
    if (uVar8 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar8);
    }
    fn_001008c4(uVar3,(int)(*(int *)(iVar1 + 0x70) - uVar3) >> 2,0,uVar3,unaff_r4,unaff_r5);
    *(int **)(iVar1 + 0x70) = piVar2 + uVar11;
    *(int **)(iVar1 + 0x6c) = piVar2 + ((int)(uVar8 - uVar3) >> 2) + 1;
    *puVar10 = (uint)piVar2;
    return;
  }
  *(int **)(iVar1 + 0x6c) = piVar9 + 1;
  if (piVar9 != (int *)0x0) {
    *piVar9 = piVar9[-1];
  }
  piVar6 = piVar9 + -1;
  piVar7 = piVar9;
  if (piVar9 < piVar6) {
    if (0 < (int)piVar6 - (int)piVar9) {
      iVar1 = (int)piVar6 - (int)piVar9 >> 2;
      iVar5 = 0;
      do {
        iVar1 = iVar1 + -1;
        piVar9[iVar5 + -1] = piVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    while (piVar9 != piVar6) {
      piVar6 = piVar6 + -1;
      piVar7[-1] = *piVar6;
      piVar7 = piVar7 + -1;
    }
  }
  *piVar9 = param_1;
  return;
}



void fn_00240ca8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [12];
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    fn_006dcca4(param_2,local_24,auStack_20,auStack_1c,auStack_18);
    iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
    uVar2 = *(undefined4 *)(param_2 + 0x14c);
    uVar3 = *(undefined4 *)(param_2 + 0x150);
    uVar4 = *(undefined4 *)(param_2 + 0x154);
    uVar5 = *(undefined4 *)(param_2 + 0x158);
    uVar6 = *(undefined4 *)(param_2 + 0x15c);
    uVar7 = *(undefined4 *)(param_2 + 0x160);
    uVar8 = *(undefined4 *)(param_2 + 0x164);
    *(undefined4 *)(iVar1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
    *(undefined4 *)(iVar1 + 0x14c) = uVar2;
    *(undefined4 *)(iVar1 + 0x150) = uVar3;
    *(undefined4 *)(iVar1 + 0x154) = uVar4;
    *(undefined4 *)(iVar1 + 0x158) = uVar5;
    *(undefined4 *)(iVar1 + 0x15c) = uVar6;
    *(undefined4 *)(iVar1 + 0x160) = uVar7;
    *(undefined4 *)(iVar1 + 0x164) = uVar8;
    uVar2 = *(undefined4 *)(param_2 + 0x16c);
    uVar3 = *(undefined4 *)(param_2 + 0x170);
    uVar4 = *(undefined4 *)(param_2 + 0x174);
    *(undefined4 *)(iVar1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    *(undefined4 *)(iVar1 + 0x16c) = uVar2;
    *(undefined4 *)(iVar1 + 0x170) = uVar3;
    *(undefined4 *)(iVar1 + 0x174) = uVar4;
    iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
    uVar2 = *(undefined4 *)(param_2 + 0x1ac);
    uVar3 = *(undefined4 *)(param_2 + 0x1b0);
    uVar4 = *(undefined4 *)(param_2 + 0x1b4);
    uVar5 = *(undefined4 *)(param_2 + 0x1b8);
    uVar6 = *(undefined4 *)(param_2 + 0x1bc);
    uVar7 = *(undefined4 *)(param_2 + 0x1c0);
    uVar8 = *(undefined4 *)(param_2 + 0x1c4);
    *(undefined4 *)(iVar1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
    *(undefined4 *)(iVar1 + 0x1ac) = uVar2;
    *(undefined4 *)(iVar1 + 0x1b0) = uVar3;
    *(undefined4 *)(iVar1 + 0x1b4) = uVar4;
    *(undefined4 *)(iVar1 + 0x1b8) = uVar5;
    *(undefined4 *)(iVar1 + 0x1bc) = uVar6;
    *(undefined4 *)(iVar1 + 0x1c0) = uVar7;
    *(undefined4 *)(iVar1 + 0x1c4) = uVar8;
    uVar2 = *(undefined4 *)(param_2 + 0x1cc);
    uVar3 = *(undefined4 *)(param_2 + 0x1d0);
    uVar4 = *(undefined4 *)(param_2 + 0x1d4);
    uVar5 = *(undefined4 *)(param_2 + 0x1d8);
    uVar6 = *(undefined4 *)(param_2 + 0x1dc);
    uVar7 = *(undefined4 *)(param_2 + 0x1e0);
    uVar8 = *(undefined4 *)(param_2 + 0x1e4);
    *(undefined4 *)(iVar1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
    *(undefined4 *)(iVar1 + 0x1cc) = uVar2;
    *(undefined4 *)(iVar1 + 0x1d0) = uVar3;
    *(undefined4 *)(iVar1 + 0x1d4) = uVar4;
    *(undefined4 *)(iVar1 + 0x1d8) = uVar5;
    *(undefined4 *)(iVar1 + 0x1dc) = uVar6;
    *(undefined4 *)(iVar1 + 0x1e0) = uVar7;
    *(undefined4 *)(iVar1 + 0x1e4) = uVar8;
    fn_001562b4(param_2);
    fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
    fn_00545bec();
    fn_00156298(param_2);
    fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
    fn_00545bc4();
    iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(iVar1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
    fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
    fn_00545310();
  }
  return;
}



void fn_00240c54(int param_1,undefined4 param_2)

{
  int iVar1;
  float local_10;
  float local_c;
  float local_8;
  
  if (*(char *)(param_1 + 0x77) != '\0') {
    iVar1 = *(int *)(param_1 + 0x44);
    local_10 = -*(float *)(iVar1 + 0x58);
    local_c = -*(float *)(iVar1 + 0x68);
    local_8 = -*(float *)(iVar1 + 0x78);
    fn_005e60a8(param_2,&local_10);
  }
  return;
}



void fn_00240ae0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [16];
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005f40b4(iVar1,1);
  }
  piVar5 = *(int **)(param_1 + 0x4c);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x4c) = piVar2;
  }
  uVar3 = fn_00176d68(param_2);
  fn_006dcca4(uVar3,local_2c,auStack_28,auStack_24,auStack_20);
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
  iVar4 = fn_00176d68(param_2);
  uVar3 = *(undefined4 *)(iVar4 + 0x14c);
  uVar6 = *(undefined4 *)(iVar4 + 0x150);
  uVar7 = *(undefined4 *)(iVar4 + 0x154);
  uVar8 = *(undefined4 *)(iVar4 + 0x158);
  uVar9 = *(undefined4 *)(iVar4 + 0x15c);
  uVar10 = *(undefined4 *)(iVar4 + 0x160);
  uVar11 = *(undefined4 *)(iVar4 + 0x164);
  *(undefined4 *)(iVar1 + 0x148) = *(undefined4 *)(iVar4 + 0x148);
  *(undefined4 *)(iVar1 + 0x14c) = uVar3;
  *(undefined4 *)(iVar1 + 0x150) = uVar6;
  *(undefined4 *)(iVar1 + 0x154) = uVar7;
  *(undefined4 *)(iVar1 + 0x158) = uVar8;
  *(undefined4 *)(iVar1 + 0x15c) = uVar9;
  *(undefined4 *)(iVar1 + 0x160) = uVar10;
  *(undefined4 *)(iVar1 + 0x164) = uVar11;
  uVar3 = *(undefined4 *)(iVar4 + 0x16c);
  uVar6 = *(undefined4 *)(iVar4 + 0x170);
  uVar7 = *(undefined4 *)(iVar4 + 0x174);
  *(undefined4 *)(iVar1 + 0x168) = *(undefined4 *)(iVar4 + 0x168);
  *(undefined4 *)(iVar1 + 0x16c) = uVar3;
  *(undefined4 *)(iVar1 + 0x170) = uVar6;
  *(undefined4 *)(iVar1 + 0x174) = uVar7;
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
  iVar4 = fn_00176d68(param_2);
  uVar3 = *(undefined4 *)(iVar4 + 0x1ac);
  uVar6 = *(undefined4 *)(iVar4 + 0x1b0);
  uVar7 = *(undefined4 *)(iVar4 + 0x1b4);
  uVar8 = *(undefined4 *)(iVar4 + 0x1b8);
  uVar9 = *(undefined4 *)(iVar4 + 0x1bc);
  uVar10 = *(undefined4 *)(iVar4 + 0x1c0);
  uVar11 = *(undefined4 *)(iVar4 + 0x1c4);
  *(undefined4 *)(iVar1 + 0x1a8) = *(undefined4 *)(iVar4 + 0x1a8);
  *(undefined4 *)(iVar1 + 0x1ac) = uVar3;
  *(undefined4 *)(iVar1 + 0x1b0) = uVar6;
  *(undefined4 *)(iVar1 + 0x1b4) = uVar7;
  *(undefined4 *)(iVar1 + 0x1b8) = uVar8;
  *(undefined4 *)(iVar1 + 0x1bc) = uVar9;
  *(undefined4 *)(iVar1 + 0x1c0) = uVar10;
  *(undefined4 *)(iVar1 + 0x1c4) = uVar11;
  uVar3 = *(undefined4 *)(iVar4 + 0x1cc);
  uVar6 = *(undefined4 *)(iVar4 + 0x1d0);
  uVar7 = *(undefined4 *)(iVar4 + 0x1d4);
  uVar8 = *(undefined4 *)(iVar4 + 0x1d8);
  uVar9 = *(undefined4 *)(iVar4 + 0x1dc);
  uVar10 = *(undefined4 *)(iVar4 + 0x1e0);
  uVar11 = *(undefined4 *)(iVar4 + 0x1e4);
  *(undefined4 *)(iVar1 + 0x1c8) = *(undefined4 *)(iVar4 + 0x1c8);
  *(undefined4 *)(iVar1 + 0x1cc) = uVar3;
  *(undefined4 *)(iVar1 + 0x1d0) = uVar6;
  *(undefined4 *)(iVar1 + 0x1d4) = uVar7;
  *(undefined4 *)(iVar1 + 0x1d8) = uVar8;
  *(undefined4 *)(iVar1 + 0x1dc) = uVar9;
  *(undefined4 *)(iVar1 + 0x1e0) = uVar10;
  *(undefined4 *)(iVar1 + 0x1e4) = uVar11;
  fn_00176d68(param_2);
  fn_001562b4();
  fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
  fn_00545bec();
  fn_00176d68(param_2);
  fn_00156298();
  fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
  fn_00545bc4();
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
  iVar4 = fn_00176d68(param_2);
  *(undefined4 *)(iVar1 + 0x294) = *(undefined4 *)(iVar4 + 0x294);
  fn_00176d68(*(undefined4 *)(param_1 + 0x4c));
  fn_00545310();
  return;
}


