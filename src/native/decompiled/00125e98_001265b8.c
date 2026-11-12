#include "00125e98_001265b8.h"



undefined4 fn_001265b8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = fn_00156750(param_2);
  if ((int)((iVar1 * 4 + param_3 + 7U & 0xfffffffc) - (param_3 + param_4)) < 1) {
    *(int *)(param_1 + 0x218) = param_3;
    uVar3 = fn_00156750(param_2);
    **(uint **)(param_1 + 0x218) = uVar3;
    if (uVar3 != 0) {
      uVar3 = uVar3 & 1;
      if (uVar3 == 1) {
        *(undefined4 *)(*(int *)(param_1 + 0x218) + 4) = 0;
      }
      uVar5 = (uint)(uVar3 == 1);
      if (uVar3 < **(uint **)(param_1 + 0x218)) {
        do {
          iVar1 = uVar5 + 1;
          uVar3 = uVar3 + 2;
          *(undefined4 *)(*(int *)(param_1 + 0x218) + uVar5 * 4 + 4) = 0;
          uVar5 = uVar5 + 2;
          *(undefined4 *)(*(int *)(param_1 + 0x218) + iVar1 * 4 + 4) = 0;
        } while (uVar3 < **(uint **)(param_1 + 0x218));
      }
    }
    *(undefined4 *)(param_1 + 0x10) = param_2;
    iVar1 = fn_00141104();
    iVar4 = fn_00140e98(iVar1,5);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
    *(undefined1 *)(iVar4 + 4) = 0x32;
    *(int *)(iVar4 + 0x10) = param_1;
    fn_001411b8(iVar1,iVar4);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_00126584(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0x2f;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}



void fn_0012654c(int param_1)

{
  if (*(char *)(param_1 + 400) != '\0') {
    fn_001267cc(param_1 + 0x11c);
    fn_001273b8(param_1 + 0x13c);
    *(undefined1 *)(param_1 + 400) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0x2f;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}



int fn_001264bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x14);
  uVar2 = fn_0018b794();
  iVar3 = fn_001416fc(uVar2,DAT_008c0608);
  uVar2 = fn_00152724();
  iVar4 = fn_00141544(uVar2,DAT_008c0608);
  iVar1 = iVar4 + iVar3 + iVar1 + iVar5 + iVar6;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    iVar1 = iVar1 + *(int *)(param_1 + 8);
  }
  if ((*(int *)(param_1 + 4) == 1) && (*(char *)(param_1 + 0x1e) != '\0')) {
    iVar1 = iVar1 + *(int *)(param_1 + 8);
  }
  bVar7 = *(char *)(param_1 + 0x1d) != '\0';
  iVar3 = 0;
  if (bVar7) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  if (bVar7 && 0 < iVar3) {
    iVar1 = iVar1 + iVar3 * 8;
  }
  return iVar1;
}



void fn_00126288(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (DAT_008c0605 == '\0') {
    fn_00141554(&DAT_008ece50,0x4000278);
    if (DAT_008c0606 == '\0') {
      iVar1 = param_1[3];
      iVar5 = param_1[6];
      uVar2 = fn_00141104();
      fn_00140e3c(uVar2,param_2,param_1[3]);
      uVar2 = fn_001524d0();
      fn_00140e3c(uVar2,iVar1 + param_2,param_1[6]);
      param_2 = param_2 + iVar1 + iVar5;
      DAT_008c0606 = '\x01';
    }
    iVar5 = 0;
    iVar1 = param_2;
    iVar7 = 0;
    if (*(char *)(param_1 + 7) != '\0') {
      iVar6 = param_1[2] + param_2;
      iVar1 = iVar6;
      iVar7 = param_2;
      if ((param_1[1] == 1) && (*(char *)((int)param_1 + 0x1e) != '\0')) {
        iVar1 = param_1[2] + iVar6;
        iVar5 = iVar6;
      }
    }
    fn_00172fc4();
    fn_0014136c();
    iVar6 = param_1[5];
    fn_00172e2c();
    fn_001584f0();
    DAT_008c0610 = param_1[5];
    DAT_008c060c = iVar1;
    uVar2 = fn_0018b794();
    iVar3 = fn_001416fc(uVar2,DAT_008c0608);
    iVar3 = iVar3 + iVar6 + iVar1;
    uVar2 = fn_0018b794();
    uVar2 = fn_001416fc(uVar2,DAT_008c0608);
    uVar4 = fn_0018b794();
    fn_00141684(uVar4,iVar6 + iVar1,uVar2);
    uVar2 = fn_00152724();
    iVar1 = fn_00141544(uVar2,DAT_008c0608);
    uVar2 = fn_00152724();
    uVar2 = fn_00141544(uVar2,DAT_008c0608);
    uVar4 = fn_00152724();
    fn_00141504(uVar4,iVar3,uVar2);
    fn_00141708();
    uVar2 = fn_0014044c();
    fn_001404c8(uVar2,param_1[4],&DAT_008c060c);
    if (*(char *)(param_1 + 7) != '\0') {
      uVar2 = fn_00172fc4();
      fn_001413c8(uVar2,iVar7,param_1[2],*param_1,iVar5,param_1[2],*param_1,param_1[1],
                   (int)*(char *)((int)param_1 + 0x1d));
    }
    bVar8 = *(char *)((int)param_1 + 0x1d) != '\0';
    iVar5 = 0;
    if (bVar8) {
      iVar5 = param_1[8];
    }
    if (bVar8 && 0 < iVar5) {
      uVar2 = fn_00172fc4();
      fn_00141374(uVar2,iVar1 + iVar3,param_1[8]);
    }
    fn_001417a4();
    DAT_008c0604 = *(undefined1 *)(param_1 + 7);
    DAT_008c0605 = '\x01';
  }
  return;
}



