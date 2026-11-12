#include "0013c03c_0013c674.h"

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


void fn_0013c674(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0014e3f4(param_1);
  fn_00170704();
  if (0 < DAT_008bfb50) {
    DAT_008bfb50 = DAT_008bfb50 + -1;
  }
  if ((DAT_008bfb50 == 0) && (DAT_008bfb48 != '\0')) {
    DAT_008bfb48 = '\0';
    if (DAT_008bfb54 != 0) {
      svc_0x23();
      if (DAT_008bfb54 < 0) {
        fn_00146594();
      }
      DAT_008bfb54 = 0;
    }
  }
  fn_001707b4(uVar1);
  return;
}



undefined4 fn_0013c598(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_0014e3f4();
  fn_00170704();
  if (DAT_008bfb50 == 0) {
    iVar2 = fn_0013db70();
    if (iVar2 < 0) {
      fn_00146594();
    }
    if (DAT_008bfb54 == 0) {
      uVar3 = fn_002febd8((char *)&DAT_0087114a);
      iVar2 = fn_0014fe94(&DAT_008bfb54,(char *)&DAT_0087114a,uVar3,0);
      if (iVar2 < 0) {
        iVar2 = -0x26defc05;
      }
    }
    else {
      iVar2 = -0x275efc07;
    }
    if (iVar2 < 0) {
      if (iVar2 == -0x26defc05) {
        fn_001707b4(uVar1);
        return 0xd92103fb;
      }
    }
    else {
      DAT_008bfb48 = 1;
    }
  }
  DAT_008bfb50 = DAT_008bfb50 + 1;
  fn_001707b4(uVar1);
  return 0;
}



undefined4 fn_0013c568(int *param_1)

