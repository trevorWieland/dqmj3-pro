#include "006d056c_006d0be8.h"



undefined4 fn_006d0be8(int param_1)

{
  if (*(char *)(param_1 + 0x65) == '\0') {
    fn_00455590();
  }
  return *(undefined4 *)(param_1 + 0x60);
}



bool fn_006d0bc8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006d0810(param_1,L"probeinit",0);
  return iVar1 != 0;
}



void fn_006d0af4(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *local_28;
  undefined1 auStack_24 [8];
  
  local_28 = &DAT_00855a94;
  fn_0015e6f0(auStack_24,&DAT_007d9e50);
  iVar3 = *(int *)(param_2 + 0x38);
  iVar2 = *(int *)(*(int *)(param_2 + 0x38) + 4);
  while (iVar2 != 0) {
    iVar1 = fn_00190ef0(iVar2 + 0x10,&local_28);
    if (iVar1 == 0) {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  if ((iVar3 == *(int *)(param_2 + 0x38)) ||
     (iVar2 = fn_00190ef0(&local_28,iVar3 + 0x10), iVar2 != 0)) {
    iVar3 = *(int *)(param_2 + 0x38);
  }
  fn_00170f54(&local_28);
  if (iVar3 == *(int *)(param_2 + 0x38)) {
    *param_1 = &DAT_00855a94;
    fn_0015e6f0(param_1 + 1,&DAT_006d0bc4);
    return;
  }
  *param_1 = &DAT_00855a94;
  fn_0015e6f0(param_1 + 1,*(undefined4 *)(iVar3 + 0x1c));
  return;
}



void fn_006d0a10(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *local_28;
  undefined1 auStack_24 [8];
  
  local_28 = &DAT_00855a94;
  fn_0015e6f0(auStack_24,&DAT_007d9c4c);
  iVar3 = *(int *)(param_2 + 0x38);
  iVar2 = *(int *)(*(int *)(param_2 + 0x38) + 4);
  while (iVar2 != 0) {
    iVar1 = fn_00190ef0(iVar2 + 0x10,&local_28);
    if (iVar1 == 0) {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  if ((iVar3 == *(int *)(param_2 + 0x38)) ||
     (iVar2 = fn_00190ef0(&local_28,iVar3 + 0x10), iVar2 != 0)) {
    iVar3 = *(int *)(param_2 + 0x38);
  }
  fn_00170f54(&local_28);
  if (iVar3 == *(int *)(param_2 + 0x38)) {
    *param_1 = &DAT_00855a94;
    fn_0015e6f0(param_1 + 1,&DAT_006d0ae0);
    return;
  }
  *param_1 = &DAT_00855a94;
  fn_0015e6f0(param_1 + 1,*(undefined4 *)(iVar3 + 0x1c));
  return;
}



undefined1 fn_006d09f4(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = fn_006d0810(param_1,L"natf",0);
  return uVar1;
}



undefined4 fn_006d09b8(int param_1)

{
  if (*(char *)(param_1 + 100) == '\0') {
    fn_0014ea80();
  }
  return *(undefined4 *)(param_1 + 4);
}



undefined1 fn_006d099c(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = fn_006d0810(param_1,L"stream",0);
  return uVar1;
}



ushort fn_006d0978(int param_1)

{
  ushort uVar1;
  
  if (*(char *)(param_1 + 100) == '\0') {
    fn_0014ea80();
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + 4) + 6);
  return uVar1 << 8 | uVar1 >> 8;
}



undefined1 fn_006d07f4(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = fn_006d0810(param_1,L"natm",0);
  return uVar1;
}



undefined1 fn_006d07d8(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = fn_006d0810(param_1,&DAT_007d9e30,0);
  return uVar1;
}



undefined4 fn_006d0810(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *local_40;
  undefined1 auStack_3c [4];
  undefined *local_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [16];
  
  if (*(char *)(param_1 + 100) == '\0') {
    fn_0014ea80();
  }
  local_40 = &DAT_00855a94;
  fn_0015e6f0(auStack_3c,param_2);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  while (iVar2 != 0) {
    iVar1 = fn_00190ef0(iVar2 + 0x10,&local_40);
    if (iVar1 == 0) {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  if ((iVar3 == *(int *)(param_1 + 0x1c)) ||
     (iVar2 = fn_00190ef0(&local_40,iVar3 + 0x10), iVar2 != 0)) {
    iVar3 = *(int *)(param_1 + 0x1c);
  }
  fn_00170f54(&local_40);
  if (iVar3 == *(int *)(param_1 + 0x1c)) {
    local_38 = &DAT_00855a94;
    fn_0015e6f0(auStack_34,param_2);
    iVar3 = *(int *)(param_1 + 0x38);
    iVar2 = *(int *)(*(int *)(param_1 + 0x38) + 4);
    while (iVar2 != 0) {
      iVar1 = fn_00190ef0(iVar2 + 0x10,&local_38);
      if (iVar1 == 0) {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar2 + 8);
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
    }
    if ((iVar3 == *(int *)(param_1 + 0x38)) ||
       (iVar2 = fn_00190ef0(&local_38,iVar3 + 0x10), iVar2 != 0)) {
      iVar3 = *(int *)(param_1 + 0x38);
    }
    fn_00170f54(&local_38);
    if (iVar3 != *(int *)(param_1 + 0x38)) {
      param_3 = fn_00101054(*(undefined4 *)(iVar3 + 0x1c),0,10);
      fn_00455124(auStack_30,param_1,param_2,param_3);
    }
  }
  else {
    param_3 = *(undefined4 *)(iVar3 + 0x18);
  }
  return param_3;
}



undefined1 fn_006d07bc(int param_1)

{
  if (*(char *)(param_1 + 100) == '\0') {
    fn_0014ea80();
  }
  return *(undefined1 *)(param_1 + 8);
}



void fn_006d0734(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined2 local_128 [128];
  undefined1 auStack_28 [24];
  
  local_128[0] = 0;
  if (*(char *)(param_2 + 100) == '\0') {
    fn_0014ea80(param_2);
  }
  uVar1 = *(uint *)(*(int *)(param_2 + 4) + 8);
  if ((((uVar1 & 0xff) != 0 || (uVar1 >> 8 & 0xff) != 0) || (uVar1 >> 0x10 & 0xff) != 0) ||
      uVar1 >> 0x18 != 0) {
    fn_0017d82c(2,*(int *)(param_2 + 4) + 8,auStack_28,0x14);
    fn_0017fe44(auStack_28,local_128,0x80);
  }
  *param_1 = &DAT_00855a94;
  fn_0015e6f0(param_1 + 1,local_128);
  return;
}



undefined4 fn_006d06a8(undefined4 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint local_20;
  int local_1c;
  undefined1 auStack_18 [12];
  
  iVar2 = fn_0045c8f4();
  uVar3 = 0;
  if ((param_2 != 0) && (*(int *)(iVar2 + 0x54) != 0 || *(int *)(iVar2 + 0x50) != 0)) {
    fn_004b4218(&local_20);
    lVar4 = fn_0011c134(local_20 - *(uint *)(iVar2 + 0x50),
                         local_1c -
                         (*(int *)(iVar2 + 0x54) + (uint)(local_20 < *(uint *)(iVar2 + 0x50))),1000,
                         0);
    lVar1 = lVar4 + *(longlong *)(iVar2 + 0x58);
    fn_004b983c(auStack_18,(int)((ulonglong)lVar4 >> 0x20),(int)lVar1,
                 (int)((ulonglong)lVar1 >> 0x20));
    fn_0014f510(param_2,auStack_18);
    uVar3 = 1;
  }
  return uVar3;
}



uint fn_006d0618(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_0011c134(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (uint)(0x83037bff < *param_1),
                       86400000,0);
  uVar2 = iVar1 - 0xb2401;
  iVar1 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
  uVar2 = uVar2 + ((iVar1 >> 2) - (iVar1 >> 0x1f)) * -7 + 7;
  iVar1 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
  return ((iVar1 >> 2) - (iVar1 >> 0x1f)) * -7 + uVar2 & 0xff;
}



void fn_006d056c(undefined4 *param_1,uint *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  uint uStack_14;
  
  iVar5 = 86400000;
  fn_0011c134(*param_2 + 0x7cfc8400,param_2[1] + 0x395f + (uint)(0x83037bff < *param_2),86400000,0)
  ;
  uVar2 = param_3 - iVar5 % 1000;
  lVar1 = (ulonglong)uVar2 * 1000000;
  local_20 = (undefined4)lVar1;
  local_1c = ((int)uVar2 >> 0x1f) * 1000000 + (int)((ulonglong)lVar1 >> 0x20);
  local_18 = *param_2;
  uStack_14 = param_2[1];
  puVar3 = (undefined4 *)fn_0010b444(&local_18,&local_20);
  uVar4 = puVar3[1];
  *param_1 = *puVar3;
  param_1[1] = uVar4;
  return;
}


