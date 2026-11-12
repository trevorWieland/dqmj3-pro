#include "0044e2a4_0044e6d8.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0044e6d8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8080000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e680(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80200c2;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(int *)(iVar2 + 0x8c) = param_6;
  *(undefined4 *)(iVar2 + 0x94) = param_5;
  *(uint *)(iVar2 + 0x90) = param_6 << 4 | 0xc;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e648(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80c0000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e618(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80a0040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e5a4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                int param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80201c2;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_5;
  *(undefined4 *)(iVar2 + 0x8c) = param_6;
  *(undefined4 *)(iVar2 + 0x90) = param_7;
  *(int *)(iVar2 + 0x94) = param_9;
  *(undefined4 *)(iVar2 + 0x98) = param_10;
  *(undefined4 *)(iVar2 + 0x9c) = param_11;
  *(uint *)(iVar2 + 0xa0) = param_9 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0xa4) = param_8;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e554(int *param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar5 + 0x80) = 0x8490040;
  *(undefined1 *)(iVar5 + 0x84) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar5 + 0x88);
    uVar3 = *(undefined4 *)(iVar5 + 0x8c);
    uVar4 = *(undefined4 *)(iVar5 + 0x90);
    param_2[3] = *(undefined4 *)(iVar5 + 0x94);
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    iVar1 = *(int *)(iVar5 + 0x84);
  }
  return iVar1;
}



int fn_0044e518(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x80) = 0x8520100;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(iVar4 + 0x8c) = param_2[2];
  *(undefined4 *)(iVar4 + 0x84) = uVar2;
  *(undefined4 *)(iVar4 + 0x88) = uVar3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar4 + 0x84);
  }
  return iVar1;
}



int fn_0044e4bc(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8510242;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *(undefined4 *)(iVar2 + 0x8c) = param_2[2];
  *(undefined4 *)(iVar2 + 0x94) = param_3;
  *(undefined4 *)(iVar2 + 0x98) = param_4;
  *(undefined4 *)(iVar2 + 0x9c) = param_5;
  *(undefined4 *)(iVar2 + 0xa0) = param_6;
  *(int *)(iVar2 + 0xa4) = param_8;
  *(uint *)(iVar2 + 0xa8) = param_8 << 4 | 10;
  *(undefined4 *)(iVar2 + 0xac) = param_7;
  *(undefined4 *)(iVar2 + 0x84) = uVar3;
  *(undefined4 *)(iVar2 + 0x88) = uVar4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e468(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8090182;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_5;
  *(int *)(iVar2 + 0x94) = param_7;
  *(undefined4 *)(iVar2 + 0x98) = param_8;
  *(uint *)(iVar2 + 0x9c) = param_7 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0xa0) = param_6;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e430(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8180000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e3f8(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8170000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e3a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined1 param_11)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x84c0242;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(int *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_6;
  *(undefined4 *)(iVar2 + 0x94) = param_7;
  *(undefined4 *)(iVar2 + 0x98) = param_8;
  *(undefined4 *)(iVar2 + 0x9c) = param_9;
  *(undefined4 *)(iVar2 + 0xa0) = param_10;
  *(undefined1 *)(iVar2 + 0xa4) = param_11;
  *(uint *)(iVar2 + 0xa8) = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0xac) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e334(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80d0144;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(int *)(iVar2 + 0x90) = param_7;
  *(int *)(iVar2 + 0x94) = param_9;
  *(uint *)(iVar2 + 0x98) = param_7 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x9c) = param_6;
  *(uint *)(iVar2 + 0xa0) = param_9 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0xa4) = param_8;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e304(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80e0080;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044e2a4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x80c00c2;
  *(int *)(iVar3 + 0x8c) = param_6;
  *(uint *)(iVar3 + 0x90) = param_6 << 0xe | 2;
  *(undefined4 *)(iVar3 + 0x94) = param_5;
  *(undefined4 *)(iVar3 + 0x84) = param_3;
  *(undefined4 *)(iVar3 + 0x88) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar3 + 0x8c);
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    param_2[1] = uVar2;
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}


