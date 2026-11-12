#include "001d1284_001d1980a.h"



void fn_001d1350(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 local_70;
  undefined2 local_6e;
  undefined1 local_6a;
  int local_38;
  undefined4 local_28;
  
  cVar5 = '\0';
  local_b0 = 0x32;
  local_ac = 0x45d;
  local_a8 = 0x26c;
  local_a4 = 0;
  uStack_a0 = 0x32;
  uStack_9c = 0x45e;
  uStack_98 = 0x26d;
  uStack_94 = 0;
  cVar4 = '\0';
  local_90 = 0x31;
  uStack_8c = 0x466;
  uStack_88 = 0x84;
  uStack_84 = 1;
  uStack_80 = 0x31;
  uStack_7c = 0x465;
  uStack_78 = 0x1b1;
  uStack_74 = 0x100;
  local_28 = param_1;
  iVar1 = fn_00174828(DAT_008977e4);
  local_38 = iVar1 + 0x4280;
  uVar3 = 0;
  do {
    iVar2 = fn_00154ac8((&local_b0)[uVar3 * 4]);
    if (iVar2 != 0) {
      local_6a = 0;
      local_70 = *(undefined2 *)(&local_ac + uVar3 * 4);
      local_6e = *(undefined2 *)(&local_a8 + uVar3 * 4);
      iVar2 = iVar1 + (char)(cVar5 + '\x10') * 0x418;
      fn_001d068c(local_28,&local_70,iVar2 + -0x4080);
      if (*(char *)(&local_a4 + uVar3 * 4) != '\0') {
        *(undefined1 *)(iVar2 + -0x3fd7) = 1;
        *(char *)(local_38 + 2) = cVar5 + '\x10';
      }
      if (*(char *)((int)&local_a4 + uVar3 * 0x10 + 1) != '\0') {
        cVar4 = cVar5 + '\x10';
        *(undefined1 *)(iVar2 + -0x3fd6) = 1;
      }
      cVar5 = cVar5 + '\x01';
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  fn_001d36fc(local_28,0);
  *(undefined2 *)(iVar1 + 0x4290) = 0x20;
  if (((int)cVar4 - 0x10U < 8) && (iVar2 = fn_001c2ef4(1), iVar2 != 0)) {
    *(char *)(iVar1 + 0x4292) = cVar4;
    fn_00174398(iVar1 + cVar4 * 0x418 + -0x4080,1);
  }
  return;
}



void fn_001d1284(int param_1,int param_2)

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
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


