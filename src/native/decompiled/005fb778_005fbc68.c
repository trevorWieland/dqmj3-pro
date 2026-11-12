#include "005fb778_005fbc68.h"



undefined4 fn_005fbc68(int *param_1)

{
  int iVar1;
  undefined1 auStack_1ad8 [2264];
  undefined1 auStack_1200 [2264];
  undefined1 auStack_928 [2320];
  
  iVar1 = fn_00251a3c(param_1[0x4c]);
  if (iVar1 != 0) {
    fn_0036c340(param_1[0x17]);
    (**(code **)(*param_1 + 0x1e0))(param_1);
    fn_007631a8(param_1,0x3c);
    iVar1 = DAT_00897830;
    fn_0017821c(auStack_1200,param_1[0x4c] + 0x18,0x8d8);
    fn_0017821c(auStack_1ad8,auStack_1200,0x8d8);
    fn_0017821c(iVar1 + 0x74,auStack_1ad8,0x8d8);
    param_1[0x41] = 10;
    return 1;
  }
  if (param_1[0x51] == 0) {
    iVar1 = fn_00251dd8(param_1[0x4c]);
    if (iVar1 != 0) {
      fn_00251dcc(param_1[0x4c]);
      fn_0017821c(auStack_1200,param_1[0x4c] + 0x18,0x8d8);
      fn_0017821c(auStack_1ad8,auStack_1200,0x8d8);
      fn_005fc524(param_1,auStack_1ad8);
      fn_0036c340(param_1[0x17]);
      (**(code **)(*param_1 + 0x1e0))(param_1);
      fn_007631a8(param_1,0x3c);
      iVar1 = DAT_00897830;
      fn_0017821c(auStack_928,param_1[0x4c] + 0x18,0x8d8);
      fn_0017821c(auStack_1200,auStack_928,0x8d8);
      fn_0017821c(iVar1 + 0x74,auStack_1200,0x8d8);
      param_1[0x41] = 10;
    }
  }
  else {
    fn_00251a50();
  }
  return 0;
}



void fn_005fbc24(int param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x14d) == '\0') {
    *(undefined1 *)(param_1 + 0x13c) = param_2;
    *(undefined1 *)(param_1 + 0x14d) = 1;
  }
  return;
}



undefined4 fn_005fbb70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_00762544();
  fn_0040f564(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x3c),0);
  iVar2 = fn_006c41e4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x120) + 0x3c) + 8));
  if (iVar2 == 2) {
    fn_00689efc(param_1,0x3a,0);
  }
  else {
    fn_00689efc(param_1,0x39,0);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(DAT_00897850 + 0x3c) = 1;
  uVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x120) + 0x3c) + 4) + 8) +
                      0x14))();
  fn_0066e4a4(DAT_00897850,0,uVar3);
  return uVar1;
}



void fn_005fbae8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x144) == 1) {
    fn_0066de6c(*(undefined4 *)(param_1 + 0x128));
    fn_0066e6f0(DAT_00897850,0);
    uVar1 = 4;
  }
  else {
    if (*(int *)(param_1 + 0x144) != 2) {
      return;
    }
    fn_0040f564(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x3c),7);
    uVar1 = 3;
  }
  *(undefined4 *)(param_1 + 0x144) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 0x11c) + 0xc) = 0;
  fn_0066e620(DAT_00898840,1);
  return;
}



void fn_005fba88(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x11c) + 9) != '\0') {
    fn_00689d04(param_1,0);
  }
  fn_0066e620(DAT_00898840,0);
  fn_0066e6f0(DAT_00897850,0);
  fn_0076236c(param_1);
  return;
}



void fn_005fba44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x168) != 0) {
    fn_002d691c();
    if (*(int **)(param_1 + 0x168) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x168) + 4))();
      *(undefined4 *)(param_1 + 0x168) = 0;
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x11c) + 9) != '\0') {
    fn_00689d04(param_1,0,0,param_4,unaff_r4,in_lr);
  }
  fn_0066e620(DAT_00898840,0);
  fn_0066e6f0(DAT_00897850,0);
  fn_0076236c(param_1);
  return;
}



void fn_005fb9e4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005fba14(iVar1,param_1);
  return;
}



void fn_005fba14(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d68e0(param_1,param_2,0xe6,1);
  *puVar1 = &DAT_0084e8fc;
  return;
}



int fn_005fb8b4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x104) + 0x10);
  iVar1 = fn_006c4168(iVar5);
  if (iVar1 == 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x104) + 0x5c);
    iVar1 = 0;
    if (iVar5 != -1) {
      iVar1 = iVar5;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x104) + 0x5c);
    if (iVar1 == -1) {
      uVar2 = (uint)*(byte *)(iVar5 + 0x11);
      uVar3 = (uint)*(byte *)(iVar5 + 0x12);
      if (uVar2 == uVar3 || uVar2 == 1) {
        uVar4 = uVar3;
      }
      else {
        uVar4 = 0;
        if (uVar3 == 8) {
          uVar4 = uVar2;
        }
      }
      iVar1 = uVar4 - 1;
    }
  }
  return iVar1;
}



undefined4 * fn_005fb7cc(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xeb);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894454) {
        return puVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (undefined4 *)0x0;
}



void fn_005fb778(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) goto LAB_005fb7bc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005fb7bc:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}


