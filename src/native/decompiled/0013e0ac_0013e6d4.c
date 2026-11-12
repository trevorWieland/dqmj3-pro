#include "0013e0ac_0013e6d4.h"

static void svc_0x18(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x18 }
#endif
}

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


int fn_0013e6d4(undefined4 param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,uint param_7,uint param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint local_54;
  uint local_50;
  
  if (DAT_0089a560 != param_7 || DAT_0089a564 != param_8) {
    local_54 = param_7 ^ DAT_0089a558;
    local_50 = param_8 ^ DAT_0089a55c | local_54;
    if (local_50 != 0) {
      svc_0x28();
      goto LAB_0013e744;
    }
  }
  local_54 = 0;
  local_50 = 0;
LAB_0013e744:
  while( true ) {
    if (0x1000 < param_4) {
      fn_00146594();
    }
    uVar5 = param_4;
    uVar4 = param_3;
    if (param_3 == 0 || param_4 == 0) {
      uVar5 = 0;
      uVar4 = uVar5;
    }
    fn_00125694();
    uVar2 = fn_001252e8();
    iVar3 = fn_0013e944(uVar2,param_1,param_2,uVar4,uVar5,param_5);
    if ((-1 < iVar3) && ((param_2 & 0x10000) != 0)) {
      fn_0013e47c();
    }
    fn_001257a8();
    if (((-1 < iVar3) || (iVar3 != -0x375f33fe)) ||
       (DAT_0089a560 == param_7 && DAT_0089a564 == param_8)) break;
    uVar4 = param_8 ^ DAT_0089a55c | param_7 ^ DAT_0089a558;
    if (uVar4 != 0) {
      svc_0x28();
      uVar5 = DAT_0089a55c - (local_54 + (uVar4 < local_50));
      lVar1 = (ulonglong)(uVar4 - local_50) * 3 +
              ((ulonglong)
               (uint)(((int)uVar5 >> 0x1f) * -0x452cb512 +
                     (int)((ulonglong)uVar5 * 0xbad34aee >> 0x20)) << 0x20 |
              (ulonglong)uVar5 * 0xbad34aee & 0xffffffff) +
              CONCAT44(uVar5 * 3,(int)((ulonglong)(uVar4 - local_50) * 0xbad34aee >> 0x20));
      iVar3 = (int)((ulonglong)lVar1 >> 0x20);
      bVar6 = param_7 < (uint)lVar1;
      if ((int)(param_8 - (iVar3 + (uint)bVar6)) < 0 !=
          (SBORROW4(param_8,iVar3) != SBORROW4(param_8 - iVar3,(uint)bVar6))) {
        return -0x375f33fe;
      }
    }
    fn_0012d6a4(10000000,0);
  }
  return iVar3;
}



undefined4 fn_0013e69c(undefined4 param_1)

{
  undefined4 uVar1;
  
  fn_00125694();
  uVar1 = fn_0015059c(1,param_1);
  fn_001257a8();
  return uVar1;
}



void fn_0013e688(void)

{
  fn_0014e258();
  return;
}



undefined4 fn_0013e650(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  fn_00125694();
  uVar1 = fn_00150550(param_1,param_2);
  fn_001257a8();
  return uVar1;
}



void fn_0013e51c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  switch(param_1[7]) {
  case 0:
    uVar1 = 4;
    break;
  case 1:
    uVar1 = 3;
    break;
  case 2:
  case 3:
  case 4:
    uVar1 = 2;
  }
  if (3 < uVar1) {
    uVar1 = 3;
  }
  param_1[6] = 0;
  param_1[5] = 0;
  iVar3 = uVar1 * 0x14000;
  uVar1 = 0;
  switch(param_1[4]) {
  case 0:
    uVar1 = 4;
    break;
  case 1:
    uVar1 = 3;
    break;
  case 2:
  case 3:
  case 4:
    uVar1 = 2;
  }
  if (uVar1 < 4) {
    uVar2 = uVar1;
  }
  else {
    uVar2 = 3;
  }
  param_1[3] = iVar3;
  param_1[2] = iVar3;
  iVar3 = iVar3 + uVar2 * 0x19000;
  if ((char)param_1[1] != '\0') {
    uVar1 = 0;
    switch(param_1[4]) {
    case 0:
      uVar1 = 4;
      break;
    case 1:
      uVar1 = 3;
      break;
    case 2:
    case 3:
    case 4:
      uVar1 = 2;
    }
    if (uVar1 < 4) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = 3;
    }
    param_1[3] = iVar3;
    iVar3 = iVar3 + uVar2 * 0x19000;
  }
  if (3 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = iVar3 + uVar1 * 0x7000;
  return;
}



