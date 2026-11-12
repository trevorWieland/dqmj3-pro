#include "00529cf4_0052aad8.h"

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


int fn_0052aad8(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int *param_5
                ,undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x80102;
  *(undefined4 *)(iVar3 + 0x84) = param_3;
  *(int *)(iVar3 + 0x88) = *param_5;
  *(undefined4 *)(iVar3 + 0x8c) = param_6;
  *(int *)(iVar3 + 0x90) = param_8;
  *(undefined4 *)(iVar3 + 0x94) = 0x20;
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar1 + 0x180);
  iVar2 = *param_5;
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar1 + 0x184);
  uVar7 = *(undefined4 *)(iVar1 + 0x188);
  uVar8 = *(undefined4 *)(iVar1 + 0x18c);
  *(uint *)(iVar1 + 0x188) = param_8 << 0xe | 2;
  *(undefined4 *)(iVar1 + 0x18c) = param_7;
  *puVar4 = iVar2 << 0xe | 2;
  *(undefined4 *)(iVar1 + 0x184) = param_4;
  iVar2 = *param_1;
  svc_0x32();
  *puVar4 = uVar5;
  *(undefined4 *)(iVar1 + 0x184) = uVar6;
  *(undefined4 *)(iVar1 + 0x188) = uVar7;
  *(undefined4 *)(iVar1 + 0x18c) = uVar8;
  if (-1 < iVar2) {
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    *param_5 = *(int *)(iVar3 + 0x8c);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}



int fn_0052aa5c(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x1a00c0;
  *(undefined4 *)(iVar3 + 0x84) = param_3;
  *(undefined4 *)(iVar3 + 0x88) = param_4;
  *(int *)(iVar3 + 0x8c) = *param_6;
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar1 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar1 + 0x184);
  iVar2 = *param_6;
  *(undefined4 *)(iVar1 + 0x184) = param_5;
  *puVar4 = iVar2 << 0xe | 2;
  iVar2 = *param_1;
  svc_0x32();
  *puVar4 = uVar5;
  *(undefined4 *)(iVar1 + 0x184) = uVar6;
  if (-1 < iVar2) {
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    *param_6 = *(int *)(iVar3 + 0x8c);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}



int fn_0052a96c(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xa0106;
  *(undefined4 *)(iVar2 + 0x8c) = param_6;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(int *)(iVar2 + 0x88) = param_5;
  *(int *)(iVar2 + 0x90) = param_8;
  *(undefined4 *)(iVar2 + 0x94) = 0x20;
  *(uint *)(iVar2 + 0x9c) = param_5 << 0xe | 0x802;
  *(undefined4 *)(iVar2 + 0xa0) = param_4;
  *(uint *)(iVar2 + 0xa4) = param_8 << 0xe | 0x402;
  *(undefined4 *)(iVar2 + 0xa8) = param_7;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052a900(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x170082;
  *(undefined4 *)(iVar3 + 0x84) = param_3;
  *(int *)(iVar3 + 0x88) = param_5;
  *(undefined4 *)(iVar3 + 0x8c) = 0x20;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *puVar4 = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0052a838(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6,undefined4 param_7,int param_8,undefined4 *param_9,undefined4 param_10,
                int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0xf0106;
  *(int *)(iVar3 + 0x8c) = param_8;
  *(int *)(iVar3 + 0x84) = param_4;
  *(int *)(iVar3 + 0x88) = param_6;
  *(undefined4 *)(iVar3 + 0x98) = param_3;
  *(uint *)(iVar3 + 0x9c) = param_6 << 0xe | 0x1802;
  *(undefined4 *)(iVar3 + 0xa0) = param_5;
  *(uint *)(iVar3 + 0xa4) = param_8 << 0xe | 0x1c02;
  *(undefined4 *)(iVar3 + 0xa8) = param_7;
  *(int *)(iVar3 + 0x90) = param_11;
  *(uint *)(iVar3 + 0x94) = param_4 << 0xe | 0x1402;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *puVar4 = param_11 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_10;
  iVar1 = *param_1;
  svc_0x32();
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    *param_9 = *(undefined4 *)(iVar3 + 0x8c);
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0052a7d0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(char **)(iVar2 + 0x80) = "CreateScoutGauge_";
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x94) = 0x20;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(int *)(iVar2 + 0x90) = param_7;
  *(uint *)(iVar2 + 0x9c) = param_7 << 0xe | 0x2402;
  *(undefined4 *)(iVar2 + 0xa0) = param_6;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_0052a79c(undefined4 param_1)

{
  fn_00170704(&DAT_008e3730);
  fn_0015e5c0(&DAT_008e36d8,param_1);
  fn_001707b4(&DAT_008e3730);
  return;
}



int fn_0052a300(int param_1)

{
  return param_1 * 0xc;
}



int fn_0052a238(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_14;
  
  iVar1 = fn_0051e5e4(&DAT_008c0364,(char *)&DAT_007e41a0);
  if (-1 < iVar1) {
    local_14 = DAT_008c0364;
    if (param_2 != 0) {
      fn_001707d4(&DAT_008ec0b0,param_1,param_2,0,3);
    }
    iVar1 = fn_0052a9f0(&local_14,DAT_008ec0c4,param_2);
    if (-1 < iVar1) {
      DAT_008c0360 = 1;
      return 0;
    }
    if (DAT_008c0364 != 0) {
      svc_0x23();
      DAT_008c0364 = 0;
    }
    fn_0015e228(&DAT_008ec0b0);
  }
  return iVar1;
}



int fn_0052a9f0(int *param_1,undefined4 param_2,undefined4 param_3)

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



void fn_0052a1e8(void)

{
  int local_10;
  
  DAT_008c0360 = 0;
  local_10 = DAT_008c0364;
  fn_0052aa34(&local_10);
  if (DAT_008c0364 != 0) {
    svc_0x23();
    DAT_008c0364 = 0;
  }
  fn_0015e228(&DAT_008ec0b0);
  return;
}



int fn_0052aa34(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x190000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00529cf4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  fn_00170704(&DAT_008e3730);
  puVar1 = (undefined4 *)fn_001709d8(&DAT_008e36d8,0x3794,4,0,0,0);
  fn_001707b4(&DAT_008e3730);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -0x279f8c0d;
  }
  else {
    iVar2 = 0;
  }
  if (-1 < iVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_008575d0;
      puVar1[0xde2] = 0;
      fn_0013c500();
      puVar1[0x6c1] = 0;
    }
    iVar2 = 0;
    DAT_008c035c = puVar1;
  }
  return iVar2;
}


