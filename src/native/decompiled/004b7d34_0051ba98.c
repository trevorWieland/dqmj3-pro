#include "004b7d34_0051ba98.h"



void fn_0051ba98(void)

{
  if (DAT_008c06a0 != (int *)0x0) {
    (**(code **)(*DAT_008c06a0 + 4))();
    DAT_008c06a0 = (int *)0x0;
  }
  return;
}



void fn_0050b7b8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_008bf4cc;
  if (DAT_008bf4cc != (undefined4 *)0x0) {
    piVar1 = DAT_008bf4cc + 0xc;
    *DAT_008bf4cc = &DAT_00857050;
    if (*piVar1 - 0x100000U < 0x3ff00000) {
      fn_0050b8c8(puVar2);
    }
    fn_004ecfd0(puVar2);
    DAT_008bf4cc = (undefined4 *)0x0;
  }
  return;
}



undefined1 * fn_00504998(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  iVar3 = fn_004f8ab0();
  if (iVar3 == 0) {
    return &DAT_e0a1482b;
  }
  iVar3 = fn_004f8aa0();
  puVar5 = &DAT_e0a14827;
  if ((iVar3 != 0) && (DAT_008bf4d4 != 0)) {
    piVar4 = (int *)*param_1;
    puVar5 = (undefined1 *)0xe0e14826;
    if ((piVar4 + -0x40000 < (int *)0x3ff00000) && (bVar1 = *(byte *)(param_1 + 1), bVar1 < 3)) {
      bVar2 = bVar1;
      if (bVar1 != 2) {
        bVar2 = DAT_008bf4dc;
      }
      iVar3 = (**(code **)(*piVar4 + 0x44))(piVar4);
      if (((iVar3 != 0) || (*(char *)(param_1 + 1) == '\0')) && (bVar1 == 2 || bVar2 == 0)) {
        if (DAT_008bf4e0 != (int *)0x0) {
          return &DAT_d8a1482e;
        }
        iVar3 = fn_004ecfe0(0xa8);
        piVar4 = (int *)0x0;
        if (iVar3 != 0) {
          piVar4 = (int *)fn_00506c38(iVar3,param_1);
        }
        DAT_008bf4e0 = piVar4;
        puVar5 = (undefined1 *)fn_005036f8(piVar4,param_1,(int)(char)DAT_008bf4dc);
        if (-1 < (int)puVar5) {
          DAT_008ed968 = *(undefined1 *)(param_1 + 1);
          return (undefined1 *)0x0;
        }
        if (DAT_008bf4e0 != (int *)0x0) {
          (**(code **)(*DAT_008bf4e0 + 8))();
        }
        DAT_008bf4e0 = (int *)0x0;
        return puVar5;
      }
    }
  }
  return puVar5;
}



int fn_004b7d34(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_00855b84;
  iVar1 = fn_004745d8(param_1 + 4,0x20000000);
  if (DAT_008b637e != '\0') {
    fn_001775e8(DAT_008b63d8);
  }
  puVar2 = (undefined4 *)fn_00474e88(iVar1 + 0x28,1);
  *puVar2 = &DAT_0085344c;
  puVar2[5] = &DAT_008533b0;
  iVar1 = fn_004745d8(puVar2 + 6,1);
  iVar1 = fn_004b4c44(iVar1 + 0x28);
  if (DAT_008b637e != '\0') {
    fn_001775e8(DAT_008b63d8);
  }
  puVar2 = (undefined4 *)fn_00474e88(iVar1 + 0x1c,0xe);
  *puVar2 = &DAT_00853b30;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 8;
  puVar2[0xb] = 4;
  puVar2[0xc] = 0;
  *(undefined1 *)(puVar2 + 0xd) = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  if (DAT_008b637e == '\0') {
    uVar8 = 0;
  }
  else {
    puVar3 = (undefined4 *)fn_001775e8(DAT_008b63d8,8,4);
    uVar8 = *puVar3;
  }
  puVar2 = (undefined4 *)fn_00474e88(puVar2 + 0x10,0xb,uVar8);
  *puVar2 = &DAT_00853ac8;
  *(undefined1 *)((int)puVar2 + 0x11) = 0;
  *(undefined1 *)((int)puVar2 + 0x12) = 1;
  if (DAT_008b637e != '\0') {
    piVar4 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar4 != 0) {
      puVar5 = (undefined2 *)(DAT_008e6c80 + *piVar4 * 2);
      goto LAB_004b7e9c;
    }
  }
  puVar5 = &DAT_008e6c84;
