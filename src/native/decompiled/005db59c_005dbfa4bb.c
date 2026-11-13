#include "005db59c_005dbfa4bb.h"



void fn_005dbfa4(int param_1)

{
  fn_00749130(param_1,DAT_00898214,(char *)&DAT_005dc008,0,1,1,0);
  fn_005fbc24(param_1,7);
  *(undefined4 *)(param_1 + 0x148) = 0xb;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
  fn_005fbae8(param_1);
  return;
}



void fn_005dbf78(int param_1)

{
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x44));
  if (*(int *)(param_1 + 0x128) == 0) {
    return;
  }
  fn_005f6270();
  return;
}



void fn_005dbd60(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x140) = 0;
  iVar1 = fn_0023c2a8();
  fn_0067901c(*(undefined4 *)(param_1 + 0x174),*(undefined4 *)(iVar1 + 0x38));
  *(undefined4 *)(param_1 + 0x104) = 0xf;
  fn_0068ab44(param_1,0x100094b);
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0x14f) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  return;
}



void fn_005dbcec(int param_1)

{
  fn_005db474(*(undefined4 *)(param_1 + 0x110),1);
  fn_005db474(*(undefined4 *)(param_1 + 0x110),2,1);
  fn_005db474(*(undefined4 *)(param_1 + 0x110),4,1);
  fn_005db474(*(undefined4 *)(param_1 + 0x110),6,1);
  *(undefined4 *)(*(int *)(param_1 + 0x110) + 0x10) = DAT_00897830;
  *(undefined1 *)(*(int *)(param_1 + 0x110) + 0x8ed) = 1;
  return;
}



void fn_005dbcc0(int param_1)

{
  if (*(int **)(param_1 + 0x170) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  }
  fn_005fba88(param_1);
  return;
}


