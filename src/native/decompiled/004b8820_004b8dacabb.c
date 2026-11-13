#include "004b8820_004b8dacabb.h"



undefined4 * fn_004b8ae8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_00855ba4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2[6] == param_2[3]) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2[6] - param_2[3];
  }
  fn_004b890c(param_1,iVar1);
  if (param_2 != param_1) {
    if (param_1[7] == 0) {
      param_1[5] = param_1[3];
      param_1[4] = param_1[3];
    }
    else {
      iVar1 = param_1[7] + param_1[3];
      param_1[5] = iVar1;
      param_1[4] = iVar1;
    }
    iVar1 = param_2[4];
    if (param_2[5] == iVar1) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_2[5] - iVar1;
    }
    fn_004b8a68(param_1,iVar1,iVar2);
  }
  return param_1;
}



void fn_004b8a68(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return;
  }
  do {
    iVar1 = *(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x18) == iVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0x18) - iVar1;
    }
    if (param_3 <= uVar2) {
      fn_00301a9c(iVar1,param_2,param_3);
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
      return;
    }
    if (iVar1 == *(int *)(param_1 + 0xc)) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 - *(int *)(param_1 + 0xc);
    }
    fn_004b89a0(param_1,iVar1 + param_3,0);
  } while (param_3 != 0);
  return;
}


