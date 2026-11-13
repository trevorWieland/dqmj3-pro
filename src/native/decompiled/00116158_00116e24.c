#include "00116158_00116e24.h"



undefined4 fn_00116e24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = iVar1 + 0x340;
  fn_00170704(iVar3);
  uVar2 = fn_00127758(iVar1 + 0x34c);
  fn_001707b4(iVar3);
  return uVar2;
}



void fn_00116dcc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = iVar1 + 0x340;
  fn_00170704(iVar4);
  fn_0012767c(iVar1 + 0x34c,param_2);
  uVar2 = fn_00141104();
  uVar3 = fn_001271e8(uVar2,1);
  fn_00127334(uVar2,uVar3);
  fn_001707b4(iVar4);
  return;
}



undefined4 fn_00116ab8(int param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  
  if ((*(int *)(param_1 + 4) == 0) ||
     (iVar1 = fn_0012a004(), (iVar1 == 0 || param_2 == 0xffffffff) || param_3 == 0)) {
    return 0;
  }
  *(short *)(param_1 + 0x208) = *(short *)(param_1 + 0x208) + 1;
  if (*(char *)(param_1 + 0x20a) != '\0') goto switchD_00116b30_caseD_0;
  switch(param_2 >> 0x18) {
  case 1:
    iVar1 = fn_00145a08(*(undefined4 *)(param_1 + 4),param_2);
    if (iVar1 == 1) {
      uVar2 = fn_00126bb4(param_1,param_2,param_3,param_4,param_5);
      break;
    }
    if (iVar1 == 2) {
      uVar2 = fn_00145a30(*(undefined4 *)(param_1 + 4),param_2);
      iVar1 = fn_00140cb0(param_1,uVar2,param_3,param_5,0);
      if (iVar1 != 0) {
        uVar2 = 1;
        break;
      }
      goto LAB_00116cd4;
    }
    if (iVar1 == 3) {
      uVar2 = fn_00140718(param_1,param_2,param_3,param_4,param_5,0xffffffff);
      break;
    }
  default:
switchD_00116b30_caseD_0:
    uVar2 = 0;
    break;
  case 2:
    uVar2 = fn_00126a04(param_1,param_2,param_3,param_4,param_5);
    break;
  case 3:
    uVar2 = fn_00140aa4(param_1,param_2,param_3,param_4,param_5);
    break;
  case 5:
    if ((param_4 & 8) != 0) {
      uVar2 = fn_00156794(*(undefined4 *)(param_1 + 4),param_2);
      iVar1 = fn_00140cb0(param_1,uVar2,param_3,param_5,1);
      if (iVar1 == 0) goto LAB_00116cd4;
    }
    uVar2 = 1;
    break;
  case 6:
    uVar2 = fn_00156794(*(undefined4 *)(param_1 + 4),param_2);
    iVar1 = fn_00140cb0(param_1,uVar2,param_3,param_5,1);
    if (iVar1 != 0) {
      uVar2 = fn_00126c98(param_1,iVar1,param_3,param_5);
      break;
    }
LAB_00116cd4:
    uVar2 = 0;
  }
  sVar3 = *(short *)(param_1 + 0x208) + -1;
  *(short *)(param_1 + 0x208) = sVar3;
  if (sVar3 == 0) {
    *(undefined1 *)(param_1 + 0x20a) = 0;
  }
  return uVar2;
}



