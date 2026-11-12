#include "00522860_00522c9c.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_00522c9c(int *param_1,undefined4 param_2,undefined4 *param_3)

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



int fn_00522c48(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,int param_5)

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



int fn_00522c08(int *param_1,undefined4 param_2,int param_3)

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



int fn_00522bc4(int *param_1,undefined2 param_2,undefined4 param_3)

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



int fn_00522b88(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2b0080;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined1 *)(iVar2 + 0x88) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00522b4c(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2c0040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_3 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00522b0c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x180082;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(uint *)(iVar2 + 0x8c) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00522acc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20100;
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



int fn_00522a74(int *param_1,undefined2 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00160082;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
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



int fn_00522a08(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined2 *param_5,
                undefined2 param_6,undefined4 param_7,undefined2 *param_8)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00100102;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(undefined2 *)(iVar2 + 0x8c) = param_6;
  *(undefined4 *)(iVar2 + 0x90) = param_7;
  *(uint *)(iVar2 + 0x94) = param_4 << 6 | 0xc;
  *(undefined4 *)(iVar2 + 0x98) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_5 = *(undefined2 *)(iVar2 + 0x88);
    *param_8 = *(undefined2 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005229bc(int *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0082;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined1 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(uint *)(iVar2 + 0x8c) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00522988(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x40000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00522928(int *param_1,undefined4 param_2,int param_3,undefined1 *param_4,undefined4 *param_5
                ,undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x210042;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(uint *)(iVar2 + 0x88) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_4 = *(undefined1 *)(iVar2 + 0x88);
    *param_5 = *(undefined4 *)(iVar2 + 0x8c);
    *param_6 = *(undefined1 *)(iVar2 + 0x90);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00522900(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xe0000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005228b4(int *param_1,undefined2 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x140082;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
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



int fn_00522860(int *param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xb00c2;
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


