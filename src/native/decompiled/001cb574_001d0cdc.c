#include "001cb574_001d0cdc.h"



void fn_001d0cdc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  
  *(undefined1 *)(param_1 + 0x23f1) = 0;
  fn_00654c44();
  fn_00615ecc();
  switch(*(undefined1 *)(param_1 + 4)) {
  case 1:
    iVar1 = fn_00174828(DAT_008977e4);
    iVar4 = fn_00174870(param_1);
    *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar4 + 0x10);
    iVar1 = fn_00174828(DAT_008977e4);
    puVar5 = (undefined1 *)(iVar1 + 0xe8);
    iVar1 = fn_00174870(param_1);
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(puVar5 + 0xc) = uVar2;
    *puVar5 = *(undefined1 *)(iVar1 + 0x20);
    puVar5[0x10] = *(undefined1 *)(iVar1 + 0x28);
    puVar5[0x11] = *(undefined1 *)(iVar1 + 0x29);
    puVar5[0x14] = *(undefined1 *)(iVar1 + 0x2b);
    puVar5[0x15] = *(undefined1 *)(iVar1 + 0x2c);
    puVar5[0x16] = *(undefined1 *)(iVar1 + 0x2d);
    fn_001d43b4(param_1);
    fn_001d14b0(param_1);
    fn_001d2128(param_1,param_1 + 0x148);
    fn_001d1a70(param_1,0x14,0x18);
    break;
  case 2:
    iVar1 = fn_00174828(DAT_008977e4);
    iVar4 = fn_00174870(param_1);
    *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar4 + 0x10);
    fn_001d1e60(param_1,param_1 + 0x148);
    fn_001d43b4(param_1);
    fn_001d2428(param_1,param_1 + 0x148);
    fn_001d1f2c(param_1,param_1 + 0x148);
    fn_001d2128(param_1,param_1 + 0x148);
    break;
  case 3:
  case 4:
    iVar7 = param_1 + 0x148;
    iVar1 = fn_00174828(DAT_008977e4);
    iVar4 = fn_00174870(param_1);
    *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar4 + 0x10);
    fn_001d1e60(param_1,iVar7);
    if (*(char *)(param_1 + 0x990) == '\0') {
      fn_001d43b4(param_1);
      fn_001d2428(param_1,iVar7);
    }
    else {
      fn_001d2428(param_1,iVar7);
      fn_001d43b4(param_1);
    }
    fn_001d1f2c(param_1,iVar7);
    fn_001d2128(param_1,iVar7);
    break;
  case 5:
    fn_001d3ae8(param_1);
    break;
  case 6:
    fn_001d2d68(param_1);
    break;
  case 7:
    fn_001d1b20(param_1);
    break;
  case 8:
    iVar1 = fn_00174828(DAT_008977e4);
    iVar4 = fn_00174870(param_1);
    *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar4 + 0x10);
    iVar1 = fn_00174828(DAT_008977e4);
    puVar5 = (undefined1 *)(iVar1 + 0xe8);
    iVar1 = fn_00174870(param_1);
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(puVar5 + 0xc) = uVar2;
    *puVar5 = *(undefined1 *)(iVar1 + 0x20);
    puVar5[0x10] = *(undefined1 *)(iVar1 + 0x28);
    puVar5[0x11] = *(undefined1 *)(iVar1 + 0x29);
    puVar5[0x14] = *(undefined1 *)(iVar1 + 0x2b);
    puVar5[0x15] = *(undefined1 *)(iVar1 + 0x2c);
    puVar5[0x16] = *(undefined1 *)(iVar1 + 0x2d);
    fn_001d2a90(param_1,1);
    fn_001d29b8(param_1);
    fn_001d36fc(param_1,0);
    fn_001d47e8(param_1);
    fn_001d17b8(param_1);
    iVar1 = fn_00174828(DAT_008977e4);
    cVar6 = *(char *)(iVar1 + 0xe8);
    bVar8 = (cVar6 == '\x04' || cVar6 == '\x05') || cVar6 == '\b';
    if (bVar8) {
      iVar1 = fn_00182988(DAT_008977e4);
    }
    else {
      iVar1 = fn_00182988(DAT_008977e4);
    }
    *(bool *)(iVar1 + 0x39c) = bVar8;
    fn_001d2128(param_1,param_1 + 0x148);
    fn_001d4680(param_1);
    fn_001d1a70(param_1,0x14,0x18);
    break;
  case 0xff:
  case 0:
    fn_001cfd80(param_1);
  }
  iVar1 = fn_00182988(DAT_008977e4);
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    iVar4 = fn_00174870(param_1);
    uVar2 = *(undefined4 *)(iVar4 + 0xc);
    break;
  default:
    uVar2 = 0x1000014;
  }
  *(undefined4 *)(iVar1 + 0x3b0) = uVar2;
  iVar1 = fn_00174828(DAT_008977e4);
  cVar6 = '\x10';
  do {
    iVar3 = iVar1 + cVar6 * 0x418;
    bVar8 = (short *)(iVar3 + -0x4080) == (short *)0x0;
    iVar4 = 0;
    iVar7 = cVar6 * 3;
    if (!bVar8) {
      iVar4 = (int)*(short *)(iVar3 + -0x4080);
      iVar7 = iVar4;
    }
    if (((!bVar8 && iVar7 != 0) && iVar4 < 0 == (bVar8 && SBORROW4(iVar3 + 0x3f80,0x8000))) &&
       (*(short *)(iVar3 + -0x4064) < 1)) {
      fn_001743e8();
    }
    cVar6 = cVar6 + '\x01';
  } while (cVar6 < '\x18');
  cVar6 = '\x18';
  do {
    iVar3 = iVar1 + cVar6 * 0x418;
    bVar8 = (short *)(iVar3 + -0x4080) == (short *)0x0;
    iVar4 = 0;
    iVar7 = cVar6 * 3;
    if (!bVar8) {
      iVar4 = (int)*(short *)(iVar3 + -0x4080);
      iVar7 = iVar4;
    }
    if (((!bVar8 && iVar7 != 0) && iVar4 < 0 == (bVar8 && SBORROW4(iVar3 + 0x3f80,0x8000))) &&
       (*(short *)(iVar3 + -0x4064) < 1)) {
      fn_001743e8();
    }
    cVar6 = cVar6 + '\x01';
  } while (cVar6 < ' ');
  *(undefined1 *)(param_1 + 0x23f0) = 1;
  return;
}



int fn_001ceba8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int local_1c [3];
  
  if (*(int *)(param_1 + 0x40) == 0) {
    local_1c[0] = -1;
  }
  else {
    uVar1 = fn_001747a8(param_2);
    local_1c[0] = fn_00179bfc(*(undefined4 *)(param_1 + 0x40),uVar1,param_3,param_4,param_5);
    if (-1 < local_1c[0]) {
      fn_0017811c(param_1 + 0x50,local_1c);
    }
  }
  return local_1c[0];
}



void fn_001cb574(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_0017fde4(*(undefined4 *)(param_2 + 0xc));
  iVar3 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar3 = fn_0017fde4();
  }
  if (param_3 == 0) {
    iVar2 = 0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar2 = fn_00162d54(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar1);
    }
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      fn_00162d54(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar3);
    }
  }
  else {
    if (*(int *)(iVar1 + 0xc) == 0) {
      fn_001969a4(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar1);
    }
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) == 0)) {
      fn_001969a4(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar3);
    }
  }
  fn_00162d44(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24));
  return;
}


