#include "0067beb0_0067ca30.h"

static void svc_0x19(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x19 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


undefined4 fn_0067ca30(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    fn_00673b84(param_1);
    (**(code **)(*param_1 + 0x30))(param_1,3);
  }
  return 1;
}



undefined4 fn_0067c87c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_20;
  
  uVar3 = 0;
  iVar1 = param_1[0x12];
  local_20 = param_4;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x1b) = 0;
    param_1[0x13] = param_1[0x13] | 6;
    (**(code **)(*param_1 + 0x34))(param_1,1);
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 0;
    }
    iVar1 = fn_00673be8(param_1);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,0);
      return 0;
    }
    return 0;
  }
  uVar2 = param_1[0x13];
  if ((uVar2 & 4) != 0) {
    return 0;
  }
  if (((uVar2 & 0x10) == 0) && ((uVar2 & 8) != 0)) {
    uVar2 = param_1[0x1d];
    svc_0x24();
    if ((int)uVar2 < 0) {
      fn_0015e294(uVar2,param_2,0,0);
    }
    if ((uVar2 & 0x3ff) == 0x3fe) goto LAB_0067c950;
  }
  uVar3 = 0xffffffff;
  local_20 = 0;
  fn_0044bd50(&local_20);
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = local_20;
  param_1[0x1f] = (uint)(local_20 != 0);
  *(undefined1 *)(param_1 + 0x20) = 1;
LAB_0067c950:
  (**(code **)(*param_1 + 0x34))(param_1,2);
  return uVar3;
}



void fn_0067c840(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 1;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



undefined4 fn_0067c654(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_220 [128];
  int local_20 [2];
  
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x4c) & 2) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x44) == 2) {
    if (*(char *)(param_1 + 0x6c) == '\0') {
      fn_0044bd68(local_220);
      svc_0x19();
      if (*(int *)(param_1 + 0x70) < 0) {
        fn_0015e294();
      }
      uVar1 = fn_0044bc9c(local_220,param_1 + 0x70);
      if ((uVar1 & 0x80000000) == 0) {
        svc_0x19();
        if (*(int *)(param_1 + 0x74) < 0) {
          fn_0015e294();
        }
        fn_0044beb4(param_1 + 0x74);
        *(undefined1 *)(param_1 + 0x6c) = 1;
        return 1;
      }
      local_20[0] = 0;
      fn_0044bd50(local_20);
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined1 *)(param_1 + 0x80) = 0;
      *(int *)(param_1 + 0x78) = local_20[0];
      *(uint *)(param_1 + 0x7c) = (uint)(local_20[0] != 0);
      *(undefined1 *)(param_1 + 0x80) = 1;
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffb | 0x10;
      goto LAB_0067c698;
    }
    if ((*(uint *)(param_1 + 0x4c) & 4) == 0) {
      return 1;
    }
    uVar1 = *(uint *)(param_1 + 0x70);
    svc_0x24();
    if ((int)uVar1 < 0) {
      fn_0015e294(uVar1,*(char *)(param_1 + 0x6c),0,0);
    }
    if ((uVar1 & 0x3ff) == 0x3fe) {
      return 1;
    }
    uVar1 = fn_0044bd28();
    if ((uVar1 & 0x80000000) == 0) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 8;
      uVar1 = fn_0044bd80(local_220);
      if ((uVar1 & 0x80000000) == 0) {
        *(bool *)(DAT_00898840 + 0x4f) = local_220[0] == 0x10;
      }
    }
    else {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x10;
      local_220[0] = 0;
      fn_0044bd50(local_220);
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined1 *)(param_1 + 0x80) = 0;
      iVar2 = 1;
      *(int *)(param_1 + 0x78) = local_220[0];
      *(uint *)(param_1 + 0x7c) = (uint)(local_220[0] != 0);
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffb;
  }
  else {
    if (*(int *)(param_1 + 0x44) == 3) goto LAB_0067c698;
    iVar2 = fn_0067c99c(param_1);
  }
  if (iVar2 == 0) {
    return 1;
  }
LAB_0067c698:
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffd;
  return 1;
}



undefined4 fn_0067c99c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int local_20;
  
  if ((*(byte *)(param_1 + 0x4c) & 8) != 0) {
    uVar1 = *(uint *)(param_1 + 0x74);
    svc_0x24();
    if ((int)uVar1 < 0) {
      local_20 = param_4;
      fn_0015e294(uVar1,param_2,0,0);
    }
    if ((uVar1 & 0x3ff) == 0x3fe) {
      return 0;
    }
  }
  local_20 = 0;
  fn_0044bd50(&local_20);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(int *)(param_1 + 0x78) = local_20;
  *(uint *)(param_1 + 0x7c) = (uint)(local_20 != 0);
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x20;
  return 1;
}



void fn_0067c334(undefined4 *param_1)

{
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_0067c2ac(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  piVar1 = (int *)fn_0066eb80(DAT_00898840,5);
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    fn_0066d0d0(piVar1,*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  else if (iVar2 == 1) {
    iVar2 = (**(code **)(*piVar1 + 0x2c))();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x44) = 2;
    }
  }
  else {
    bVar3 = iVar2 != 2;
  }
  return bVar3;
}



void fn_0067bf4c(undefined4 *param_1)

{
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_0067bf24(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  piVar1[0x158] = *(int *)(param_1 + 100);
  fn_00124914(piVar1 + 0x159,param_1 + 0x68);
  piVar1[0x15d] = *(int *)(param_1 + 0x78);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    return 1;
  }
  fn_00673ce8(piVar1,0x1d);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar1,2);
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0;
    *(undefined1 *)(piVar1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x30))(piVar1,2);
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0067bef8(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 100) = *param_2;
  fn_00124914(param_1 + 0x68,param_2 + 1);
  *(undefined4 *)(param_1 + 0x78) = param_2[5];
  return;
}



void fn_0067beb0(int param_1)

{
  undefined *local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 100) = 0;
  local_1c = 0;
  local_14 = 0x14;
  local_20 = &DAT_00852a4c;
  local_18 = 0;
  fn_00124914(param_1 + 0x68,&local_20);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


