#include "005d151c_005d2154a.h"



void fn_005d18cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_18;
  
  local_18 = param_4;
  fn_00231074(&local_18,param_3,0);
  fn_0031b78c(param_1,param_2,1,local_18);
  uVar1 = fn_00230a84(param_4,0);
  fn_0031b78c(param_1,param_2,7,uVar1);
  if (local_18 != &DAT_008f9cf4) {
    piVar2 = local_18 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_18 + -3,local_18[-2] + 8,0);
    }
  }
  return;
}



void fn_005d189c(int param_1,int param_2)

{
  fn_00689efc(param_1,0x2d,0);
  fn_0025f3f4(*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + param_2 * 4 + 0x11c));
  return;
}



undefined1 * fn_005d17fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  fn_0020bbc4(auStack_20,param_3);
  uVar1 = fn_006c0114(auStack_1c);
  uVar2 = fn_006bf5c8(auStack_1c);
  fn_0018a618(&local_38,0xc,0xb,L"%4d/%4d",uVar2,uVar1);
  fn_0031b78c(param_1,param_2,4,&local_38);
  return auStack_20;
}



undefined1 * fn_005d1704(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  fn_0020bbc4(auStack_20,param_3);
  uVar1 = fn_006c0028(auStack_1c);
  local_40 = fn_006bf5bc(auStack_1c);
  uStack_3c = uVar1;
  fn_0018a618(&local_38,0xc,0xb,L"%4d/%4d");
  fn_0031b78c(param_1,param_2,4,&local_38);
  iVar2 = fn_006bf5bc(auStack_1c);
  iVar3 = fn_006c0028(auStack_1c);
  if (iVar2 == iVar3) {
    local_40 = DAT_00891b6c;
    fn_002c37e0(param_1,param_2,&local_40);
  }
  else {
    local_40 = DAT_00891b64;
    fn_002c37e0(param_1,param_2,&local_40);
  }
  return auStack_20;
}



void fn_005d151c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar2 = 0;
  iVar3 = 0;
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b83e4(uVar5);
  if (0 < iVar1) {
    do {
      iVar1 = fn_0028b0a0(uVar5,iVar3);
      param_1[iVar2 + 0x47] = iVar1;
      (**(code **)(*param_1 + 0x148))(param_1,iVar2,iVar1,0);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
      iVar1 = fn_006b83e4(uVar5);
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  iVar1 = fn_006b84b0(uVar5);
  if (0 < iVar1) {
    do {
      iVar1 = fn_0028b348(uVar5,iVar3);
      param_1[iVar2 + 0x47] = iVar1;
      (**(code **)(*param_1 + 0x148))(param_1,iVar2,iVar1,1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
      iVar1 = fn_006b84b0(uVar5);
    } while (iVar3 < iVar1);
  }
  if (0 < 9 - iVar2) {
    iVar3 = 0;
    iVar6 = 0;
    iVar1 = (9 - iVar2) % 9;
    if (0 < iVar1) {
      do {
        iVar4 = iVar2 + iVar3;
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 1;
        param_1[iVar4 + 0x47] = 0;
      } while (iVar6 < iVar1);
    }
    for (; iVar1 < 9 - iVar2; iVar1 = iVar1 + 9) {
      param_1[iVar2 + iVar3 + 0x47] = 0;
      param_1[iVar2 + iVar3 + 0x48] = 0;
      param_1[iVar2 + iVar3 + 0x49] = 0;
      param_1[iVar2 + iVar3 + 0x4a] = 0;
      iVar6 = iVar2 + iVar3;
      param_1[iVar2 + iVar3 + 0x4b] = 0;
      param_1[iVar2 + iVar3 + 0x4c] = 0;
      param_1[iVar2 + iVar3 + 0x4d] = 0;
      param_1[iVar2 + iVar3 + 0x4e] = 0;
      iVar3 = iVar3 + 9;
      param_1[iVar6 + 0x4f] = 0;
    }
  }
  return;
}


