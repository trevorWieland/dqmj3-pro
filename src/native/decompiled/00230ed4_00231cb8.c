#include "00230ed4_00231cb8.h"



void fn_00231cb8(int param_1)

{
  undefined4 auStack_a0 [38];
  
  fn_0017821c(auStack_a0,&PTR_s_SortMessage_Level_007ce854,0x94);
  fn_0016ba34(DAT_00897800,DAT_00898228,auStack_a0[param_1],0);
  return;
}



void fn_00231ca0(undefined4 param_1,undefined4 param_2)

{
  fn_00192cb4(DAT_00897800,param_1,param_2);
  return;
}



void fn_002318cc(int param_1,undefined4 **param_2,undefined4 **param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_50 [3];
  undefined4 *local_44;
  int local_40 [8];
  
  if ((param_1 != 0) && (iVar1 = fn_00203ef8((int)*(short *)(param_1 + 4)), iVar1 != 0)) {
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = 0;
    local_40[6] = 0;
    local_40[7] = 0;
    fn_00230854(local_40,0x10,(int)*(short *)(param_1 + 4),0);
    fn_00168a24(&local_44,local_40,local_50);
    if (local_44[-3] + 1 == 0) {
      if (param_2 != &local_44) {
        local_50[0] = local_44[-1];
        local_50[1] = 0;
        local_50[2] = local_50[0];
        fn_00177c88(param_2,0,(*param_2)[-1],local_44);
      }
    }
    else {
      if (local_44 + -3 != &DAT_008f9ce8) {
        local_44[-3] = local_44[-3] + 1;
      }
      if (*param_2 != &DAT_008f9cf4) {
        piVar2 = *param_2 + -3;
        iVar1 = *piVar2;
        if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(*param_2 + -3,(*param_2)[-2] + 8,0);
        }
      }
      *param_2 = local_44;
    }
    if (local_44 != &DAT_008f9cf4) {
      piVar2 = local_44 + -3;
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
      }
    }
    local_50[0] = 3;
    local_50[1] = 0;
    fn_0022f314(local_40,0x10,*(undefined1 *)(param_1 + 6),param_1 + 8);
    fn_00168a24(&local_44,local_40,local_50 + 2);
    piVar2 = local_44 + -3;
    if (*piVar2 == -1) {
      if (param_3 != &local_44) {
        local_50[0] = local_44[-1];
        local_50[1] = 0;
        local_50[2] = local_50[0];
        fn_00177c88(param_3,0,(*param_3)[-1]);
      }
    }
    else {
      if (piVar2 != &DAT_008f9ce8) {
        *piVar2 = *piVar2 + 1;
      }
      if (*param_3 != &DAT_008f9cf4) {
        piVar2 = *param_3 + -3;
        iVar1 = *piVar2;
        if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(*param_3 + -3,(*param_3)[-2] + 8,0);
        }
      }
      *param_3 = local_44;
    }
    if (local_44 != &DAT_008f9cf4) {
      piVar2 = local_44 + -3;
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
      }
    }
    return;
  }
  iVar1 = fn_00100b58(&DAT_00231c9c);
  if (iVar1 == 0) {
    puVar3 = *param_2;
    piVar2 = puVar3 + -3;
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      puVar3[-1] = 0;
      *(undefined2 *)*param_2 = 0;
    }
    else {
      if ((puVar3 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(*param_2 + -3,(*param_2)[-2] + 8,0);
      }
      *param_2 = &DAT_008f9cf4;
    }
  }
  else {
    local_50[1] = 0;
    local_50[0] = iVar1;
    local_50[2] = iVar1;
    fn_00177c88(param_2,0,(*param_2)[-1],&DAT_00231c9c);
  }
  iVar1 = fn_00100b58(&DAT_00231c9c);
  if (iVar1 != 0) {
    local_50[1] = 0;
    local_50[0] = iVar1;
    local_50[2] = iVar1;
    fn_00177c88(param_3,0,(*param_3)[-1],&DAT_00231c9c);
    return;
  }
  puVar3 = *param_3;
  piVar2 = puVar3 + -3;
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    puVar3[-1] = 0;
    *(undefined2 *)*param_3 = 0;
    return;
  }
  if ((puVar3 != &DAT_008f9cf4) &&
     ((iVar1 == -1 || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))))) {
    fn_001008c4(*param_3 + -3,(*param_3)[-2] + 8,0);
  }
  *param_3 = &DAT_008f9cf4;
  return;
}



