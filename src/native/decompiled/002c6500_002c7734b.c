#include "002c6500_002c7734b.h"



void fn_002c7734(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x11c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002c7f50(iVar1,param_1);
  return;
}



void fn_002c76d4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  if ((*(char *)(param_1 + 0x7c) == '\0') && (*(int *)(param_2 + 0xc) != 0)) {
    local_10 = param_4;
    local_10 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    fn_006bfda8(&local_10);
    iVar1 = fn_0032d6f4();
    fn_002c7154(param_1,*(undefined1 *)(iVar1 + 0x1f),*(undefined1 *)(iVar1 + 0x1e));
  }
  return;
}



void fn_002c76bc(undefined4 param_1)

{
  fn_002c1f84();
  fn_002c74d8(param_1);
  return;
}



void fn_002c7670(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1[0x19] == 7) {
    fn_002c6f28(param_1,0,0,param_4,param_4);
  }
  (**(code **)(*param_1 + 0x110))(param_1,7,1,0,1);
  return;
}



void fn_002c74d8(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x7c) == '\x01') {
    iVar1 = *(int *)(param_1 + 0xf0);
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,0);
      fn_002b1f0c(iVar1,1);
    }
    iVar1 = *(int *)(param_1 + 0xf4);
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,0);
      fn_002b1f0c(iVar1,1);
      return;
    }
  }
  else {
    fn_002c6500(param_1);
    iVar1 = *(int *)(param_1 + 0xf4);
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,1);
      fn_002b1f0c(iVar1,0);
      return;
    }
  }
  return;
}



void fn_002c74c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  int iVar1;
  
  fn_002c1d14();
  if (*(char *)(param_1 + 0x7c) == '\x01') {
    iVar1 = *(int *)(param_1 + 0xf0);
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,0,param_3,param_4,unaff_r4);
      fn_002b1f0c(iVar1,1);
    }
    iVar1 = *(int *)(param_1 + 0xf4);
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,0,param_3,param_4,unaff_r4);
      fn_002b1f0c(iVar1,1);
      return;
    }
  }
  else {
    fn_002c6500(param_1);
    iVar1 = *(int *)(param_1 + 0xf4);
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,1,param_3,param_4,unaff_r4);
      fn_002b1f0c(iVar1,0);
      return;
    }
  }
  return;
}