void fn_0012624c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      fn_00152048(piVar1 + -0x40,param_2);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return;
}



int * fn_001261b4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_20 [4];
  int local_1c;
  
  fn_0017dcb0(auStack_20);
  if (local_1c == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar1 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0x24,4);
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_0018a644();
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      fn_0017d948(param_1 + 4,param_1 + 8,piVar2 + 1);
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x20))(piVar2,local_1c,*(undefined4 *)(param_1 + 0x24));
    }
  }
  return piVar2;
}



int * fn_00125f80(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  fn_0011b5fc();
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))();
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 4))();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 4))();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 4))();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x60) + 4))();
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  fn_0012881c();
  (**(code **)(**(int **)(param_1 + 0x30) + 8))();
  fn_00125f48(param_1);
  if ((*(char *)(param_1 + 0x34) == '\0') && (*(int **)(param_1 + 0x30) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x30) + 4))();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  fn_0012b830();
  iVar1 = fn_00128dc4(param_1 + 0x74);
  iVar1 = fn_00128dc4(iVar1 + -8);
  iVar1 = fn_00128dc4(iVar1 + -8);
  if (*(int **)(iVar1 + -4) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -4) + 4))();
  }
  if (*(int **)(iVar1 + -8) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -8) + 0x10))();
  }
  if (*(int **)(iVar1 + -0x24) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0x24) + 4))();
  }
  if (*(int **)(iVar1 + -0x28) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0x28) + 4))();
  }
  if (*(int **)(iVar1 + -0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0x2c) + 4))();
  }
  piVar2 = (int *)(iVar1 + -100);
  if (*(char *)(iVar1 + -0x38) != '\0') {
    iVar3 = *piVar2;
    *(undefined1 *)(iVar1 + -0x38) = 0;
    fn_0014224c();
    if (iVar3 != 0) {
      fn_0013f8bc(iVar3);
    }
  }
  if (*(char *)(iVar1 + -0x3c) != '\0') {
    fn_0014224c(piVar2);
  }
  return piVar2;
}



void fn_00125f48(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0xb] == '\0') {
    return;
  }
  iVar1 = *param_1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  fn_0014224c();
  if (iVar1 == 0) {
    return;
  }
  fn_0013f8bc(iVar1);
  return;
}



void fn_00125e98(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return;
  }
  do {
    uVar2 = 0x40 - param_1[0x11];
    if (param_3 < uVar2) {
      uVar2 = param_3;
    }
    fn_001694e4((int)param_1 + param_1[0x11] + 4,param_2,uVar2);
    iVar1 = param_1[0x11];
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
    param_1[0x11] = iVar1 + uVar2;
    if (0x3f < iVar1 + uVar2) {
      (**(code **)(*param_1 + 0x1c))(param_1);
      param_1[0x11] = 0;
      iVar1 = param_1[0x12];
      param_1[0x12] = iVar1 + 1;
      if (iVar1 + 1 == 0) {
        param_1[0x13] = param_1[0x13] + 1;
      }
    }
  } while (param_3 != 0);
  return;
}


