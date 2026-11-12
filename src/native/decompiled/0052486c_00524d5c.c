#include "0052486c_00524d5c.h"

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


int fn_00524d04(int *param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20082;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined1 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(uint *)(iVar2 + 0x8c) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_5 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524c74(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xe0040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524c30(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1a0082;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(uint *)(iVar2 + 0x8c) = param_4 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x90) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524bc4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1e00c4;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(int *)(iVar2 + 0x8c) = param_6;
  *(uint *)(iVar2 + 0x90) = param_4 << 0xe | 0xc02;
  *(undefined4 *)(iVar2 + 0x94) = param_3;
  *(uint *)(iVar2 + 0x98) = param_6 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0x9c) = param_5;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_7 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524b9c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x390000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524b3c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_001100c4;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(int *)(iVar2 + 0x8c) = param_6;
  *(uint *)(iVar2 + 0x90) = param_4 << 0xe | 0xc02;
  *(undefined4 *)(iVar2 + 0x94) = param_3;
  *(uint *)(iVar2 + 0x98) = param_6 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x9c) = param_5;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524ae4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2700c4;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(int *)(iVar2 + 0x8c) = param_6;
  *(undefined4 *)(iVar2 + 0x94) = param_3;
  *(uint *)(iVar2 + 0x90) = param_4 << 4 | 10;
  *(uint *)(iVar2 + 0x98) = param_6 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x9c) = param_5;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524a58(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00200082;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(uint *)(iVar2 + 0x8c) = param_4 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0x90) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_5 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined4 * fn_005249e8(undefined4 *param_1)

{
  *param_1 = &DAT_0085746c;
  if (0 < (int)param_1[1]) {
    svc_0x23();
    if (DAT_008e3674 == '\0') {
      param_1[1] = 0;
    }
    else {
      fn_00524d5c(&DAT_008e369c,param_1[1]);
      param_1[1] = 0;
    }
  }
  return param_1;
}



void fn_0052497c(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  fn_0052514c(param_1 + 0xc,*(int *)(param_1 + 4),param_2,param_3);
  return;
}



undefined4 fn_00524920(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) < 1) {
    uVar1 = 0xd8a0a064;
  }
  else {
    svc_0x23();
    if (DAT_008e3674 == '\0') {
      uVar1 = 0xd8a0a3f8;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      uVar1 = fn_00524d5c(&DAT_008e369c,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  return uVar1;
}



int fn_00524d5c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x30040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_00524900(int param_1)

{
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  fn_00524ca4(param_1 + 0xc);
  return;
}



int fn_00524ca4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x90040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined4 fn_005248c4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) < 1) {
    uVar1 = 0xd8a0a064;
  }
  else {
    if (DAT_008e3674 != '\0') {
      uVar1 = fn_00524cd4(&DAT_008e369c);
      return uVar1;
    }
    uVar1 = 0xd8a0a3f8;
  }
  return uVar1;
}



int fn_00524cd4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x40040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_0052486c(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  if (param_2 == 0 || param_3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  fn_00524dc0(param_1 + 0xc,*(int *)(param_1 + 4),param_2,param_3,*param_4,param_4[1]);
  return;
}


