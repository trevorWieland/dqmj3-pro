#include "00105b48_00106608.h"



void fn_00106608(void)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int local_20;
  
  cVar2 = '\0';
  if (DAT_00898884 != '\0') {
    cVar2 = DAT_00898885;
  }
  if (DAT_00898884 != '\0' && cVar2 != '\0') {
    local_20 = 0;
    fn_0012b274(0x400);
    fn_0012be5c(0x600,&local_20);
    iVar3 = DAT_0089888c;
    iVar7 = 0;
    do {
      iVar4 = 0;
      puVar5 = (undefined2 *)(iVar7 * 3 + local_20);
      puVar6 = (undefined2 *)(DAT_00898888 + (0xef - iVar7) * iVar3 * 3);
      do {
        iVar4 = iVar4 + 1;
        *puVar6 = *puVar5;
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 0x168;
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)puVar1;
        puVar6 = (undefined2 *)((int)puVar6 + 3);
      } while (iVar4 < 400);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0xf0);
    DAT_00898885 = '\0';
  }
  return;
}



void fn_00106580(int param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 8) != '\0') {
    bVar1 = *(char *)(param_1 + 9) + param_2;
    *(byte *)(param_1 + 9) = bVar1;
    if (0x3b < bVar1) {
      *(byte *)(param_1 + 9) = bVar1 - 0x3c;
      uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x18);
      if (uVar2 < 3599999) {
        *(uint *)(*(int *)(param_1 + 4) + 0x18) = uVar2 + 1;
      }
      fn_001092d0(*(undefined4 *)(DAT_00897804 + 0x1c));
      if (*(char *)(param_1 + 10) != '\0') {
        iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x25c);
        if (iVar3 != -1) {
          *(int *)(*(int *)(param_1 + 4) + 0x25c) = iVar3 + 1;
        }
      }
    }
  }
  return;
}