void fn_0013e47c(void)

{
  int iVar1;
  
  DAT_008bfaf8 = 1;
  svc_0x18();
  if (DAT_008eac10 < 0) {
    fn_0015e294();
  }
  svc_0x24();
  if (DAT_008bfb04 < 0) {
    fn_0015e294();
  }
  DAT_008bfb08 = 1;
  fn_0015e304(&DAT_008bfb04);
  if (DAT_008bfb04 != 0) {
    svc_0x23();
    DAT_008bfb04 = 0;
  }
  iVar1 = 0;
  do {
    if ((&DAT_008eac10)[iVar1] != 0) {
      svc_0x23();
      (&DAT_008eac10)[iVar1] = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}



void fn_0013e368(void)

{
  fn_0013c428(&DAT_008bfb0c);
  return;
}



undefined4 fn_0013e1e4(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (DAT_0089a564 != param_4 || DAT_0089a560 != param_3) {
    uVar6 = DAT_0089a558 ^ param_3;
    uVar2 = DAT_0089a55c ^ param_4 | uVar6;
    if (uVar2 != 0) {
      svc_0x28();
      goto code_r0x0013e250;
    }
  }
  uVar2 = 0;
  uVar6 = 0;
code_r0x0013e250:
  while( true ) {
    fn_00125694();
    iVar3 = fn_001259a0(param_1,&local_30);
    if (iVar3 < 0) {
      fn_00123b08(iVar3,0x13e268);
    }
    fn_001257a8();
    if ((char)local_30 != '\0') break;
    if (param_3 == DAT_0089a560 && DAT_0089a564 == param_4) {
      return 0;
    }
    uVar4 = param_3 ^ DAT_0089a558 | param_4 ^ DAT_0089a55c;
    if (uVar4 != 0) {
      svc_0x28();
      uVar5 = (param_4 ^ DAT_0089a55c) - (uVar6 + (uVar4 < uVar2));
      local_30 = 0;
      local_2c = 0;
      lVar1 = (ulonglong)(uVar4 - uVar2) * 3 +
              ((ulonglong)
               (uint)(((int)uVar5 >> 0x1f) * -0x452cb512 +
                     (int)((ulonglong)uVar5 * 0xbad34aee >> 0x20)) << 0x20 |
              (ulonglong)uVar5 * 0xbad34aee & 0xffffffff) +
              CONCAT44(uVar5 * 3,(int)((ulonglong)(uVar4 - uVar2) * 0xbad34aee >> 0x20));
      iVar3 = (int)((ulonglong)lVar1 >> 0x20);
      bVar7 = param_3 < (uint)lVar1;
      if ((int)(param_4 - (iVar3 + (uint)bVar7)) < 0 !=
          (SBORROW4(param_4,iVar3) != SBORROW4(param_4 - iVar3,(uint)bVar7))) {
        return 0;
      }
    }
    fn_0012d6a4(10000000,0);
  }
  return 1;
}



void fn_0013e180(undefined4 *param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  fn_0015012c(&local_28);
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[4] = local_18;
  param_1[5] = local_14;
  param_1[2] = local_20;
  param_1[6] = local_10;
  param_1[3] = local_1c;
  param_1[7] = local_c;
  return;
}



void fn_0013e0ac(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  fn_00170704(&DAT_008e3224);
  iVar1 = *param_1;
  bVar3 = iVar1 == 0;
  if (bVar3) {
    iVar1 = param_1[1];
  }
  if ((bVar3 && iVar1 == 0) && (DAT_0089a588 != param_1)) {
    if (DAT_0089a588 == (int *)0x0) {
      DAT_0089a588 = param_1;
      DAT_0089a58c = param_1;
      *param_1 = 0;
      fn_001707b4(&DAT_008e3224);
      return;
    }
    piVar2 = DAT_0089a588;
    do {
      if (param_1[4] < piVar2[4]) {
        iVar1 = *piVar2;
        param_1[1] = (int)piVar2;
        *param_1 = iVar1;
        if (*piVar2 == 0) {
          DAT_0089a588 = param_1;
        }
        else {
          *(int **)(*piVar2 + 4) = param_1;
        }
        *piVar2 = (int)param_1;
        fn_001707b4(&DAT_008e3224);
        return;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
    *(int **)((int)DAT_0089a58c + 4) = param_1;
    *param_1 = (int)DAT_0089a58c;
    param_1[1] = 0;
    DAT_0089a58c = param_1;
    fn_001707b4(&DAT_008e3224);
    return;
  }
  fn_001707b4(&DAT_008e3224);
  return;
}


