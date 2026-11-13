#include "001a94c8_001a9c1c.h"



void fn_001a9c1c(int param_1,int param_2)

{
  int *piVar1;
  
  fn_0017d90c(param_1 + 4,param_2 + 0x58);
  fn_0017d948(param_1 + 0x10,param_1 + 0x14,param_2 + 0x58);
  fn_001a8374(param_1,param_2);
  for (piVar1 = (int *)(param_2 + 0x58); (piVar1 != (int *)(param_1 + 8) && (1 < piVar1[-6]));
      piVar1 = (int *)*piVar1) {
    if (piVar1[-6] != 0x7fff) {
      fn_001acefc(piVar1 + -0x16);
    }
  }
  return;
}



uint fn_001a9bd8(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 - (param_1 >> 1 & 0x55555555);
  uVar1 = (param_1 >> 2 & 0x33333333) + (param_1 & 0x33333333);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  return uVar1 + (uVar1 >> 0x10) & 0x3f;
}



undefined4 fn_001a9968(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  *(undefined2 *)((int)puVar2 + 0xa2) = param_3;
  *puVar2 = *puVar2 | 0x10000000;
  fn_00193380();
  return 1;
}



undefined4 fn_001a98f8(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  *(undefined1 *)(puVar2 + 0x28) = 1;
  *puVar2 = *puVar2 | 0x10000;
  fn_00193380();
  return 1;
}



void fn_001a981c(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 4) = 2;
  uVar1 = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x7fd8;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  fn_001ad020(param_1 + 0xc);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  fn_001acd50(*(undefined4 *)(param_1 + 0x68));
  return;
}



undefined4 fn_001a9808(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4 + -4);
}



int fn_001a9704(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4 + -4);
  local_28 = 0x1000001;
  iVar2 = *(int *)(param_1 + 4) + iVar3 * 0x14;
  local_24 = (int *)0x0;
  fn_0019e864(&local_28,iVar2);
  local_20 = *(undefined4 *)(iVar2 + 8);
  local_1c = *(undefined4 *)(iVar2 + 0xc);
  local_18 = *(undefined4 *)(iVar2 + 0x10);
  if (local_28 == 0x1000001) {
    iVar2 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar2;
    puVar1 = (uint *)(*(int *)(param_1 + 4) + iVar2 * 0x14);
    if ((*puVar1 & 0x8000000) != 0) {
      iVar2 = *(int *)(puVar1[1] + 4) + -1;
      *(int *)(puVar1[1] + 4) = iVar2;
      if (iVar2 == 0) {
        (**(code **)(*(int *)puVar1[1] + 8))();
      }
    }
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  if (((local_28 & 0x8000000) != 0) &&
     (iVar2 = local_24[1], local_24[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_24 + 8))();
  }
  return iVar3;
}



undefined4 fn_001a96a0(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_10;
  int *local_c;
  
  local_10 = 0x5000002;
  local_c = param_2;
  uVar1 = fn_001a9170(param_1,&local_10);
  if (((local_10 & 0x8000000) != 0) &&
     (iVar2 = local_c[1], local_c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_c + 8))();
  }
  return uVar1;
}



int fn_001a965c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x54) + iVar1 * 0x14 + 8) == *(int *)(param_2 + 4)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x58));
  }
  return -1;
}



int fn_001a95ec(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    do {
      if ((*(int *)(*(int *)(param_1 + 4) + iVar1 * 0x14 + -0x14) == 0x8000010) &&
         (*(int *)(*(int *)(param_1 + 4) + iVar1 * 0x14 + -0x10) == *(int *)(param_2 + 4))) {
        return iVar1 + -1;
      }
      iVar1 = iVar1 + -1;
    } while (0 < iVar1);
  }
  return -1;
}



undefined4 fn_001a94c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar4 = *(undefined4 *)(param_1 + 8);
  local_2c = (int *)0x0;
  local_28 = 0;
  local_30 = 0x1000001;
  local_24 = 0;
  if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 8)) {
    iVar2 = *(uint *)(param_1 + 8) << 1;
    if (iVar2 == 0) {
      iVar2 = 4;
    }
    uVar1 = fn_0018388c(*(undefined4 *)(param_1 + 4),*(uint *)(param_1 + 0xc) * 0x14,iVar2 * 0x14);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(int *)(param_1 + 0xc) = iVar2;
  }
  puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x14);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = 0x1000001;
    fn_0019e864(puVar3,&local_30);
    puVar3[2] = local_28;
    puVar3[3] = local_24;
    puVar3[4] = local_20;
  }
  if (((local_30 & 0x8000000) != 0) &&
     (iVar2 = local_2c[1], local_2c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  if (*(uint *)(param_1 + 0x1c) < *(uint *)(param_1 + 8)) {
    if (0xff < (int)*(uint *)(param_1 + 0x1c)) {
      (**(code **)(param_1 + 0xec))
                (*(undefined4 *)(param_1 + 0xf0),(char *)&DAT_0080e0d0);
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 8);
  }
  return uVar4;
}


