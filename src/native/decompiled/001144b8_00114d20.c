#include "001144b8_00114d20.h"

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


void fn_00114d20(undefined1 param_1)

{
  DAT_0089a575 = param_1;
  return;
}



int fn_00114858(void)

{
  return (int)DAT_0089a575;
}



undefined1 fn_00114848(void)

{
  return DAT_0089a573;
}



void fn_00114838(undefined1 param_1)

{
  DAT_0089a574 = param_1;
  return;
}



undefined1 fn_00114828(void)

{
  return DAT_0089a574;
}



void fn_00114818(undefined1 param_1)

{
  DAT_0089a572 = param_1;
  return;
}



undefined1 fn_00114808(void)

{
  return DAT_0089a572;
}



void fn_001147f8(void)

{
  if (DAT_008bfb1c == 0) {
    DAT_008bfb1c = DAT_008bfaf4;
  }
  return;
}



void fn_001147e8(void)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = DAT_0089a548;
  do {
    while (*piVar2 < 1) {
      ClearExclusiveLocal();
      fn_00147e54(DAT_008c0334,piVar2,1,0,0,0);
    }
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = -*piVar2;
  while (*piVar2 != -1) {
    fn_00147e54(DAT_008c0334,piVar2,1,0xffffffff,0,0);
  }
  return;
}



bool fn_001147cc(void)

{
  return (DAT_0089a580 & 7) == 0;
}



uint fn_001147b8(void)

{
  return DAT_0089a580 & 7;
}



undefined4 fn_001147a8(void)

{
  return DAT_0089a580;
}



void fn_00114788(int param_1)

{
  DAT_0089a584 = 1;
  if (param_1 == 0) {
    return;
  }
  fn_00115a18();
  return;
}



int fn_0011474c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xb0000;
  svc_0x32();
  iVar1 = DAT_008c0378;
  if (-1 < DAT_008c0378) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined1 fn_001146cc(void)

{
  if (DAT_008c034c != '\0') {
    DAT_008c034c = '\0';
    fn_00123950(fn_0013d778,fn_0013daf8,&LAB_0013d73c);
    fn_00189e28();
    fn_0013d708();
    fn_00124f4c(&DAT_008ef56c);
    fn_00124f40(&DAT_008f0bc0);
    if (DAT_008c034f == '\0') {
      fn_0013d9b4(&DAT_008ef5bc,0);
    }
  }
  return 0;
}



int fn_00114690(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x140040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008c07ec;
  if (-1 < DAT_008c07ec) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00114654(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x60040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008c07ec;
  if (-1 < DAT_008c07ec) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_00114648(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_008ebda8;
  if (DAT_008bfbfc != '\0') {
    if (DAT_008bfbfd == '\0') {
      DAT_008ebda8 = 0;
      svc_0x23();
      if (iVar1 < 0) {
        fn_00146594();
      }
      iVar1 = DAT_008ebdb0;
      DAT_008ebdb0 = 0;
      svc_0x23();
      if (iVar1 < 0) {
        fn_00146594();
      }
      iVar1 = DAT_008ebdb8;
      DAT_008ebdb8 = 0;
      svc_0x23();
      if (iVar1 < 0) {
        fn_00146594();
      }
      iVar1 = DAT_008ebdc4;
      DAT_008ebdc4 = 0;
      svc_0x23();
      if (iVar1 < 0) {
        fn_00146594();
      }
      iVar1 = DAT_008ebdcc;
      DAT_008ebdcc = 0;
      svc_0x23();
      if (iVar1 < 0) {
        fn_00146594();
      }
      fn_0015e144(&DAT_008ebdd4);
    }
    else {
      DAT_008bfbfd = '\0';
    }
    svc_0x23();
    bVar2 = DAT_008c0784 < 0;
    DAT_008c0784 = 0;
    if (bVar2) {
      fn_00146594();
    }
    DAT_008bfbfc = '\0';
  }
  return;
}



void fn_001145e8(void)

{
  if (DAT_008bfbfe != '\0') {
    fn_00170704(&DAT_008ebdf4);
    fn_0013c07c();
    fn_001707b4(&DAT_008ebdf4);
  }
  DAT_008ebdfc = 0xffffffff;
  fn_0015e228(&DAT_008ebe00);
  fn_0015e228(&DAT_008ebe20);
  DAT_008bfbfe = 0;
  return;
}



void fn_00114554(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_008bfbfe == '\0') {
    if (param_2 < 0x3000) {
      fn_00146594(0,0x40001db,param_3,param_4,param_4);
    }
    fn_001707d4(&DAT_008ebe00,param_1,0x1000,0,3);
    fn_001707d4(&DAT_008ebe20,param_1 + 0x2000,0x1000,0,3);
    fn_0013c500(&DAT_008ebdf4);
    fn_00123668(param_1 + 0x1000);
    DAT_008bfbfe = '\x01';
  }
  return;
}



undefined4 fn_00114540(undefined4 param_1)

{
  fn_00124694();
  return param_1;
}



undefined4 * fn_001144b8(undefined4 *param_1,undefined4 param_2)

{
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [4];
  
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0x80;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  fn_00124664();
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  fn_00124218(param_1);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  fn_001242c0(param_1,auStack_18,auStack_10,1);
  return param_1;
}


