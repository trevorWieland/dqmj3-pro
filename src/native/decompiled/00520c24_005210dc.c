#include "00520c24_005210dc.h"

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


void fn_005210dc(undefined4 *param_1,int param_2,undefined4 param_3)

{
  *param_1 = &DAT_00857404;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  if (param_2 == 0) {
    param_1[4] = 0;
  }
  return;
}



undefined4 fn_005210b0(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    param_4 = *(int *)(param_1 + 0x10);
  }
  if ((iVar2 != 0 && param_4 != 0) && (param_2 < *(ushort *)(param_1 + 4))) {
    uVar1 = *(undefined4 *)(iVar2 + param_2 * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



void fn_0052102c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = fn_00523544(&local_18);
  if (iVar1 < 0) {
    iVar1 = fn_00522ff8(local_14);
    if (-1 < iVar1) {
      fn_00523e70(local_14[0],param_1,param_2);
      return;
    }
  }
  else {
    fn_005227b4(local_18,param_1,param_2);
  }
  return;
}



void fn_00521008(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &DAT_008573f4;
  return;
}



undefined4 fn_00520fd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 4) = 0x7d;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 6) = 2;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



undefined4 fn_00520e74(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 0) {
    uVar1 = 9;
    iVar3 = param_2;
LAB_00520fc8:
    uVar1 = fn_005236dc(uVar1,iVar3);
    return uVar1;
  }
  iVar3 = 4 - param_4;
  iVar2 = param_1 + param_4;
  switch(param_2) {
  case 0:
    fn_00158f6c(iVar2 + 4,param_4 == 0);
    if (param_4 != 0) {
      param_4 = 1;
    }
    param_1 = param_1 + 4;
    break;
  case 1:
    fn_00158f6c(iVar2 + 5,param_4 == 0);
    if (param_4 != 0) {
      param_4 = 1;
    }
    param_1 = param_1 + 5;
    break;
  case 2:
    if (3 < param_4) {
      iVar3 = 0;
    }
    fn_00158f6c(iVar2 + 8,iVar3);
    if (3 < param_4) {
      param_4 = 4;
    }
    param_1 = param_1 + 8;
    break;
  case 3:
    if (3 < param_4) {
      iVar3 = 0;
    }
    fn_00158f6c(iVar2 + 0xc,iVar3);
    if (3 < param_4) {
      param_4 = 4;
    }
    param_1 = param_1 + 0xc;
    break;
  case 4:
    if (3 < param_4) {
      iVar3 = 0;
    }
    fn_00158f6c(iVar2 + 0x10,iVar3);
    if (3 < param_4) {
      param_4 = 4;
    }
    param_1 = param_1 + 0x10;
    break;
  case 5:
    fn_00158f6c(iVar2 + 6,param_4 == 0);
    if (param_4 != 0) {
      param_4 = 1;
    }
    param_1 = param_1 + 6;
    break;
  default:
    uVar1 = 0x1c;
    goto LAB_00520fc8;
  }
  fn_00301a9c(param_1,param_3,param_4);
  return 0;
}



undefined4 * fn_00520e48(undefined4 *param_1)

{
  *param_1 = &DAT_008573e4;
  fn_00301f50(param_1 + 1,0x408);
  return param_1;
}



int fn_00520e30(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < *(ushort *)(param_1 + 4)) {
    iVar1 = param_1 + param_2 * 8 + 0xc;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 fn_00520e28(undefined4 param_1)

{
  return param_1;
}



undefined4 * fn_00520de8(undefined4 *param_1)

{
  param_1[6] = 0;
  *param_1 = &DAT_00857414;
  fn_00301f50(param_1 + 1,0x7d4);
  *param_1 = &DAT_008573d0;
  return param_1;
}



int fn_00520dac(void)

{
  int iVar1;
  
  if (DAT_0089a610 != '\0') {
    return 0;
  }
  DAT_0089a610 = 1;
  iVar1 = fn_0010b500();
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar1 = fn_00522fec();
  return iVar1;
}



undefined4 * fn_00520d7c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00521ea0();
  *puVar1 = &DAT_008573c0;
  fn_002fec40(puVar1 + 3,(char *)&DAT_007d6430);
  return puVar1;
}



void fn_00520cec(int param_1)

{
  *(undefined2 *)(param_1 + 0x1f16) = 0;
  fn_004e1338(param_1);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_1 + 0x42);
  fn_004edc34(param_1 + 0x1f28);
  if (*(char *)(param_1 + 0x1f26) != '\0') {
    fn_004ec454(param_1 + 0x1f18);
  }
  fn_004edc70(param_1 + 0x1f28);
  if (DAT_008c0382 == '\0') {
    return;
  }
  fn_005200f4();
  fn_00454a70();
  fn_00454af0();
  return;
}



int * fn_00520cc4(int *param_1)

{
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



int fn_00520c24(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5,
                undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xf0404;
  *(int *)(iVar2 + 0x84) = param_4;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  uVar6 = param_5[4];
  uVar7 = param_5[5];
  uVar8 = param_5[6];
  uVar9 = param_5[7];
  *(undefined4 *)(iVar2 + 0x88) = *param_5;
  *(undefined4 *)(iVar2 + 0x8c) = uVar3;
  *(undefined4 *)(iVar2 + 0x90) = uVar4;
  *(undefined4 *)(iVar2 + 0x94) = uVar5;
  *(undefined4 *)(iVar2 + 0x98) = uVar6;
  *(undefined4 *)(iVar2 + 0x9c) = uVar7;
  *(undefined4 *)(iVar2 + 0xa0) = uVar8;
  *(undefined4 *)(iVar2 + 0xa4) = uVar9;
  uVar3 = param_5[8];
  uVar4 = param_5[9];
  uVar5 = param_5[10];
  uVar6 = param_5[0xb];
  *(undefined4 *)(iVar2 + 0xb8) = param_5[0xc];
  *(undefined4 *)(iVar2 + 0xbc) = param_6;
  *(undefined4 *)(iVar2 + 0xa8) = uVar3;
  *(undefined4 *)(iVar2 + 0xac) = uVar4;
  *(undefined4 *)(iVar2 + 0xb0) = uVar5;
  *(undefined4 *)(iVar2 + 0xb4) = uVar6;
  *(undefined1 *)(iVar2 + 0xc0) = param_7;
  *(undefined4 *)(iVar2 + 200) = param_2;
  *(undefined4 *)(iVar2 + 0xc4) = 0;
  *(undefined4 *)(iVar2 + 0xd0) = param_3;
  *(uint *)(iVar2 + 0xcc) = param_4 << 4 | 0xc;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


