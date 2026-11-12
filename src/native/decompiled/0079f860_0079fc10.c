#include "0079f860_0079fc10.h"



void fn_0079fc10(int param_1,int param_2,int param_3,int param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 local_28;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2;
    iVar5 = iVar3 + 2;
    if (param_3 <= iVar5) break;
    iVar1 = param_1 + iVar5 * 0x1c;
    iVar1 = (*param_5)(iVar1,iVar1 + -0x1c);
    if (iVar1 != 0) {
      iVar5 = iVar3 + 1;
    }
    iVar2 = param_1 + iVar2 * 0x1c;
    iVar3 = param_1 + iVar5 * 0x1c;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar3 + 4);
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined1 *)(iVar2 + 0x14) = *(undefined1 *)(iVar3 + 0x14);
    *(undefined1 *)(iVar2 + 0x15) = *(undefined1 *)(iVar3 + 0x15);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar3 + 0x18);
    iVar2 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x1c;
    iVar1 = param_1 + iVar2 * 0x1c;
    iVar2 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + -0x18);
    uVar4 = *(undefined4 *)(iVar5 + -0x10);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar5 + -0x14);
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar5 + -0xc);
    *(undefined1 *)(iVar1 + 0x14) = *(undefined1 *)(iVar5 + -8);
    *(undefined1 *)(iVar1 + 0x15) = *(undefined1 *)(iVar5 + -7);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar5 + -4);
  }
  local_40 = &DAT_00851808;
  local_3c = *(undefined4 *)(param_4 + 4);
  local_38 = *(undefined4 *)(param_4 + 8);
  uStack_34 = *(undefined4 *)(param_4 + 0xc);
  local_30 = *(undefined4 *)(param_4 + 0x10);
  local_2c = *(undefined1 *)(param_4 + 0x14);
  local_2b = *(undefined1 *)(param_4 + 0x15);
  local_28 = *(undefined4 *)(param_4 + 0x18);
  while (iVar3 = (iVar2 + -1) / 2, param_2 < iVar2) {
    iVar5 = param_1 + iVar3 * 0x1c;
    iVar1 = (*param_5)(iVar5,&local_40);
    if (iVar1 == 0) break;
    iVar2 = param_1 + iVar2 * 0x1c;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar5 + 4);
    uVar4 = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
    *(undefined1 *)(iVar2 + 0x14) = *(undefined1 *)(iVar5 + 0x14);
    *(undefined1 *)(iVar2 + 0x15) = *(undefined1 *)(iVar5 + 0x15);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar5 + 0x18);
    iVar2 = iVar3;
  }
  param_1 = param_1 + iVar2 * 0x1c;
  *(undefined4 *)(param_1 + 4) = local_3c;
  *(undefined4 *)(param_1 + 8) = local_38;
  *(undefined4 *)(param_1 + 0xc) = uStack_34;
  *(undefined4 *)(param_1 + 0x10) = local_30;
  *(undefined1 *)(param_1 + 0x14) = local_2c;
  *(undefined1 *)(param_1 + 0x15) = local_2b;
  *(undefined4 *)(param_1 + 0x18) = local_28;
  return;
}



