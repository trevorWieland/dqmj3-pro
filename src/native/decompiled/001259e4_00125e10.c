#include "001259e4_00125e10.h"

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


void fn_00125e10(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  
  uVar1 = param_1[0x12] * 0x200 + param_1[0x11] * 8;
  local_c = param_1[0x11] << 0x1b | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
            uVar1 >> 0x18;
  uVar1 = param_1[0x13] * 0x200 + ((uint)param_1[0x12] >> 0x17);
  local_10 = ((uint)param_1[0x12] >> 0x17) << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 |
             (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  uVar1 = param_1[0x11];
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  (**(code **)(*param_1 + 8))(param_1,&DAT_008c7784,iVar2);
  (**(code **)(*param_1 + 8))(param_1,&local_10,8);
  return;
}



void fn_00125d60(void)

{
  int iVar1;
  byte local_10 [4];
  byte local_c [4];
  
  if (((DAT_008bfb39 != '\0') && (iVar1 = fn_0013ef08(local_10), -1 < iVar1)) &&
     (iVar1 = fn_0013ee90(local_c), -1 < iVar1)) {
    DAT_008bfb38 = local_10[0] | local_c[0];
    iVar1 = fn_0013ef44(0);
    if (iVar1 == -0x36bfafff) {
      fn_0013eecc(0);
    }
  }
  return;
}



void fn_00125d4c(int param_1)

{
  int iVar1;
  byte abStack_10 [4];
  byte abStack_c [4];
  
  if (param_1 == 0) {
    if (((DAT_008bfb39 != '\0') && (iVar1 = fn_0013ef08(abStack_10), -1 < iVar1)) &&
       (iVar1 = fn_0013ee90(abStack_c), -1 < iVar1)) {
      DAT_008bfb38 = abStack_10[0] | abStack_c[0];
      iVar1 = fn_0013ef44(0);
      if (iVar1 == -0x36bfafff) {
        fn_0013eecc(0);
      }
    }
    return;
  }
  if ((DAT_008bfb39 == '\0') || (iVar1 = fn_0013ef44(DAT_008bfb38), iVar1 != -0x36bfafff)) {
    return;
  }
  fn_0013eecc(DAT_008bfb38);
  return;
}



int fn_00125d3c(void)

{
  return (int)DAT_0089a569;
}



undefined4
fn_00125ca0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
            undefined1 *param_5,int *param_6)

{
  undefined4 uVar1;
  int local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  fn_00125694();
  if (param_1 == (undefined1 *)0x0) {
    param_1 = auStack_30;
  }
  if (param_2 == (undefined1 *)0x0) {
    param_2 = auStack_2c;
  }
  if (param_3 == (undefined1 *)0x0 || param_4 == 0) {
    param_3 = auStack_28;
    param_4 = 0;
  }
  if (param_5 == (undefined1 *)0x0) {
    param_5 = auStack_24;
  }
  if (param_6 == (int *)0x0) {
    param_6 = &local_34;
  }
  local_34 = 0;
  uVar1 = fn_001252e8();
  uVar1 = fn_0013e9f8(param_1,uVar1,param_2,param_3,param_4,param_5,param_6);
  if (local_34 != 0) {
    svc_0x23();
  }
  fn_001257a8();
  return uVar1;
}



int fn_00125c68(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x180040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00125c30(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x190040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00125c00(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2b0000;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00125bbc(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xb0040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00125b80(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x3b0040;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00125b30(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1e0084;
  *(undefined4 *)(iVar2 + 0x90) = param_4;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(int *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  *(uint *)(iVar2 + 0x94) = param_3 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x98) = param_2;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00125ae0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1f0084;
  *(undefined4 *)(iVar2 + 0x90) = param_4;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(int *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  *(uint *)(iVar2 + 0x94) = param_3 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x98) = param_2;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00125a70(undefined1 param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x50040;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    *param_3 = *(undefined4 *)(iVar2 + 0x8c);
    *param_4 = *(undefined4 *)(iVar2 + 0x90);
    *param_5 = *(undefined4 *)(iVar2 + 0x94);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00125a1c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2c0044;
  *(undefined4 *)(iVar2 + 0x8c) = param_3;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x94) = param_1;
  *(uint *)(iVar2 + 0x90) = param_2 << 0xe | 2;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_001259e4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x430040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


