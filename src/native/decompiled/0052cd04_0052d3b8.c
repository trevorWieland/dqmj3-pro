#include "0052cd04_0052d3b8.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0052d3b8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 **)(iVar3 + 0x80) = &DAT_00100040;
  *(int *)(iVar3 + 0x84) = param_2;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar4 = *(undefined4 *)(iVar2 + 0x180);
  uVar5 = *(undefined4 *)(iVar2 + 0x184);
  *(uint *)(iVar2 + 0x180) = param_2 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_1;
  iVar1 = DAT_008bfbd4;
  svc_0x32();
  bVar6 = -1 < DAT_008bfbd4;
  *(undefined4 *)(iVar2 + 0x180) = uVar4;
  *(undefined4 *)(iVar2 + 0x184) = uVar5;
  if (bVar6) {
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0052d37c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10000;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    *param_1 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_0052d320(void)

{
  int iVar1;
  bool bVar2;
  
  fn_00170704(&DAT_008e3304);
  bVar2 = DAT_0089a64c == 0;
  iVar1 = fn_001707b4(&DAT_008e3304);
  if ((bVar2) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    return;
  }
  fn_0052da4c(iVar1);
  return;
}



undefined4 fn_0052d284(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  fn_00170704(&DAT_008e3304);
  bVar3 = DAT_0089a64c == 0;
  iVar1 = fn_001707b4(&DAT_008e3304);
  if ((bVar3) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else {
    iVar1 = fn_0044bc3c(iVar1);
    if (iVar1 == 0) {
      uVar2 = 0xd8a0c405;
    }
    else if (param_1 == (int *)0x0) {
      uVar2 = 0xe0e0c7f6;
    }
    else {
      if (*param_1 != 0) {
        uVar2 = fn_0052da0c(*param_1);
        return uVar2;
      }
      uVar2 = 0xe0e0c7f7;
    }
  }
  return uVar2;
}



undefined4
fn_0052d1c8(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  fn_00170704(&DAT_008e3304);
  bVar3 = DAT_0089a64c == 0;
  iVar1 = fn_001707b4(&DAT_008e3304);
  if ((bVar3) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else {
    iVar1 = fn_0044bc3c(iVar1);
    if (iVar1 == 0) {
      uVar2 = 0xd8a0c405;
    }
    else {
      uVar2 = 0xe0e0c7f6;
      if (param_1 != (int *)0x0 && param_3 != 0) {
        if (*param_1 == 0) {
          uVar2 = 0xe0e0c7f7;
        }
        else {
          uVar2 = fn_0052d97c(*param_1,param_2,param_3,param_4,param_5);
        }
      }
    }
  }
  return uVar2;
}



undefined4
fn_0052d0fc(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  fn_00170704(&DAT_008e3304);
  bVar3 = DAT_0089a64c == 0;
  iVar1 = fn_001707b4(&DAT_008e3304);
  if ((bVar3) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else {
    iVar1 = fn_0044bc3c(iVar1);
    if (iVar1 == 0) {
      uVar2 = 0xd8a0c405;
    }
    else {
      uVar2 = 0xe0e0c7f6;
      if ((param_1 != (int *)0x0 && param_3 != 0) && (param_4 != 0)) {
        if (*param_1 == 0) {
          uVar2 = 0xe0e0c7f7;
        }
        else {
          uVar2 = fn_0052d868(*param_1,param_2,param_3,param_4,param_5,param_6);
        }
      }
    }
  }
  return uVar2;
}



undefined4 fn_0052d088(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  fn_00170704(&DAT_008e3304);
  bVar3 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar3) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else {
    if (param_1 != 0) {
      uVar2 = fn_0052d92c(param_1);
      return uVar2;
    }
    uVar2 = 0xe0e0c7f6;
  }
  return uVar2;
}



undefined4 fn_0052d004(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  fn_00170704(&DAT_008e3304);
  bVar3 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar3) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else if (param_1 == (int *)0x0) {
    uVar2 = 0xe0e0c7f6;
  }
  else {
    if (*param_1 != 0) {
      uVar2 = fn_0052d8ec(*param_1);
      return uVar2;
    }
    uVar2 = 0xe0e0c7f7;
  }
  return uVar2;
}



undefined4 fn_0052cf90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  fn_00170704(&DAT_008e3304);
  bVar3 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar3) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else {
    if (param_1 != 0) {
      uVar2 = fn_0052d818(param_1);
      return uVar2;
    }
    uVar2 = 0xe0e0c7f6;
  }
  return uVar2;
}



int fn_0052cf1c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  fn_00170704(&DAT_008e3304);
  bVar4 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar4) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    iVar1 = -0x275f3808;
  }
  else {
    if (param_1 != (undefined4 *)0x0) {
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar3 + 0x80) = 0x2e0000;
      svc_0x32();
      iVar1 = DAT_008bfbd4;
      if (-1 < DAT_008bfbd4) {
        uVar2 = *(undefined4 *)(iVar3 + 0x8c);
        *param_1 = *(undefined4 *)(iVar3 + 0x88);
        param_1[1] = uVar2;
        iVar1 = *(int *)(iVar3 + 0x84);
      }
      return iVar1;
    }
    iVar1 = -0x1f1f380a;
  }
  return iVar1;
}



undefined4
fn_0052cdd0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_670 [402];
  
  fn_00170704();
  bVar5 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar5) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else if (param_2 == 0) {
    uVar2 = 0xe0e0c7f6;
  }
  else if (param_3 == 0) {
    uVar2 = 0;
  }
  else if (param_3 < 0x65) {
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        uVar4 = uVar3 + 1;
        local_670[uVar3 * 4] = *(undefined4 *)(param_2 + uVar3 * 4);
        local_670[uVar3 * 4 + 2] = 0;
        local_670[uVar3 * 4 + 3] = 0;
        uVar3 = uVar4;
      } while (uVar4 < param_3);
    }
    uVar2 = fn_0052cd04(param_1,local_670,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = 0xe0e0c7e9;
  }
  return uVar2;
}



undefined4
fn_0052cd04(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  
  fn_00170704(&DAT_008e3304);
  bVar4 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar4) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else {
    uVar2 = 0xe0e0c7f6;
    if (param_1 != 0 && param_2 != 0) {
      if (param_3 == 0) {
        uVar2 = 0;
      }
      else if (param_3 < 0x65) {
        uVar3 = param_3;
        if (param_5 == 0) {
          uVar3 = 0;
        }
        uVar2 = fn_0052d624(param_1,param_5,param_2,param_3 * 0xb,uVar3,param_3,param_4,param_6);
      }
      else {
        uVar2 = 0xe0e0c7e9;
      }
    }
  }
  return uVar2;
}


