#include "00696df4_006977a4.h"



void fn_006977a4(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_50 [4];
  undefined1 local_4c;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_18;
  undefined1 local_14;
  
  fn_00697124();
  local_18 = param_2;
  local_14 = param_3;
  fn_00176fb0(param_1 + 0x15c,&local_18);
  fn_0011a24c(auStack_50);
  local_4c = 4;
  uVar1 = 0;
  local_2c = 0;
  local_28 = 0;
  fn_006949f8(param_1,auStack_50);
  *(undefined1 *)(param_1 + 0x16e) = uVar1;
  *(undefined **)(param_1 + 0x178) = &DAT_00696bf0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if (*(char *)(param_1 + 0x170) != '\x01') {
    if (*(char *)(param_1 + 0x170) == '\0') {
      fn_00699014(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  fn_003b682c(param_1);
  *(undefined1 *)(param_1 + 0x218) = 1;
  return;
}



void fn_006976c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined1 local_44;
  
  iVar1 = fn_002fb61c();
  if (iVar1 != 0) {
    fn_00424790(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) +
                  0x60));
  }
  fn_0011a24c(&local_48);
  local_44 = 6;
  local_48 = param_2;
  uVar2 = fn_006c3a84(*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x70) * 4
                                 ) + 0x30));
  fn_006f77d4(param_1,&local_48,*(undefined4 *)(param_1 + 0xa8),param_2,uVar2);
  fn_006949f8(param_1,&local_48);
  *(undefined1 *)(param_1 + 0x16e) = 0;
  *(code **)(param_1 + 0x178) = fn_0069821c;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if (*(char *)(param_1 + 0x170) != '\x01') {
    if (*(char *)(param_1 + 0x170) == '\0') {
      fn_00699014(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  fn_003b682c(param_1);
  *(undefined1 *)(param_1 + 0x218) = 1;
  return;
}



void fn_00697600(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  fn_00697124();
  uVar1 = fn_00154ac8(0x2aa);
  fn_006971f4(param_1,param_2,uVar1);
  fn_00144834(0x2aa,0);
  iVar2 = fn_001e80d8(*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                                 *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
  if (iVar2 == 0) {
    fn_001e7f80(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
  }
  *(undefined **)(param_1 + 0x178) = &DAT_00696bf0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  fn_003b682c(param_1);
  fn_001e22a4(*(undefined4 *)
                (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                         *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
  return;
}



void fn_00697514(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined1 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_40;
  undefined4 local_38;
  
  fn_0011a24c(&local_68);
  fn_006f76f0(param_1,&local_68);
  iVar2 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),local_68);
  iVar3 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),param_2);
  local_68 = param_2;
  iVar4 = fn_006af880(*(undefined4 *)(DAT_008977e0 + 0x1c),param_2);
  if (iVar4 == 0) {
    local_64 = 3;
  }
  else {
    local_64 = 6;
  }
  local_60 = *param_3;
  uStack_5c = param_3[1];
  uStack_58 = param_3[2];
  local_40 = param_5;
  local_38 = param_4;
  fn_006949f8(param_1,&local_68);
  if (iVar2 == iVar3) {
    bVar1 = fn_002fb5fc();
    bVar1 = bVar1 ^ 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x16e) = bVar1;
  *(undefined1 *)(param_1 + 0x16c) = 3;
  fn_00694a10(param_1);
  return;
}



void fn_00697500(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x1ac) = param_3;
  *(undefined1 *)(param_1 + param_2 + 0x19c) = param_4;
  return;
}



void fn_00697484(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    param_4 = *(int *)(iVar1 + 4);
  }
  if (iVar1 != 0 && param_4 != 0) {
    iVar3 = *(int *)(param_4 + 0xc);
    iVar2 = 0;
    if (iVar3 == iVar1) {
      *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(iVar1 + 8);
    }
    else {
      iVar2 = iVar3;
      for (iVar3 = *(int *)(iVar3 + 8); iVar3 != iVar1; iVar3 = *(int *)(iVar3 + 8)) {
        iVar2 = iVar3;
      }
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(param_4 + 0x10) == iVar1) {
      *(int *)(param_4 + 0x10) = iVar2;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
    fn_00143174(*(undefined4 *)(*(int *)(param_1 + 8) + 0x20));
    return;
  }
  return;
}



void fn_006971f4(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_s0;
  undefined4 uVar3;
  undefined4 local_50 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_20;
  
  fn_0011a24c(local_50);
  local_30 = param_2;
  iVar2 = fn_006bb334(*(undefined4 *)(param_1 + 0x30),param_2);
  if (iVar2 != 0) {
    local_50[0] = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c));
  }
  local_20 = fn_006abd24(*(undefined4 *)(param_1 + 0x30),local_30);
  uVar1 = 0;
  uVar3 = 0;
  if (param_3 != 0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                             *(int *)(param_1 + 0x70) * 4) + 0x30) + 0x24) + 0x24))
              ();
    uVar3 = in_s0;
    uVar1 = fn_006c3a84(*(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                   *(int *)(param_1 + 0x70) * 4) + 0x30));
    iVar2 = fn_006f6104(*(undefined4 *)(param_1 + 0x3c));
    if (iVar2 != 0) {
      fn_006f6220(*(undefined4 *)(param_1 + 0x3c));
      *(undefined4 *)(param_1 + 0x204) = in_s0;
      uVar3 = in_s0;
    }
    iVar2 = fn_006f61c8(*(undefined4 *)(param_1 + 0x3c));
    if (iVar2 != 0) {
      uVar1 = fn_006f6290(*(undefined4 *)(param_1 + 0x3c));
      *(undefined1 *)(param_1 + 0x208) = uVar1;
    }
    fn_00682d08(*(undefined4 *)(param_1 + 0x3c),1);
  }
  local_2c = uVar3;
  local_28 = uVar1;
  fn_006949f8(param_1,local_50);
  *(undefined1 *)(param_1 + 0x16c) = 2;
  *(undefined1 *)(param_1 + 0x16e) = 1;
  if (*(char *)(param_1 + 0x170) != '\x01') {
    if (*(char *)(param_1 + 0x170) == '\0') {
      fn_00699014(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  return;
}



void fn_00697124(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_s0;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                           *(int *)(param_1 + 0x70) * 4) + 0x30) + 0x24) + 0x24))();
  *(undefined4 *)(param_1 + 0x204) = in_s0;
  uVar1 = fn_006c3a84(*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x70) * 4
                                 ) + 0x30));
  *(undefined1 *)(param_1 + 0x208) = uVar1;
  (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                           *(int *)(param_1 + 0x70) * 4) + 0x30) + 0x28) + 0x2c))();
  *(undefined4 *)(param_1 + 0x20c) = in_s0;
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined1 *)(param_1 + 0x1e4) = *(undefined1 *)(param_1 + 0xac);
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) + 4)
  ;
  uVar3 = *(undefined4 *)(iVar2 + 0x24);
  uVar4 = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x1ec) = uVar3;
  *(undefined4 *)(param_1 + 0x1f0) = uVar4;
  *(undefined4 *)(param_1 + 500) =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) + 4)
        + 0x30);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0xd8);
  return;
}



