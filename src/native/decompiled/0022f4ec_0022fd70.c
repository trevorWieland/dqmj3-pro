#include "0022f4ec_0022fd70.h"



void fn_0022fd70(int param_1,int param_2)

{
  undefined4 uVar1;
  int aiStack_48 [2];
  undefined1 auStack_40 [36];
  
  uVar1 = DAT_00898218;
  if (param_1 == 1000) {
    fn_00101a50(aiStack_48,0xb,&DAT_0022fe90,param_2);
    fn_0016ba84(DAT_00897800,aiStack_48);
  }
  else {
    aiStack_48[0] = param_1;
    fn_0017d96c(auStack_40,0x20,0x1f,"I%04d");
    uVar1 = fn_0016ba34(DAT_00897800,uVar1,auStack_40,0);
    fn_0016ba84(DAT_00897800,uVar1);
    if (1 < param_2) {
      fn_00101a50(aiStack_48,0xb,&DAT_0022fe90,param_2);
      fn_0016ba84(DAT_00897800,aiStack_48);
    }
  }
  fn_0016ba34(DAT_00897800,DAT_00898790);
  return;
}



void fn_0022fd4c(undefined4 param_1)

{
  fn_0016ba34(DAT_00897800,DAT_00898250,param_1,0);
  return;
}



void fn_0022fd28(undefined4 param_1)

{
  fn_0016ba34(DAT_00897800,DAT_00898794,param_1,0);
  return;
}



void fn_0022fc1c(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_28 [16];
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  fn_00102908(auStack_28,0xd,(char *)&DAT_007ce8e8,*param_1);
  uVar3 = fn_0016ba34(DAT_00897800,DAT_0089878c,auStack_28,0);
  fn_00102908(auStack_28,0xd,(char *)&DAT_007ce8e8,uVar2);
  uVar4 = fn_0016ba34(DAT_00897800,DAT_0089878c,auStack_28,0);
  fn_00102908(auStack_28,0xd,(char *)&DAT_007ce8e8,uVar1);
  uVar5 = fn_0016ba34(DAT_00897800,DAT_0089878c,auStack_28,0);
  fn_0016ba84(DAT_00897800,uVar3);
  fn_0016ba84(DAT_00897800,uVar4);
  fn_0016ba84(DAT_00897800,uVar5);
  fn_0016ba34(DAT_00897800,DAT_00898248,(char *)&DAT_0022fd18,0);
  return;
}



void fn_0022fb24(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = fn_0016ba34(DAT_00897800,DAT_008987ac,&DAT_002301a4,0);
  }
  else if (param_1 == 2) {
    uVar1 = fn_0016ba34(DAT_00897800,DAT_008987ac,&DAT_002301ac,0);
  }
  else if (param_1 == 3) {
    uVar1 = fn_0016ba34(DAT_00897800,DAT_008987ac,&DAT_002301a0,0);
  }
  else {
    uVar1 = 0;
  }
  fn_0016ba84(DAT_00897800,uVar1);
  if (param_2 == 0) {
    fn_0016ba34(DAT_00897800,DAT_008987ac,(char *)&DAT_0022fc10,0);
    return;
  }
  fn_0016ba34(DAT_00897800,DAT_008987ac,(char *)&DAT_0022fbf8,0);
  return;
}



void fn_0022fa1c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 auStack_c [4];
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  fn_0022f818(&local_38,0x15,param_2,param_3);
  fn_00168a24(param_1,&local_38,auStack_c);
  return;
}



