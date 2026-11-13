#include "00231300_0024a548a.h"



void fn_00239824(int param_1,uint param_2,uint param_3,code *param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *local_28;
  
  *(int *)(param_1 + 0x24) = param_7;
  *(int *)(param_1 + 0x20) = param_8;
  *(uint *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 8) = param_3;
  *(code **)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  for (; (-param_2 & param_2) != param_2; param_2 = param_2 + (-param_2 & param_2)) {
  }
  *(uint *)(param_1 + 0xc) = param_2;
  for (; (-param_3 & param_3) != param_3; param_3 = param_3 + (-param_3 & param_3)) {
  }
  *(uint *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x2c) = param_9;
  if (((param_8 == 0) || (param_9 != 0x10000)) || (param_10 == 0)) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  *(int *)(param_1 + 0x30) = iVar9;
  *(int *)param_1 = param_1;
  iVar2 = *(int *)(&DAT_007e0ea4 + param_7 * 4);
  iVar5 = 0;
  if (0 < (int)param_4) {
    if (((uint)param_4 & 1) != 0) {
      iVar5 = param_2 * param_3;
      param_2 = (int)param_2 >> 1;
      param_3 = (int)param_3 >> 1;
      iVar5 = iVar5 * iVar2;
      iVar5 = (int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1d)) >> 3;
    }
    iVar6 = 0;
    for (iVar4 = (int)param_4 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      iVar8 = (int)param_2 >> 1;
      iVar1 = (int)param_3 >> 1;
      iVar7 = param_2 * param_3 * iVar2;
      iVar5 = iVar5 + ((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1d)) >> 3);
      param_2 = (int)param_2 >> 2;
      param_3 = (int)param_3 >> 2;
      iVar8 = iVar8 * iVar1 * iVar2;
      iVar6 = iVar6 + ((int)(iVar8 + ((uint)(iVar8 >> 0x1f) >> 0x1d)) >> 3);
    }
    iVar5 = iVar5 + iVar6;
  }
  local_28 = param_4;
  if (iVar9 == 0) {
    *(int *)(param_1 + 0x28) = param_8;
  }
  else {
    fn_00191540(&local_28,0);
    uVar3 = (*local_28)(param_9,0x101,param_1,iVar5);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    if (param_8 != 0) {
      if (param_9 != 0x10000) {
        fn_0015fa54(param_8,iVar5);
        fn_00734d18(param_8,*(undefined4 *)(param_1 + 0x28),iVar5,local_28);
        return;
      }
      fn_00301a9c(uVar3,param_8,iVar5);
      goto LAB_002399d0;
    }
  }
  if (param_9 != 0x10000) {
    return;
  }
LAB_002399d0:
  fn_0015fa54(*(undefined4 *)(param_1 + 0x28),iVar5);
  return;
}



void fn_00239494(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_0081d134;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



void fn_00231300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  uVar1 = fn_00661094(param_2);
  uVar1 = fn_00230e40(uVar1,param_4);
  fn_0018a618(&local_40,0x11,0x10,L"%ls%ls",uVar1,param_3);
  fn_00168a24(param_1,&local_40,auStack_1c);
  return;
}


