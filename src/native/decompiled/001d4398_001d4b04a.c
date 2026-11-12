#include "001d4398_001d4b04a.h"



void fn_001d45c0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x23b4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x23b8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x23b9) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x23bc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 0x23c0) = *(undefined2 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x23c8) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x23cc) = uVar1;
  *(undefined1 *)(param_1 + 0x23d0) = *(undefined1 *)(param_2 + 0x20);
  *(undefined2 *)(param_1 + 0x23d2) = *(undefined2 *)(param_2 + 0x22);
  *(undefined2 *)(param_1 + 0x23d4) = *(undefined2 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x23d6) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)(param_1 + 0x23d7) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)(param_1 + 0x23d8) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x23d9) = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)(param_1 + 0x23da) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined1 *)(param_1 + 0x23db) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined1 *)(param_1 + 0x23dc) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x23dd) = *(undefined1 *)(param_2 + 0x2d);
  *(undefined4 *)(param_1 + 0x23e0) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x23e4) = *(undefined4 *)(param_2 + 0x34);
  *(undefined2 *)(param_1 + 0x23e8) = *(undefined2 *)(param_2 + 0x38);
  *(undefined2 *)(param_1 + 0x23ea) = *(undefined2 *)(param_2 + 0x3a);
  *(undefined1 *)(param_1 + 4) = 8;
  return;
}



void fn_001d448c(int param_1,int param_2)

{
  fn_001d1150(param_1 + 0x998);
  *(undefined1 *)(param_1 + 0x11e2) = *(undefined1 *)(param_2 + 0x84a);
  *(undefined1 *)(param_1 + 0x11e3) = *(undefined1 *)(param_2 + 0x84b);
  fn_0017821c(param_1 + 0x11e4,param_2 + 0x84c,0x90);
  *(undefined4 *)(param_1 + 0x1274) = *(undefined4 *)(param_2 + 0x8dc);
  *(undefined4 *)(param_1 + 0x1278) = *(undefined4 *)(param_2 + 0x8e0);
  *(undefined1 *)(param_1 + 0x127c) = *(undefined1 *)(param_2 + 0x8e4);
  *(undefined4 *)(param_1 + 0x127e) = *(undefined4 *)(param_2 + 0x8e6);
  *(undefined4 *)(param_1 + 0x1282) = *(undefined4 *)(param_2 + 0x8ea);
  *(undefined4 *)(param_1 + 0x1286) = *(undefined4 *)(param_2 + 0x8ee);
  *(undefined4 *)(param_1 + 0x128a) = *(undefined4 *)(param_2 + 0x8f2);
  *(undefined4 *)(param_1 + 0x128e) = *(undefined4 *)(param_2 + 0x8f6);
  *(undefined4 *)(param_1 + 0x1292) = *(undefined4 *)(param_2 + 0x8fa);
  fn_00301a9c(param_1 + 0x1296,param_2 + 0x8fe,0x1e);
  fn_0017821c(param_1 + 0x12b4,param_2 + 0x91c,0x3c0);
  fn_0017821c(param_1 + 0x1674,param_2 + 0xcdc,0x3c0);
  *(undefined1 *)(param_1 + 0x1a34) = *(undefined1 *)(param_2 + 0x109c);
  *(undefined1 *)(param_1 + 0x1a35) = *(undefined1 *)(param_2 + 0x109d);
  fn_0017821c(param_1 + 0x1a38,param_2 + 0x10a0,0x60);
  *(undefined2 *)(param_1 + 0x1a98) = *(undefined2 *)(param_2 + 0x1100);
  *(undefined1 *)(param_1 + 0x1a9a) = *(undefined1 *)(param_2 + 0x1102);
  *(undefined1 *)(param_1 + 4) = 5;
  return;
}



void fn_001d4470(int param_1)

{
  fn_001d1150(param_1 + 0x148);
  *(undefined1 *)(param_1 + 4) = 3;
  return;
}



void fn_001d43b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  fn_001d2a90(param_1,0);
  iVar3 = 0;
  do {
    local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,(char)iVar3 + '\x14');
    uVar1 = fn_00182988(DAT_008977e4);
    iVar2 = fn_0026a548(uVar1,&local_18);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
  } while (iVar3 < 4);
  iVar3 = 0;
  do {
    local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,(char)iVar3 + '\x1c');
    uVar1 = fn_00182988(DAT_008977e4);
    iVar2 = fn_0026a548(uVar1,&local_18);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
  } while (iVar3 < 4);
  uVar1 = fn_006b64bc(*(undefined4 *)(DAT_00897804 + 8));
  fn_001d36fc(param_1,uVar1);
  fn_001d47e8(param_1);
  fn_001d29b8(param_1,extraout_r1,param_3,local_18);
  return;
}



void fn_001d4398(int param_1)

{
  fn_001d1150(param_1 + 0x148);
  *(undefined1 *)(param_1 + 4) = 4;
  return;
}


