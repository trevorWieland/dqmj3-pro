#include "0015def0_0015e5c0.h"

static void svc_0x20(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x20 }
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

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_0015e5c0(int param_1)

{
  fn_0013c920(param_1 + 0x18);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  return;
}



int fn_0015e510(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x150082;
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0015e494(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xd0082;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(uint *)(iVar2 + 0x8c) = param_4 << 0xe | 0x402;
  *(undefined4 *)(iVar2 + 0x90) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0015e45c(int *param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 **)(iVar2 + 0x80) = &DAT_00170040;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined4 fn_0015e3d8(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0xffffffff;
  if (DAT_008bfbb4 != 0) {
    fn_0017099c(DAT_008bfbb4,param_1,param_2);
  }
  return 0xc8a0a7f8;
}



undefined4
fn_0015e384(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0xc8a0a7f8;
  if (DAT_008bfbb4 == 0) {
    *param_4 = 0;
  }
  else {
    uVar1 = fn_00170934(DAT_008bfbb4,param_1,0,param_2,param_3,param_4);
  }
  return uVar1;
}



undefined4 fn_0015e358(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_008bfbb4 == 0) {
    return 0xc8a0a7f8;
  }
  uVar1 = fn_001708fc(DAT_008bfbb4,param_1);
  return uVar1;
}



void fn_0015e304(int *param_1)

{
  if ((char)param_1[1] == '\0') {
    svc_0x24();
    if (*param_1 < 0) {
      fn_0015e294();
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



void fn_0015e228(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      else {
        svc_0x20();
        fn_0014e3e4(param_1);
      }
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      svc_0x23();
      *(int *)(param_1 + 0x14) = 0;
    }
  }
  return;
}



undefined4 fn_0015e218(void)

{
  return DAT_008c0328;
}



void fn_0015e144(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      else {
        svc_0x20();
        if (*(int *)(param_1 + 0x14) < 0) {
          fn_0015e294();
        }
        fn_0015e1b0(&DAT_008ef530,param_1);
      }
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      svc_0x23();
      *(int *)(param_1 + 0x14) = 0;
    }
  }
  return;
}



void fn_0015e294(uint param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = param_1 >> 0x1b;
  if ((param_1 & 0x80000000) != 0) {
    uVar1 = uVar1 - 0x20;
  }
  if ((DAT_1ff80014 & 1) != 0 || DAT_0089a79c != '\0') {
    if (uVar1 == 0xfffffff9 || uVar1 == 1) {
      return;
    }
    fn_00123ad0(param_1,0,in_lr);
    return;
  }
  if (uVar1 == 0xffffffff) {
    fn_00123ad0(param_1,0,in_lr);
  }
  fn_00146594();
  return;
}



void fn_0015dfc0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  int *piVar4;
  undefined4 in_lr;
  
  if (*param_1 == -1) {
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = 0;
    fn_00147e54(DAT_008c0334,param_1,0,1,0,0);
  }
  else if (*param_1 == -2) {
    piVar4 = param_1 + 1;
    fn_0014ddec(piVar4);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = 1;
    fn_00147e54(DAT_008c0334,param_1,0,0xffffffff,0,0);
    do {
      iVar3 = *piVar4;
      iVar2 = -iVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2;
    if (iVar3 != -1 && 0 < iVar2) {
      fn_00147e54(DAT_008c0334,piVar4,0,1,0,0,unaff_r4,in_lr);
    }
    return;
  }
  return;
}



void fn_0015dfb8(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_r4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar3 = (int *)(param_1 + 4);
  if (*piVar3 == -1) {
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
    fn_00147e54(DAT_008c0334,piVar3,0,1,0,0);
  }
  else if (*piVar3 == -2) {
    piVar5 = (int *)(param_1 + 8);
    fn_0014ddec(piVar5);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 1;
    fn_00147e54(DAT_008c0334,piVar3,0,0xffffffff,0,0);
    do {
      iVar4 = *piVar5;
      iVar2 = -iVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2;
    if (iVar4 != -1 && 0 < iVar2) {
      fn_00147e54(DAT_008c0334,piVar5,0,1,0,0,unaff_r4,in_lr);
    }
    return;
  }
  return;
}



void fn_0015def0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    if (iVar2 == -2) {
      fn_00147e54(DAT_008c0334,param_1,1,0,0,0);
      return;
    }
    if (iVar2 != -1) {
      if (iVar2 == 0) {
        do {
          iVar2 = *param_1;
          if (iVar2 != 0) {
            ClearExclusiveLocal();
            goto LAB_0015df80;
          }
          bVar1 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar1);
        *param_1 = -1;
LAB_0015df80:
        if (iVar2 == 0) {
          return;
        }
      }
      else if (iVar2 == 1) {
        return;
      }
    }
    fn_00147e54(DAT_008c0334,param_1,1,0,0,0);
  } while( true );
}


