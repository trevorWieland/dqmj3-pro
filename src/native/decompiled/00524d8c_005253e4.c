#include "00524d8c_005253e4.h"

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


void fn_005253e4(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar1 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  if (fVar1 == 0.0) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    *param_1 = *param_3;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
  }
  else {
    fVar1 = 1.0 / SQRT(fVar1);
    *param_1 = fVar4 * fVar1;
    param_1[1] = fVar2 * fVar1;
    param_1[2] = fVar3 * fVar1;
  }
  return;
}



undefined4 fn_005252ec(void)

{
  undefined4 uVar1;
  
  if (DAT_008e3674 == '\0') {
    uVar1 = 0xd8a0a3f8;
  }
  else {
    fn_00524b9c(&DAT_008e369c);
    if (DAT_008e3698 != 0) {
      svc_0x23();
      DAT_008e3698 = 0;
    }
    if (DAT_008e368c != 0) {
      fn_0015e228(&DAT_008e3678);
    }
    uVar1 = 0;
    DAT_008e3674 = '\0';
  }
  return uVar1;
}



int fn_0052514c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00240082;
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



int fn_00525108(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xb0082;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(uint *)(iVar2 + 0x8c) = param_4 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0x90) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005250c8(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x3800c0;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined1 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00525090(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80042;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00525044(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1b0102;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_6;
  *(uint *)(iVar2 + 0x94) = param_4 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x98) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00525014(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_001d0040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524fd0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10044;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x94) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  *(undefined4 *)(iVar2 + 0x90) = 0;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524f8c(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2300c0;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_5;
  *(undefined4 *)(iVar2 + 0x8c) = param_6;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_3 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524f30(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x210102;
  *(undefined4 *)(iVar2 + 0x90) = param_8;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_7;
  *(uint *)(iVar2 + 0x94) = param_4 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0x98) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_5 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524ef4(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x150080;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined1 *)(iVar2 + 0x88) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524ec0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x280080;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524e0c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xa0040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524dc0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0102;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_6;
  *(uint *)(iVar2 + 0x94) = param_4 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0x98) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00524d8c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x250080;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


