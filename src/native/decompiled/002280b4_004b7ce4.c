#include "002280b4_004b7ce4.h"



int * fn_004b7ce4(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  
  iVar1 = fn_004b7748();
  if (iVar1 != 0) {
    iVar1 = fn_004b7748();
    piVar2 = (int *)(iVar1 + 4);
    do {
      bVar11 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar11);
    *piVar2 = *piVar2 + 1;
    return piVar2;
  }
  puVar3 = (undefined4 *)fn_0015ece0(0x3e4);
  if (puVar3 == (undefined4 *)0x0) {
    return (int *)0x0;
  }
  puVar3[1] = 0;
  puVar3[1] = 1;
  *(undefined1 *)(puVar3 + 2) = 0;
  *puVar3 = &DAT_00855b84;
  iVar1 = fn_004745d8(puVar3 + 4,0x20000000);
  if (DAT_008b637e != '\0') {
    fn_001775e8(DAT_008b63d8);
  }
  puVar3 = (undefined4 *)fn_00474e88(iVar1 + 0x28,1);
  *puVar3 = &DAT_0085344c;
  puVar3[5] = &DAT_008533b0;
  iVar1 = fn_004745d8(puVar3 + 6,1);
  iVar1 = fn_004b4c44(iVar1 + 0x28);
  if (DAT_008b637e != '\0') {
    fn_001775e8(DAT_008b63d8);
  }
  puVar3 = (undefined4 *)fn_00474e88(iVar1 + 0x1c,0xe);
  *puVar3 = &DAT_00853b30;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 8;
  puVar3[0xb] = 4;
  puVar3[0xc] = 0;
  *(undefined1 *)(puVar3 + 0xd) = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  if (DAT_008b637e == '\0') {
    uVar9 = 0;
  }
  else {
    puVar4 = (undefined4 *)fn_001775e8(DAT_008b63d8,8,4);
    uVar9 = *puVar4;
  }
  puVar3 = (undefined4 *)fn_00474e88(puVar3 + 0x10,0xb,uVar9);
  *puVar3 = &DAT_00853ac8;
  *(undefined1 *)((int)puVar3 + 0x11) = 0;
  *(undefined1 *)((int)puVar3 + 0x12) = 1;
  if (DAT_008b637e != '\0') {
    piVar2 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar2 != 0) {
      puVar5 = (undefined2 *)(DAT_008e6c80 + *piVar2 * 2);
      goto LAB_004b7e9c;
    }
  }
  puVar5 = &DAT_008e6c84;
