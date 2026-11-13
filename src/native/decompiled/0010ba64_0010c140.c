#include "0010ba64_0010c140.h"

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


int fn_0010c140(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x270044;
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



int fn_0010c0e4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    *param_3 = *(undefined4 *)(iVar2 + 0x88);
    *param_4 = *(undefined4 *)(iVar2 + 0x8c);
    *param_1 = *(undefined4 *)(iVar2 + 0x94);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0010c094(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20080;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    *param_3 = *(undefined4 *)(iVar2 + 0x8c);
    *param_4 = *(undefined4 *)(iVar2 + 0x90);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_0010c084(undefined4 param_1)

{
  DAT_008bfb28 = param_1;
  return;
}



void fn_0010becc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined *local_30;
  undefined1 *puStack_2c;
  undefined4 auStack_28 [2];
  
  local_48 = (undefined4 *)0x0;
  iVar2 = -0x1f5fe7c5;
  iVar1 = iVar2;
  if ((DAT_008eac14 == (undefined4 *)0x0) && (iVar1 = fn_00158ef8(&local_48), -1 < iVar1)) {
    DAT_008eac14 = local_48;
    iVar1 = 0;
  }
  if (iVar1 < 0) {
    fn_0015e294();
  }
  if (DAT_008eac14 != (undefined4 *)0x0) {
    svc_0x23();
  }
  local_48 = (undefined4 *)0x0;
  iVar1 = iVar2;
  DAT_008eac14 = (undefined4 *)param_2;
  if ((DAT_008eac10 == (undefined4 *)0x0) && (iVar1 = fn_00158ef8(&local_48,0), -1 < iVar1)) {
    DAT_008eac10 = local_48;
    iVar1 = 0;
  }
  if (iVar1 < 0) {
    fn_0015e294();
  }
  if (DAT_008eac10 != (undefined4 *)0x0) {
    svc_0x23();
  }
  local_48 = (undefined4 *)0x0;
  DAT_008eac10 = (undefined4 *)param_3;
  if ((DAT_008eac18 == (undefined4 *)0x0) && (iVar2 = fn_00158ef8(&local_48,0), -1 < iVar2)) {
    iVar2 = 0;
    DAT_008eac18 = local_48;
  }
  if (iVar2 < 0) {
    fn_0015e294();
  }
  fn_0014ddb8(&DAT_008bfb0c,1);
  DAT_008bfaf8 = 0;
  local_38 = 4;
  local_34 = &LAB_00147060;
  local_30 = &DAT_0014707c;
  puStack_2c = &LAB_00147070;
  auStack_28[0] = 0;
  local_48 = &DAT_00889000;
  local_40 = 0xfffffffe;
  uStack_3c = 0;
  uStack_44 = param_1;
  iVar1 = fn_0014e2f4(&DAT_008bfb04,&local_38,fn_00114d44,auStack_28);
  if (iVar1 < 0) {
    fn_0015e294();
  }
  return;
}



void fn_0010bebc(undefined1 param_1)

{
  DAT_008bfb25 = param_1;
  return;
}



void fn_0010be9c(void)

{
  DAT_008bfb24 = 1;
  return;
}



undefined1 fn_0010be8c(void)

{
  return DAT_0089a56e;
}



void fn_0010be7c(undefined4 param_1)

{
  DAT_008bfb2c = param_1;
  return;
}



undefined1 fn_0010be6c(void)

{
  return DAT_0089a56d;
}



int fn_0010be10(void)

{
  int iVar1;
  
  iVar1 = DAT_008bfb30;
  if (DAT_008bfb30 == 0) {
    iVar1 = -0x1f5f3008;
  }
  else {
    svc_0x23();
    DAT_008bfb30 = 0;
  }
  if (iVar1 < 0) {
    fn_00123b08(iVar1,0x10be44);
  }
  return iVar1;
}



void fn_0010be00(undefined4 param_1)

{
  DAT_0089a57c = param_1;
  return;
}



undefined4 fn_0010bddc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00114858();
  if ((iVar1 != 0) || (iVar1 = fn_00114828(), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



bool fn_0010bdc8(void)

{
  int iVar1;
  
  iVar1 = fn_00114848();
  return iVar1 == 1;
}



int fn_0010bb8c(void)

{
  return (int)DAT_0089a571;
}



void fn_0010baf8(void)

{
  fn_001159ec(fn_00114868,0);
  DAT_0089a590 = 0;
  DAT_0089a5d0 = 0;
  DAT_0089a594 = 0;
  DAT_0089a5d4 = 0;
  DAT_0089a598 = 0;
  DAT_0089a5d8 = 0;
  DAT_0089a59c = 0;
  DAT_0089a5dc = 0;
  DAT_0089a5a0 = 0;
  DAT_0089a5e0 = 0;
  DAT_0089a5a4 = 0;
  DAT_0089a5e4 = 0;
  DAT_0089a5a8 = 0;
  DAT_0089a5e8 = 0;
  DAT_0089a5ac = 0;
  DAT_0089a5ec = 0;
  DAT_0089a5b0 = 0;
  DAT_0089a5f0 = 0;
  DAT_0089a5b4 = 0;
  DAT_0089a5f4 = 0;
  DAT_0089a5b8 = 0;
  DAT_0089a5f8 = 0;
  DAT_0089a5bc = 0;
  DAT_0089a5fc = 0;
  DAT_0089a5c0 = 0;
  DAT_0089a600 = 0;
  DAT_0089a5cc = 0;
  DAT_0089a60c = 0;
  return;
}



void fn_0010bab4(int param_1)

{
  if ((param_1 == 0) || (param_1 == 1)) {
    fn_00125220();
    fn_00125818(param_1);
    return;
  }
  if (param_1 == 2) {
    fn_00125220(1);
    return;
  }
  return;
}



void fn_0010ba74(int param_1)

{
  if (param_1 != 0) {
    fn_001147e8();
  }
  if (DAT_0089a5c4 != (code *)0x0) {
    (*DAT_0089a5c4)(DAT_0089a604);
  }
  if (DAT_0089a5c8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0010baa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0089a5c8)(DAT_0089a608);
  return;
}



void fn_0010ba64(undefined4 param_1)

{
  DAT_0089a580 = param_1;
  return;
}


