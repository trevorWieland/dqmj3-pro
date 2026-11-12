#include "00481eb0_004823f0b.h"



void fn_004823f0(undefined4 *param_1)

{
  *param_1 = &DAT_008538c0;
  return;
}



void fn_004823bc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00853890;
  fn_004895c0();
  iVar1 = fn_0046e758(param_1 + 0x15);
  iVar1 = fn_0046e758(iVar1 + -0x44);
  fn_0046b3fc(iVar1 + -0x10);
  return;
}



int fn_00482168(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  
  puVar1 = (undefined4 *)fn_0046b318(param_1,0xc);
  *puVar1 = &DAT_00853890;
  iVar2 = fn_004a334c(puVar1 + 4,0);
  iVar2 = fn_004a7028(iVar2 + 0x44,0);
  iVar7 = iVar2 + -0x54;
  *(undefined2 *)(iVar2 + -0x24) = 0x15;
  *(undefined2 *)(iVar2 + 0x20) = 0x32;
  iVar2 = fn_004bc44c();
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_004894d4();
  if (iVar2 == 1) {
    iVar2 = fn_0015ecdc(0x30);
    if (iVar2 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)fn_0013d490();
    }
    iVar2 = fn_004896f4(&DAT_008aec70,piVar6);
    if ((iVar2 == 0) && (piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    iVar2 = fn_0015ecdc(0x5c);
    if (iVar2 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      puVar1 = (undefined4 *)fn_0013d490();
      *puVar1 = &DAT_00854304;
      *(undefined1 *)(puVar1 + 0xc) = 0;
      puVar1 = (undefined4 *)fn_0014f1e0(puVar1 + 0xd);
      *puVar1 = &DAT_00855a18;
      uVar4 = fn_0014f470();
      fn_0014f440(puVar1,uVar4,0);
      puVar1[-0xd] = &DAT_008535fc;
      iVar2 = fn_0013d3e8(puVar1 + 8,L"DynamicGathering");
      piVar6 = (int *)(iVar2 + -0x54);
    }
    iVar2 = fn_004896f4(&DAT_008aec70,piVar6);
    if ((iVar2 == 0) && (piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    iVar2 = fn_0015ecdc(0x34);
    if (iVar2 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)fn_0013d490();
      *(undefined1 *)(piVar6 + 0xc) = 0;
      *piVar6 = (int)&DAT_00852890;
    }
    iVar2 = fn_004896f4(&DAT_008aec70,piVar6);
    if ((iVar2 == 0) && (piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
  }
  iVar2 = fn_0015ecdc(0x44);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_004a334c(iVar2,0);
  }
  uVar5 = fn_006d12d8(iVar7);
  fn_0047f194(uVar5,0x15,uVar4);
  iVar2 = fn_0015ecdc(0x44);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_004a7028(iVar2,0);
  }
  uVar5 = fn_006d12d8(iVar7);
  fn_0047f194(uVar5,0x32,uVar4);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return iVar7;
}



void fn_00482128(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_3;
  fn_004a2e38(param_1 + 0x10,param_2,0,auStack_8,param_1,param_2);
  return;
}



void fn_0048210c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  fn_004a2ce8(param_1 + 0x10,param_2,&uStack_10,&uStack_c,param_1,param_2);
  return;
}


