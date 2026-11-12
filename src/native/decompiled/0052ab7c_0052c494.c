#include "0052ab7c_0052c494.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0052c494(void)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 auStack_148 [8];
  undefined4 local_140;
  
  fn_00170704(&DAT_008e3304);
  iVar1 = fn_0052cb1c();
  if (iVar1 == 0) {
    fn_00170704(&DAT_008e3304);
    bVar3 = DAT_0089a64c == 0;
    fn_001707b4(&DAT_008e3304);
    if (bVar3) {
      iVar1 = fn_0013db70();
      if (-1 < iVar1) {
        uVar2 = fn_002febd8((char *)&DAT_0052c5f4);
        iVar1 = fn_0014fe94(&DAT_008bfbd4,(char *)&DAT_0052c5f4,uVar2,0);
        if (-1 < iVar1) {
          DAT_0089a64c = DAT_0089a64c + 1;
          fn_0052d6bc(0xb0501c8);
          fn_0013c500(&DAT_008e32ec);
          DAT_0089a648 = 0;
          fn_0013c500(&DAT_008e32f8);
          fn_00170704(&DAT_008e3304);
          bVar3 = DAT_0089a64c == 0;
          fn_001707b4(&DAT_008e3304);
          if ((bVar3) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
            iVar1 = -0x275f3808;
          }
          else {
            iVar1 = fn_0052d414(auStack_148);
          }
          if (-1 < iVar1) {
            DAT_0089a650 = local_140;
          }
        }
      }
    }
    else {
      iVar1 = 0;
      DAT_0089a64c = DAT_0089a64c + 1;
    }
  }
  else {
    iVar1 = -0x275f3807;
  }
  fn_001707b4(&DAT_008e3304);
  return iVar1;
}



void fn_0052c424(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  fn_00301f50(param_1 + 3,0xed8);
  *(undefined1 *)(param_1 + 0x3b9) = 1;
  *(undefined1 *)((int)param_1 + 0xee5) = 0;
  *(undefined1 *)((int)param_1 + 0xee6) = 0;
  fn_00158f6c((int)param_1 + 0xee7,0x89);
  param_1[0x3dc] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x3dd) = 0;
  fn_001ad020((int)param_1 + 0xf76);
  return;
}



int fn_0052c2e8(undefined4 param_1)

{
  int iVar1;
  int local_8 [2];
  
  local_8[0] = DAT_008c0368;
  if (DAT_008c0368 == 0) {
    if (DAT_008c0360 != '\0') {
      local_8[0] = DAT_008c0364;
      iVar1 = fn_0052ae7c(local_8,param_1);
      if (-1 < iVar1) {
        iVar1 = 0;
      }
      return iVar1;
    }
    iVar1 = -0x375f8c08;
  }
  else {
    iVar1 = fn_00527f0c(local_8,param_1);
  }
  return iVar1;
}



undefined4 fn_0052b8b4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  fn_00170704(&DAT_008e3730);
  uVar1 = fn_001709d8(&DAT_008e36d8,param_1,param_2,0,0,0);
  fn_001707b4(&DAT_008e3730);
  return uVar1;
}



int fn_0052b858(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  
  if (DAT_008c0360 == '\0') {
    iVar1 = -0x375f8c08;
  }
  else {
    local_c = DAT_008c0364;
    iVar1 = fn_0052ad68(&local_c,param_1,param_2,param_3,param_4);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}



int fn_0052ae7c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00160000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052ae38(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0082;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = 0x20;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052adb4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x70104;
  *(undefined4 *)(iVar3 + 0x84) = param_3;
  *(int *)(iVar3 + 0x88) = param_5;
  *(undefined4 *)(iVar3 + 0x8c) = param_6;
  *(int *)(iVar3 + 0x90) = param_8;
  *(undefined4 *)(iVar3 + 0x94) = 0x20;
  *(uint *)(iVar3 + 0x9c) = param_5 << 4 | 0xc;
  *(undefined4 *)(iVar3 + 0xa0) = param_4;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *puVar4 = param_8 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_7;
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



int fn_0052ad68(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x200c2;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = 0x20;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052ace4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x90106;
  *(undefined4 *)(iVar2 + 0x8c) = param_6;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(int *)(iVar2 + 0x88) = param_5;
  *(int *)(iVar2 + 0x90) = param_8;
  *(undefined4 *)(iVar2 + 0x94) = 0x20;
  *(uint *)(iVar2 + 0x9c) = param_8 << 0xe | 0x402;
  *(undefined4 *)(iVar2 + 0xa0) = param_7;
  *(uint *)(iVar2 + 0xa4) = param_5 << 4 | 10;
  *(undefined4 *)(iVar2 + 0xa8) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052ac98(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_001300c2;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = 0x20;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052ac54(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xb0042;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052abf4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x50084;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(int *)(iVar2 + 0x88) = param_5;
  *(undefined4 *)(iVar2 + 0x8c) = 0x20;
  *(uint *)(iVar2 + 0x94) = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x98) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052ab7c(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00200146;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x98) = 0x20;
  *(int *)(iVar2 + 0x88) = param_5;
  *(undefined4 *)(iVar2 + 0x8c) = param_6;
  *(undefined4 *)(iVar2 + 0x90) = param_8;
  *(int *)(iVar2 + 0x94) = param_9;
  *(uint *)(iVar2 + 0xa0) = param_5 << 0xe | 0x3002;
  *(undefined4 *)(iVar2 + 0xa4) = param_4;
  *(uint *)(iVar2 + 0xa8) = param_9 << 0xe | 0x3402;
  *(undefined4 *)(iVar2 + 0xac) = param_7;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


