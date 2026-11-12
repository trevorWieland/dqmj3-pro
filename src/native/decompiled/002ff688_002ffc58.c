#include "002ff688_002ffc58.h"



void fn_002ffc58(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 in_lr;
  
  puVar5 = (uint *)(param_1 + 0x3c);
  iVar3 = (int)(*(int *)(param_1 + 0x40) - *puVar5) >> 2;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    piVar1 = *(int **)(*puVar5 + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xa4))();
      piVar6 = (int *)(*puVar5 + iVar3 * 4);
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *piVar6 = 0;
    }
  }
  uVar4 = *puVar5;
  uVar7 = *(uint *)(param_1 + 0x40);
  if (uVar4 != uVar7) {
    uVar2 = uVar4;
    if (uVar7 <= uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar7);
    }
    *(uint *)(param_1 + 0x40) = uVar7 - (uVar7 - uVar4 & 0xfffffffc);
  }
  uVar2 = *(uint *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar7 = *(uint *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar3 = *(int *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar4 = uVar2;
  if (uVar7 <= uVar2) {
    for (; uVar4 != uVar7; uVar4 = uVar4 + 4) {
    }
  }
  fn_002feef8(uVar2,(int)(iVar3 - uVar2) >> 2,0,uVar2,unaff_r4,in_lr);
  return;
}



void fn_002ffbd0(uint *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 3;
  uVar2 = *param_1 & 0x800;
  if (param_3 < 7) {
    if (uVar2 == 0) {
      puVar3 = &UNK_002ffc54;
    }
    else {
      puVar3 = &UNK_002ffc50;
    }
  }
  else if (uVar2 == 0) {
    puVar3 = &UNK_002ffc4c;
  }
  else {
    puVar3 = &DAT_002ffc48;
  }
  *param_1 = *param_1 & 0xffffffef;
  uVar2 = param_1[6];
  param_1[6] = uVar2 - 3;
  if (param_4 != 0) {
    param_1[6] = uVar2 - 4;
  }
  fn_002ff970(param_1);
  if (param_4 == 0) {
    uVar2 = param_1[8];
  }
  else {
    (*(code *)param_1[1])(param_4,param_1[2]);
    uVar2 = param_1[8] + 1;
    param_1[8] = uVar2;
  }
  param_1[8] = uVar2 + 3;
  while (bVar5 = iVar4 != 0, iVar4 = iVar4 + -1, bVar5) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    (*(code *)param_1[1])(uVar1,param_1[2]);
  }
  fn_002ff99c(param_1);
  return;
}



uint fn_002ffb90(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
    uVar1 = 4;
  }
  if ((param_2 & 0x7fffffff) >> 0x14 != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_2 & 0x7fffffff) >> 0x14 == 0x7ff) {
    uVar1 = uVar1 | 2;
  }
  if (uVar1 == 1) {
    uVar1 = 5;
  }
  return uVar1;
}



undefined8 fn_002ffaf8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 2 | param_2 << 0x1e;
  uVar1 = param_1 - uVar3;
  uVar2 = param_2 - ((param_2 >> 2) + (uint)(param_1 < uVar3));
  uVar4 = uVar1 >> 4 | uVar2 * 0x10000000;
  uVar3 = uVar1 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 4) + (uint)CARRY4(uVar1,uVar4);
  uVar4 = uVar3 >> 8 | uVar2 * 0x1000000;
  uVar1 = uVar3 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 8) + (uint)CARRY4(uVar3,uVar4);
  uVar4 = uVar1 >> 0x10 | uVar2 * 0x10000;
  uVar3 = uVar1 + uVar4;
  uVar1 = uVar2 + (uVar2 >> 0x10) + (uint)CARRY4(uVar1,uVar4);
  uVar2 = uVar1 + CARRY4(uVar3,uVar1);
  uVar3 = uVar3 + uVar1 >> 3 | uVar2 * 0x20000000;
  uVar1 = uVar2 >> 3;
  if ((int)((param_2 - (param_1 < 10)) -
           (((uVar1 << 2 | (uVar2 & 7) >> 1) + uVar1 + (uint)CARRY4(uVar3,uVar3 * 4)) * 2 +
            (uint)CARRY4(uVar3 * 5,uVar3 * 5) + (uint)(param_1 - 10 < uVar3 * 10))) < 0) {
    return CONCAT44(uVar1,uVar3);
  }
  return CONCAT44(uVar1 + (0xfffffffe < uVar3),uVar3 + 1);
}



