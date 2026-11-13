#include "00149ab4_0014a258.h"



undefined4 fn_0014a258(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_28 = 0;
  fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4),
               param_2,&local_30);
  iVar1 = local_2c - (int)local_30 >> 0x1f;
  if ((local_2c - (int)local_30) / 0xc + iVar1 != iVar1) {
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
    if ((iVar1 != 0) && (iVar1 = fn_0016278c(iVar1,&local_30,&local_24), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0xa0);
      uVar2 = local_30[1];
      uVar3 = local_30[2];
      *(undefined4 *)(iVar1 + 0xc) = *local_30;
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
      *(undefined4 *)(iVar1 + 0x14) = uVar3;
      uVar2 = fn_0015a130(param_1);
      fn_00168b28(&local_30);
      return uVar2;
    }
  }
  fn_00168b28(&local_30);
  return 0xffffffff;
}



void fn_0014a1bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_00164a34();
  if ((iVar1 != 0) && (pfVar2 = (float *)fn_00164a68(param_1,param_3), pfVar2 != (float *)0x0)) {
    local_18 = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if ((iVar1 == 0) || (iVar1 = fn_0017484c(DAT_008977e4), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_00165bb4(iVar1,&local_18);
    }
    fVar5 = pfVar2[1];
    fVar6 = pfVar2[2];
    fVar3 = *(float *)(iVar1 + 0x10);
    fVar4 = *(float *)(iVar1 + 0x14);
    *(float *)(param_1 + 0xc4) = *(float *)(iVar1 + 0xc) - *pfVar2;
    *(float *)(param_1 + 200) = fVar3 - fVar5;
    *(float *)(param_1 + 0xcc) = fVar4 - fVar6;
  }
  return;
}



undefined4
fn_0014a110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20 [4];
  
  iVar1 = fn_00164a34(param_1,param_3);
  if (iVar1 != 0) {
    local_20[0] = param_3;
    iVar1 = fn_00164a34(param_1,param_3);
    if ((((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
        (iVar1 = fn_00165bb4(iVar1,local_20), iVar1 != 0)) &&
       (iVar1 = fn_0017fde4(*(undefined4 *)(iVar1 + 4)), iVar1 != 0)) {
      local_20[0] = param_5;
      uVar2 = fn_0015a044(param_1,param_2,iVar1,param_4);
      return uVar2;
    }
  }
  return 0xffffffff;
}



undefined4 fn_00149f38(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4),
               param_2,&local_30);
  fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4),
               param_3,&local_24);
  iVar2 = local_2c - local_30 >> 0x1f;
  if (((((local_2c - local_30) / 0xc + iVar2 == iVar2) ||
       (iVar2 = local_20 - local_24 >> 0x1f, (local_20 - local_24) / 0xc + iVar2 == iVar2)) ||
      (iVar2 = fn_00145b00(0x38,&DAT_00812c8c), iVar2 == 0)) ||
     (iVar2 = fn_0015cc44(iVar2,&local_30,&local_24,param_4), iVar2 == 0)) {
    fn_00168b28(&local_24);
    fn_00168b28(&local_30);
    return 0xffffffff;
  }
  uVar1 = (local_2c - local_30) / 0xc;
  if (param_4 < uVar1) {
    puVar3 = (undefined4 *)(local_30 + param_4 * 0xc);
    uVar4 = puVar3[1];
    uVar6 = puVar3[2];
    puVar5 = *(undefined4 **)(param_1 + 0xa0);
    *puVar5 = *puVar3;
    puVar5[1] = uVar4;
    puVar5[2] = uVar6;
  }
  else {
    puVar5 = *(undefined4 **)(param_1 + 0xa0);
    puVar3 = (undefined4 *)(local_30 + (uVar1 - 1) * 0xc);
    uVar4 = puVar3[1];
    uVar6 = puVar3[2];
    *puVar5 = *puVar3;
    puVar5[1] = uVar4;
    puVar5[2] = uVar6;
  }
  uVar1 = (local_20 - local_24) / 0xc;
  if (param_4 < uVar1) {
    iVar2 = *(int *)(param_1 + 0xa0);
    puVar3 = (undefined4 *)(local_24 + param_4 * 0xc);
    uVar4 = puVar3[1];
    uVar6 = puVar3[2];
    *(undefined4 *)(iVar2 + 0xc) = *puVar3;
    *(undefined4 *)(iVar2 + 0x10) = uVar4;
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xa0);
    puVar3 = (undefined4 *)(local_24 + (uVar1 - 1) * 0xc);
    uVar4 = puVar3[1];
    uVar6 = puVar3[2];
    *(undefined4 *)(iVar2 + 0xc) = *puVar3;
    *(undefined4 *)(iVar2 + 0x10) = uVar4;
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
  }
  uVar4 = fn_0015a130(param_1);
  fn_00168b28(&local_24);
  fn_00168b28(&local_30);
  return uVar4;
}



