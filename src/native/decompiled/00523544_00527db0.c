#include "00523544_00527db0.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


undefined4 fn_00527db0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  undefined8 uVar5;
  
  if (DAT_0089a7b0 == '\0') {
    fn_0013db70(0);
    fn_00114128(&DAT_008e36d8,param_1 + param_3,param_2 - param_3,0);
    fn_0013c500(&DAT_008e3730);
    DAT_008e3740 = &DAT_008e36d8;
    DAT_008e3744 = 0;
    DAT_008e3746 = 0;
    DAT_008e3745 = 0;
    uVar5 = fn_00529cf4();
    if ((-1 < (int)uVar5) && (uVar5 = fn_0052a238(param_1,param_3), -1 < (int)uVar5)) {
      iVar3 = fn_00529db0(&DAT_008e373c,param_4);
      if (-1 < iVar3) {
        DAT_0089a7b0 = 1;
        return 0;
      }
      fn_0052a1e8();
      uVar5 = CONCAT44(extraout_r1,iVar3);
    }
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    if (DAT_008c035c != (undefined4 *)0x0) {
      (**(code **)*DAT_008c035c)();
      puVar1 = DAT_008c035c;
      fn_00170704(&DAT_008e3730);
      fn_0015e5c0(&DAT_008e36d8,puVar1);
      fn_001707b4(&DAT_008e3730);
      DAT_008c035c = (undefined4 *)0x0;
      uVar4 = extraout_r1_00;
    }
    DAT_008e3745 = (undefined1)((uint)uVar4 >> 8);
    DAT_008e3740 = (undefined4 *)0x0;
    DAT_008e3744 = (undefined1)uVar4;
    DAT_008e3746 = (undefined1)((uint)uVar4 >> 0x10);
    DAT_008e3738 = 0xffffffff;
    fn_0014e6e4();
  }
  else {
    uVar2 = 0xc8a073f9;
  }
  return uVar2;
}



void fn_00525bd0(void)

{
  float in_s0;
  float in_s1;
  
  if (in_s1 != 0.0 || (in_s1 != 0.0 || in_s0 != 0.0)) {
    if (in_s1 < 0.0) {
      if (in_s0 < 0.0) {
        if (-in_s0 <= -in_s1) goto LAB_00525c64;
      }
      else if (-in_s1 < in_s0) goto LAB_00525c64;
    }
    else if (in_s0 < 0.0) {
      if (in_s1 < -in_s0) goto LAB_00525c64;
    }
    else if (in_s0 <= in_s1) {
LAB_00525c64:
      fn_00525440();
      return;
    }
    fn_00525440();
  }
  return;
}



int fn_00524a44(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_008e3674 != '\0') {
    return -0x275f5c07;
  }
  iVar1 = fn_0013db70(0);
  if (iVar1 < 0) {
    fn_00146594();
  }
  iVar1 = fn_0051e5e4(&DAT_008e3698,(char *)&DAT_007d6f14);
  if (-1 < iVar1) {
    DAT_008e369c = DAT_008e3698;
    iVar2 = 0;
    if (param_2 != 0) {
      iVar1 = fn_0044f810(&DAT_008e3678,param_1,param_2,0,3);
      if (iVar1 < 0) {
        if (DAT_008e3698 == 0) {
          return iVar1;
        }
        svc_0x23();
        DAT_008e3698 = 0;
        return iVar1;
      }
      iVar2 = DAT_008e368c;
    }
    iVar2 = fn_00524fd0(&DAT_008e369c,iVar2,param_2);
    if (iVar2 < 0) {
      if (DAT_008e3698 != 0) {
        svc_0x23();
        DAT_008e3698 = 0;
      }
      if (DAT_008e368c != 0) {
        fn_0015e228(&DAT_008e3678);
      }
      return iVar2;
    }
    DAT_008e3674 = '\x01';
  }
  return iVar1;
}



void fn_005249cc(undefined4 *param_1)

{
  *param_1 = &DAT_0085746c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



void fn_005249a8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  fn_00524d8c(param_1 + 0xc,*(int *)(param_1 + 4),param_2);
  return;
}



void fn_00524690(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  fn_00524ec0(param_1 + 0xc,*(int *)(param_1 + 4),param_2);
  return;
}



void fn_00524628(int param_1)

{
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  fn_00524e0c(param_1 + 0xc);
  return;
}



void fn_005244b0(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = 0;
  do {
    bVar2 = *(char *)(param_1 + uVar1) == '\0';
    bVar3 = param_2 != uVar1;
    bVar4 = uVar1 <= param_2;
    if (!bVar2 && uVar1 < param_2) {
      uVar1 = uVar1 + 1;
    }
  } while ((bVar2 || bVar4) && (!bVar2 && bVar3));
  return;
}



void fn_00523624(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_008eef95 == '\0') {
    puVar2 = (undefined4 *)0x0;
    iVar1 = fn_005236dc();
  }
  else {
    puVar2 = &DAT_008eefa8;
    iVar1 = 0;
  }
  if (iVar1 < 0) {
    if (DAT_008eef94 == '\0') {
      puVar2 = (undefined4 *)0x0;
      iVar1 = fn_005236dc();
    }
    else {
      puVar2 = &DAT_008eefa4;
      iVar1 = 0;
    }
    if (-1 < iVar1) {
      iVar1 = fn_00523f70(puVar2,param_1,param_2,param_3);
    }
  }
  else {
    iVar1 = fn_005228b4(puVar2,param_1,param_2,param_3);
  }
  if ((iVar1 < 0) && (-1 < DAT_008bfb34)) {
    DAT_008bfb34 = iVar1;
  }
  return;
}



void fn_00523578(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_008eef95 == '\0') {
    puVar2 = (undefined4 *)0x0;
    iVar1 = fn_005236dc();
  }
  else {
    puVar2 = &DAT_008eefa8;
    iVar1 = 0;
  }
  if (iVar1 < 0) {
    if (DAT_008eef94 == '\0') {
      puVar2 = (undefined4 *)0x0;
      iVar1 = fn_005236dc();
    }
    else {
      puVar2 = &DAT_008eefa4;
      iVar1 = 0;
    }
    if (-1 < iVar1) {
      iVar1 = fn_005242b8(puVar2,param_1,param_2);
    }
  }
  else {
    iVar1 = fn_00522bc4(puVar2,param_1,param_2);
  }
  if ((iVar1 < 0) && (-1 < DAT_008bfb34)) {
    DAT_008bfb34 = iVar1;
  }
  return;
}



void fn_00523544(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (DAT_008eef95 == '\0') {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = &DAT_008eefa8;
  }
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    fn_005236dc(0x2b);
  }
  return;
}