LAB_004b7e9c:
  *(undefined2 *)(puVar2 + 5) = *puVar5;
  *(undefined2 *)((int)puVar2 + 0x16) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined1 *)(puVar2 + 10) = 0;
  iVar1 = fn_0048efe8(puVar2 + 0xc);
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
  iVar10 = iVar1 + -0x3bc;
  (**(code **)(DAT_008e778c + 8))();
  *(int *)(iVar1 + -0x378) = iVar10;
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
    piVar4 = (int *)(iVar6 + 4);
    do {
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = *piVar4 + 1;
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
  piVar4 = (int *)0x0;
  if (iVar6 != 0) {
    piVar4 = (int *)fn_00479238();
    *piVar4 = (int)&DAT_00852cf0;
  }
  *(int **)(iVar1 + -0x32c) = piVar4;
  (**(code **)(*piVar4 + 8))(auStack_20,piVar4);
  iVar6 = fn_0015ece0(0x120);
  uVar8 = 0;
  if (iVar6 != 0) {
    uVar8 = fn_00488150();
  }
  *(undefined4 *)(iVar1 + -700) = uVar8;
  *(undefined4 *)(iVar1 + -0x74) = 0;
  if ((DAT_008b638d != '\0') && (DAT_008b638d == '\x01')) {
    iVar6 = fn_0015ece0(0x120);
    uVar8 = 0;
    if (iVar6 != 0) {
      uVar8 = fn_0047abec(iVar6,DAT_008b640c,DAT_008b6410);
    }
    *(undefined4 *)(iVar1 + -0x74) = uVar8;
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
  puVar2 = (undefined4 *)fn_0015ece0(0xb0);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2[4] = 0;
    puVar2[4] = 1;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2[3] = &DAT_008558c4;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *puVar2 = &DAT_00852a84;
    puVar2[8] = 0;
    puVar2[9] = 6;
    puVar2[10] = 0x40;
  }
  *(undefined4 **)(iVar1 + -0x70) = puVar2;
  local_28 = 0x4030201;
  uStack_24 = 0x8070605;
  DAT_008b6408 = 8;
  fn_00301a9c(&DAT_008e92b8,&local_28);
  puVar2 = (undefined4 *)fn_0015ece0(0x2c);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2[4] = 0;
    puVar2[4] = 1;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2[3] = &DAT_008558c4;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *puVar2 = &DAT_00853998;
    puVar2[8] = 0;
    puVar2[9] = 6;
    puVar2[10] = 0x40;
  }
  *(undefined4 **)(iVar1 + -0x6c) = puVar2;
  piVar4 = *(int **)(iVar1 + -0x70);
  iVar6 = fn_0014f24c(auStack_40,&DAT_008b685c,0x10);
  uVar7 = *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc);
  uVar9 = piVar4[9];
  bVar11 = uVar9 <= uVar7;
  if (bVar11) {
    uVar9 = piVar4[10];
  }
  if (bVar11 && uVar7 <= uVar9) {
    fn_0015ed58(piVar4 + 3,iVar6);
    (**(code **)(*piVar4 + 0x20))(piVar4);
  }
  fn_0014f2b0(auStack_40);
  fn_004b7c24(iVar10);
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
  return iVar10;
}


