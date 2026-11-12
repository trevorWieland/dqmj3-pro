#include "0049a6e4_0049b194.h"



undefined4
fn_0049b194(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [64];
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_60,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,0x21);
  fn_004aa010(auStack_60,param_3);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
    fn_0048ca64(param_2,param_5);
  }
  DAT_008e6708 = fn_0049c364;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar4;
}



undefined4
fn_0049b024(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [64];
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_60,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,0xe);
  fn_0074cf38(auStack_60,param_3);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
    fn_0048ca64(param_2,param_5);
  }
  DAT_008e66bc = fn_0049bb44;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar4;
}



void fn_0049adbc(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_58;
  undefined1 local_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  int local_20 [2];
  
  iVar2 = fn_0048cbf8(param_2,0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 4) = 0;
    cVar1 = *(char *)(param_1 + 0x3b);
    local_58 = 0;
    if ((((cVar1 != '\0') ||
         ((fn_0074a4c8(param_1,iVar2 + 4), *(char *)(param_1 + 4) == '\0' &&
          (fn_0074a528(param_1,&local_58), *(char *)(param_1 + 4) == '\0')))) &&
        (iVar4 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
       ((((fn_0074a528(param_1,iVar2 + 8), *(char *)(param_1 + 4) == '\0' &&
          (fn_0045f7f0(param_1,iVar2 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
         (fn_0074b7d8(param_1,iVar2 + 0x14), *(char *)(param_1 + 4) == '\0')) &&
        ((fn_0074b7d8(param_1,iVar2 + 0x20), *(char *)(param_1 + 4) == '\0' &&
         (fn_0074af34(param_1,iVar2 + 0x2c), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0'))))))
    {
      uVar3 = local_58 + iVar4;
      if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        *(uint *)(param_1 + 0xc) = uVar3;
      }
    }
    return;
  }
  fn_00101a1c(&local_58,&LAB_00493a14,0x38,1);
  local_54[0] = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_20[0] = 0;
  if (((cVar1 != '\0') ||
      ((fn_0074a4c8(param_1,local_54), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,local_20), *(char *)(param_1 + 4) == '\0')))) &&
     ((iVar2 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0' &&
      ((((fn_0074a528(param_1,auStack_50), *(char *)(param_1 + 4) == '\0' &&
         (fn_0045f7f0(param_1,auStack_4c), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0074b7d8(param_1,auStack_44), *(char *)(param_1 + 4) == '\0')) &&
       ((fn_0074b7d8(param_1,auStack_38), *(char *)(param_1 + 4) == '\0' &&
        (fn_0074af34(param_1,auStack_2c), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')))))))) {
    uVar3 = local_20[0] + iVar2;
    if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar3;
    }
  }
  fn_00100414(&local_58,&LAB_00493a68,0x38,1);
  return;
}



void fn_0049ab54(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_58;
  undefined1 local_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  int local_20 [2];
  
  iVar2 = fn_0048cbf8(param_2,0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 4) = 0;
    cVar1 = *(char *)(param_1 + 0x3b);
    local_58 = 0;
    if ((((cVar1 != '\0') ||
         ((fn_0074a4c8(param_1,iVar2 + 4), *(char *)(param_1 + 4) == '\0' &&
          (fn_0074a528(param_1,&local_58), *(char *)(param_1 + 4) == '\0')))) &&
        (iVar4 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
       ((((fn_0074a528(param_1,iVar2 + 8), *(char *)(param_1 + 4) == '\0' &&
          (fn_0045f7f0(param_1,iVar2 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
         (fn_0074b7d8(param_1,iVar2 + 0x14), *(char *)(param_1 + 4) == '\0')) &&
        ((fn_0074b7d8(param_1,iVar2 + 0x20), *(char *)(param_1 + 4) == '\0' &&
         (fn_0074af34(param_1,iVar2 + 0x2c), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0'))))))
    {
      uVar3 = local_58 + iVar4;
      if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        *(uint *)(param_1 + 0xc) = uVar3;
      }
    }
    return;
  }
  fn_00101a1c(&local_58,&LAB_00493984,0x38,1);
  local_54[0] = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_20[0] = 0;
  if (((cVar1 != '\0') ||
      ((fn_0074a4c8(param_1,local_54), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,local_20), *(char *)(param_1 + 4) == '\0')))) &&
     ((iVar2 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0' &&
      ((((fn_0074a528(param_1,auStack_50), *(char *)(param_1 + 4) == '\0' &&
         (fn_0045f7f0(param_1,auStack_4c), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0074b7d8(param_1,auStack_44), *(char *)(param_1 + 4) == '\0')) &&
       ((fn_0074b7d8(param_1,auStack_38), *(char *)(param_1 + 4) == '\0' &&
        (fn_0074af34(param_1,auStack_2c), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')))))))) {
    uVar3 = local_20[0] + iVar2;
    if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar3;
    }
  }
  fn_00100414(&local_58,&LAB_004939d8,0x38,1);
  return;
}



void fn_0049a91c(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_48;
  undefined1 local_44 [4];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [12];
  int local_1c;
  
  iVar2 = fn_0048cbf8(param_2,0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 4) = 0;
    cVar1 = *(char *)(param_1 + 0x3b);
    local_48 = 0;
    if ((((cVar1 != '\0') ||
         ((fn_0074a4c8(param_1,iVar2 + 4), *(char *)(param_1 + 4) == '\0' &&
          (fn_0074a528(param_1,&local_48), *(char *)(param_1 + 4) == '\0')))) &&
        (iVar4 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
       ((((fn_0045f7f0(param_1,iVar2 + 8), *(char *)(param_1 + 4) == '\0' &&
          (fn_0074b7d8(param_1,iVar2 + 0x10), *(char *)(param_1 + 4) == '\0')) &&
         (fn_0074a528(param_1,iVar2 + 0x1c), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0074af34(param_1,iVar2 + 0x20), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')))) {
      uVar3 = local_48 + iVar4;
      if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        *(uint *)(param_1 + 0xc) = uVar3;
      }
    }
    return;
  }
  fn_00101a1c(&local_48,&LAB_0048fc1c,0x2c,1);
  local_44[0] = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_1c = 0;
  if (((cVar1 != '\0') ||
      ((fn_0074a4c8(param_1,local_44), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,&local_1c), *(char *)(param_1 + 4) == '\0')))) &&
     ((iVar2 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0' &&
      ((((fn_0045f7f0(param_1,auStack_40), *(char *)(param_1 + 4) == '\0' &&
         (fn_0074b7d8(param_1,auStack_38), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0074a528(param_1,auStack_2c), *(char *)(param_1 + 4) == '\0')) &&
       (fn_0074af34(param_1,auStack_28), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')))))) {
    uVar3 = local_1c + iVar2;
    if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar3;
    }
  }
  fn_00100414(&local_48,&LAB_0048fc64,0x2c,1);
  return;
}



void fn_0049a6e4(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_48;
  undefined1 local_44 [4];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  int local_1c;
  
  iVar2 = fn_0048cbf8(param_2,0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 4) = 0;
    cVar1 = *(char *)(param_1 + 0x3b);
    local_48 = 0;
    if ((((cVar1 != '\0') ||
         ((fn_0074a4c8(param_1,iVar2 + 4), *(char *)(param_1 + 4) == '\0' &&
          (fn_0074a528(param_1,&local_48), *(char *)(param_1 + 4) == '\0')))) &&
        (iVar4 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
       ((((fn_0045f7f0(param_1,iVar2 + 8), *(char *)(param_1 + 4) == '\0' &&
          (fn_0045f7f0(param_1,iVar2 + 0x10), *(char *)(param_1 + 4) == '\0')) &&
         (fn_0045f7f0(param_1,iVar2 + 0x18), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0074af34(param_1,iVar2 + 0x20), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')))) {
      uVar3 = local_48 + iVar4;
      if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        *(uint *)(param_1 + 0xc) = uVar3;
      }
    }
    return;
  }
  fn_00101a1c(&local_48,&LAB_004b2b00,0x2c,1);
  local_44[0] = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_1c = 0;
  if (((cVar1 != '\0') ||
      ((fn_0074a4c8(param_1,local_44), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,&local_1c), *(char *)(param_1 + 4) == '\0')))) &&
     ((iVar2 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0' &&
      ((((fn_0045f7f0(param_1,auStack_40), *(char *)(param_1 + 4) == '\0' &&
         (fn_0045f7f0(param_1,auStack_38), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0045f7f0(param_1,auStack_30), *(char *)(param_1 + 4) == '\0')) &&
       (fn_0074af34(param_1,auStack_28), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')))))) {
    uVar3 = local_1c + iVar2;
    if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar3;
    }
  }
  fn_00100414(&local_48,&LAB_004b2b4c,0x2c,1);
  return;
}