void fn_002ff9c8(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  int iStack_40;
  undefined8 local_3c;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  undefined8 *local_20;
  int iStack_1c;
  int iStack_18;
  
  local_48 = (local_48 & ~((unsigned int)0xffffffff << 0)) | ((unsigned int)(0x3fff) & 0xffffffff);
  local_48 = (local_48 & ~((unsigned long long)0xffffffff << 32)) | (((unsigned long long)(0x80000000) & 0xffffffff) << 32);
  iStack_40 = 0;
  local_3c = (local_3c & ~((unsigned int)0xffffffff << 0)) | ((unsigned int)(0x3fff) & 0xffffffff);
  local_3c = (local_3c & ~((unsigned long long)0xffffffff << 32)) | (((unsigned long long)(0x80000000) & 0xffffffff) << 32);
  iStack_34 = 0;
  local_20 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  uVar6 = fn_00300f74(param_2 + 0x1b9b,0x37);
  uVar7 = CONCAT44(((unsigned long long)(local_48) >> 32) & 0xffffffff,(undefined4)local_48);
  uVar3 = (int)uVar6 - 0x80;
  uVar2 = (int)((ulonglong)uVar6 >> 0x20) - 0x1b;
  bVar5 = (int)uVar2 < 0;
  if (bVar5) {
    uVar2 = -uVar2;
  }
  local_24 = (uint)bVar5;
  iVar4 = 0;
  for (; uVar6 = CONCAT44(((unsigned long long)(local_3c) >> 32) & 0xffffffff,(undefined4)local_3c), uVar2 != 0; uVar2 = (int)uVar2 >> 1)
  {
    if ((uVar2 & 1) != 0) {
      iVar1 = param_3;
      local_48 = uVar7;
      uVar7 = fn_002ffac8(&local_48,&DAT_0081b728 + iVar4 * 0xc);
      iStack_40 = iVar1;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = 0;
  for (; local_48 = uVar7, local_3c = uVar6, uVar3 != 0; uVar3 = (int)uVar3 >> 1) {
    if ((uVar3 & 1) != 0) {
      iVar1 = iVar4 * 0x10;
      local_30 = *(undefined4 *)(&DAT_0081b764 + iVar1);
      local_2c = *(undefined4 *)(&DAT_0081b768 + iVar1);
      local_28 = *(int *)(&DAT_0081b76c + iVar1);
      if (*(int *)(&DAT_0081b770 + iVar1) + param_3 == 0) {
        local_28 = local_28 + param_3;
      }
      iVar1 = param_3;
      uVar6 = fn_002ffac8(&local_3c,&local_30);
      iStack_34 = iVar1;
      uVar7 = local_48;
    }
    iVar4 = iVar4 + 1;
  }
  if (local_24 == 0) {
    uVar7 = fn_002ffac8(&local_3c,&local_48);
  }
  else {
    uVar7 = fn_002ffa98(&local_3c,&local_48);
  }
  *local_20 = uVar7;
  *(int *)(local_20 + 1) = param_3;
  return;
}



void fn_002ff99c(byte *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*param_1 & 1) == 0) {
    return;
  }
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(param_1 + 4))(0x20,*(undefined4 *)(param_1 + 8));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return;
}



void fn_002ff970(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[6];
  if ((int)(*param_1 << 0x1b) < 0) {
    uVar2 = 0x30;
  }
  else {
    uVar2 = 0x20;
  }
  if ((*param_1 & 1) != 0) {
    return;
  }
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (*(code *)param_1[1])(uVar2,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  return;
}



uint * fn_002ff78a(uint *param_1,uint *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}



void fn_002ff770(int param_1)

{
  int iVar1;
  
  fn_002feca8(*(undefined4 *)(param_1 + 0x18));
  iVar1 = fn_0010216e(param_1 + 8);
  fn_002feed4(iVar1 + -8);
  return;
}



int * fn_002ff688(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint local_40;
  int local_3c;
  undefined1 auStack_38 [4];
  int local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  int *piStack_24;
  int local_20;
  int iStack_1c;
  int local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  piStack_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_002fec38(param_3 << 2);
  }
  param_1[2] = iVar1;
  param_1[3] = param_3;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)(param_1[2] + param_3 * 4 + -4) = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = local_18;
  if (local_20 != 0) {
    iVar1 = fn_002febd8();
    uVar2 = fn_002fec38(iVar1 + 1);
    iVar1 = fn_003007a0(uVar2,local_20,iVar1 + 1);
    param_1[6] = iVar1;
  }
  local_40 = 6;
  local_30 = fn_003007ac(auStack_38,auStack_2c);
  iVar1 = fn_003007bc(4,6,&LAB_0010215a_1,0x2fedf5);
  uVar3 = param_1[1];
  if (5 < (uint)param_1[1]) {
    uVar3 = local_40;
  }
  local_34 = uVar3 << 2;
  local_3c = iVar1;
  for (iVar4 = *param_1; *param_1 + local_34 != iVar4; iVar4 = iVar4 + 4) {
    fn_003007d0(local_3c,iVar4);
    local_3c = local_3c + 4;
  }
  for (; uVar3 < 6; uVar3 = uVar3 + 1) {
    fn_003007d0(uVar3 * 4 + iVar1,local_30);
  }
  fn_00300904(*param_1,0x2fedf5);
  *param_1 = iVar1;
  param_1[1] = 6;
  fn_002fedf4(auStack_38);
  return param_1;
}


