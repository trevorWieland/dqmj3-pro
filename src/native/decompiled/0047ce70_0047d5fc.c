#include "0047ce70_0047d5fc.h"



void fn_0047d5fc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_34 [12];
  undefined4 local_28 [2];
  undefined *local_20;
  code *pcStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  
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
    puVar2[3] = &DAT_0047d710;
  }
  fn_00479b1c(param_1,param_1 + 0x130,puVar2);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1a8) + 8))(*(int **)(param_1 + 0x1a8),param_1 + 0x130)
  ;
  if (iVar1 == 0) {
    local_28[0] = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_34,local_28);
    fn_0047ccd0(param_1,3,uVar3);
    return;
  }
  if (*(char *)(param_1 + 0x140) == '\x01') {
    fn_004b2f0c(param_1);
    return;
  }
  pcStack_1c = fn_0047cc48;
  uStack_18 = 0;
  local_20 = &DAT_00853500;
  puStack_14 = &DAT_0047d710;
  fn_00479c98(param_1,&local_20);
  return;
}



void fn_0047d4a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *local_40;
  code *local_3c;
  int local_38;
  undefined *local_34;
  undefined4 uStack_30;
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
    puVar2[3] = &DAT_0047d5f4;
  }
  fn_00479b1c(param_1,param_1 + 0x130,puVar2);
  fn_006d36d4(auStack_28,param_1 + 0xac);
  local_34 = *(undefined **)(param_1 + 0xa4);
  uStack_30 = *(undefined4 *)(param_1 + 0xa8);
  local_38 = param_1 + 0x9c;
  local_3c = (code *)(param_1 + 0x80);
  local_40 = (undefined *)(param_1 + 0x7c);
  iVar1 = fn_004ad62c(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x130,param_1 + 0x70,auStack_28);
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
  local_3c = fn_0047cc48;
  local_38 = 0;
  local_34 = &DAT_0047d5f4;
  local_40 = &DAT_00853500;
  fn_00479c98(param_1,&local_40);
  return;
}



void fn_0047d35c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined *local_28;
  code *pcStack_24;
  undefined4 uStack_20;
  undefined *local_1c;
  
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
    puVar2[3] = &DAT_0047d498;
  }
  fn_00479b1c(param_1,param_1 + 0x130,puVar2);
  fn_006d36d4(auStack_40,param_1 + 0xac);
  iVar1 = fn_004ad4c8(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x130,param_1 + 0x70,param_1 + 0x80
                       ,auStack_40);
  fn_00170f54(auStack_40);
  if (iVar1 == 0) {
    local_44 = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_38,&local_44);
    fn_0047ccd0(param_1,3,uVar3);
    return;
  }
  if (*(char *)(param_1 + 0x140) == '\x01') {
    fn_004b2f0c(param_1);
    return;
  }
  pcStack_24 = fn_0047cc48;
  uStack_20 = 0;
  local_1c = &DAT_0047d498;
  local_28 = &DAT_00853500;
  fn_00479c98(param_1,&local_28);
  return;
}



void fn_0047d210(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *local_40;
  code *pcStack_3c;
  int iStack_38;
  undefined *puStack_34;
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
    puVar2[3] = &DAT_0047d354;
  }
  fn_00479b1c(param_1,param_1 + 0x130,puVar2);
  fn_006d36d4(auStack_28,param_1 + 0xac);
  puStack_34 = *(undefined **)(param_1 + 0xa4);
  iStack_38 = param_1 + 0x9c;
  pcStack_3c = (code *)(param_1 + 0x80);
  local_40 = (undefined *)(param_1 + 0x7c);
  iVar1 = fn_004ad318(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x130,param_1 + 0x70,auStack_28);
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
  local_40 = &DAT_00853500;
  puStack_34 = &DAT_0047d354;
  fn_00479c98(param_1,&local_40);
  return;
}



void fn_0047d0f8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_34 [12];
  undefined4 local_28 [2];
  undefined *local_20;
  code *pcStack_1c;
  undefined4 uStack_18;
  undefined *local_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_0047dac8(param_1);
    return;
  }
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_0047d718;
    puVar2[2] = 0;
    puVar2[3] = &DAT_0047d208;
  }
  fn_00479b1c(param_1,param_1 + 0xd0,puVar2);
  iVar1 = fn_00486f60(param_1 + 0xd0,*(undefined4 *)(param_1 + 0x78),param_1 + 0xac);
  if (iVar1 == 0) {
    local_28[0] = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_34,local_28);
    fn_0047ccd0(param_1,3,uVar3);
    return;
  }
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    fn_004b2f0c(param_1);
    return;
  }
  pcStack_1c = fn_0047cc48;
  uStack_18 = 0;
  local_14 = &DAT_0047d208;
  local_20 = &DAT_00853500;
  fn_00479c98(param_1,&local_20);
  return;
}



void fn_0047cfb4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined *local_28;
  code *pcStack_24;
  undefined4 uStack_20;
  undefined *local_1c;
  
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
    puVar2[3] = &DAT_0047d0f0;
  }
  fn_00479b1c(param_1,param_1 + 0x130,puVar2);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 200);
  fn_006d36d4(auStack_40,param_1 + 0xac);
  iVar1 = fn_004ad1b8(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x130,
                       *(undefined4 *)(param_1 + 200),auStack_40);
  fn_00170f54(auStack_40);
  if (iVar1 == 0) {
    local_44 = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_38,&local_44);
    fn_0047ccd0(param_1,3,uVar3);
    return;
  }
  if (*(char *)(param_1 + 0x140) == '\x01') {
    fn_004b2f0c(param_1);
    return;
  }
  pcStack_24 = fn_0047cc48;
  uStack_20 = 0;
  local_1c = &DAT_0047d0f0;
  local_28 = &DAT_00853500;
  fn_00479c98(param_1,&local_28);
  return;
}



void fn_0047ce70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined *local_28;
  code *pcStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  
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
    puVar2[3] = &DAT_0047cfac;
  }
  fn_00479b1c(param_1,param_1 + 0x130,puVar2);
  fn_006d36d4(auStack_40,param_1 + 0xac);
  iVar1 = fn_004ad024(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x130,auStack_40,param_1 + 0x80,
                       param_1 + 0x8c,param_1 + 0x94);
  fn_00170f54(auStack_40);
  if (iVar1 == 0) {
    local_44 = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_38,&local_44);
    fn_0047ccd0(param_1,3,uVar3);
    return;
  }
  if (*(char *)(param_1 + 0x140) == '\x01') {
    fn_004b2f0c(param_1);
    return;
  }
  pcStack_24 = fn_0047cc48;
  uStack_20 = 0;
  local_28 = &DAT_00853500;
  puStack_1c = &DAT_0047cfac;
  fn_00479c98(param_1,&local_28);
  return;
}


