#include "00522cdc_00523200.h"

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


undefined4 fn_00523200(int param_1)

{
  DAT_008bfb34 = 0;
  fn_00523624(0x18,param_1,1);
  fn_00523624(0x19,param_1 + 1,1);
  fn_00523624(0x1a,param_1 + 2,1);
  fn_00523624(0x1b,param_1 + 4,4);
  fn_00523624(0x1c,param_1 + 8,4);
  return DAT_008bfb34;
}



undefined4 fn_0052302c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  DAT_008bfb34 = 0;
  fn_00523624(6,param_1,1);
  fn_00523624(7,param_1 + 0x218,0x200);
  fn_00523624(9,param_1 + 4,1);
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    uVar2 = 0x100;
    uVar1 = 10;
    break;
  case 1:
    uVar2 = 0x200;
    uVar1 = 0xb;
    break;
  case 2:
  case 3:
  case 4:
    fn_00523578(0xc,*(undefined4 *)(param_1 + 0x14));
    goto LAB_005230e8;
  case 6:
    fn_00523578(0xc,*(undefined4 *)(param_1 + 0x14));
  case 5:
    fn_00523624(0x3e,param_1 + 0x18,0x200);
    goto LAB_005230e8;
  default:
    return 0xc960f84d;
  }
  fn_00523624(uVar1,param_1 + 0x18,uVar2);
LAB_005230e8:
  fn_00523624(0xd,param_1 + 0x418,0x360);
  fn_00523624(0x16,param_1 + 8,4);
  fn_00523624(8,param_1 + 0xc,4);
  fn_00523624(0xe,param_1 + 0x784,4);
  fn_00523624(0xf,param_1 + 0x778,0xc);
  fn_00523624(0x3b,param_1 + 0x10,4);
  fn_00523624(0x12,param_1 + 3,1);
  fn_00523624(0x3f,param_1 + 5,1);
  fn_00523624(0x10,param_1 + 2,1);
  fn_00523624(0x11,param_1 + 1,1);
  fn_00523624(0x13,param_1 + 0x788,4);
  fn_00523624(0x14,param_1 + 0x78c,4);
  fn_00523624(0x15,param_1 + 0x794,0x40);
  return DAT_008bfb34;
}



int fn_00522fec(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_008eef94 != '\0') {
    iVar1 = fn_005236dc(0x2e);
    return iVar1;
  }
  iVar1 = fn_0013db70();
  if (iVar1 < 0) {
    fn_00146594();
  }
  uVar2 = fn_0051e5e4(&DAT_008eef98,&UNK_007f0b30);
  if (-1 < (int)uVar2) {
    DAT_008eefa4 = DAT_008eef98;
    iVar1 = fn_00524280(&DAT_008eefa4,(int)((ulonglong)uVar2 >> 0x20),DAT_008eefb0,DAT_008eefb4);
    if (iVar1 < 0) {
      if (DAT_008eef98 != 0) {
        svc_0x23();
        DAT_008eef98 = 0;
      }
      return iVar1;
    }
    DAT_008eef94 = '\x01';
  }
  return (int)uVar2;
}



undefined4 fn_00522fe0(void)

{
  undefined4 uVar1;
  
  if (DAT_008eef94 == '\0') {
    uVar1 = fn_005236dc(0x2b);
    return uVar1;
  }
  if (DAT_008eef98 != 0) {
    svc_0x23();
    DAT_008eef98 = 0;
  }
  DAT_008eef94 = 0;
  return 0;
}



bool fn_00522fa8(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_002febd8((char *)&DAT_007e3490);
  iVar2 = fn_00147e6c(param_1,(char *)&DAT_007e3490,uVar1);
  return iVar2 == 0;
}



bool fn_00522f90(char *param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
  }
  return param_1 != (char *)0x0 && cVar1 != '\0';
}



int fn_00522f50(int *param_1,undefined4 param_2,int param_3)

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



int fn_00522f08(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x41c00c0;
  *(undefined4 *)(iVar3 + 0x8c) = param_5;
  *(undefined4 *)(iVar3 + 0x84) = param_3;
  *(undefined4 *)(iVar3 + 0x88) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar3 + 0x8c);
    *param_6 = *(undefined4 *)(iVar3 + 0x88);
    param_6[1] = uVar2;
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_00522eac(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x4160142;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined1 *)(iVar2 + 0x90) = param_6;
  *(int *)(iVar2 + 0x94) = param_8;
  *(undefined4 *)(iVar2 + 0x9c) = param_7;
  *(uint *)(iVar2 + 0x98) = param_8 << 4 | 0xc;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00522e6c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x41a0100;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined1 *)(iVar2 + 0x90) = param_6;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00522e28(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x41b00c0;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_6 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00522df0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x41500c0;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00522d9c(int *param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined1 param_5)

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



int fn_00522d28(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,int param_10,undefined4 *param_11,undefined4 *param_12)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x4170182;
  *(int *)(iVar2 + 0x98) = param_10;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(uint *)(iVar2 + 0x9c) = param_10 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0xa0) = param_9;
  *(undefined4 *)(iVar2 + 0x90) = param_7;
  *(undefined4 *)(iVar2 + 0x94) = param_8;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_11 = *(undefined4 *)(iVar2 + 0x88);
    *param_12 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00522cdc(int *param_1,undefined4 param_2,int param_3,undefined1 *param_4)

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