{
  bool bVar1;
  
  do {
    if (*param_1 != 1) {
      ClearExclusiveLocal();
      return 0;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = -1;
  return 1;
}



void fn_0013c51c(int *param_1)

{
  bool bVar1;
  
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = -*param_1;
  fn_00147e54(DAT_008c0334,param_1,0,0xffffffff,0,0);
  return;
}



void fn_0013c500(int param_1)

{
  fn_00123678();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void fn_0013c4e0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  fn_00123678();
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



int * fn_0013c428(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  if (*param_1 != 1) {
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) {
      do {
        piVar3 = (int *)*param_1;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = -1;
    }
    return piVar3;
  }
  piVar3 = param_1 + 1;
  fn_0014ddec();
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = -2;
  do {
    iVar4 = *piVar3;
    iVar2 = -iVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2;
  if (iVar4 != -1 && 0 < iVar2) {
    piVar3 = (int *)fn_00147e54(DAT_008c0334,piVar3,0,1,0,0,unaff_r4,in_lr);
  }
  return piVar3;
}



undefined4 fn_0013c3d8(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*param_1 != 1) {
    do {
      iVar2 = *param_1;
      if (iVar2 != 0) {
        ClearExclusiveLocal();
        goto LAB_0013c410;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = -1;
LAB_0013c410:
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 1;
}



int fn_0013c170(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 local_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined *local_30;
  undefined1 *local_2c;
  undefined4 local_28 [2];
  
  iVar3 = fn_0014dc74();
  if (-1 < iVar3) {
    local_40 = (uint)(byte)DAT_008eeffc;
    local_44 = 0x100;
    iVar3 = fn_0017c1a4(DAT_008c0794,0x1000,2000,0x500,0x200);
    uVar2 = local_44;
    if (-1 < iVar3) {
      puVar5 = &DAT_008525e0;
      local_44 = (local_44 & ~((unsigned int)0xff << 24)) | (((unsigned int)(SUB41(uVar2,3)) & 0xff) << 24);
      local_44 = (local_44 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(DAT_008eefec,CONCAT11(DAT_008eefed,1))) & 0xffffff);
      fn_00301a9c(&DAT_008c078e,&local_44,3);
      iVar3 = fn_0017c428();
      uVar2 = DAT_008ef410;
      if (-1 < iVar3) {
        do {
          bVar1 = (bool)hasExclusiveAccess(0x8ef400);
        } while (!bVar1);
        DAT_008ef400 = 0xffffffff;
        DAT_008ef404 = 0xffffffff;
        do {
          bVar1 = (bool)hasExclusiveAccess(0x8ef408);
        } while (!bVar1);
        DAT_008ef408 = 0xffffffff;
        DAT_008ef40c = 0xffffffff;
        do {
          bVar1 = (bool)hasExclusiveAccess(0x8ef410);
        } while (!bVar1);
        DAT_008ef410 = 0xffffffff;
        DAT_008ef4f0 = 0;
        DAT_008ef4f2 = 0;
        DAT_008ef504 = 1;
        DAT_008ef4f8 = 0;
        DAT_008ef500 = 0;
        DAT_008ef4fc = 0;
        DAT_008ef505 = 0;
        DAT_008c078d = 0;
        DAT_008c078b = 0;
        fn_0014ddb8(&DAT_008c07b4,1,uVar2,&DAT_008ef408,puVar5);
        local_38 = 4;
        local_28[0] = 0;
        local_34 = &LAB_00147060;
        local_30 = &DAT_0014707c;
        local_2c = &LAB_00147070;
        local_40 = 0xfffffffe;
        uStack_3c = 0;
        local_44 = param_1;
        uVar4 = fn_0014e2f4(&DAT_008c07ac,&local_38,fn_0014dc30,local_28,&DAT_008ef400);
        if (((uVar4 & 0x7e00000) != 0x600000) && ((int)uVar4 < 0)) {
          fn_0015e294(uVar4);
        }
        if ((int)uVar4 < 0) {
          fn_00146594();
        }
        fn_0015def0(&DAT_008c07b4);
        DAT_008c0788 = 1;
        return 0;
      }
      DAT_008c07e8 = 0;
      fn_00170688();
    }
  }
  return iVar3;
}



undefined4 fn_0013c07c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_008c0788 == '\0') {
    uVar1 = 0xd8210ff8;
  }
  else {
    fn_0017c164(DAT_008c0788);
    DAT_008c078d = 1;
    svc_0x24();
    if (DAT_008c07ac < 0) {
      fn_0015e294();
    }
    DAT_008c07b0 = 1;
    fn_0015e304(&DAT_008c07ac);
    if (DAT_008c07ac != 0) {
      svc_0x23();
      DAT_008c07ac = 0;
    }
    fn_0013c370();
    fn_0013c03c();
    fn_0017c164();
    fn_00170688();
    DAT_008c07e8 = 0;
    if ((0 < DAT_008c07a4) && (iVar2 = fn_0015f738(0x215,0), iVar2 == -0x279f9bf8)) {
      fn_00123b08(0xd8606408,0x13c148);
    }
    uVar1 = 0;
    DAT_008c0788 = '\0';
  }
  return uVar1;
}



uint fn_0013c370(void)

{
  uint uVar1;
  
  uVar1 = fn_0014dd88();
  if ((int)uVar1 < 0) {
    if ((((int)uVar1 < 0) && (uVar1 >> 0x1b != 0x19)) && (uVar1 != 0xf9610c02)) {
      fn_0015e590(uVar1,0x13c3b4);
    }
  }
  else {
    DAT_008c3c3c = 0;
    DAT_008c3c40 = 0;
  }
  return uVar1;
}



uint fn_0013c03c(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = fn_0014dd58();
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 >> 0x1b;
    if ((uVar1 & 0x80000000) != 0) {
      uVar2 = uVar2 - 0x20;
    }
    bVar3 = uVar2 != 0xfffffff9;
    if (bVar3) {
      uVar2 = 0xf9610c02;
    }
    if (bVar3 && uVar1 != uVar2) {
      fn_0015e590(uVar1,0x13c070);
    }
  }
  return uVar1;
}


