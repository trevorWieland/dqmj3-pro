#include "0012542c_001259a0.h"

static void svc_0x14(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x14 }
#endif
}

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


int fn_001259a0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x90040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00125968(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(char **)(iVar2 + 0x80) = "n";
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_00125944(void)

{
  int iVar1;
  
  fn_00125694();
  fn_001252e8();
  iVar1 = fn_0013eb94();
  if (iVar1 < 0) {
    fn_00123b08(iVar1,0x12595c);
  }
  fn_001257a8();
  return;
}



void fn_00125930(void)

{
  DAT_0089a56a = 0;
  return;
}



undefined4 fn_00125864(undefined4 param_1)

{
  undefined4 extraout_r1;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_18;
  
  fn_00101a1c(&local_30,&DAT_0013e098,0x10,2);
  fn_0013e180(&local_30);
  fn_0013e1e4(param_1,extraout_r1,DAT_0089a558,DAT_0089a55c);
  DAT_008e3214 = local_28;
  DAT_008e3220 = local_18;
  DAT_008e3208 = local_30 != iStack_2c;
  fn_0013e51c(&DAT_008e3204);
  fn_0013e6d4(param_1,0x10,&DAT_008e3204,0x20,DAT_0089a54c);
  fn_0013e380(param_1,0);
  fn_0013e650(&DAT_008e3204,0x20);
  return 0;
}



void fn_00125854(undefined1 param_1)

{
  DAT_0089a56a = param_1;
  return;
}



undefined1 fn_00125844(void)

{
  return DAT_0089a56a;
}



void fn_00125818(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  fn_00125694();
  uVar1 = fn_001252e8();
  iVar2 = fn_0013ea84(uVar1,param_1);
  if (iVar2 < 0) {
    fn_00123b08(iVar2,0x125838);
  }
  fn_001257a8();
  return;
}



void fn_00125784(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  fn_00125694();
  fn_001252e8();
  iVar1 = fn_001259e4();
  if (iVar1 < 0) {
    fn_00123b08(iVar1,0x12579c);
  }
  iVar1 = DAT_008bfb30;
  if (DAT_008bfb30 == 0) {
    iVar1 = -0x1f5f3008;
  }
  else {
    svc_0x23();
    DAT_008bfb30 = 0;
  }
  if (-(iVar1 >> 0x1f) != 0) {
    fn_00123b08(iVar1,0x1257d8,-(iVar1 >> 0x1f),in_r3,unaff_r4,in_lr);
  }
  if ((DAT_008bfb20 == 0) || (svc_0x14(), -1 < DAT_008bfb20)) {
    return;
  }
  fn_0015e294();
  return;
}



void fn_00125770(void)

{
  DAT_0089a56b = 0;
  return;
}



undefined4 fn_0012574c(undefined4 param_1)

{
  undefined4 uVar1;
  
  fn_00125694();
  uVar1 = fn_0013eb54(param_1);
  fn_001257a8();
  return uVar1;
}



void fn_0012572c(undefined1 param_1)

{
  DAT_0089a56c = param_1;
  return;
}



undefined1 fn_0012571c(void)

{
  return DAT_0089a56b;
}



int fn_001256c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char local_1c [8];
  
  fn_00125694();
  iVar1 = fn_0013e99c(param_1,param_2,param_3,param_4,local_1c);
  if (iVar1 < 0) {
    fn_00123b08(iVar1,0x125708);
  }
  fn_001257a8();
  return (int)local_1c[0];
}



void fn_00125644(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = fn_00189e18();
    if (iVar1 == 0) {
      return;
    }
    fn_00123a2c();
    DAT_0089a544 = 1;
  }
  else {
    if (DAT_0089a544 == '\0') {
      return;
    }
    fn_0013c868();
    DAT_0089a544 = 0;
  }
  return;
}



undefined4 fn_00125510(undefined4 param_1)

{
  undefined4 extraout_r1;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  int local_44;
  undefined1 local_40;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_20;
  
  fn_00101a1c(&local_38,&DAT_0013e098,0x10,2);
  fn_0013e180(&local_38);
  fn_0013e1e4(param_1,extraout_r1,DAT_0089a558,DAT_0089a55c);
  DAT_008e3214 = local_30;
  DAT_008e3220 = local_20;
  DAT_008e3208 = local_38 != iStack_34;
  fn_0013e51c(&DAT_008e3204);
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_60 = DAT_0089a558;
  uStack_5c = DAT_0089a55c;
  fn_0013e6d4(param_1,2,&DAT_008e3204,0x20,DAT_0089a54c);
  local_64 = 0;
  fn_0013e380(param_1,&local_64);
  fn_0013e688(&local_58,local_64,DAT_008e3204,3);
  fn_00150318(local_50,&local_38,&DAT_008e3204);
  fn_0015e228(&local_58);
  fn_0013e650(&DAT_008e3204,0x20);
  fn_0015e228(&local_58);
  if (local_44 != 0) {
    svc_0x23();
  }
  return 0;
}



int fn_0012542c(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,int param_5,
                undefined4 *param_6)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_30 = 0;
  local_2c = 0;
  fn_00125694();
  if ((param_2 == (undefined4 *)0x0) || (param_3 == 0)) {
    param_2 = &local_30;
  }
  iVar1 = fn_0013e8c8(param_1,param_2);
  if (iVar1 < 0) {
    fn_00123b08(iVar1,0x1254bc);
  }
  if (param_4 == 0 || param_5 == 0) {
    local_28 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_28;
  }
  fn_001257a8();
  return iVar1;
}



void fn_001257a8(void)

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
    fn_00123b08(iVar1,0x1257d8);
  }
  if ((DAT_008bfb20 == 0) || (svc_0x14(), -1 < DAT_008bfb20)) {
    return;
  }
  fn_0015e294();
  return;
}


