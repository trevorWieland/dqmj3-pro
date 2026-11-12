#include "0044c0a0_0044c578.h"

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


void fn_0044c578(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 *local_30;
  undefined *local_2c;
  int *local_28;
  int local_18;
  int local_14;
  
  local_14 = param_5 + 0x1bcc;
  local_18 = param_5;
  local_30 = &LAB_0044c72c;
  local_2c = &DAT_0044c728;
  local_28 = &local_18;
  local_50 = param_3;
  uStack_4c = param_4;
  local_44 = param_1;
  uStack_40 = param_2;
  iVar1 = fn_00733c00(&local_50,0xf,(char *)&DAT_007d6e98,0x38);
  if (iVar1 == 0) {
    iVar1 = fn_007321e4(&local_50,4);
    if (iVar1 != 1) {
      fn_00733bb0(&local_50);
      fn_0044c74c(iVar1);
      return;
    }
    iVar1 = fn_00733bb0(&local_50);
    if (iVar1 == 0) {
      return;
    }
  }
  fn_0044c74c(iVar1);
  return;
}



int fn_0044c4a4(void)

{
  int iVar1;
  bool bVar2;
  
  fn_00170704(&DAT_008e31e8);
  fn_00170704(&DAT_008e31e8);
  bVar2 = DAT_0089a53c == 0;
  fn_001707b4(&DAT_008e31e8);
  if (bVar2) {
    fn_001707b4(&DAT_008e31e8);
    return 0x209ff8;
  }
  fn_0044bed4();
  iVar1 = DAT_008bfae8;
  DAT_0089a53c = DAT_0089a53c + -1;
  if ((DAT_0089a53c == 0) && (svc_0x23(), DAT_008bfae8 < 0)) {
    fn_001707b4(&DAT_008e31e8);
    return iVar1;
  }
  fn_001707b4(&DAT_008e31e8);
  return 0;
}



int fn_0044c440(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar3 + 0x80) = &DAT_00110042;
  *(int *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x88) = 0x20;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar4 = *(undefined4 *)(iVar2 + 0x180);
  uVar5 = *(undefined4 *)(iVar2 + 0x184);
  *(uint *)(iVar2 + 0x180) = param_2 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_1;
  iVar1 = DAT_008bfae8;
  svc_0x32();
  bVar6 = -1 < DAT_008bfae8;
  *(undefined4 *)(iVar2 + 0x180) = uVar4;
  *(undefined4 *)(iVar2 + 0x184) = uVar5;
  if (bVar6) {
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0044c3f8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined1 **)(iVar2 + 0x80) = &LAB_00300004;
  *(undefined4 *)(iVar2 + 0x90) = param_1;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  svc_0x32();
  iVar1 = DAT_008bfae8;
  if (-1 < DAT_008bfae8) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044c388(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x2d0082;
  *(undefined1 *)(iVar3 + 0x84) = param_3;
  *(undefined1 *)(iVar3 + 0x88) = param_4;
  *(undefined4 *)(iVar3 + 0x90) = param_1;
  *(undefined **)(iVar3 + 0x8c) = &DAT_00800002;
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar4 = *(undefined4 *)(iVar1 + 0x180);
  uVar5 = *(undefined4 *)(iVar1 + 0x184);
  *(undefined **)(iVar1 + 0x180) = &DAT_00800002;
  *(undefined4 *)(iVar1 + 0x184) = param_2;
  iVar2 = DAT_008bfae8;
  svc_0x32();
  bVar6 = -1 < DAT_008bfae8;
  *(undefined4 *)(iVar1 + 0x180) = uVar4;
  *(undefined4 *)(iVar1 + 0x184) = uVar5;
  if (bVar6) {
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}



int fn_0044c328(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x80) = 0x140002;
  *(undefined4 *)(iVar4 + 0x84) = 0x20;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar3 = (undefined4 *)(iVar2 + 0x180);
  uVar5 = *puVar3;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *(undefined4 *)(iVar2 + 0x184) = param_1;
  *puVar3 = 0x2c002;
  iVar1 = DAT_008bfae8;
  svc_0x32();
  bVar7 = -1 < DAT_008bfae8;
  *puVar3 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (bVar7) {
    iVar1 = *(int *)(iVar4 + 0x84);
  }
  return iVar1;
}



int fn_0044c29c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x80) = 0x10000;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar3 = (undefined4 *)(iVar2 + 0x180);
  uVar5 = *puVar3;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *(undefined4 *)(iVar2 + 0x184) = param_1;
  *puVar3 = &DAT_00800002;
  iVar1 = DAT_008bfae8;
  svc_0x32();
  bVar7 = -1 < DAT_008bfae8;
  *puVar3 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (bVar7) {
    iVar1 = *(int *)(iVar4 + 0x84);
  }
  return iVar1;
}



int fn_0044c25c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00400042;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  svc_0x32();
  iVar1 = DAT_008bfae8;
  if (-1 < DAT_008bfae8) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044c1d0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00270002;
  *(undefined4 *)(iVar2 + 0x88) = param_1;
  *(undefined **)(iVar2 + 0x84) = &DAT_00800402;
  svc_0x32();
  iVar1 = DAT_008bfae8;
  if (-1 < DAT_008bfae8) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044c194(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x50002;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  svc_0x32();
  iVar1 = DAT_008bfae8;
  if (-1 < DAT_008bfae8) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044c158(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x90002;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  svc_0x32();
  iVar1 = DAT_008bfae8;
  if (-1 < DAT_008bfae8) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044c0f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar3 + 0x80) = &DAT_00240042;
  *(undefined4 *)(iVar3 + 0x84) = param_3;
  *(undefined4 *)(iVar3 + 0x8c) = param_1;
  *(undefined **)(iVar3 + 0x88) = &DAT_00800002;
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar4 = *(undefined4 *)(iVar1 + 0x180);
  uVar5 = *(undefined4 *)(iVar1 + 0x184);
  *(undefined **)(iVar1 + 0x180) = &DAT_00800002;
  *(undefined4 *)(iVar1 + 0x184) = param_2;
  iVar2 = DAT_008bfae8;
  svc_0x32();
  bVar6 = -1 < DAT_008bfae8;
  *(undefined4 *)(iVar1 + 0x180) = uVar4;
  *(undefined4 *)(iVar1 + 0x184) = uVar5;
  if (bVar6) {
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}



int fn_0044c0a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x40006;
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  *(undefined4 *)(iVar2 + 0x98) = param_1;
  *(undefined **)(iVar2 + 0x94) = &DAT_00800402;
  svc_0x32();
  iVar1 = DAT_008bfae8;
  if (-1 < DAT_008bfae8) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


