#include "001097d4_00109eb8.h"



undefined4 * fn_00109eb8(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_00113bb4(param_1,0xda);
  *puVar1 = &DAT_0081ec8c;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0011294c();
  }
  puVar1[0x1c] = uVar3;
  *(undefined1 *)(puVar1 + 0x1d) = 0;
  *(undefined1 *)((int)puVar1 + 0x75) = 0;
  return puVar1;
}



int * fn_00109d60(int *param_1)

{
  int iVar1;
  int iVar2;
  
  fn_00112fb4();
  if (param_1[0xb] != 0) {
    fn_002feca8(param_1[0xb] + -8);
  }
  param_1[0xb] = 0;
  if (param_1[0xd] != 0) {
    fn_002feca8(param_1[0xd] + -8);
  }
  param_1[0xd] = 0;
  iVar1 = 0;
  do {
    fn_002feef8(param_1[iVar1 + 0xaf]);
    iVar2 = iVar1 + 1;
    param_1[iVar1 + 0xaf] = 0;
    iVar1 = iVar2;
  } while (iVar2 < 3);
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 8))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  return param_1;
}



int fn_00109cc8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  iVar1 = fn_00101a1c(param_1 + 0xb6,fn_00124be8,8,3);
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + -0x1c) = 0;
  *(undefined4 *)(iVar1 + -0x10) = 0;
  *(undefined4 *)(iVar1 + -0x18) = 0;
  *(undefined4 *)(iVar1 + -0xc) = 0;
  *(undefined4 *)(iVar1 + -0x14) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  return iVar1 + -0x2d8;
}



undefined4 *
fn_00109be4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &DAT_0081e4cc;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0xe0,&DAT_00812c8c,param_3,param_4,param_4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar3 = iVar2;
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
      iVar3 = iVar3 + 2;
      *(undefined4 *)(iVar1 + (iVar2 + 1) * 4) = 0;
      iVar2 = iVar2 + 2;
    } while (iVar3 < 0x38);
  }
  iVar2 = 0;
  iVar3 = param_1[1];
  if (iVar3 != iVar1) {
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        fn_0012d73c(*(undefined4 *)(iVar3 + iVar4 * 4));
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x38);
      fn_002feef8(iVar3);
    }
    param_1[1] = iVar1;
  }
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      fn_0012d73c(*(undefined4 *)(iVar2 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x38);
    fn_002feef8(iVar2);
  }
  return param_1;
}



undefined4 fn_00109b80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 4);
  do {
    uVar1 = fn_0011c1b4(L"patch:/data/Parameter/KindParam.tp" + iVar2 * 0x40,0,0,0,0,0,0,0,5);
    *(undefined4 *)(iVar3 + iVar2 * 4) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x38);
  return 1;
}



undefined4 * fn_00109b68(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



undefined4 * fn_00109af4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)fn_00145b00(0x2c,&DAT_00812c8c);
  uVar1 = DAT_00897814;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = uVar1;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 0;
    *(undefined1 *)((int)puVar2 + 10) = 1;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[5] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
  }
  *param_1 = puVar2;
  return param_1;
}



undefined4 * fn_00109aa0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00113bb4(param_1,0xda);
  *puVar1 = &DAT_0081dfa0;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  fn_00301f50(puVar1 + 0x1d,0x8d8);
  puVar1[0x253] = 0;
  puVar1[0x254] = 0;
  fn_00301f50(puVar1 + 0x1d,0x8d8);
  return puVar1;
}



undefined4 * fn_00109a14(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0081ddc8;
  param_1[3] = param_1 + 3;
  param_1[2] = 0;
  param_1[4] = param_1 + 3;
  iVar1 = 0;
  param_1[1] = DAT_008977f0;
  *(undefined1 *)(param_1 + 0x256) = 0;
  param_1[5] = 0;
  do {
    fn_00158f6c(param_1 + iVar1 * 0x10 + 6,0x40);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return param_1;
}



void fn_001097d4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_0089824c);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898248);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898244);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898240);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_0089823c);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898238);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898234);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898230);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_0089822c);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898228);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898224);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898220);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_0089821c);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898218);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898214);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898210);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_0089820c);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898208);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898204);
  fn_001218f8(param_1,uVar1);
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898250);
  fn_001218f8(param_1,uVar1);
  return;
}