void fn_00149e50(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_20;
  float *local_1c;
  int local_18;
  undefined4 local_14;
  
  iVar1 = fn_00164a34();
  if (iVar1 != 0) {
    local_1c = (float *)0x0;
    local_18 = 0;
    local_14 = 0;
    fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4));
    iVar1 = local_18 - (int)local_1c >> 0x1f;
    if ((local_18 - (int)local_1c) / 0xc + iVar1 == iVar1) {
      fn_00168b28(&local_1c);
      return;
    }
    local_20 = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if ((iVar1 == 0) || (iVar1 = fn_0017484c(DAT_008977e4), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_00165bb4(iVar1,&local_20);
    }
    fVar2 = *(float *)(iVar1 + 0x10);
    fVar3 = *(float *)(iVar1 + 0x14);
    fVar4 = local_1c[1];
    fVar5 = local_1c[2];
    *(float *)(param_1 + 0xc4) = *(float *)(iVar1 + 0xc) - *local_1c;
    *(float *)(param_1 + 200) = fVar2 - fVar4;
    *(float *)(param_1 + 0xcc) = fVar3 - fVar5;
    fn_00168b28(&local_1c);
  }
  return;
}



undefined4 fn_00149d68(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_20;
  int local_1c;
  undefined4 local_18;
  
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4),
               param_2,&local_20);
  iVar1 = local_1c - (int)local_20 >> 0x1f;
  if ((((local_1c - (int)local_20) / 0xc + iVar1 == iVar1) ||
      (iVar1 = fn_00145b00(0x40,&DAT_00812c8c), iVar1 == 0)) ||
     (iVar1 = fn_0015cea4(iVar1,&local_20,param_3), iVar1 == 0)) {
    fn_00168b28(&local_20);
    return 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  uVar2 = local_20[1];
  uVar3 = local_20[2];
  *(undefined4 *)(iVar1 + 0xc) = *local_20;
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = uVar3;
  uVar2 = fn_0015a130(param_1);
  fn_00168b28(&local_20);
  return uVar2;
}



undefined4 fn_00149c84(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_20;
  int local_1c;
  undefined4 local_18;
  
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4),
               param_2,&local_20);
  iVar1 = local_1c - (int)local_20 >> 0x1f;
  if ((((local_1c - (int)local_20) / 0xc + iVar1 == iVar1) ||
      (iVar1 = fn_00145b00(0x40,&DAT_00812c8c), iVar1 == 0)) ||
     (iVar1 = fn_0015cea4(iVar1,&local_20,param_3), iVar1 == 0)) {
    fn_00168b28(&local_20);
    return 0xffffffff;
  }
  uVar3 = local_20[1];
  uVar4 = local_20[2];
  puVar2 = *(undefined4 **)(param_1 + 0xa0);
  *puVar2 = *local_20;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  uVar3 = fn_0015a130(param_1);
  fn_00168b28(&local_20);
  return uVar3;
}



undefined4 fn_00149ba0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = fn_00164a34();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4));
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    iVar1 = fn_00145b00(0x44,&DAT_00812c8c);
    if ((iVar1 == 0) || (iVar1 = fn_0015ce70(iVar1,param_2,&local_30,&local_24), iVar1 == 0)) {
      fn_00168b28(&local_30);
      return 0xffffffff;
    }
    fn_0015aabc(param_1,param_2);
    uVar2 = fn_0015a130(param_1,iVar1);
    fn_00168b28(&local_30);
  }
  return uVar2;
}



undefined4 fn_00149ab4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_28 = 0;
  fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4),
               param_2,&local_30);
  iVar1 = local_2c - (int)local_30 >> 0x1f;
  if ((local_2c - (int)local_30) / 0xc + iVar1 != iVar1) {
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
    if ((iVar1 != 0) && (iVar1 = fn_0015ce4c(iVar1,&local_30,&local_24), iVar1 != 0)) {
      puVar4 = *(undefined4 **)(param_1 + 0xa0);
      uVar2 = local_30[1];
      uVar3 = local_30[2];
      *puVar4 = *local_30;
      puVar4[1] = uVar2;
      puVar4[2] = uVar3;
      uVar2 = fn_0015a130(param_1);
      fn_00168b28(&local_30);
      return uVar2;
    }
  }
  fn_00168b28(&local_30);
  return 0xffffffff;
}


