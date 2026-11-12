#include "0047c594_0047cd20.h"



void fn_0047cd20(int param_1)

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
    puVar2[3] = &DAT_0047ce68;
  }
  fn_00479b1c(param_1,param_1 + 0x130,puVar2);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0xc4);
  fn_006d36d4(auStack_40,param_1 + 0xac);
  iVar1 = fn_004ace98(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x130,
                       *(undefined4 *)(param_1 + 0xc4),param_1 + 0x70,auStack_40,param_1 + 0x7c,
                       param_1 + 0x80);
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
  puStack_1c = &DAT_0047ce68;
  fn_00479c98(param_1,&local_28);
  return;
}



void fn_0047cc48(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_0047dac8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xe0) == '\x02') {
    local_18 = *(undefined4 *)(param_1 + 0x168);
    uStack_14 = *(undefined4 *)(param_1 + 0x16c);
    uStack_10 = *(undefined4 *)(param_1 + 0x170);
    fn_0047ccd0(param_1,*(undefined1 *)(param_1 + 0x140),&local_18);
    return;
  }
  local_18 = *(undefined4 *)(param_1 + 0x108);
  uStack_14 = *(undefined4 *)(param_1 + 0x10c);
  uStack_10 = *(undefined4 *)(param_1 + 0x110);
  fn_0047ccd0(param_1,*(undefined1 *)(param_1 + 0xe0),&local_18);
  return;
}



void fn_0047ccd0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  fn_004b2f04();
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    local_20 = *param_3;
    uStack_1c = param_3[1];
    uStack_18 = param_3[2];
    fn_00455e8c(iVar1,param_2,&local_20,1);
  }
  return;
}



void fn_0047c82c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_20;
  int iStack_1c;
  undefined4 local_14 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_14[0] = 0x80010004;
    uVar3 = fn_004b8d4c(&local_20,local_14);
    fn_0047c594(param_1,uVar3);
    return;
  }
  fn_00456400(param_1 + 400);
  iVar1 = fn_004af264(*(int *)(param_1 + 0x6c) + 0x9c,param_1 + 400,param_1 + 0x70,param_1 + 0x2a8)
  ;
  if (iVar1 != 0) {
    iVar1 = fn_001249d0();
    fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0x1d4));
    fn_00456400(param_1 + 0x208);
    iStack_1c = param_1 + 0x284;
    local_20 = param_1 + 0x280;
    iVar1 = fn_0049470c(param_1 + 0x208,0x7d,0,0x7fffffff);
    if (iVar1 != 0) {
      iVar1 = fn_001249d0();
      fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
                   *(undefined4 *)(param_1 + 0x24c));
      fn_004b2f0c(param_1);
      puVar2 = (undefined4 *)fn_0015ecdc(0x10);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &DAT_00853500;
        puVar2[1] = fn_0047c980;
        puVar2[2] = 0;
        puVar2[3] = &DAT_0047c978;
      }
      fn_00479b1c(param_1,param_1 + 400,puVar2);
      return;
    }
  }
  local_14[0] = 0x8001000d;
  uVar3 = fn_004b8d4c(&local_20,local_14);
  fn_0047c594(param_1,uVar3);
  return;
}



void fn_0047c638(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *local_38;
  code *pcStack_34;
  undefined4 uStack_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 *local_1c [2];
  undefined1 *local_14 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_1c[0] = (undefined1 *)0x80010004;
    uVar2 = fn_004b8d4c(&local_28,local_1c);
    fn_0047c594(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0x218) != '\x02') {
    local_28 = *(undefined4 *)(param_1 + 0x240);
    local_24 = *(undefined4 *)(param_1 + 0x244);
    uStack_20 = *(undefined4 *)(param_1 + 0x248);
    fn_0047c594(param_1,&local_28);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2a4);
  if (iVar1 == 1) {
    local_24 = 0;
    fn_00156234(param_1 + 0x29c,&local_28);
    uVar2 = fn_00102c18(local_28,&local_24,10);
    *(undefined4 *)(param_1 + 0x2b0) = uVar2;
    fn_0014f4d8(local_28);
    if (*(int *)(param_1 + 0x2b0) == 0) {
      local_14[0] = &DAT_80010001;
      uVar2 = fn_004b8d4c(&uStack_20,local_14);
      fn_0047c594(param_1,uVar2);
      return;
    }
    pcStack_34 = fn_0047ca7c;
    uStack_30 = 0;
    local_2c = &DAT_0047c824;
    local_38 = &DAT_00853500;
    fn_00479c98(param_1,&local_38);
    return;
  }
  if (iVar1 == 3) {
    local_1c[0] = (undefined1 *)0x800300de;
    uVar2 = fn_004b8d4c(&local_28,local_1c);
    fn_0047c594(param_1,uVar2);
    return;
  }
  if (iVar1 == 4) {
    local_1c[0] = (undefined1 *)0x8001000a;
    uVar2 = fn_004b8d4c(&local_28,local_1c);
    fn_0047c594(param_1,uVar2);
    return;
  }
  if (iVar1 == 5) {
    local_1c[0] = (undefined1 *)0x80030070;
    uVar2 = fn_004b8d4c(&local_28,local_1c);
    fn_0047c594(param_1,uVar2);
    return;
  }
  local_1c[0] = &DAT_80010001;
  uVar2 = fn_004b8d4c(&local_28,local_1c);
  fn_0047c594(param_1,uVar2);
  return;
}



void fn_0047ca7c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_18 [3];
  undefined4 local_c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_c = 0x80010004;
    uVar3 = fn_004b8d4c(local_18,&local_c);
    fn_0047c594(param_1,uVar3);
    return;
  }
  fn_00456400(param_1 + 400);
  local_18[0] = *(undefined4 *)(param_1 + 0x2b0);
  iVar1 = fn_004b1820(*(int *)(param_1 + 0x6c) + 0x9c,param_1 + 400,local_18,param_1 + 0x2b8);
  if (iVar1 == 0) {
    local_c = 0x8001000d;
    uVar3 = fn_004b8d4c(local_18,&local_c);
    fn_0047c594(param_1,uVar3);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0x1d4));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = fn_0047cb9c;
    *puVar2 = &DAT_00853500;
    puVar2[2] = 0;
    puVar2[3] = &DAT_0047cb90;
  }
  fn_00479b1c(param_1,param_1 + 400,puVar2);
  return;
}



void fn_0047cb9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_c = 0x80010004;
    uVar2 = fn_004b8d4c(&local_18,&local_c);
    fn_0047c594(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0x1a0) == '\x02') {
    local_1c = 0x10001;
    uVar2 = fn_004b8d4c(auStack_28,&local_1c);
    fn_0047c594(param_1,uVar2);
    return;
  }
  local_18 = *(undefined4 *)(param_1 + 0x1c8);
  uStack_14 = *(undefined4 *)(param_1 + 0x1cc);
  uStack_10 = *(undefined4 *)(param_1 + 0x1d0);
  fn_0047c594(param_1,&local_18);
  return;
}



void fn_0047c594(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_00456510(param_1 + 400,4);
    fn_00456510(param_1 + 0x208,4);
  }
  else {
    iVar2 = fn_006d3b8c(param_2);
    if (iVar2 == 0) {
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456044(iVar1,&local_20);
    }
    else {
      fn_004933e0(*(undefined4 *)(param_1 + 0x188),param_1 + 0x2b8);
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456074(iVar1,&local_20);
    }
  }
  fn_004b2f04(param_1);
  return;
}


