#include "00203a18_00203fa0.h"



int fn_00203fa0(int param_1)

{
  return (int)*(short *)(DAT_00892394 + (param_1 - DAT_00892390) * 0x20 + 2);
}



int fn_00203f80(int param_1)

{
  return (int)*(short *)(DAT_00892394 + (param_1 - DAT_00892390) * 0x20 + 6);
}



int fn_00203f60(int param_1)

{
  return (int)*(short *)(DAT_00892394 + (param_1 - DAT_00892390) * 0x20 + 0xc);
}



int fn_00203f40(int param_1)

{
  return (int)*(short *)(DAT_00892394 + (param_1 - DAT_00892390) * 0x20 + 10);
}



void fn_00203f28(void)

{
  DAT_00892394 = 0;
  DAT_00892398 = 0;
  return;
}



undefined4 fn_00203ef8(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || ((int)DAT_00892390 + (int)(short)DAT_00892398 <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_00203ed8(int param_1)

{
  return (int)*(short *)(DAT_00892394 + (param_1 - DAT_00892390) * 0x20 + 8);
}



int fn_00203eb8(int param_1)

{
  return (int)*(short *)(DAT_00892394 + (param_1 - DAT_00892390) * 0x20 + 0xe);
}



bool fn_00203e8c(int param_1,uint param_2)

{
  return ((uint)*(byte *)(DAT_00892394 + (param_1 - DAT_00892390) * 0x20 + 0x1c) &
         1 << (param_2 & 0xff)) != 0;
}



int fn_00203e78(void)

{
  return (int)(short)DAT_00892398;
}



undefined4 fn_00203e2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_00892394 + (param_1 - DAT_00892390) * 0x20;
  if (*(short *)(iVar1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(iVar1 + 0x14) == 0) {
    uVar2 = 1;
  }
  else if (*(short *)(iVar1 + 0x18) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



int fn_00203e08(int param_1,int param_2)

{
  return DAT_00892394 + (param_1 - DAT_00892390) * 0x20 + param_2 * 4 + 0x10;
}



undefined4 fn_00203d3c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00203dfc), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0;
  if ((param_3 - 4 & 0x1f) == 0) {
    iVar1 = param_1;
  }
  DAT_00892394 = iVar1;
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_00892398 = 0;
  }
  else {
    DAT_00892398 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),0x20,0);
  }
  iVar2 = 0;
  if (0 < DAT_00892398) {
    do {
      if (*(short *)(iVar1 + iVar2 * 0x20) != 0) {
        DAT_00892390 = *(undefined2 *)(iVar1 + iVar2 * 0x20);
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00892398);
  }
  return 1;
}



int fn_00203d1c(int param_1)

{
  return (int)*(short *)(DAT_00892394 + (param_1 - DAT_00892390) * 0x20 + 4);
}



undefined1 fn_00203cfc(void)

{
  int iVar1;
  
  iVar1 = fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  return *(undefined1 *)(iVar1 + 2);
}



void fn_00203cb4(void)

{
  ushort *puVar1;
  uint uVar2;
  
  puVar1 = (ushort *)fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  uVar2 = 0x13;
  do {
    if (*(ushort *)(&DAT_007c4794 + uVar2 * 2) <= *puVar1) {
      return;
    }
    uVar2 = uVar2 - 1 & 0xff;
  } while (uVar2 != 0);
  return;
}



void fn_00203c84(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x13;
  do {
    if (*(ushort *)(&DAT_007c4794 + uVar1 * 2) <= param_1) {
      return;
    }
    uVar1 = uVar1 - 1 & 0xff;
  } while (uVar1 != 0);
  return;
}



void fn_00203c20(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [3];
  byte local_15;
  
  uVar1 = fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_0019bc50(auStack_18,uVar1);
  if (param_1 == 0) {
    local_15 = 0;
  }
  else if (local_15 < 10) {
    local_15 = local_15 + 1;
  }
  fn_0019bc44(*(undefined4 *)(DAT_00897804 + 0x30),auStack_18);
  return;
}



char * fn_00203bc8(void)

{
  ushort *puVar1;
  uint uVar2;
  
  puVar1 = (ushort *)fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  uVar2 = 0x13;
  do {
    if (*(ushort *)(&DAT_007c4794 + uVar2 * 2) <= *puVar1) break;
    uVar2 = uVar2 - 1 & 0xff;
  } while (uVar2 != 0);
  return "shinirimaster" + uVar2 * 0x11;
}



char * fn_00203bb4(int param_1)

{
  return "shinirimaster" + param_1 * 0x11;
}



int fn_00203a18(char param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort local_20;
  byte local_1e;
  byte local_1d;
  
  uVar1 = fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_0019bc50(&local_20,uVar1);
  iVar5 = 0;
  if (param_2 == 0) {
    local_1d = 0;
  }
  else if (local_1d < 10) {
    local_1d = local_1d + 1;
  }
  fn_0019bc44(*(undefined4 *)(DAT_00897804 + 0x30),&local_20);
  uVar1 = fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_0019bc50(&local_20,uVar1);
  if (param_2 == 0) {
    if (0x96 < local_20) {
      if ((int)(local_20 - 5) < 0x96) {
        iVar5 = (int)(short)(0x96 - local_20);
      }
      else {
        iVar5 = -5;
      }
    }
  }
  else {
    uVar2 = 0x13;
    do {
      if (*(ushort *)(&DAT_007c4794 + uVar2 * 2) <= local_20) break;
      uVar2 = uVar2 - 1 & 0xff;
    } while (uVar2 != 0);
    uVar3 = (uint)local_1d;
    uVar4 = uVar3;
    if (10 < uVar3) {
      uVar4 = 10;
    }
    if ((uVar3 < 0xb) && (uVar4 < 2)) {
      uVar4 = 0;
    }
    iVar5 = (int)(char)(param_1 - (char)uVar2) + uVar4 + 10;
  }
  uVar1 = fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_0019bc50(&local_20,uVar1);
  uVar2 = (uint)local_20;
  if ((0x96 < uVar2) || (-1 < iVar5)) {
    uVar4 = uVar2 + iVar5 & 0xffff;
    if ((uVar2 < 0x96) || (0x95 < uVar4)) {
      if (9999 < uVar4) {
        uVar4 = 9999;
      }
    }
    else {
      uVar4 = 0x96;
    }
    uVar2 = 0x13;
    local_20 = (ushort)uVar4;
    do {
      if (*(ushort *)(&DAT_007c4794 + uVar2 * 2) <= uVar4) break;
      uVar2 = uVar2 - 1 & 0xff;
    } while (uVar2 != 0);
    if (local_1e < uVar2) {
      local_1e = (byte)uVar2;
    }
    fn_0019bc44(*(undefined4 *)(DAT_00897804 + 0x30),&local_20);
  }
  return iVar5;
}