void fn_00106510(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_0081d330;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



void fn_00105b48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_68;
  int local_64 [2];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  fn_00109248();
  fn_00117984();
  iVar1 = fn_0011a41c();
  uVar2 = fn_00117984();
  fn_0012a208(uVar2,*(undefined1 *)(iVar1 + 2),&local_58,&local_5c);
  uVar2 = fn_00117984();
  fn_0012a208(uVar2,*(undefined1 *)(iVar1 + 3),&local_50,&local_54);
  fn_00117984();
  iVar1 = fn_0010fa2c();
  local_64[0] = fn_00145b00(0x20,&DAT_00812c8c);
  if (local_64[0] != 0) {
    local_64[0] = fn_00117720(local_64[0],&DAT_00105f64);
  }
  *(int *)(param_1 + 4) = local_64[0];
  fn_0010fcd0(param_1 + 8,param_1 + 4);
  local_64[0] = fn_00145b00(0x20,&DAT_00812c8c);
  if (local_64[0] != 0) {
    local_64[0] = fn_00117720(local_64[0],(char *)&DAT_00105f6c);
  }
  local_68 = local_64[0];
  fn_0010fcd0(param_1 + 8,&local_68);
  iVar3 = local_68;
  iVar4 = *(int *)(local_68 + 4);
  *(undefined4 *)(local_68 + 0x14) = 0x1e;
  if (iVar4 != 0) {
    fn_0014720c(iVar4,local_68);
    fn_00147178(iVar4,iVar3);
  }
  fn_00147178(*(undefined4 *)(param_1 + 4),local_68);
  iVar3 = fn_00145b00(0x30,&DAT_00812c8c);
  uVar5 = 0x3f80000000000000;
  local_48 = 0;
  if (iVar3 != 0) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    uStack_24 = 0x3f800000;
    local_48 = fn_0010c858(iVar3,(char *)&DAT_00105f84,&local_30);
  }
  fn_0010fcd0(param_1 + 8,&local_48);
  iVar3 = local_48;
  iVar4 = *(int *)(local_48 + 4);
  *(undefined4 *)(local_48 + 0x14) = 1000;
  if (iVar4 != 0) {
    fn_0014720c(iVar4,local_48);
    fn_00147178(iVar4,iVar3);
  }
  fn_00147178(local_68,local_48);
  iVar4 = fn_00145b00(0x24,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = fn_00109a7c(iVar4,DAT_00897808,(char *)&DAT_00105f9c);
  }
  local_64[0] = iVar3;
  fn_0010fcd0(param_1 + 8,local_64);
  iVar4 = *(int *)(iVar3 + 4);
  *(undefined4 *)(iVar3 + 0x14) = 3;
  if (iVar4 != 0) {
    fn_0014720c(iVar4,iVar3);
    fn_00147178(iVar4,iVar3);
  }
  fn_00147178(local_68,iVar3);
  iVar4 = fn_00145b00(0x30,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar4 != 0) {
    uVar2 = fn_0010d9c4();
    iVar3 = fn_0010c8b0(iVar4,uVar2,0,(char *)&DAT_00105fb0);
  }
  local_64[0] = iVar3;
  fn_0010fcd0(param_1 + 8,local_64);
  iVar4 = *(int *)(iVar3 + 4);
  *(undefined4 *)(iVar3 + 0x14) = 1;
  if (iVar4 != 0) {
    fn_0014720c(iVar4,iVar3);
    fn_00147178(iVar4,iVar3);
  }
  fn_0010c8a4(iVar3,local_58,local_5c);
  fn_00147178(local_68,iVar3);
  iVar3 = fn_00145b00(0x24,&DAT_00812c8c);
  local_4c = 0;
  if (iVar3 != 0) {
    local_4c = fn_0010c880(iVar3,0,(char *)&DAT_00105fc8);
  }
  fn_0010fcd0(param_1 + 8,&local_4c);
  iVar3 = local_4c;
  iVar4 = *(int *)(local_4c + 4);
  *(undefined4 *)(local_4c + 0x14) = 0;
  if (iVar4 != 0) {
    fn_0014720c(iVar4,local_4c);
    fn_00147178(iVar4,iVar3);
  }
  fn_00147178(local_68,local_4c);
  iVar4 = fn_00145b00(0x24,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar4 != 0) {
    fn_00117984();
    uVar2 = fn_0010fa20();
    iVar3 = fn_0010c900(iVar4,uVar2,(char *)&DAT_00105fdc);
  }
  local_4c = iVar3;
  fn_0010fcd0(param_1 + 8,&local_4c);
  iVar3 = local_4c;
  iVar4 = *(int *)(local_4c + 4);
  *(undefined4 *)(local_4c + 0x14) = 0;
  if (iVar4 != 0) {
    fn_0014720c(iVar4,local_4c);
    fn_00147178(iVar4,iVar3);
  }
  fn_00147178(local_68,local_4c);
  if (iVar1 != 0) {
    iVar3 = fn_00145b00(0x20,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = fn_0010c8e8(iVar3,(char *)&DAT_00105fec);
    }
    local_68 = iVar1;
    fn_0010fcd0(param_1 + 8,&local_68);
    iVar1 = local_68;
    iVar3 = *(int *)(local_68 + 4);
    *(undefined4 *)(local_68 + 0x14) = 0x1e;
    if (iVar3 != 0) {
      fn_0014720c(iVar3,local_68);
      fn_00147178(iVar3,iVar1);
    }
    fn_00147178(*(undefined4 *)(param_1 + 4),local_68);
    iVar3 = fn_00145b00(0x30,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar3 != 0) {
      local_40 = (undefined4)uVar5;
      uStack_34 = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_3c = local_40;
      local_38 = local_40;
      iVar1 = fn_0010c858(iVar3,(char *)&DAT_00105ffc,&local_40);
    }
    local_48 = iVar1;
    fn_0010fcd0(param_1 + 8,&local_48);
    iVar1 = local_48;
    iVar3 = *(int *)(local_48 + 4);
    *(undefined4 *)(local_48 + 0x14) = 1000;
    if (iVar3 != 0) {
      fn_0014720c(iVar3,local_48);
      fn_00147178(iVar3,iVar1);
    }
    fn_00147178(local_68,local_48);
    iVar3 = fn_00145b00(0x24,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = fn_00109a7c(iVar3,DAT_00897808,(char *)&DAT_00106428);
    }
    local_44 = iVar1;
    fn_0010fcd0(param_1 + 8,&local_44);
    iVar3 = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 0x14) = 3;
    if (iVar3 != 0) {
      fn_0014720c(iVar3,iVar1);
      fn_00147178(iVar3,iVar1);
    }
    fn_00147178(local_68,iVar1);
    iVar3 = fn_00145b00(0x30,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar3 != 0) {
      uVar2 = fn_0010d9c4();
      iVar1 = fn_0010c8b0(iVar3,uVar2,0,(char *)&DAT_0010643c);
    }
    local_44 = iVar1;
    fn_0010fcd0(param_1 + 8,&local_44);
    iVar3 = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 0x14) = 1;
    if (iVar3 != 0) {
      fn_0014720c(iVar3,iVar1);
      fn_00147178(iVar3,iVar1);
    }
    fn_0010c8a4(iVar1,local_58,local_5c);
    fn_00147178(local_68,iVar1);
    iVar3 = fn_00145b00(0x24,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = fn_0010c880(iVar3,1,(char *)&DAT_00106454);
    }
    local_4c = iVar1;
    fn_0010fcd0(param_1 + 8,&local_4c);
    iVar1 = local_4c;
    iVar3 = *(int *)(local_4c + 4);
    *(undefined4 *)(local_4c + 0x14) = 0;
    if (iVar3 != 0) {
      fn_0014720c(iVar3,local_4c);
      fn_00147178(iVar3,iVar1);
    }
    fn_00147178(local_68,local_4c);
  }
  local_64[0] = fn_00145b00(0x20,&DAT_00812c8c);
  if (local_64[0] != 0) {
    local_64[0] = fn_00117720(local_64[0],(char *)&DAT_00106468);
  }
  local_68 = local_64[0];
  fn_0010fcd0(param_1 + 8,&local_68);
  iVar1 = local_68;
  iVar3 = *(int *)(local_68 + 4);
  *(undefined4 *)(local_68 + 0x14) = 0x1e;
  if (iVar3 != 0) {
    fn_0014720c(iVar3,local_68);
    fn_00147178(iVar3,iVar1);
  }
  fn_00147178(*(undefined4 *)(param_1 + 4),local_68);
  iVar3 = fn_00145b00(0x30,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    local_30 = (undefined4)uVar5;
    uStack_24 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_2c = local_30;
    local_28 = local_30;
    iVar1 = fn_0010c858(iVar3,(char *)&DAT_00106474,&local_30);
  }
  local_48 = iVar1;
  fn_0010fcd0(param_1 + 8,&local_48);
  iVar1 = local_48;
  iVar3 = *(int *)(local_48 + 4);
  *(undefined4 *)(local_48 + 0x14) = 1000;
  if (iVar3 != 0) {
    fn_0014720c(iVar3,local_48);
    fn_00147178(iVar3,iVar1);
  }
  fn_00147178(local_68,local_48);
  iVar3 = fn_00145b00(0x24,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_00109a7c(iVar3,DAT_0089780c,(char *)&DAT_00105f9c);
  }
  local_64[0] = iVar1;
  fn_0010fcd0(param_1 + 8,local_64);
  iVar3 = *(int *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 0x14) = 3;
  if (iVar3 != 0) {
    fn_0014720c(iVar3,iVar1);
    fn_00147178(iVar3,iVar1);
  }
  fn_00147178(local_68,iVar1);
  iVar1 = *(int *)(DAT_00897838 + 8);
  *(undefined4 *)(iVar1 + 0x14) = 2;
  iVar3 = *(int *)(iVar1 + 4);
  if (iVar3 != 0) {
    fn_0014720c(iVar3,iVar1);
    fn_00147178(iVar3,iVar1);
  }
  fn_00147178(local_68,iVar1);
  iVar3 = fn_00145b00(0x30,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_0010d9c4();
    iVar1 = fn_0010c8b0(iVar3,uVar2,1,(char *)&DAT_00106490);
  }
  local_64[0] = iVar1;
  fn_0010fcd0(param_1 + 8,local_64);
  iVar3 = *(int *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 0x14) = 1;
  if (iVar3 != 0) {
    fn_0014720c(iVar3,iVar1);
    fn_00147178(iVar3,iVar1);
  }
  fn_0010c8a4(iVar1,local_50,local_54);
  fn_00147178(local_68,iVar1);
  iVar3 = fn_00145b00(0x24,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_0010c880(iVar3,2,(char *)&DAT_001064a8);
  }
  local_4c = iVar1;
  fn_0010fcd0(param_1 + 8,&local_4c);
  iVar1 = local_4c;
  iVar3 = *(int *)(local_4c + 4);
  *(undefined4 *)(local_4c + 0x14) = 0;
  if (iVar3 != 0) {
    fn_0014720c(iVar3,local_4c);
    fn_00147178(iVar3,iVar1);
  }
  fn_00147178(local_68,local_4c);
  return;
}


