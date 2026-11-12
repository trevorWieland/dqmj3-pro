#include "001d5a74_001d6210b.h"



void fn_001d6210(int param_1,undefined4 param_2)

{
  undefined4 in_s0;
  
  fn_005df8f8();
  *(undefined4 *)(param_1 + 0xa0) = in_s0;
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  return;
}



void fn_001d6030(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined8 uStack_18;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\0') {
    local_1c = *(undefined4 *)(param_1 + 0x10);
    uStack_18 = *(undefined8 *)(param_1 + 0x14);
    fn_001d5a74(param_1,&local_1c,&local_28,&local_34,1);
    if (*(int *)(param_1 + 0x4c) == 0) {
      fn_001d6b60(param_1);
      return;
    }
    fn_001d926c(param_1,&local_28);
    *(undefined4 *)(param_1 + 0x28) = local_34;
    *(undefined4 *)(param_1 + 0x2c) = local_30;
    *(undefined4 *)(param_1 + 0x30) = uStack_2c;
    uVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
    fn_005456f4(uVar2,param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    return;
  }
  if (cVar1 == '\x01') {
    fn_001d6b60(param_1);
    return;
  }
  if (cVar1 == '\x02') {
    if (0 < *(int *)(param_1 + 0x8c)) {
      iVar3 = fn_00176d68(*(undefined4 *)(param_1 + 4));
      fVar5 = *(float *)(iVar3 + 0x58) + *(float *)(param_1 + 0x80);
      fVar6 = *(float *)(iVar3 + 0x68) + *(float *)(param_1 + 0x84);
      fVar7 = *(float *)(iVar3 + 0x78) + *(float *)(param_1 + 0x88);
      iVar3 = fn_00176d68(*(undefined4 *)(param_1 + 4));
      *(float *)(iVar3 + 0x58) = fVar5;
      *(float *)(iVar3 + 0x68) = fVar6;
      *(float *)(iVar3 + 0x78) = fVar7;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
    }
    if (0 < *(int *)(param_1 + 0x9c)) {
      fn_00176d68(*(undefined4 *)(param_1 + 4));
      pfVar4 = (float *)fn_006dcd40();
      local_28 = *pfVar4 + *(float *)(param_1 + 0x90);
      local_24 = pfVar4[1] + *(float *)(param_1 + 0x94);
      local_20 = pfVar4[2] + *(float *)(param_1 + 0x98);
      uVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
      fn_005456f4(uVar2,&local_28);
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
    }
    return;
  }
  if (cVar1 == '\x03') {
    local_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = *(undefined4 *)(param_1 + 0x14);
    local_28 = *(float *)(param_1 + 0x18);
    fn_001d5a74(param_1,&local_30,&local_3c,&local_24,1);
    uVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
    fn_005456f4(uVar2,&local_24);
    iVar3 = fn_00176d68(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(iVar3 + 0x58) = local_3c;
    *(undefined4 *)(iVar3 + 0x68) = uStack_38;
    *(undefined4 *)(iVar3 + 0x78) = local_34;
    *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
    for (; local_28 < 0.0; local_28 = local_28 + 6.2831855) {
    }
    for (; 0x40c90fda < (int)local_28; local_28 = local_28 - 6.2831855) {
    }
    if (*(int *)(param_1 + 0x150) == 0) {
      fn_00176d68(*(undefined4 *)(param_1 + 4));
      fn_00545c9c();
    }
  }
  return;
}



void fn_001d5fa4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_s0;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [12];
  
  uStack_28 = *(undefined4 *)(param_1 + 0x14);
  uStack_24 = *(undefined4 *)(param_1 + 0x18);
  local_2c = in_s0;
  fn_001d5a74(param_1,&local_2c,auStack_14,&local_20,0);
  *(undefined4 *)(param_1 + 0x10) = local_2c;
  *(undefined4 *)(param_1 + 0x14) = uStack_28;
  *(undefined4 *)(param_1 + 0x18) = uStack_24;
  fn_001d926c(param_1,auStack_14);
  *(undefined4 *)(param_1 + 0x28) = local_20;
  *(undefined4 *)(param_1 + 0x2c) = uStack_1c;
  *(undefined4 *)(param_1 + 0x30) = uStack_18;
  uVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  fn_005456f4(uVar1,param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xec) = 0;
  return;
}


