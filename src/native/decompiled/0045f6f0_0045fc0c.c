#include "0045f6f0_0045fc0c.h"



undefined4 fn_0045fc0c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  pcVar5 = *(code **)(param_1 + 500);
  if (pcVar5 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x1f0);
    uVar1 = *param_2;
    uVar7 = param_2[1];
    uVar8 = param_2[2];
    if (piVar2 != (int *)0x0) {
      puVar4 = (uint *)(piVar2 + 1);
      do {
        uVar3 = *puVar4 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar6);
      *puVar4 = uVar3;
      bVar6 = uVar3 == 0;
      if (bVar6) {
        uVar3 = (uint)*(byte *)(piVar2 + 2);
      }
      if (bVar6 && uVar3 == 0) {
        *(undefined1 *)(piVar2 + 2) = 1;
        (**(code **)(*piVar2 + 4))();
      }
    }
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    *(undefined4 *)(param_1 + 500) = 0;
    local_38 = uVar1;
    uStack_34 = uVar7;
    uStack_30 = uVar8;
    (*pcVar5)(param_1,&local_38);
    piVar2 = *(int **)(param_1 + 0x1f0);
    if (piVar2 != (int *)0x0) {
      puVar4 = (uint *)(piVar2 + 1);
      do {
        uVar3 = *puVar4 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar6);
      *puVar4 = uVar3;
      bVar6 = uVar3 == 0;
      if (bVar6) {
        uVar3 = (uint)*(byte *)(piVar2 + 2);
      }
      if (bVar6 && uVar3 == 0) {
        *(undefined1 *)(piVar2 + 2) = 1;
        (**(code **)(*piVar2 + 4))();
      }
    }
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    uVar1 = 1;
    *(undefined4 *)(param_1 + 500) = 0;
  }
  return uVar1;
}



int fn_0045fbe8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00852db4;
  iVar1 = fn_00170f54(param_1 + 4);
  iVar1 = fn_00170f54(iVar1 + -0xc);
  return iVar1 + -4;
}



undefined4 * fn_0045fb88(undefined4 *param_1)

{
  *param_1 = &DAT_00852db4;
  param_1[1] = &DAT_00855a94;
  fn_0015e6f0(param_1 + 2,&DAT_007db524);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = &DAT_00855a94;
  fn_0015e6f0(param_1 + 5,&DAT_007db524);
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



void fn_0045fb80(int param_1)

{
  fn_00170fa4(param_1 + 4);
  return;
}



void fn_0045f9e4(undefined4 *param_1)

{
  undefined1 auStack_518 [254];
  undefined2 local_41a;
  undefined1 auStack_418 [20];
  undefined4 local_404 [252];
  
  if (param_1[5] != 0) {
    fn_00101144(auStack_518,param_1[5],0x80);
    local_41a = 0;
  }
  local_404[0] = *param_1;
  fn_0017d82c(2,local_404,auStack_418,0x14);
  fn_0017fe44(auStack_418,auStack_518,0x80);
  local_404[0] = param_1[1];
  fn_0017d82c(2,local_404,auStack_418,0x14);
  fn_0017fe44(auStack_418,auStack_518,0x80);
  local_404[0] = param_1[2];
  fn_0017d82c(2,local_404,auStack_418,0x14);
  fn_0017fe44(auStack_418,auStack_518,0x80);
  fn_00301f50(auStack_418,0x400);
  if ((param_1[3] & 1) != 0) {
    fn_0010313a(auStack_418,L"POINT2POINT");
  }
  if ((param_1[3] & 4) != 0) {
    fn_0010313a(auStack_418,L"LOOPBACK ");
  }
  if ((param_1[3] & 2) != 0) {
    fn_0010313a(auStack_418,L"BROADCAST ");
  }
  fn_00101144(auStack_518,auStack_418,0x80);
  return;
}



undefined4 fn_0045f7f0(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_20 [3];
  
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  if ((uint)(*(int *)(iVar1 + 0x10) - iVar3) < 2) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    uVar4 = (uint)*(ushort *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18) + iVar3);
    *(int *)(param_1 + 0xc) = iVar3 + 2;
    if ((uint)(*(int *)(iVar1 + 0x10) - (iVar3 + 2)) < uVar4) {
      *(undefined1 *)(param_1 + 4) = 1;
      return 0;
    }
    if (uVar4 != 0) {
      fn_004b62bc(param_2,uVar4 + 1);
      if (DAT_008e7784 == 1) {
        fn_00479e68(local_20,uVar4 + 1);
        fn_00454b8c(param_1,local_20[0],uVar4);
        fn_00479d74(local_20,*(undefined4 *)(param_2 + 4),uVar4,0);
        fn_00479ea0(local_20);
      }
      else if ((DAT_008e7784 == 0) && (DAT_008b63bc == 1)) {
        fn_00479e68(local_20,0);
        puVar2 = (uint *)fn_0015ece0(uVar4 * 2 + 4);
        *puVar2 = uVar4;
        fn_00454b8c(param_1,puVar2 + 1,uVar4 << 1);
        fn_00479da4(local_20,puVar2 + 1,0);
        fn_004b63a4(param_2,local_20[0]);
        fn_0014f1bc(puVar2);
        fn_00479ea0(local_20);
      }
      else {
        fn_00454b8c(param_1,*(undefined4 *)(param_2 + 4),uVar4 << 1);
      }
    }
  }
  return 1;
}



void fn_0045f6f0(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint local_18;
  undefined4 local_14;
  undefined2 local_10 [2];
  
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 == 0) {
    local_18 = local_18 & 0xffff0000;
    fn_0015ef4c(param_1,&local_18,2);
    return;
  }
  if (DAT_008e7784 == 1) {
    fn_00479e68(&local_18,0);
    fn_00479da4(&local_18,iVar2,0);
    local_10[0] = (undefined2)local_14;
    fn_0015ef4c(param_1,local_10,2);
    fn_0015ef4c(param_1,local_18,local_14);
    fn_00479ea0(&local_18);
    return;
  }
  sVar1 = fn_00156284(param_2);
  local_18 = CONCAT22(((unsigned int)(local_18) >> 16) & 0xffff,sVar1 + 1);
  fn_0015ef4c(param_1,&local_18,2);
  fn_0015ef4c(param_1,iVar2,(local_18 & 0xffff) << 1);
  return;
}