void fn_00231690(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [68];
  undefined1 auStack_14 [4];
  
  fn_00301f50(auStack_58,0x44);
  fn_00231570(auStack_58,0x21,param_2,param_3);
  fn_00168a24(param_1,auStack_58,auStack_14);
  return;
}



void fn_00231570(short *param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  bool bVar7;
  undefined1 auStack_40 [36];
  
  iVar2 = fn_00203ef8((int)*(short *)(param_3 + 4));
  if (iVar2 != 0) {
    uVar1 = *(undefined1 *)(param_3 + 6);
    fn_00230854(param_1,param_2,(int)*(short *)(param_3 + 4),param_4);
    fn_0022f314(auStack_40,0x10,uVar1,param_3 + 8,3,0);
    iVar2 = fn_00100b58(auStack_40);
    iVar3 = fn_00100b58(param_1);
    if (param_2 <= (uint)(iVar3 + iVar2)) {
      iVar2 = (param_2 - iVar3) + -1;
    }
    fn_00103156(param_1,auStack_40,iVar2);
    param_1[param_2 - 1] = 0;
    return;
  }
  psVar4 = (short *)fn_0016ba34(DAT_00897800,DAT_00898214,(char *)&DAT_00231670,0);
  uVar5 = 0;
  psVar6 = param_1;
  if (param_2 != 1) {
    do {
      uVar5 = uVar5 + 1;
      param_1 = psVar6 + 1;
      *psVar6 = *psVar4;
      bVar7 = psVar4[1] == 0;
      psVar4 = psVar4 + 1;
      psVar6 = param_1;
    } while ((bVar7 || uVar5 <= param_2 - 1) && (!bVar7 && param_2 - 1 != uVar5));
  }
  *param_1 = 0;
  return;
}



void fn_002314fc(undefined4 param_1)

{
  undefined1 auStack_88 [128];
  
  fn_00301f50(auStack_88,0x80);
  fn_001028d4(auStack_88,(char *)&DAT_00231548,param_1);
  fn_0016ba34(DAT_00897800,DAT_00898214,auStack_88,0);
  return;
}



void fn_00231410(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  wchar16 *pwVar2;
  undefined4 uVar3;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [4];
  
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  pwVar2 = L"";
  iVar1 = fn_0068f6a8(param_2);
  if (iVar1 == param_3) {
    pwVar2 = (wchar16 *)fn_00192cb4(DAT_00897800,0x25,0);
  }
  uVar3 = DAT_0089821c;
  fn_0017d96c(auStack_48,0x20,0x1f,(char *)&DAT_00231da0,param_2);
  uVar3 = fn_0016ba34(DAT_00897800,uVar3,auStack_48,0);
  fn_0018a618(&local_68,0x10,0xf,L"%ls%ls",pwVar2,uVar3);
  fn_00168a24(param_1,&local_68,auStack_28);
  return;
}



undefined4 fn_00231388(undefined4 param_1)

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
  fn_0017d96c(&local_24,0xe,0xd,(char *)&DAT_002313fc,param_1);
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



void fn_00230fe4(undefined4 param_1,int param_2,int param_3,undefined1 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_3 == 0) {
    uVar2 = 0x3b;
  }
  else if (param_3 == 1) {
    uVar2 = 0x3a;
  }
  else if (param_3 == 2) {
    uVar2 = 0x39;
  }
  uVar2 = fn_00192cb4(DAT_00897800,uVar2,param_5);
  uVar1 = fn_002894a4(DAT_00897800,param_4);
  fn_0018a618(param_1,param_2,param_2 + -1,L"%ls%ls",uVar2,uVar1);
  return;
}



undefined4 fn_00230f5c(undefined4 param_1)

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
  fn_0017d96c(&local_24,0xe,0xd,(char *)&DAT_00230fd0,param_1);
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



undefined4 fn_00230ed4(undefined4 param_1)

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
  fn_0017d96c(&local_24,0xe,0xd,(char *)&DAT_00230f48,param_1);
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


