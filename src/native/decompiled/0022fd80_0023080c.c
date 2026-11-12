#include "0022fd80_0023080c.h"



void fn_0023080c(undefined4 param_1)

{
  fn_0016ba34(DAT_00897800,DAT_00898224,param_1,0);
  return;
}



undefined4 fn_00230730(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  fn_0017d96c(&local_24,0xe,0xd,(char *)&DAT_002307a4,param_1);
  uVar2 = DAT_00897800;
  iVar1 = fn_00148c38(DAT_00897800,DAT_008987a8);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_0016ba34(uVar2,DAT_008987a8,&local_24,0);
  }
  return uVar2;
}



void fn_0023070c(undefined4 param_1)

{
  fn_0016ba34(DAT_00897800,DAT_008987a8,param_1,0);
  return;
}



undefined4 fn_00230604(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_3c;
  undefined1 auStack_38 [32];
  undefined1 auStack_18 [8];
  
  uVar1 = DAT_00898210;
  fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_0015b0b4,(int)*(short *)(param_1 + 4));
  uVar1 = fn_0016ba34(DAT_00897800,uVar1,auStack_38,0);
  fn_00168a24(&local_3c,uVar1,auStack_18);
  uVar1 = DAT_00897800;
  fn_0016ba84(DAT_00897800,local_3c);
  uVar1 = fn_0016ba34(uVar1,DAT_00898248,(char *)&DAT_002306f0,0);
  if (local_3c != &DAT_008f9cf4) {
    piVar2 = local_3c + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  return uVar1;
}



undefined4 fn_002305a4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
  case 1:
    uVar1 = 0x42;
    break;
  case 2:
    uVar1 = 0x43;
    break;
  case 3:
    uVar1 = 0x44;
    break;
  case 4:
    uVar1 = 0x45;
    break;
  default:
    return 0;
  }
  uVar1 = fn_00192cb4(DAT_00897800,uVar1,param_2);
  return uVar1;
}



void fn_0023051c(undefined4 param_1,undefined4 param_2)

{
  switch(param_1) {
  case 0:
    param_2 = 0x78;
    break;
  case 1:
    param_2 = 0x79;
    break;
  case 2:
    param_2 = 0x7a;
    break;
  case 3:
    param_2 = 0x7b;
    break;
  case 4:
    param_2 = 0x7c;
    break;
  case 5:
    param_2 = 0x7d;
    break;
  case 6:
    param_2 = 0x7e;
    break;
  case 7:
    param_2 = 0x7f;
    break;
  case 8:
    param_2 = 0x80;
  }
  fn_00192cb4(DAT_00897800,param_2,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0023046c) */

int fn_0023040c(short *param_1,uint param_2,uint param_3)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar3 = &local_28;
  psVar1 = (short *)fn_00192cb4(DAT_00897800,0x81,0);
  uVar4 = 0;
  psVar6 = param_1;
  psVar5 = param_1;
  if (param_2 != 1) {
    do {
      uVar4 = uVar4 + 1;
      psVar6 = psVar5 + 1;
      *psVar5 = *psVar1;
      if (psVar1[1] == 0) break;
      psVar1 = psVar1 + 1;
      psVar5 = psVar6;
    } while (uVar4 < param_2 - 1);
  }
  *psVar6 = 0;
  if (param_3 < 100) {
    local_28 = 0;
    local_24 = 0;
    fn_0022ebb4(&local_28,3,param_3,0);
    iVar7 = 3;
    iVar2 = fn_00100b58(param_1);
    uVar4 = iVar2 + 3;
  }
  else {
    puVar3 = (undefined4 *)fn_00192cb4(DAT_00897800,0x25,0);
    iVar7 = 2;
    iVar2 = fn_00100b58(param_1);
    uVar4 = iVar2 + 2;
  }
  if (param_2 <= uVar4) {
    iVar7 = (param_2 - iVar2) + -1;
  }
  fn_00103156(param_1,puVar3,iVar7);
  param_1[param_2 - 1] = 0;
  return iVar7;
}



void fn_002303c0(undefined4 param_1)

{
  undefined1 auStack_28 [40];
  
  fn_001028d4(auStack_28,(char *)&DAT_002303f8,param_1);
  fn_0016ba34(DAT_00897800,L"rom:/data/Message/LocationMessage.mes",auStack_28,0);
  return;
}



void fn_00230374(undefined4 param_1)

{
  undefined1 auStack_18 [24];
  
  fn_00102908(auStack_18,0xd,(char *)&DAT_007ce8e8,param_1);
  fn_0016ba34(DAT_00897800,DAT_0089878c,auStack_18,0);
  return;
}



void fn_00230294(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  fn_00192cb4(DAT_00897800,(int)*(short *)(&DAT_007ce770 + param_3 * 2),param_6);
  fn_0016ba34(DAT_00897800,DAT_0089877c,(char *)&DAT_0023032c,0);
  fn_0018a618(param_1,param_2,param_2 + -1);
  return;
}



void fn_002301d8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [8];
  
  fn_00192cb4(DAT_00897800,(int)*(short *)(&DAT_007ce770 + param_2 * 2),param_5);
  fn_0016ba34(DAT_00897800,DAT_0089877c,(char *)&DAT_0023032c,0);
  fn_0018a618(auStack_3c,10,9);
  fn_00168a24(param_1,auStack_3c,auStack_28);
  return;
}



void fn_002301b4(undefined4 param_1)

{
  fn_0016ba34(DAT_00897800,DAT_00898780,param_1,0);
  return;
}



void fn_0023002c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_0089823c;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0023007c,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
  return;
}



void fn_00230008(undefined4 param_1)

{
  fn_0016ba34(DAT_00897800,DAT_0089879c,param_1,0);
  return;
}



void fn_0022ff00(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  switch(param_1) {
  case 1:
    pcVar1 = (char *)&DAT_0022ff94;
    break;
  case 2:
    pcVar1 = (char *)&DAT_0022ffa0;
    break;
  case 3:
    pcVar1 = (char *)&DAT_0022ffac;
    break;
  case 4:
    pcVar1 = (char *)&DAT_0022ffb8;
    break;
  case 5:
    pcVar1 = (char *)&DAT_0022ffc8;
    break;
  case 6:
    pcVar1 = (char *)&DAT_0022ffd4;
    break;
  case 7:
    pcVar1 = (char *)&DAT_0022ffe0;
    break;
  case 8:
    pcVar1 = (char *)&DAT_0022ffec;
    break;
  case 9:
    pcVar1 = (char *)&DAT_0022fff8;
  }
  fn_0016ba34(DAT_00897800,DAT_0089877c,pcVar1,0);
  return;
}



void fn_0022fd80(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_48 [2];
  undefined1 auStack_40 [36];
  
  uVar1 = DAT_00898218;
  if (param_4 == 0) {
    local_48[0] = param_1;
    fn_0017d96c(auStack_40,0x20,0x1f,(char *)&DAT_0016a87c);
    uVar1 = fn_0016ba34(DAT_00897800,uVar1,auStack_40,0);
    fn_0016ba84(DAT_00897800,uVar1);
    if (1 < param_2) {
      fn_00101a50(local_48,0xb,&DAT_0022fe90,param_2);
      fn_0016ba84(DAT_00897800,local_48);
    }
  }
  else {
    fn_00101a50(local_48,0xb,&DAT_0022fe90,param_2);
    fn_0016ba84(DAT_00897800,local_48);
  }
  fn_0016ba34(DAT_00897800,DAT_00898790);
  return;
}