LAB_004b7e9c:
  *(undefined2 *)(puVar3 + 5) = *puVar5;
  *(undefined2 *)((int)puVar3 + 0x16) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined1 *)(puVar3 + 10) = 0;
  iVar1 = fn_0048efe8(puVar3 + 0xc);
  iVar1 = fn_00468824(iVar1 + 0x14);
  *(undefined **)(iVar1 + 0x23c) = &DAT_00852780;
  *(undefined4 *)(iVar1 + 0x240) = 0;
  *(undefined4 *)(iVar1 + 0x264) = 0;
  *(undefined4 *)(iVar1 + 0x268) = 0;
  *(undefined4 *)(iVar1 + 0x26c) = 0;
  iVar1 = fn_004745d8(iVar1 + 0x270,0x20000000);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  iVar1 = fn_004745d8(iVar1 + 0x34,0x20000000);
  piVar2 = (int *)(iVar1 + -0x3bc);
  (**(code **)(DAT_008e778c + 8))();
  *(int **)(iVar1 + -0x378) = piVar2;
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  fn_00170704(&DAT_008e7794);
  fn_004746b0();
  iVar6 = fn_001249d0();
  if (iVar6 == 0) {
    iVar6 = fn_0015ece0(0x78);
    if (iVar6 != 0) {
      fn_004b3cbc();
    }
  }
  else {
    iVar6 = fn_001249d0();
    piVar7 = (int *)(iVar6 + 4);
    do {
      bVar11 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar11);
    *piVar7 = *piVar7 + 1;
  }
  fn_001707b4(&DAT_008e7794);
  *(undefined4 *)(iVar1 + -0x3b0) = 0;
  if (DAT_008b6490 == (int *)0x0) {
    DAT_008b6404 = &DAT_008e6bf8;
    iVar6 = DAT_008e6c60;
  }
  else {
    DAT_008b6404 = (int *)(**(code **)(*DAT_008b6490 + 8))();
    *(int **)(iVar1 + -0x3b0) = DAT_008b6404;
    iVar6 = DAT_008b6404[0x1a];
  }
  if (iVar6 != 0) {
    DAT_008b6504 = iVar6;
  }
  (**(code **)(*DAT_008b6404 + 0x20))();
  iVar6 = fn_0015ece0(0x260);
  piVar7 = (int *)0x0;
  if (iVar6 != 0) {
    piVar7 = (int *)fn_00479238();
    *piVar7 = (int)&DAT_00852cf0;
  }
  *(int **)(iVar1 + -0x32c) = piVar7;
  (**(code **)(*piVar7 + 8))(auStack_20,piVar7);
  iVar6 = fn_0015ece0(0x120);
  uVar9 = 0;
  if (iVar6 != 0) {
    uVar9 = fn_00488150();
  }
  *(undefined4 *)(iVar1 + -700) = uVar9;
  *(undefined4 *)(iVar1 + -0x74) = 0;
  if ((DAT_008b638d != '\0') && (DAT_008b638d == '\x01')) {
    iVar6 = fn_0015ece0(0x120);
    uVar9 = 0;
    if (iVar6 != 0) {
      uVar9 = fn_0047abec(iVar6,DAT_008b640c,DAT_008b6410);
    }
    *(undefined4 *)(iVar1 + -0x74) = uVar9;
  }
  iVar6 = fn_004b616c(3);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar1 + -0x74);
  iVar6 = fn_004b616c(2);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar1 + -0x74);
  if (DAT_008b638e != '\0') {
    iVar6 = fn_004b616c(3);
    *(int *)(iVar6 + 0x14) = iVar1 + -0x2a4;
    iVar6 = fn_004b616c(2);
    *(int *)(iVar6 + 0x14) = iVar1 + -0x2a4;
  }
  puVar3 = (undefined4 *)fn_0015ece0(0xb0);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    puVar3[4] = 0;
    puVar3[4] = 1;
    *(undefined1 *)(puVar3 + 5) = 0;
    puVar3[3] = &DAT_008558c4;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = &DAT_00852a84;
    puVar3[8] = 0;
    puVar3[9] = 6;
    puVar3[10] = 0x40;
  }
  *(undefined4 **)(iVar1 + -0x70) = puVar3;
  uStack_28 = 0x4030201;
  uStack_24 = 0x8070605;
  DAT_008b6408 = 8;
  fn_00301a9c(&DAT_008e92b8,&uStack_28);
  puVar3 = (undefined4 *)fn_0015ece0(0x2c);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    puVar3[4] = 0;
    puVar3[4] = 1;
    *(undefined1 *)(puVar3 + 5) = 0;
    puVar3[3] = &DAT_008558c4;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = &DAT_00853998;
    puVar3[8] = 0;
    puVar3[9] = 6;
    puVar3[10] = 0x40;
  }
  *(undefined4 **)(iVar1 + -0x6c) = puVar3;
  piVar7 = *(int **)(iVar1 + -0x70);
  iVar6 = fn_0014f24c(auStack_40,&DAT_008b685c,0x10);
  uVar8 = *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc);
  uVar10 = piVar7[9];
  bVar11 = uVar10 <= uVar8;
  if (bVar11) {
    uVar10 = piVar7[10];
  }
  if (bVar11 && uVar8 <= uVar10) {
    fn_0015ed58(piVar7 + 3,iVar6);
    (**(code **)(*piVar7 + 0x20))(piVar7);
  }
  fn_0014f2b0(auStack_40);
  fn_004b7c24(piVar2);
  if (DAT_008b638f != '\0') {
    iVar6 = fn_004b616c(10);
    *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar1 + -0x70);
  }
  if (DAT_008b6390 != '\0') {
    iVar6 = fn_004b616c(9);
    if (*(int *)(iVar6 + 0x9c) == 0) {
      iVar6 = fn_004b616c(9);
      *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar1 + -0x6c);
    }
    iVar6 = fn_004b616c(1);
    if (*(int *)(iVar6 + 0x9c) == 0) {
      iVar6 = fn_004b616c(1);
      *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar1 + -0x6c);
    }
    iVar6 = fn_004b616c(8);
    if (*(int *)(iVar6 + 0x9c) == 0) {
      iVar6 = fn_004b616c(8);
      *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar1 + -0x6c);
    }
  }
  iVar1 = fn_004b616c(10);
  if (*(char *)(iVar1 + 0x97) != '\0') {
    *(undefined1 *)(iVar1 + 0xa0) = 1;
  }
  return piVar2;
}



undefined4
fn_004ad024(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [68];
  
  fn_004b73b0(auStack_68);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_68,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_68,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return 0;
  }
  fn_004ba7ac(auStack_68,0x17);
  fn_0045f6f0(auStack_68,param_3);
  fn_0045f6f0(auStack_68,param_4);
  (**(code **)(*DAT_008c3dcc + 8))(DAT_008c3dcc,auStack_68,*(undefined4 *)(param_5 + 4));
  (**(code **)(*DAT_008c3dcc + 8))(DAT_008c3dcc,auStack_68,*(undefined4 *)(param_6 + 4));
  DAT_008e93ac = &DAT_004ad848;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_68);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_68);
  fn_004b7520(auStack_68);
  return uVar4;
}



void fn_002a211c(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(), iVar1 != 0)) {
    iVar1 = fn_00182988(DAT_008977e4);
    if ((*(char *)(iVar1 + 0x39c) == '\0') ||
       ((*(int *)(DAT_00898840 + 0x20) == 7 || (iVar1 = fn_0066e158(DAT_00898840), iVar1 != 1)))) {
      *(undefined1 *)(*DAT_008977e4 + 0x50) = 1;
      return;
    }
  }
  return;
}



undefined * fn_002280b4(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 auStack_38 [40];
  
  uVar3 = 0;
  if (param_1 != 0) {
    fn_00522550(auStack_38);
    iVar1 = (**(code **)(*DAT_00897894 + 0x30))(DAT_00897894,auStack_38,param_1);
    if (iVar1 != 0) {
      iVar1 = fn_005222ac(auStack_38,&DAT_008cddb4,0x2000);
      if (-1 < iVar1) {
        iVar1 = fn_002273f0(&DAT_008cddb4,0);
        uVar3 = (uint)(iVar1 != 0);
        if (iVar1 != 0) goto LAB_0022812c;
      }
      fn_00522220(auStack_38);
      fn_002279b4(DAT_00897894,(char *)&DAT_0086a0b4);
    }
  }
LAB_0022812c:
  if ((param_1 & -uVar3) == 0) {
    if (param_1 == 0) {
      uVar3 = 1;
    }
    fn_00158f6c(&DAT_008cddb4,0x2000);
    param_1 = 0;
  }
  DAT_008978a4 = param_1;
  if (uVar3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_008cddbc;
  }
  return puVar2;
}


