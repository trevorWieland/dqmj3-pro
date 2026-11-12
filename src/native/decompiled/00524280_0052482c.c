#include "00524280_0052482c.h"

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


void fn_0052482c(int param_1,int param_2,int param_3)

{
  if ((param_2 == 0 || param_3 == 0) || (*(int *)(param_1 + 4) < 1)) {
    return;
  }
  fn_00525108(param_1 + 0xc,*(int *)(param_1 + 4),param_2,param_3);
  return;
}



void fn_0052480c(int param_1)

{
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  fn_00525014(param_1 + 0xc);
  return;
}



void fn_005247b8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (0 < iVar1) {
    if (param_3 == 0) {
      fn_00524ef4(param_1 + 0xc,iVar1,param_2);
      return;
    }
    if (param_2 == 2) {
      fn_005250c8(param_1 + 0xc,iVar1,2,param_3);
      return;
    }
  }
  return;
}



void fn_00524764(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  if (param_2 == 0 || param_3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  fn_00525044(param_1 + 0xc,*(int *)(param_1 + 4),param_2,param_3,*param_4,param_4[1]);
  return;
}



void fn_00524724(int param_1,int param_2,int param_3)

{
  if ((param_2 == 0 || param_3 == 0) || (*(int *)(param_1 + 4) < 1)) {
    return;
  }
  fn_00524c30(param_1 + 0xc,*(int *)(param_1 + 4),param_2,param_3);
  return;
}



undefined4 fn_005246b4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0 || param_3 == 0) {
    return 0xd8e0a002;
  }
  if (*(int *)(param_1 + 4) < 1) {
    uVar1 = 0xd8a0a064;
  }
  else {
    iVar2 = fn_002febd8(param_3);
    iVar3 = fn_002febd8(param_2);
    uVar1 = fn_00524b3c(param_1 + 0xc,*(undefined4 *)(param_1 + 4),param_2,iVar3 + 1,param_3,
                         iVar2 + 1);
  }
  return uVar1;
}



void fn_00524648(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (0 < *(int *)(param_1 + 4)) {
    fn_00524ae4(param_1 + 0xc,*(int *)(param_1 + 4),param_2,param_3,param_4,param_5);
  }
  return;
}



int fn_00524500(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return -0x271f5ffe;
  }
  if (0 < *(int *)(param_1 + 4)) {
    return -0x275f5f9b;
  }
  if (DAT_008e3674 == '\0') {
    return -0x275f5c08;
  }
  iVar1 = fn_002febd8(param_2);
  iVar1 = fn_00524d04(&DAT_008e369c,param_2,iVar1 + 1,param_3,param_1 + 4);
  if (-1 < iVar1) {
    uVar2 = fn_002febd8((char *)&DAT_007e3fe0);
    iVar1 = fn_0014fe94(param_1 + 8,(char *)&DAT_007e3fe0,uVar2,0);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      iVar3 = fn_00525090(param_1 + 0xc,*(undefined4 *)(param_1 + 4));
      if (iVar3 < 0) {
        svc_0x23();
        iVar1 = iVar3;
      }
    }
    if (-1 < iVar1) {
      if (param_4 == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 4) < 1) {
        iVar1 = -0x275f5f9c;
      }
      else {
        iVar1 = fn_00524c74();
      }
      if (-1 < iVar1) {
        return 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}



undefined4 fn_005244d0(void)

{
  undefined4 uVar1;
  
  if (DAT_0089a610 == '\0') {
    return 0;
  }
  DAT_0089a610 = 0;
  fn_00454af0();
  uVar1 = fn_00522fe0();
  return uVar1;
}



int fn_00524470(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1c0042;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(uint *)(iVar2 + 0x88) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052441c(int *param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_003500c2;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined1 *)(iVar2 + 0x88) = param_4;
  *(undefined1 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x94) = param_2;
  *(uint *)(iVar2 + 0x90) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005243d0(int *param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1b0042;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(uint *)(iVar2 + 0x88) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_4 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524390(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x2d0040;
  *(undefined4 *)(iVar3 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar3 + 0x8c);
    *param_3 = *(undefined4 *)(iVar3 + 0x88);
    param_3[1] = uVar2;
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0052433c(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2700c2;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined1 *)(iVar2 + 0x88) = param_3;
  *(int *)(iVar2 + 0x8c) = param_5;
  *(uint *)(iVar2 + 0x90) = param_5 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0x94) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005242fc(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_001d0042;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(uint *)(iVar2 + 0x88) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005242b8(int *param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x150042;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524280(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10082;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = 0x20;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