void fn_0022f818(undefined2 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined2 *puStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  *param_1 = 0;
  puStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  uVar1 = fn_00163a00(param_3);
  switch(uVar1) {
  default:
    goto switchD_0022f848_caseD_0;
  case 1:
    uVar1 = 0x10;
    break;
  case 2:
    uVar1 = 0x11;
    break;
  case 3:
    uVar1 = 0x12;
    break;
  case 4:
    uVar1 = 0x13;
    break;
  case 5:
    uVar1 = 0;
    break;
  case 8:
    uVar1 = 1;
  }
  uVar1 = fn_00192cb4(DAT_00897800,uVar1,local_28);
  iVar2 = fn_00100b58();
  iVar3 = fn_00100b58(param_1);
  if (param_2 <= (uint)(iVar3 + iVar2)) {
    iVar2 = (param_2 - iVar3) + -1;
  }
  fn_00103156(param_1,uVar1,iVar2);
  param_1[param_2 - 1] = 0;
switchD_0022f848_caseD_0:
  uVar1 = fn_00163c80(param_3);
  switch(uVar1) {
  default:
    goto switchD_0022f8f8_caseD_0;
  case 1:
    uVar1 = 3;
    break;
  case 2:
    uVar1 = 4;
    break;
  case 3:
    uVar1 = 5;
    break;
  case 4:
    uVar1 = 6;
    break;
  case 5:
    uVar1 = 7;
    break;
  case 6:
    uVar1 = 2;
  }
  uVar1 = fn_00192cb4(DAT_00897800,uVar1,local_28);
  iVar2 = fn_00100b58();
  iVar3 = fn_00100b58(param_1);
  if (param_2 <= (uint)(iVar3 + iVar2)) {
    iVar2 = (param_2 - iVar3) + -1;
  }
  fn_00103156(param_1,uVar1,iVar2);
  param_1[param_2 - 1] = 0;
switchD_0022f8f8_caseD_0:
  uVar1 = DAT_00898204;
  fn_0017d96c(auStack_58,0x20,0x1f,(char *)&DAT_0016a8d8,param_3);
  uVar1 = fn_0016ba34(DAT_00897800,uVar1,auStack_58,0);
  iVar2 = fn_00100b58();
  iVar3 = fn_00100b58(param_1);
  if (param_2 <= (uint)(iVar3 + iVar2)) {
    iVar2 = (param_2 - iVar3) + -1;
  }
  fn_00103156(param_1,uVar1,iVar2);
  param_1[param_2 - 1] = 0;
  return;
}



uint fn_0022f774(short *param_1,int param_2,short *param_3)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  uint unaff_r5;
  
  if (param_2 != 1) {
    unaff_r5 = 0x101;
  }
  uVar3 = 0;
  if (param_2 != 1) {
    psVar1 = param_1;
    do {
      sVar2 = *param_3;
      param_1 = psVar1;
      if (sVar2 != 1) goto LAB_0022f7b4;
      if ((ushort)param_3[1] == unaff_r5) break;
      do {
        do {
          param_3 = param_3 + 2;
          sVar2 = *param_3;
        } while (sVar2 == 1);
LAB_0022f7b4:
      } while (sVar2 == 2);
      if (sVar2 == 0 || sVar2 == 10) break;
      uVar3 = uVar3 + 1;
      param_3 = param_3 + 1;
      param_1 = psVar1 + 1;
      *psVar1 = sVar2;
      psVar1 = param_1;
    } while (uVar3 < param_2 - 1U);
  }
  *param_1 = 0;
  return uVar3;
}



void fn_0022f750(undefined4 param_1)

{
  fn_0016ba34(DAT_00897800,DAT_0089877c,param_1,0);
  return;
}



void fn_0022f6e4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_00898240;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0022f734,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
  return;
}



void fn_0022f60c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_30 [32];
  
  iVar2 = fn_00203ef8();
  if (iVar2 != 0) {
    iVar2 = fn_00163940(param_1);
    if ((iVar2 != 0) && (iVar2 = fn_00203eb8(param_1), uVar1 = DAT_00898208, iVar2 - 1U < 0x21f)) {
      fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0016a814,iVar2);
      fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
      return;
    }
  }
  fn_0016ba34(DAT_00897800,DAT_00898214,(char *)&DAT_0022f6c0,0);
  return;
}



void fn_0022f5d8(void)

{
  fn_0016ba34(DAT_00897800,DAT_0089877c,(char *)&DAT_0022f5f4,0);
  return;
}



void fn_0022f5a8(void)

{
  fn_0016ba34(DAT_00897800,DAT_0089877c,(char *)&DAT_0022f5c4,0);
  return;
}



void fn_0022f4ec(int param_1)

{
  char *local_38 [4];
  char *pcStack_28;
  char *pcStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  char *local_18;
  char *pcStack_14;
  char *pcStack_10;
  char *pcStack_c;
  char *pcStack_8;
  
  if (param_1 == 0) {
    fn_0016ba34(DAT_00897800,DAT_00898214,(char *)&DAT_0022f568,0);
    return;
  }
  local_38[0] = (char *)0x0;
  local_38[1] = "dougu";
  local_38[2] = "save";
  local_38[3] = "sakusen";
  pcStack_28 = "azukarijo";
  pcStack_24 = "monstertokugi";
  pcStack_20 = "library";
  pcStack_1c = "playertokugi";
  local_18 = "accessorysoubi";
  pcStack_14 = "skillpoint";
  pcStack_10 = "fieldridesettei";
  pcStack_c = "tuisin";
  pcStack_8 = "tabinokokoroe";
  fn_0016ba34(DAT_00897800,DAT_0089877c,local_38[param_1],0);
  return;
}