void fn_0079fa10(int param_1,int param_2,int param_3,int param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_70 [60];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  local_28 = param_4;
  iStack_2c = param_3;
  iVar6 = param_2;
  iStack_30 = param_2;
  iStack_34 = param_1;
  while( true ) {
    iVar7 = iVar6 * 2;
    iVar5 = iVar7 + 2;
    if (param_3 <= iVar5) break;
    iVar1 = param_1 + iVar5 * 0x2c;
    iVar1 = (*param_5)(iVar1,iVar1 + -0x2c);
    if (iVar1 != 0) {
      iVar5 = iVar7 + 1;
    }
    iVar6 = param_1 + iVar6 * 0x2c;
    iVar7 = param_1 + iVar5 * 0x2c;
    fn_003007d0(iVar6,iVar7);
    uVar3 = *(undefined4 *)(iVar7 + 8);
    uVar4 = *(undefined4 *)(iVar7 + 0xc);
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar7 + 4);
    *(undefined4 *)(iVar6 + 8) = uVar3;
    *(undefined4 *)(iVar6 + 0xc) = uVar4;
    uVar3 = *(undefined4 *)(iVar7 + 0x14);
    uVar4 = *(undefined4 *)(iVar7 + 0x18);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar7 + 0x10);
    *(undefined4 *)(iVar6 + 0x14) = uVar3;
    *(undefined4 *)(iVar6 + 0x18) = uVar4;
    uVar3 = *(undefined4 *)(iVar7 + 0x20);
    uVar4 = *(undefined4 *)(iVar7 + 0x24);
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar7 + 0x1c);
    *(undefined4 *)(iVar6 + 0x20) = uVar3;
    *(undefined4 *)(iVar6 + 0x24) = uVar4;
    *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar7 + 0x28);
    iVar6 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x2c;
    iVar1 = param_1 + iVar6 * 0x2c;
    fn_003007d0(iVar1,iVar5 + -0x2c);
    uVar3 = *(undefined4 *)(iVar5 + -0x24);
    uVar4 = *(undefined4 *)(iVar5 + -0x20);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + -0x28);
    *(undefined4 *)(iVar1 + 8) = uVar3;
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
    uVar3 = *(undefined4 *)(iVar5 + -0x18);
    uVar4 = *(undefined4 *)(iVar5 + -0x14);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar5 + -0x1c);
    *(undefined4 *)(iVar1 + 0x14) = uVar3;
    *(undefined4 *)(iVar1 + 0x18) = uVar4;
    uVar3 = *(undefined4 *)(iVar5 + -0xc);
    uVar4 = *(undefined4 *)(iVar5 + -8);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar5 + -0x10);
    *(undefined4 *)(iVar1 + 0x20) = uVar3;
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    iVar6 = iVar7 + 1;
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar5 + -4);
  }
  iVar7 = local_28;
  iVar5 = fn_001c6ba4(auStack_70,local_28);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar7 + 0x28);
  while (iVar7 = (iVar6 + -1) / 2, param_2 < iVar6) {
    iVar1 = param_1 + iVar7 * 0x2c;
    iVar2 = (*param_5)(iVar1,iVar5);
    if (iVar2 == 0) break;
    iVar6 = param_1 + iVar6 * 0x2c;
    fn_003007d0(iVar6,iVar1);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar6 + 8) = uVar3;
    *(undefined4 *)(iVar6 + 0xc) = uVar4;
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar6 + 0x14) = uVar3;
    *(undefined4 *)(iVar6 + 0x18) = uVar4;
    uVar3 = *(undefined4 *)(iVar1 + 0x20);
    uVar4 = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar6 + 0x20) = uVar3;
    *(undefined4 *)(iVar6 + 0x24) = uVar4;
    *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
    iVar6 = iVar7;
  }
  param_1 = param_1 + iVar6 * 0x2c;
  fn_003007d0(param_1,iVar5);
  uVar3 = *(undefined4 *)(iVar5 + 8);
  uVar4 = *(undefined4 *)(iVar5 + 0xc);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  uVar3 = *(undefined4 *)(iVar5 + 0x14);
  uVar4 = *(undefined4 *)(iVar5 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar3 = *(undefined4 *)(iVar5 + 0x20);
  uVar4 = *(undefined4 *)(iVar5 + 0x24);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar5 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar5 + 0x28);
  fn_002fedf4(auStack_70);
  return;
}



