#include "0047d718_0047e0b0.h"



undefined4 * fn_0047e0b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0013d490();
  *puVar1 = &PTR_FUN_00854330;
  *(undefined1 *)(puVar1 + 0xc) = 3;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  iVar2 = fn_0015ece0(0x80);
  puVar1[0xe] = iVar2;
  puVar1[0xf] = iVar2;
  puVar1[0x10] = iVar2 + 0x80;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  iVar2 = fn_0015ece0(0x20);
  puVar1[0x13] = iVar2;
  puVar1[0x14] = iVar2;
  puVar1[0x15] = iVar2 + 0x20;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  iVar2 = fn_0015ece0(0x20);
  puVar1[0x18] = iVar2;
  puVar1[0x19] = iVar2;
  puVar1[0x1a] = iVar2 + 0x20;
  iVar2 = fn_0046f01c(puVar1 + 0x1c);
  iVar2 = fn_00124be8(iVar2 + 0x28);
  iVar2 = fn_0013d40c(iVar2 + 8);
  puVar1 = (undefined4 *)(iVar2 + -0xa0);
  *puVar1 = &PTR_LAB_008536c0;
  fn_0047dfd0(puVar1);
  return puVar1;
}



void fn_0047dfd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  
  fn_0014f55c();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_14 = 0;
  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x38) != iVar2) {
    *(uint *)(param_1 + 0x3c) = iVar2 - (iVar2 - *(int *)(param_1 + 0x38) & 0xfffffffcU);
  }
  fn_00158c6c((undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x38),6,&local_14);
  *(undefined1 *)(param_1 + 0x44) = 1;
  if (*(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 100;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  fn_0014f510(param_1 + 0x98,DAT_008b64f8);
  uVar1 = fn_0046f01c(auStack_38);
  fn_0048d3c8(param_1 + 0x70,uVar1);
  fn_0046f0bc(auStack_38);
  *(undefined4 *)(param_1 + 0x48) = 0;
  fn_0014f550(param_1,0x60,0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}



void fn_0047dfc0(int param_1)

{
  fn_0079c5b8(param_1 + 0x4c);
  return;
}



void fn_0047dfb4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 0x38) + param_2 * 4) = param_3;
  return;
}



undefined1 * fn_0047df5c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  undefined1 auStack_20 [16];
  
  fn_00169f1c(param_3,*(undefined4 *)(param_2 + 8));
  iVar1 = *(int *)(param_2 + 4);
  fn_0014ecf0(auStack_20);
  fn_0048114c(param_1,auStack_20,param_4,extraout_r1 + iVar1);
  return auStack_20;
}



void fn_0047dd6c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_00853638;
  fn_0014f4d8(param_1[0x1e]);
  piVar1 = (int *)param_1[0x24];
  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = (int *)param_1[0x26];
  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 4))();
  }
  fn_00456510(param_1 + 0x34,4);
  if ((int *)param_1[0x6a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x6a] + 4))();
    param_1[0x6a] = 0;
  }
  iVar2 = fn_0048cc74(param_1 + 0x4c);
  iVar2 = fn_00456728(iVar2 + -0x60);
  iVar2 = fn_0014f2b0(iVar2 + -0x24);
  if (*(int **)(iVar2 + -0xc) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + -0xc) + 4))();
  }
  if (*(int **)(iVar2 + -0x14) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + -0x14) + 4))();
  }
  if (*(int **)(iVar2 + -0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + -0x1c) + 4))();
  }
  iVar2 = fn_00170f54(iVar2 + -0x2c);
  iVar2 = fn_00170f54(iVar2 + -0x10);
  fn_00479d5c(iVar2 + -0x70);
  return;
}



void fn_0047d718(int param_1)

{
  int iVar1;
  undefined *local_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined *local_24;
  undefined1 auStack_20 [12];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_0047dac8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xe0) == '\x02') {
    iVar1 = *(int *)(param_1 + 0x1a8);
    if (iVar1 != 0) {
      fn_006d36d4(auStack_20,param_1 + 0xac);
      fn_00170fa4(iVar1 + 0x10,auStack_20);
      fn_00170f54(auStack_20);
      pcStack_2c = fn_0047d5fc;
      uStack_28 = 0;
      local_24 = &DAT_0047d974;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    }
    switch(*(undefined1 *)(param_1 + 0x88)) {
    case 0:
      pcStack_2c = fn_0047cd20;
      uStack_28 = 0;
      local_24 = &DAT_0047d974;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    case 1:
      pcStack_2c = fn_0047d978;
      uStack_28 = 0;
      local_24 = &DAT_0047d974;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    case 2:
      pcStack_2c = fn_0047cfb4;
      uStack_28 = 0;
      local_24 = &DAT_0047d974;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    case 3:
      pcStack_2c = fn_0047ce70;
      uStack_28 = 0;
      local_24 = &DAT_0047d974;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    case 4:
      pcStack_2c = fn_0047d35c;
      uStack_28 = 0;
      local_24 = &DAT_0047d974;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    case 5:
      pcStack_2c = fn_0047d210;
      uStack_28 = 0;
      local_24 = &DAT_0047d974;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    case 6:
      pcStack_2c = fn_0047d4a0;
      uStack_28 = 0;
      local_24 = &DAT_0047d974;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    }
  }
  else {
    pcStack_2c = fn_0047cc48;
    uStack_28 = 0;
    local_24 = &DAT_0047d974;
    local_30 = &DAT_00853500;
    fn_00479c98(param_1,&local_30);
  }
  return;
}



void fn_0047d978(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *local_40;
  code *pcStack_3c;
  int iStack_38;
  undefined *local_34;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_0047dac8(param_1);
    return;
  }
  fn_00456400(param_1 + 0x130);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_0047cc48;
    puVar2[2] = 0;
    puVar2[3] = &DAT_0047dac0;
  }
  fn_00479b1c(param_1,param_1 + 0x130,puVar2);
  fn_006d36d4(auStack_28,param_1 + 0xac);
  local_34 = (undefined *)(param_1 + 0x94);
  pcStack_3c = (code *)(param_1 + 0x80);
  local_40 = (undefined *)(param_1 + 0x7c);
  iStack_38 = param_1 + 0x8c;
  iVar1 = fn_004ad878(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x130,param_1 + 0x70,auStack_28);
  fn_00170f54(auStack_28);
  if (iVar1 == 0) {
    local_2c = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_20,&local_2c);
    fn_0047ccd0(param_1,3,uVar3);
    return;
  }
  if (*(char *)(param_1 + 0x140) == '\x01') {
    fn_004b2f0c(param_1);
    return;
  }
  pcStack_3c = fn_0047cc48;
  iStack_38 = 0;
  local_34 = &DAT_0047dac0;
  local_40 = &DAT_00853500;
  fn_00479c98(param_1,&local_40);
  return;
}



void fn_0047dac8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    (**(code **)(*piVar1 + 4))();
  }
  fn_00456510(param_1 + 0xd0,4);
  if (*(int **)(param_1 + 0x1a8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1a8) + 4))();
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  fn_004b2f04(param_1);
  return;
}


