#include "0052197c_00521f98.h"



void fn_00521f98(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  uVar1 = fn_00523544(&local_10);
  if (*(char *)(param_1 + 8) == '\0') {
    if (-1 < (int)uVar1) {
      fn_00522b88(local_10,*(undefined4 *)(param_1 + 0xc),param_2);
      return;
    }
    iVar2 = fn_00522ff8(&local_18);
    if (-1 < iVar2) {
      fn_00524244(local_18,*(undefined4 *)(param_1 + 0xc),param_2);
      return;
    }
  }
  else if (-1 < (int)(uVar1 & 0x80000000)) {
    local_18 = *(undefined4 *)(param_1 + 0xc);
    uStack_14 = param_2;
    fn_00522e6c(local_10,uVar1 & 0x80000000,*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
  }
  return;
}



void fn_00521eec(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_18;
  int iStack_14;
  undefined4 local_10;
  
  if (param_2 == 0) {
    fn_005236dc(0x10);
    return;
  }
  uVar1 = fn_00523544(&local_10);
  if (*(char *)(param_1 + 8) == '\0') {
    if (-1 < (int)uVar1) {
      fn_00522b4c(local_10,*(undefined4 *)(param_1 + 0xc),param_2);
      return;
    }
    iVar2 = fn_00522ff8(&local_18);
    if (-1 < iVar2) {
      fn_00524208(local_18,*(undefined4 *)(param_1 + 0xc),param_2);
      return;
    }
  }
  else if (-1 < (int)(uVar1 & 0x80000000)) {
    local_18 = *(undefined4 *)(param_1 + 0xc);
    iStack_14 = param_2;
    fn_00522e28(local_10,uVar1 & 0x80000000,*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
  }
  return;
}



undefined4 fn_00521ecc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}



undefined4 fn_00521ec4(undefined4 param_1)

{
  return param_1;
}



void fn_00521ea0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &DAT_0085743c;
  return;
}



undefined1 fn_00521db4(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_24 [2];
  
  iVar1 = fn_00522f90(param_1 + 0xc);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = fn_002febd8(param_1 + 0xc);
  local_38 = 0;
  local_34[0] = 0;
  local_30[0] = 2;
  iVar2 = fn_00523544(&local_28);
  if (iVar2 < 0) {
    iVar2 = fn_00522ff8(local_24);
    if (iVar2 < 0) {
      return 2;
    }
    iVar1 = fn_00523fe4(local_24[0],param_1 + 0xc,iVar1 + 1,local_30,&local_38,local_34);
  }
  else {
    iVar1 = fn_00522928(local_28,param_1 + 0xc,iVar1 + 1,local_30,&local_38,local_34);
  }
  if (iVar1 < 0) {
    return 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_38;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = local_34[0];
  }
  return local_30[0];
}



undefined1 fn_00521cc8(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 local_28 [2];
  
  iVar1 = fn_00522f90(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar1 = fn_002febd8(param_1 + 0xc);
    local_3c = 0;
    local_38[0] = 0;
    local_34[0] = 9;
    iVar2 = fn_00523544(&local_2c);
    if (iVar2 < 0) {
      iVar2 = fn_00522ff8(local_28);
      if (iVar2 < 0) {
        return 9;
      }
      iVar1 = fn_00523eb4(local_28[0],param_1 + 0xc,iVar1 + 1,local_34,param_2,&local_3c,local_38);
    }
    else {
      iVar1 = fn_005227f8(local_2c,param_1 + 0xc,iVar1 + 1,local_34,param_2,&local_3c,local_38);
    }
    if (-1 < iVar1) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_3c;
      }
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = local_38[0];
      }
      return local_34[0];
    }
  }
  return 9;
}



void fn_00521c3c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar1 = fn_00522f90(param_1 + 0xc);
  if (iVar1 == 0) {
    fn_005236dc(0x1a);
    return;
  }
  iVar1 = fn_002febd8(param_1 + 0xc);
  iVar2 = fn_00523544(&local_18);
  if (iVar2 < 0) {
    iVar2 = fn_00522ff8(local_14);
    if (-1 < iVar2) {
      fn_00523d9c(local_14[0],param_1 + 0xc,iVar1 + 1);
      return;
    }
  }
  else {
    fn_005226e0(local_18,param_1 + 0xc,iVar1 + 1);
  }
  return;
}



void fn_00521bb0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar1 = fn_00522f90(param_1 + 0xc);
  if (iVar1 == 0) {
    fn_005236dc(0x1a);
    return;
  }
  iVar1 = fn_002febd8(param_1 + 0xc);
  iVar2 = fn_00523544(&local_18);
  if (iVar2 < 0) {
    iVar2 = fn_00522ff8(local_14);
    if (-1 < iVar2) {
      fn_00524470(local_14[0],param_1 + 0xc,iVar1 + 1);
      return;
    }
  }
  else {
    fn_00522f50(local_18,param_1 + 0xc,iVar1 + 1);
  }
  return;
}



undefined1 fn_00521b14(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = fn_00522f90(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar1 = fn_002febd8(param_1 + 0xc);
    local_18[0] = 3;
    iVar2 = fn_00523544(&local_14);
    if (iVar2 < 0) {
      iVar2 = fn_00522ff8(&local_10);
      if (iVar2 < 0) {
        return 3;
      }
      iVar1 = fn_005243d0(local_10,param_1 + 0xc,iVar1 + 1,local_18);
    }
    else {
      iVar1 = fn_00522cdc(local_14,param_1 + 0xc,iVar1 + 1,local_18);
    }
    if (-1 < iVar1) {
      return local_18[0];
    }
  }
  return 3;
}



int fn_00521a74(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar1 = fn_00522f90(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = fn_005236dc(0x1a);
    return iVar1;
  }
  iVar1 = fn_0044bc3c();
  if (iVar1 == 0) {
    iVar1 = -0x375f07b8;
  }
  else {
    iVar2 = fn_002febd8(param_1 + 0xc);
    iVar1 = fn_00523544(&local_18);
    if (iVar1 < 0) {
      iVar1 = fn_00522ff8(local_14);
      if (-1 < iVar1) {
        iVar1 = fn_005242fc(local_14[0],param_1 + 0xc,iVar2 + 1);
        return iVar1;
      }
    }
    else {
      iVar1 = fn_00522c08(local_18,param_1 + 0xc,iVar2 + 1);
    }
  }
  return iVar1;
}



void fn_005219dc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = fn_00522f90(param_1 + 0xc);
  if (iVar1 == 0) {
    fn_005236dc(0x1a);
    return;
  }
  iVar1 = fn_002febd8(param_1 + 0xc);
  iVar2 = fn_00523544(&local_18);
  if (iVar2 < 0) {
    iVar2 = fn_00522ff8(&local_14);
    if (-1 < iVar2) {
      fn_005241c8(local_14,param_1 + 0xc,iVar1 + 1,param_2);
      return;
    }
  }
  else {
    fn_00522b0c(local_18,param_1 + 0xc,iVar1 + 1,param_2);
  }
  return;
}



undefined4 fn_0052197c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00522f90(param_2);
  if (((iVar1 == 0) || (uVar2 = fn_005244b0(param_2,8), 7 < uVar2)) ||
     (iVar1 = fn_00522fa8(param_2), iVar1 != 0)) {
    uVar3 = fn_005236dc(0x1a);
    return uVar3;
  }
  fn_002fec40(param_1 + 0xc,param_2);
  return 0;
}