void fn_00116568(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      fn_0012624c(*(int *)(param_1 + 0x1c) + uVar4 * 0x5c,0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x18));
  }
  uVar2 = fn_00141104();
  uVar3 = fn_001271e8(uVar2,1);
  fn_00127334(uVar2,uVar3);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    piVar5 = *(int **)(param_1 + 0x20);
    uVar8 = 0;
    uVar4 = (uint)((ulonglong)*(uint *)(param_1 + 0x24) * 0x2d02d02d + 0x2d02d02d >> 0x27);
    if (uVar4 != 0) {
      do {
        (**(code **)(*piVar5 + 4))(piVar5);
        uVar8 = uVar8 + 1;
        piVar5 = piVar5 + 0xb6;
      } while (uVar8 < uVar4);
    }
    fn_00150c68(param_1 + 0x34,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38);
    fn_00150c68(param_1 + 0x28,*(undefined4 *)(param_1 + 0x2c),param_1 + 0x2c);
    iVar6 = *(int *)(param_1 + 0x4c);
    uVar8 = 0;
    iVar7 = *(uint *)(param_1 + 0x50) * -0xf0f0f0f;
    uVar4 = *(uint *)(param_1 + 0x50) / 0x88;
    if (uVar4 != 0) {
      do {
        fn_001273d0(iVar6,iVar7);
        uVar8 = uVar8 + 1;
        iVar6 = iVar6 + 0x88;
        iVar7 = extraout_r1;
      } while (uVar8 < uVar4);
    }
    fn_00150c68(param_1 + 0x54,*(undefined4 *)(param_1 + 0x58),param_1 + 0x58);
    uVar2 = fn_00172fc4();
    fn_00127410(uVar2,param_1 + 0x40);
    fn_001417fc(param_1 + 0xf4,*(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108));
    piVar5 = *(int **)(param_1 + 0x6c);
    uVar8 = 0;
    uVar4 = *(uint *)(param_1 + 0x70) / 0x1e8;
    if (uVar4 != 0) {
      do {
        (**(code **)(*piVar5 + 4))(piVar5);
        uVar8 = uVar8 + 1;
        piVar5 = piVar5 + 0x7a;
      } while (uVar8 < uVar4);
    }
    fn_00150c68(param_1 + 0x80,*(undefined4 *)(param_1 + 0x84),param_1 + 0x84);
    fn_00150c68(param_1 + 0x74,*(undefined4 *)(param_1 + 0x78),param_1 + 0x78);
    iVar7 = *(int *)(param_1 + 0x98);
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x9c) * 0xd79435e5 + 0xd79435e5;
    uVar2 = (undefined4)lVar1;
    uVar8 = 0;
    uVar4 = (uint)((ulonglong)lVar1 >> 0x26);
    if (uVar4 != 0) {
      do {
        fn_001273d0(iVar7,uVar2);
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 0x4c;
        uVar2 = extraout_r1_00;
      } while (uVar8 < uVar4);
    }
    fn_00150c68(param_1 + 0xa0,*(undefined4 *)(param_1 + 0xa4),param_1 + 0xa4);
    uVar2 = fn_00172fc4();
    fn_00127410(uVar2,param_1 + 0x8c);
    fn_00127588(param_1 + 0xd8);
    piVar5 = *(int **)(param_1 + 0xb8);
    uVar8 = 0;
    uVar4 = *(uint *)(param_1 + 0xbc) / 0x3298;
    if (uVar4 != 0) {
      do {
        (**(code **)(*piVar5 + 4))(piVar5);
        uVar8 = uVar8 + 1;
        piVar5 = piVar5 + 0xca6;
      } while (uVar8 < uVar4);
    }
    fn_00150c68(param_1 + 0xcc,*(undefined4 *)(param_1 + 0xd0),param_1 + 0xd0);
    fn_00150c68(param_1 + 0xc0,*(undefined4 *)(param_1 + 0xc4),param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

void fn_00116298(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_620 [384];
  
  iVar1 = *(int *)(param_1 + 4);
  uVar6 = 0;
  if (*(int *)(iVar1 + 0x1c) != 0) {
    do {
      fn_0013f8d8(*(int *)(iVar1 + 0x20) + (uVar6 & 0xffffff) * 0x5c);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar1 + 0x1c));
  }
  if (1 < *(uint *)(iVar1 + 0x2c)) {
    fn_00101a1c(local_620,&LAB_0012c004,0xc,0x80);
    iVar2 = *(int *)(iVar1 + 0x2c);
    while (iVar2 != 0) {
      iVar4 = *(int *)(iVar1 + 0x30);
      fn_00150c1c(iVar1 + 0x2c);
      iVar3 = (uint)*(byte *)(iVar4 + -0x5b) + *(int *)(iVar4 + -0xa8);
      iVar2 = UnsignedSaturate(iVar3,7);
      UnsignedDoesSaturate(iVar3,7);
      fn_0017d948(local_620 + iVar2 * 3,(undefined4 *)((int)local_620 + iVar2 * 0xcU + 4U),iVar4);
      iVar2 = *(int *)(iVar1 + 0x2c);
    }
    iVar2 = 0;
    do {
      if (local_620[iVar2 * 3] != 0) {
        do {
          uVar5 = *(undefined4 *)((int)local_620 + iVar2 * 0xcU + 4U);
          fn_00150c1c(local_620 + iVar2 * 3);
          fn_0017d948(iVar1 + 0x2c,iVar1 + 0x30,uVar5);
        } while (local_620[iVar2 * 3] != 0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x80);
  }
  if (1 < *(uint *)(iVar1 + 0x78)) {
    fn_00101a1c(local_620,&LAB_0012c01c,0xc,0x80);
    iVar2 = *(int *)(iVar1 + 0x78);
    while (iVar2 != 0) {
      iVar4 = *(int *)(iVar1 + 0x7c);
      fn_00150c1c(iVar1 + 0x78);
      iVar3 = (uint)*(byte *)(iVar4 + -0x5b) + *(int *)(iVar4 + -0xa8);
      iVar2 = UnsignedSaturate(iVar3,7);
      UnsignedDoesSaturate(iVar3,7);
      fn_0017d948(local_620 + iVar2 * 3,(undefined4 *)((int)local_620 + iVar2 * 0xcU + 4U),iVar4);
      iVar2 = *(int *)(iVar1 + 0x78);
    }
    iVar2 = 0;
    do {
      if (local_620[iVar2 * 3] != 0) {
        do {
          uVar5 = *(undefined4 *)((int)local_620 + iVar2 * 0xcU + 4U);
          fn_00150c1c(local_620 + iVar2 * 3);
          fn_0017d948(iVar1 + 0x78,iVar1 + 0x7c,uVar5);
        } while (local_620[iVar2 * 3] != 0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x80);
  }
  if (1 < *(uint *)(iVar1 + 0xc4)) {
    fn_00101a1c(local_620,&LAB_0012bfec,0xc,0x80);
    iVar2 = *(int *)(iVar1 + 0xc4);
    while (iVar2 != 0) {
      iVar4 = *(int *)(iVar1 + 200);
      fn_00150c1c(iVar1 + 0xc4);
      iVar3 = (uint)*(byte *)(iVar4 + -0x5b) + *(int *)(iVar4 + -0xa8);
      iVar2 = UnsignedSaturate(iVar3,7);
      UnsignedDoesSaturate(iVar3,7);
      fn_0017d948(local_620 + iVar2 * 3,(undefined4 *)((int)local_620 + iVar2 * 0xcU + 4U),iVar4);
      iVar2 = *(int *)(iVar1 + 0xc4);
    }
    iVar2 = 0;
    do {
      if (local_620[iVar2 * 3] != 0) {
        do {
          uVar5 = *(undefined4 *)((int)local_620 + iVar2 * 0xcU + 4U);
          fn_00150c1c(local_620 + iVar2 * 3);
          fn_0017d948(iVar1 + 0xc4,iVar1 + 200,uVar5);
        } while (local_620[iVar2 * 3] != 0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x80);
  }
  uVar5 = fn_00141104();
  fn_00152464();
  fn_001271e8(uVar5,0);
  return;
}



int fn_00116284(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001271d4(param_1 + 0xc);
  return iVar1 + -0xc;
}



void fn_001161e4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,5);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x33;
  *(int *)(iVar2 + 0x10) = param_1;
  fn_001411b8(iVar1,iVar2);
  uVar3 = fn_001271e8(iVar1,1);
  fn_00127334(iVar1,uVar3);
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  return;
}



void fn_00116158(void)

{
  undefined4 uVar1;
  
  if (DAT_008c0605 != '\0') {
    uVar1 = fn_00172e2c();
    fn_0014044c(uVar1);
    fn_001521a8();
    fn_00172e2c();
    fn_00158758();
    fn_00172fc4();
    fn_00127440();
    fn_00172fc4();
    fn_001273e0();
    fn_00152724();
    fn_001274d4();
    fn_0018b794();
    fn_001275a0();
    fn_00127530(&DAT_008ece50);
    fn_00126800(&DAT_008c060c);
    fn_00172fc4();
    fn_0012746c();
    fn_00141104();
    fn_00127398();
    fn_001524d0();
    fn_00127398();
    DAT_008c0606 = 0;
    DAT_008c0605 = '\0';
  }
  return;
}