void fn_0079f860(int param_1,int param_2,int param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_60 [44];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  local_28 = param_4;
  iStack_2c = param_3;
  iVar6 = param_2;
  iStack_30 = param_2;
  iStack_34 = param_1;
  while( true ) {
    iVar7 = iVar6 * 2;
    iVar5 = iVar7 + 2;
    if (param_3 <= iVar5) break;
    iVar1 = param_1 + iVar5 * 0x28;
    iVar1 = (*param_5)(iVar1,iVar1 + -0x28);
    if (iVar1 != 0) {
      iVar5 = iVar7 + 1;
    }
    iVar7 = param_1 + iVar6 * 0x28;
    iVar6 = param_1 + iVar5 * 0x28;
    fn_003007d0(iVar7,iVar6);
    uVar3 = *(undefined4 *)(iVar6 + 8);
    uVar4 = *(undefined4 *)(iVar6 + 0xc);
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(iVar7 + 8) = uVar3;
    *(undefined4 *)(iVar7 + 0xc) = uVar4;
    uVar3 = *(undefined4 *)(iVar6 + 0x14);
    uVar4 = *(undefined4 *)(iVar6 + 0x18);
    *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
    *(undefined4 *)(iVar7 + 0x14) = uVar3;
    *(undefined4 *)(iVar7 + 0x18) = uVar4;
    uVar3 = *(undefined4 *)(iVar6 + 0x20);
    uVar4 = *(undefined4 *)(iVar6 + 0x24);
    *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar6 + 0x1c);
    *(undefined4 *)(iVar7 + 0x20) = uVar3;
    *(undefined4 *)(iVar7 + 0x24) = uVar4;
    iVar6 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x28;
    iVar1 = param_1 + iVar6 * 0x28;
    fn_003007d0(iVar1,iVar5 + -0x28);
    uVar3 = *(undefined4 *)(iVar5 + -0x20);
    uVar4 = *(undefined4 *)(iVar5 + -0x1c);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + -0x24);
    *(undefined4 *)(iVar1 + 8) = uVar3;
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
    uVar3 = *(undefined4 *)(iVar5 + -0x14);
    uVar4 = *(undefined4 *)(iVar5 + -0x10);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar5 + -0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar3;
    *(undefined4 *)(iVar1 + 0x18) = uVar4;
    uVar3 = *(undefined4 *)(iVar5 + -8);
    uVar4 = *(undefined4 *)(iVar5 + -4);
    iVar6 = iVar7 + 1;
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar5 + -0xc);
    *(undefined4 *)(iVar1 + 0x20) = uVar3;
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
  }
  iVar7 = fn_001c6ba4(auStack_60,local_28);
  while (iVar5 = (iVar6 + -1) / 2, param_2 < iVar6) {
    iVar1 = param_1 + iVar5 * 0x28;
    iVar2 = (*param_5)(iVar1,iVar7);
    if (iVar2 == 0) break;
    iVar6 = param_1 + iVar6 * 0x28;
    fn_003007d0(iVar6,iVar1);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar6 + 8) = uVar3;
    *(undefined4 *)(iVar6 + 0xc) = uVar4;
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar6 + 0x14) = uVar3;
    *(undefined4 *)(iVar6 + 0x18) = uVar4;
    uVar3 = *(undefined4 *)(iVar1 + 0x20);
    uVar4 = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar6 + 0x20) = uVar3;
    *(undefined4 *)(iVar6 + 0x24) = uVar4;
    iVar6 = iVar5;
  }
  param_1 = param_1 + iVar6 * 0x28;
  fn_003007d0(param_1,iVar7);
  uVar3 = *(undefined4 *)(iVar7 + 8);
  uVar4 = *(undefined4 *)(iVar7 + 0xc);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar7 + 4);
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  uVar3 = *(undefined4 *)(iVar7 + 0x14);
  uVar4 = *(undefined4 *)(iVar7 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar7 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar3 = *(undefined4 *)(iVar7 + 0x20);
  uVar4 = *(undefined4 *)(iVar7 + 0x24);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar7 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  fn_002fedf4(auStack_60);
  return;
}


