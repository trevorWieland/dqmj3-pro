#include "004b8820_004b8dacaa.h"



void fn_004b8974(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(int *)(param_1 + 0x14) = iVar1;
    *(int *)(param_1 + 0x10) = iVar1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c) + iVar1;
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}



void fn_004b890c(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    if (param_2 < 10) {
      param_2 = 10;
    }
    iVar1 = fn_0015ece0(param_2);
    *(int *)(param_1 + 0xc) = iVar1;
    iVar1 = iVar1 + param_2;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}



int * fn_004b8820(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *local_18;
  undefined4 local_14 [2];
  
  if (((char)param_1[2] == '\x04') && (*param_1 != 4)) {
    pcVar1 = *(code **)(*param_1 + -0xc);
    if (pcVar1 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar1)();
    }
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  switch((char)param_2[2]) {
  case '\x01':
  case '\x06':
    iVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = iVar2;
    break;
  case '\x02':
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    break;
  case '\x03':
    *(char *)param_1 = (char)*param_2;
    break;
  case '\x04':
    local_18 = &DAT_00855a94;
    fn_0015e6f0(local_14,*param_2);
    fn_0015e6f0(param_1,local_14[0]);
    fn_00170f54(&local_18);
    break;
  case '\x05':
    iVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = iVar2;
  }
  return param_1;
}


