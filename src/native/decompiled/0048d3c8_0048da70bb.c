#include "0048d3c8_0048da70bb.h"



void fn_0048da70(int param_1)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0;
  iVar1 = fn_0052aeb0(&local_10,*(undefined4 *)(param_1 + 8));
  if (iVar1 < 0) {
    fn_00529b0c();
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



undefined4 fn_0048d984(int *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_24 [2];
  
  uVar2 = 0;
  if (param_3 < 0x2001) {
    iVar1 = fn_00528598();
  }
  else {
    iVar1 = fn_0052b3b8(local_24,param_1[2],param_2,param_3,4,0,8);
  }
  if (iVar1 < 0) {
    local_24[0] = fn_00529b0c();
  }
  if (local_24[0] < 0) {
    uVar2 = 4;
    if (local_24[0] == -0x26) {
      (**(code **)(*param_1 + 0x14))(param_1);
      (**(code **)(*param_1 + 4))(param_1);
    }
    else if (local_24[0] != -8) {
      if (local_24[0] == -6) {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else if (param_4 != (int *)0x0) {
    *param_4 = local_24[0];
  }
  (*DAT_008b64bc)(uVar2,param_2,param_3,param_4);
  return uVar2;
}



undefined4 fn_0048d898(int *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_24 [2];
  
  uVar2 = 0;
  if (param_3 < 0x2001) {
    iVar1 = fn_0052906c();
  }
  else {
    iVar1 = fn_0052b914(local_24,param_1[2],param_2,param_3,4,0,8);
  }
  if (iVar1 < 0) {
    local_24[0] = fn_00529b0c();
  }
  if (local_24[0] < 0) {
    uVar2 = 4;
    if (local_24[0] == -0x26) {
      (**(code **)(*param_1 + 0x14))(param_1);
      (**(code **)(*param_1 + 4))(param_1);
    }
    else if (local_24[0] != -8) {
      if (local_24[0] == -6) {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else if (param_4 != (int *)0x0) {
    *param_4 = local_24[0];
  }
  (*DAT_008b64b8)(uVar2,param_2,param_3,param_4);
  return uVar2;
}


