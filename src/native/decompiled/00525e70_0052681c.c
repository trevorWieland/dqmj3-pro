#include "00525e70_0052681c.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_005267b8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x320084;
  *(int *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_1;
  *(uint *)(iVar2 + 0x8c) = param_2 << 0xe | 2;
  *(uint *)(iVar2 + 0x94) = param_4 << 0xe | 0x802;
  *(undefined4 *)(iVar2 + 0x98) = param_3;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined4
fn_0052676c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  fn_00125694();
  uVar1 = fn_0052690c(param_1,param_2,param_3 + 0x10,param_3,param_4,param_5);
  fn_001257a8();
  return uVar1;
}



undefined4
fn_00526720(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  fn_00125694();
  uVar1 = fn_005268a8(param_1,param_2,param_3 + 0x10,param_3,param_4,param_5);
  fn_001257a8();
  return uVar1;
}



undefined4 fn_005266fc(undefined4 param_1)

{
  undefined4 uVar1;
  
  fn_00125694();
  uVar1 = fn_0052681c(param_1);
  fn_001257a8();
  return uVar1;
}



int fn_0052681c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1030000;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    *param_1 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_00526660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 extraout_r1;
  
  while( true ) {
    fn_00125694();
    iVar1 = fn_0052685c(param_1,extraout_r1,param_3,param_4,param_5);
    fn_001257a8();
    if ((iVar1 != -0x375f3010 && iVar1 != -0x1f5f33f8) && iVar1 != -0x375f33fe) break;
    fn_0012d6a4(10000000,0);
  }
  return;
}



void fn_005264a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_0013e6d4(param_1,5,param_2,param_3,param_4);
  return;
}



void fn_00526460(undefined1 param_1)

{
  undefined1 local_8 [8];
  
  local_8[0] = param_1;
  fn_0012542c(0x10,local_8,1,0,0,0);
  return;
}



undefined4
fn_00526244(undefined1 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  iVar5 = DAT_0089a54c;
  local_30 = 0;
  local_2c[0] = 0;
  iVar2 = fn_00525f08(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar4 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_00115d78(0x401);
    iVar2 = 0;
    if (iVar3 < 0) {
      iVar2 = -0x375f3004;
    }
    if (iVar3 < 0 && iVar3 != iVar2) {
      iVar3 = fn_00146594();
    }
    if (param_3 != 0 && param_4 != 0) {
      iVar3 = *(int *)(param_2 + 0x130);
    }
    if ((param_3 != 0 && param_4 != 0) && iVar3 != 0) {
      fn_001707d4(&DAT_008e3748,param_3,param_4,3,3);
      iVar5 = DAT_008e375c;
    }
    if (((*(uint *)(param_2 + 0x18) & 0x20) != 0) && (DAT_0089a7bc = param_9, param_9 != 0)) {
      fn_00526490(&DAT_00526394,0);
    }
    fn_00115a44(0x401,param_2,0x400,iVar5);
    uVar1 = fn_001152bc(local_2c,param_2,0x400,&local_30,0,param_7,DAT_0089a558,DAT_0089a55c);
    *param_1 = uVar1;
    if (DAT_008e375c != 0) {
      fn_0015e228(&DAT_008e3748);
    }
    uVar4 = 1;
  }
  return uVar4;
}



void fn_00526490(undefined4 param_1,undefined4 param_2)

{
  DAT_0089a598 = param_1;
  DAT_0089a5d8 = param_2;
  return;
}



uint fn_005261a8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    if (*(uint *)(param_1 + 0x10) < 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x20) * 2 + 5 & 0xfffffffc;
  uVar2 = ((uint)*(ushort *)(param_1 + 0x22) * 0xa6 + 3 & 0xfffffffc) + uVar1;
  if (param_2 != 0) {
    uVar2 = uVar2 + 0x44;
  }
  if (param_3 != 0) {
    uVar2 = uVar2 + 0xa46c;
  }
  if ((*(uint *)(param_1 + 0x1c) & 1) != 0) {
    uVar1 = uVar1 + 0x44;
  }
  if ((*(uint *)(param_1 + 0x1c) & 2) != 0) {
    uVar1 = uVar1 + 0xa46c;
  }
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  return uVar1 + 0xfff & 0xfffff000;
}



