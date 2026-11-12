#include "00659048_0065a270ba.h"



void fn_00659544(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 0x50) = uVar6;
  *(undefined4 *)(param_1 + 0x54) = uVar7;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 100) = uVar1;
  fn_0017821c(param_1 + 0x68,param_2 + 0x54,0x3c0);
  *(undefined1 *)(param_1 + 0x428) = *(undefined1 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x418);
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x41c);
  uVar1 = *(undefined4 *)(param_2 + 0x424);
  uVar2 = *(undefined4 *)(param_2 + 0x428);
  uVar3 = *(undefined4 *)(param_2 + 0x42c);
  uVar4 = *(undefined4 *)(param_2 + 0x430);
  uVar5 = *(undefined4 *)(param_2 + 0x434);
  *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_2 + 0x420);
  *(undefined4 *)(param_1 + 0x438) = uVar1;
  *(undefined4 *)(param_1 + 0x43c) = uVar2;
  *(undefined4 *)(param_1 + 0x440) = uVar3;
  *(undefined4 *)(param_1 + 0x444) = uVar4;
  *(undefined4 *)(param_1 + 0x448) = uVar5;
  fn_0017821c(param_1 + 0x44c,param_2 + 0x438,0x1e);
  *(undefined1 *)(param_1 + 0x46a) = *(undefined1 *)(param_2 + 0x456);
  fn_0017821c(param_1 + 0x46c,param_2 + 0x458,0x60);
  return;
}



void fn_0065951c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  fn_0057481c(param_1 + 0x14,param_3);
  return;
}



void fn_006594c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x4cc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006595f0(iVar1,param_1);
  return;
}



void fn_00659498(int param_1)

{
  fn_003956e0();
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fn_00127adc(param_1 + 0x14);
  return;
}


