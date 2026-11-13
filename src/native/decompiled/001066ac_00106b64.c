#include "001066ac_00106b64.h"

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

static void svc_0x3a(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x3a }
#endif
}


int fn_00106b64(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10002;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  svc_0x32();
  iVar1 = DAT_008c0378;
  if (-1 < DAT_008c0378) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined4 fn_00106ad4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  fn_00170704(&DAT_008ec13c);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  piVar1 = DAT_008ec138;
  if (param_1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(param_1 + 4);
  }
  if (DAT_008ec138 == (int *)0x0) {
    if (param_1 != 0) {
      iVar2 = param_1 + 4;
    }
    else {
      iVar2 = 0;
    }
    *(int *)(param_1 + 8) = iVar2;
    *(int *)(param_1 + 4) = iVar2;
    if (param_1 != 0) {
      DAT_008ec138 = (int *)(param_1 + 4);
    }
    else {
      DAT_008ec138 = (int *)0x0;
    }
  }
  else {
    piVar3[1] = (int)DAT_008ec138;
    *(int **)(*piVar1 + 4) = piVar3;
    *piVar3 = *piVar1;
    *piVar1 = (int)piVar3;
  }
  fn_001707b4(&DAT_008ec13c);
  return 0;
}



int fn_00106a0c(void)

{
  int iVar1;
  int iVar2;
  undefined4 *local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined *local_20;
  undefined1 *local_1c;
  
  local_48 = (undefined4 *)0x0;
  iVar1 = fn_0010b944(&local_48);
  if (-1 < iVar1) {
    DAT_008ec12c = local_48;
    local_28 = 4;
    local_24 = &LAB_0010fbd0;
    local_2c = &LAB_0010b848;
    local_20 = &DAT_0010fbec;
    local_1c = &LAB_0010fbe0;
    local_48 = &DAT_008ec348;
    uStack_44 = 0x5109d500;
    local_40 = 0xfffffffe;
    uStack_3c = 0;
    iVar2 = fn_0014e2f4(&DAT_008ec130,&local_28,&DAT_0010b2a0,&local_2c);
    if (iVar2 < 0) {
      fn_0015e294();
    }
  }
  return iVar1;
}



void fn_001069c8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00125198(param_1);
  if ((iVar1 == 0) || (iVar1 = fn_001147b8(), iVar1 != 0)) {
    return;
  }
  iVar1 = fn_0010b500();
  if (iVar1 < 0) {
    fn_00146594();
  }
  fn_00114690(0xf);
  fn_00114654(6);
  return;
}



void fn_00106914(void)

{
  undefined4 uVar1;
  
  fn_00106754();
  fn_001069b4();
  fn_001069a0();
  fn_00106938();
  uVar1 = fn_0011c088();
  fn_0010b25c(uVar1);
  return;
}



void fn_001069b4(void)

{
  DAT_0089a7a4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return;
}



void fn_001069a0(void)

{
  DAT_008ef538 = 0;
  DAT_008ef53c = 0;
  DAT_008ef544 = 0xffffffff;
  DAT_008ef540 = 0;
  DAT_008ef534 = 0;
  DAT_008ef530 = 0;
  fn_0013c500(&DAT_008ef53c);
  DAT_008ef534 = 0x14000000;
  DAT_008ef530 = 0x10000000;
  return;
}



void fn_00106938(void)

{
  int iVar1;
  uint uVar2;
  uint local_20 [3];
  int local_14;
  undefined1 auStack_10 [4];
  
  uVar2 = 0x10000000;
  do {
    uVar2 = uVar2 - 0x1000;
    iVar1 = fn_00108588(local_20,auStack_10,uVar2);
    if ((iVar1 < 0) || (local_14 == 0)) break;
    uVar2 = local_20[0];
  } while (0xe000000 < local_20[0]);
  if (uVar2 < 0xe000000) {
    uVar2 = 0xe000000;
  }
  uRam008ef550 = 0;
  uRam008ef554 = 0;
  uRam008ef55c = 0xffffffff;
  uRam008ef558 = 0;
  uRam008ef54c = 0;
  uRam008ef548 = 0;
  fn_0013c500(0x8ef554);
  uRam008ef54c = uVar2;
  uRam008ef548 = 0xe000000;
  return;
}



void fn_00106908(void)

{
  fn_0010b2a4(&DAT_008ebe60);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_001068d4(int param_1,int param_2)

{
  if (DAT_0089a79d == '\0') {
    DAT_0089a79d = 1;
    uRam008e36c8 = 0;
    uRam008e36cc = 0;
    uRam008e36d4 = 0xffffffff;
    uRam008e36d0 = 0;
    iRam008e36c4 = 0;
    _DAT_008e36c0 = 0;
    fn_0013c500(0x8e36cc);
    iRam008e36c4 = param_1 + param_2;
    _DAT_008e36c0 = param_1;
    return;
  }
  return;
}



int fn_001067f4(uint param_1)

{
  int iVar1;
  int local_18 [2];
  
  if ((param_1 & 0xfff) == 0) {
    if (param_1 <= DAT_008c0328) {
      iVar1 = fn_00108534(local_18,DAT_008c0324 + param_1,0,DAT_008c0328 - param_1,1,0);
      if (iVar1 < 0) {
        return iVar1;
      }
      if (param_1 == 0) {
        DAT_008c0324 = 0;
      }
      DAT_008c0328 = param_1;
      return iVar1;
    }
    if ((DAT_008c0328 == 0) || (((DAT_008c0328 | param_1) & 0xfffff) == 0)) {
      if (DAT_008c0328 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = DAT_008c0324 + DAT_008c0328;
      }
      iVar1 = fn_00108534(local_18,iVar1,0,param_1 - DAT_008c0328,0x10003,3);
      if (iVar1 < 0) {
        return iVar1;
      }
      if (DAT_008c0328 == 0) {
        DAT_008c0324 = local_18[0];
        DAT_008c0328 = param_1;
        return iVar1;
      }
      DAT_008c0328 = param_1;
      return iVar1;
    }
  }
  return -0x1f1fe40e;
}



undefined8 fn_001067a0(void)

{
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 1;
  fn_00108570(&local_10,0xffff8001);
  svc_0x3a();
  svc_0x23();
  return CONCAT44(local_10,local_18);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_00106790(void)

{
  return _DAT_1ff80040;
}



void fn_00106754(void)

{
  int iVar1;
  int local_10;
  
  if (DAT_008c0334 == 0) {
    local_10 = 0;
    iVar1 = fn_00108558(&local_10);
    if (-1 < iVar1) {
      DAT_008c0334 = local_10;
    }
  }
  return;
}



int fn_001066bc(uint param_1)

{
  int iVar1;
  undefined1 auStack_10 [4];
  
  if ((param_1 & 0xfff) == 0) {
    if (DAT_008c032c < param_1) {
      iVar1 = fn_00108534(auStack_10,DAT_008c032c + 0x8000000,0,param_1 - DAT_008c032c,3,3);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    else {
      iVar1 = fn_00108534(auStack_10,param_1 + 0x8000000,0,DAT_008c032c - param_1,1,0);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    DAT_008c032c = param_1;
  }
  else {
    iVar1 = -0x1f1fe40e;
  }
  return iVar1;
}



undefined4 fn_001066ac(void)

{
  return DAT_008c032c;
}


