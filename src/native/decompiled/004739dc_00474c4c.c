#include "004739dc_00474c4c.h"



void fn_00474c4c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  *param_1 = &DAT_0085342c;
  (**(code **)(DAT_008e932c + 8))(&DAT_008e932c);
  DAT_008b63dc = 0;
  (**(code **)(DAT_008e932c + 0xc))(&DAT_008e932c);
  iVar1 = fn_00792adc(param_1 + 0x60);
  iVar1 = fn_0045a660(iVar1 + -0x20);
  *(undefined **)(iVar1 + -0x18) = &DAT_008558d4;
  if (*(int **)(iVar1 + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0x10) + 4))();
  }
  if (*(int **)(iVar1 + -0x14) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0x14) + 4))();
  }
  if (*(int **)(iVar1 + -0xc) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0xc) + 4))();
  }
  *(undefined **)(iVar1 + -0x34) = &DAT_008558d4;
  if (*(int **)(iVar1 + -0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0x2c) + 4))();
  }
  if (*(int **)(iVar1 + -0x30) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0x30) + 4))();
  }
  if (*(int **)(iVar1 + -0x28) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0x28) + 4))();
  }
  piVar5 = (int *)(iVar1 + -0x50);
  iVar2 = *(int *)(iVar1 + -0x40);
  if (iVar2 != 0) {
    local_18 = *(undefined4 *)(iVar2 + 8);
    local_14 = iVar2;
    fn_0076ac08(auStack_10,piVar5,&local_18,&local_14);
    iVar2 = *(int *)(iVar1 + -0x40);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + -0x4c);
    *(int *)(iVar1 + -0x4c) = iVar2;
    piVar3 = (int *)*piVar5;
    while (piVar3 != (int *)0x0) {
      *piVar5 = *piVar3;
      if (piVar3[2] != 0) {
        pcVar4 = *(code **)(piVar3[2] + -8);
        if (pcVar4 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar4)();
        }
      }
      if (piVar3 != (int *)0x0) {
        if ((code *)piVar3[-2] == (code *)0x0) {
          fn_0030233c(piVar3 + -2);
        }
        else {
          (*(code *)piVar3[-2])();
        }
      }
      piVar3 = (int *)*piVar5;
    }
  }
  iVar1 = fn_0074c73c(iVar1 + -0xa4);
  iVar1 = fn_0074ca78(iVar1 + -0x54);
  iVar1 = fn_0074ca78(iVar1 + -0x54);
  iVar1 = fn_00170f54(iVar1 + -8);
  *(undefined **)(iVar1 + -0xc) = &DAT_00853740;
  *(undefined4 *)(iVar1 + -8) = 0;
  return;
}



int fn_00474168(undefined4 *param_1)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  param_1[2] = 0;
  *param_1 = &DAT_008533e0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar3 = fn_004565fc(param_1 + 4);
  *(undefined4 *)(iVar3 + 100) = 30000;
  *(undefined4 *)(iVar3 + 0x90) = 0;
  *(undefined4 *)(iVar3 + 0x94) = 0;
  *(undefined4 *)(iVar3 + 0x98) = 0;
  *(undefined1 *)(iVar3 + 0x9c) = 1;
  iVar3 = fn_0013ce04(iVar3 + 0xa0);
  *(undefined4 *)(iVar3 + -0x38) = 0;
  fn_004b3b48();
  fn_004b7ce4();
  fn_004b3b48();
  (**(code **)(DAT_008e778c + 8))();
  iVar4 = fn_0045c8f4();
  if (iVar4 == 0) {
    iVar4 = fn_0015ecdc(0x60);
    if (iVar4 != 0) {
      fn_0045cbd8();
    }
  }
  else {
    iVar4 = fn_0045c8f4();
    piVar6 = (int *)(iVar4 + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = *piVar6 + 1;
  }
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  uVar2 = fn_00468fb0();
  *(undefined2 *)(iVar3 + -0x34) = uVar2;
  *(undefined1 *)(iVar3 + -0x32) = 0;
  *(undefined4 *)(iVar3 + -0x30) = 1;
  *(undefined1 *)(iVar3 + -0x24) = 0;
  *(undefined4 *)(iVar3 + -0x2c) = 0;
  *(undefined4 *)(iVar3 + -0x28) = 0;
  *(undefined4 *)(iVar3 + -0x20) = 0;
  *(undefined4 *)(iVar3 + -0x1c) = 0;
  *(undefined4 *)(iVar3 + -0x18) = 0;
  *(undefined4 *)(iVar3 + -0x14) = 0;
  *(undefined4 *)(iVar3 + -0x40) = 0;
  iVar5 = fn_0015ecdc(0x84);
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar4 = fn_004a1530(iVar5,0);
  }
  *(int *)(iVar3 + -0x2c) = iVar4;
  *(undefined2 *)(iVar4 + 0x20) = 0xe;
  fn_004bab84(*(undefined4 *)(iVar3 + -0x2c),8);
  iVar5 = fn_0015ecdc(0x60);
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar4 = fn_004b1e54(iVar5,0);
  }
  *(int *)(iVar3 + -0x28) = iVar4;
  *(undefined2 *)(iVar4 + 0x20) = 100;
  fn_004bab84(*(undefined4 *)(iVar3 + -0x28),8);
  return iVar3 + -0xb0;
}



undefined4 fn_004739dc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 auStack_34 [4];
  undefined *local_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined *local_24;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  uVar8 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  piVar4 = *(int **)(param_1 + 0x9c);
  if (piVar4 != (int *)0x0) {
    if (*(char *)((int)piVar4 + 0x22) != '\x05') {
      (**(code **)(*piVar3 + 0xc))(piVar3);
      return 0;
    }
    puVar7 = (uint *)(piVar4 + 1);
    do {
      uVar6 = *puVar7 - 1;
      bVar9 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar9);
    *puVar7 = uVar6;
    bVar9 = uVar6 == 0;
    if (bVar9) {
      uVar6 = (uint)*(byte *)(piVar4 + 2);
    }
    if (bVar9 && uVar6 == 0) {
      *(undefined1 *)(piVar4 + 2) = 1;
      (**(code **)(*piVar4 + 4))();
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  iVar2 = fn_0015ecdc(0xd0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x44);
    puVar5 = (undefined4 *)fn_00479cd8(iVar2,2,auStack_34);
    *puVar5 = &DAT_00855180;
    iVar1 = fn_004565fc(puVar5 + 0x1c);
    iVar2 = iVar1 + -0x70;
    *(int *)(iVar1 + -8) = param_1;
    *(undefined4 *)(iVar1 + -4) = uVar10;
    *(undefined4 *)(iVar1 + -0x10) = 0x1000;
    *(undefined4 *)(iVar1 + -0xc) = 0;
    pcStack_2c = fn_004a6890;
    uStack_28 = 0;
    local_24 = &DAT_007dde00;
    local_30 = &DAT_00853500;
    fn_00479c98(iVar2,&local_30);
  }
  piVar4 = (int *)(iVar2 + 4);
  *(int *)(param_1 + 0x9c) = iVar2;
  do {
    bVar9 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar9);
  *piVar4 = *piVar4 + 1;
  iVar2 = fn_001249d0();
  if (iVar2 != 0) {
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
  }
  fn_004bdba4(uVar8,*(undefined4 *)(param_1 + 0x9c),0);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}


