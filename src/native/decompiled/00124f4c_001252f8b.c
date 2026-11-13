#include "00124f4c_001252f8b.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


undefined4
fn_001252f8(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3,int param_4,
            undefined4 *param_5,int *param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  if (param_7 == 0) {
    iVar1 = fn_0013e374();
  }
  else {
    iVar1 = fn_0013e67c();
    if (iVar1 == 0) {
      return 0xc8a0cfef;
    }
  }
  iVar1 = fn_0013e09c(iVar1);
  if (iVar1 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = &uStack_30;
    }
    if (param_2 == (undefined4 *)0x0) {
      param_2 = &uStack_2c;
    }
    if (param_3 == (undefined1 *)0x0) {
      param_4 = 0;
    }
    if (param_3 == (undefined1 *)0x0 || param_4 == 0) {
      param_3 = auStack_28;
    }
    if (param_5 == (undefined4 *)0x0) {
      param_5 = &uStack_24;
    }
    if (param_6 == (int *)0x0) {
      param_6 = &local_34;
    }
    local_34 = 0;
    fn_00125694();
    uVar2 = fn_001252e8();
    uVar2 = fn_0013eac8(param_1,uVar2,param_2,param_3,param_4,param_5,param_6);
    fn_001257a8();
    if (local_34 != 0) {
      svc_0x23();
    }
  }
  else {
    uVar2 = fn_0013e09c();
    *param_2 = uVar2;
    fn_001251a8(0);
    fn_0013e368();
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    uVar2 = 0;
    if (param_6 != (int *)0x0) {
      *param_6 = DAT_0089a54c;
    }
  }
  fn_0013e368();
  return uVar2;
}



undefined4 fn_001252e8(void)

{
  return DAT_0089a57c;
}



void fn_00125268(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  fn_00170704();
  piVar2 = DAT_0089a588;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      fn_001707b4(&DAT_008e3224);
      return;
    }
    if (piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  iVar1 = *piVar2;
  piVar3 = (int *)piVar2[1];
  if (iVar1 == 0) {
    DAT_0089a588 = piVar3;
  }
  else {
    *(int **)(iVar1 + 4) = piVar3;
  }
  if (piVar3 == (int *)0x0) {
    DAT_0089a58c = iVar1;
  }
  else {
    *piVar3 = iVar1;
  }
  *piVar2 = 0;
  piVar2[1] = 0;
  fn_001707b4(&DAT_008e3224);
  return;
}



void fn_00125254(void)

{
  DAT_0089a56f = 0;
  return;
}



int fn_00125244(void)

{
  return (int)DAT_0089a56f;
}



void fn_00125220(undefined1 param_1)

{
  DAT_0089a573 = param_1;
  return;
}



void fn_0012520c(void)

{
  DAT_0089a570 = 0;
  return;
}



int fn_001251fc(void)

{
  return (int)DAT_0089a570;
}



undefined4 fn_001251b8(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_001147a8();
  iVar2 = fn_0013e078();
  if ((iVar2 == 0 || (uVar1 & 0x20000000) == 0) || ((uVar1 & 0x10000000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



int fn_00125198(void)

{
  return (int)DAT_0089a542;
}