undefined4
fn_00525f08(int param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
            uint param_7)

{
  uint uVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if (param_2 == 0 || param_3 == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
      uVar1 = 0;
    }
    else {
      iVar3 = (uint)*(ushort *)(param_1 + 0x20) * 2;
      iVar2 = iVar3 + 2;
      uVar1 = iVar3 + 5;
      uVar4 = uVar1 & 0xfffffffc;
      if (param_3 < uVar4) {
        return 0;
      }
      if (param_4 < param_2) {
        uVar1 = param_4 + iVar2;
      }
      if (param_4 < param_2 && param_2 < uVar1) {
        iVar2 = param_2 - param_4;
      }
      fn_00301a9c(param_2,param_4,iVar2);
      *(undefined4 *)(param_1 + 0x120) = 0;
      uVar1 = extraout_r1;
    }
    if (param_5 == 0) {
      *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
      uVar5 = uVar4;
    }
    else {
      uVar5 = uVar4 + ((uint)*(ushort *)(param_1 + 0x22) * 0xa6 + 3 & 0xfffffffc);
      if (param_3 < uVar5) {
        return 0;
      }
      fn_00301a9c(param_2 + uVar4,param_5);
      *(uint *)(param_1 + 0x124) = uVar4;
      uVar1 = extraout_r1_00;
    }
    if (param_6 == 0) {
      *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
    }
    else {
      iVar3 = 0x44;
      if (param_3 < uVar5 + 0x44) {
        return 0;
      }
      uVar4 = param_2 + uVar5;
      if (param_6 < uVar4) {
        uVar1 = param_6 + 0x44;
      }
      if (param_6 < uVar4 && uVar4 < uVar1) {
        iVar3 = uVar4 - param_6;
      }
      fn_00301a9c(uVar4,param_6,iVar3);
      *(uint *)(param_1 + 0x128) = uVar5;
      uVar5 = uVar5 + 0x44;
    }
    if (param_7 == 0) {
      *(undefined4 *)(param_1 + 300) = 0xffffffff;
    }
    else {
      iVar3 = 0xa46c;
      uVar4 = uVar5 + 0xa46c;
      if (param_3 < uVar4) {
        return 0;
      }
      param_2 = param_2 + uVar5;
      if (param_7 < param_2) {
        uVar4 = param_7 + 0xa46c;
      }
      if (param_7 < param_2 && param_2 < uVar4) {
        iVar3 = param_2 - param_7;
      }
      fn_00301a9c(param_2,param_7,iVar3);
      *(uint *)(param_1 + 300) = uVar5;
    }
    *(undefined2 *)(param_1 + 0x11e) = 0;
    *(undefined2 *)(param_1 + 0x136) = 0;
    *(undefined2 *)(param_1 + 0x14a) = 0;
    *(undefined2 *)(param_1 + 0x352) = 0;
    fn_00158f6c(param_1 + 0x355,0xab);
    *(uint *)(param_1 + 0x130) = param_3;
    *(undefined2 *)(param_1 + 0x134) = 5;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined2 *)(param_1 + 0x134) = 5;
  return 1;
}



void fn_00525e70(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_008bfbdc == '\0') {
    fn_00170704(&DAT_008ebd90);
    uVar1 = DAT_008bfbe0;
    uVar2 = fn_002febd8();
    fn_0014fe94(&DAT_008bfbec,uVar1,uVar2,0);
    DAT_008bfbf0 = DAT_008bfbec;
    fn_0013e008(&DAT_008bfbf0,1);
    svc_0x23();
    DAT_008bfbf0 = 0;
    fn_001707b4(&DAT_008ebd90);
    return;
  }
  fn_0013e008(&DAT_008bfbf0,1);
  return;
}


