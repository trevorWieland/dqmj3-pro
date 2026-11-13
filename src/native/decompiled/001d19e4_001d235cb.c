#include "001d19e4_001d235cb.h"



void fn_001d235c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x20);
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_2 + 0x22);
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0x2d);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_2 + 0x2e);
  fn_0017821c(param_1 + 0x38,param_2 + 0x30,0x90);
  fn_0017821c(param_1 + 200,param_2 + 0xc0,0x80);
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



void fn_001d2340(int param_1)

{
  fn_001d1150(param_1 + 0x148);
  *(undefined1 *)(param_1 + 4) = 2;
  return;
}



void fn_001d22ac(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar3 = fn_00174870(param_1,param_2,param_1);
  if (-1 < *(char *)(iVar3 + 0x26)) {
    iVar3 = fn_00174870(param_1);
    cVar2 = *(char *)(iVar3 + 0x26) + '\x14';
    iVar3 = fn_00174828(DAT_008977e4);
    iVar4 = iVar3 + cVar2 * 0x418;
    if (0 < *(short *)(iVar4 + -0x4080)) {
      cVar1 = *(char *)(iVar4 + -0x4019);
      bVar5 = cVar1 == '\0';
      if (bVar5) {
        cVar1 = *(char *)(iVar4 + -0x400a);
      }
      bVar6 = bVar5 && cVar1 == '\0';
      if (bVar5 && cVar1 == '\0') {
        bVar6 = *(char *)(iVar4 + -0x4018) == '\0';
      }
      if (bVar6) {
        fn_0017419c((short *)(iVar4 + -0x4080),1);
        *(char *)(iVar3 + 0x428a) = cVar2;
      }
    }
  }
  return;
}



void fn_001d2128(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00174828(DAT_008977e4);
  switch(*(undefined1 *)(iVar1 + 0xe8)) {
  case 3:
  case 7:
  case 9:
    iVar2 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar2 + 0x39e) = 1;
    iVar2 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar2 + 0x3b4) = 1;
    iVar2 = fn_00182988(DAT_008977e4);
    *(bool *)(iVar2 + 0x39d) = *(char *)(iVar1 + 0xf8) != '\0';
    iVar1 = fn_00182988(DAT_008977e4);
    fn_002a1a6c(iVar1 + 0x38c,*(undefined1 *)(param_2 + 0x849));
    return;
  case 4:
  case 5:
  case 8:
    iVar2 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar2 + 0x39e) = 1;
    iVar2 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar2 + 0x3b4) = 1;
    iVar2 = fn_00182988(DAT_008977e4);
    *(bool *)(iVar2 + 0x39d) = *(char *)(iVar1 + 0xf8) != '\0';
    iVar1 = fn_00182988(DAT_008977e4);
    fn_002a1a6c(iVar1 + 0x38c,*(undefined1 *)(param_2 + 0x849));
    iVar1 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar1 + 0x3b5) = 0;
    return;
  case 6:
    iVar1 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar1 + 0x39e) = 0;
    iVar1 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar1 + 0x39d) = 0;
    iVar1 = fn_00182988(DAT_008977e4);
    fn_002a1a6c(iVar1 + 0x38c,0);
    iVar1 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar1 + 0x3b4) = 1;
    return;
  default:
    iVar1 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar1 + 0x39e) = 0;
    iVar1 = fn_00182988(DAT_008977e4);
    *(undefined1 *)(iVar1 + 0x39d) = 0;
    iVar1 = fn_00182988(DAT_008977e4);
    fn_002a1a6c(iVar1 + 0x38c,0);
    return;
  }
}