void fn_00697004(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 auStack_58 [4];
  undefined1 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  fn_0011a24c(auStack_58);
  iVar1 = fn_006af880(*(undefined4 *)(DAT_008977e0 + 0x1c),param_2);
  if (iVar1 == 0) {
    local_54 = 3;
  }
  else {
    local_54 = 6;
  }
  local_50 = *param_4;
  uStack_4c = param_4[1];
  uStack_48 = param_4[2];
  fn_00696df4(param_1,param_2,param_3,auStack_58);
  return;
}



void fn_00696df4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  *param_4 = param_2;
  param_4[6] = param_3;
  uVar3 = fn_006c3a84(*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x70) * 4
                                 ) + 0x30));
  fn_006f77d4(param_1,param_4,*(undefined4 *)(param_1 + 0xa8),param_2,uVar3);
  param_4[0xc] = 0;
  fn_006949f8(param_1,param_4);
  bVar1 = fn_002fb5fc();
  iVar4 = fn_006b5184(*(undefined4 *)(DAT_00897804 + 0x1c));
  iVar5 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),param_2);
  *(byte *)(param_1 + 0x16e) = ((iVar5 != -1 && iVar5 != iVar4) | bVar1) ^ 1;
  iVar4 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 0xa8));
  iVar5 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),param_2);
  if ((iVar4 != iVar5) &&
     (iVar4 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),param_2), iVar4 == 9)) {
    uVar6 = 1;
    do {
      cVar2 = fn_0026ced0(uVar6 & 0xff);
      fn_002426d4(*(undefined4 *)(DAT_00897804 + 0x1c),uVar6 & 0xff,(int)cVar2);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 6);
    fn_00144834(0x1ef,0);
    fn_00144834(0x1f0,0);
    fn_00144834(0x1f1,0);
    fn_00144834(0x1f2,0);
    fn_00144834(499,0);
    fn_00144834(0x4f9,0);
    fn_00144834(0x4fa,0);
    fn_00144834(0x4fb,0);
    fn_00144834(0x4fc,0);
    fn_00144834(0x4fd,0);
  }
  *(undefined **)(param_1 + 0x178) = &DAT_00696bf0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if (*(char *)(param_1 + 0x170) != '\x01') {
    if (*(char *)(param_1 + 0x170) == '\0') {
      fn_00699014(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  fn_003b682c(param_1);
  *(undefined1 *)(param_1 + 0x218) = 1;
  return;
}


