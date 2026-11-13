#include "00304018_00304570a.h"



void fn_00304258(int *param_1)

{
  (**(code **)(*param_1 + 0xc))();
  return;
}



void fn_0030417c(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_002feef8();
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      fn_002feef8();
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      fn_002feef8();
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      fn_002feef8();
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    fn_00121118(*(undefined4 *)(DAT_00897804 + 0x18),*(undefined4 *)(param_1 + 0xc));
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_002feef8();
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    fn_001221d4(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 8),0);
    if (*(int *)(param_1 + 8) != 0) {
      fn_002feef8();
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



void fn_00304168(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != param_1) {
    *param_1 = *param_2;
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
  }
  return;
}



void fn_0030414c(undefined4 param_1)

{
  fn_0030488c(param_1,&DAT_008c3db8,1,0x20,&LAB_0010424c_1);
  return;
}



void fn_00304138(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  local_10 = 0xffffffff;
  uStack_c = param_1;
  auStack_8[0] = param_2;
  fn_00303590(auStack_8,&local_10);
  return;
}



undefined4 fn_003040d8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00301e54(*param_1);
  if (iVar1 == 0) {
    uVar2 = fn_00302364(*param_1);
    return uVar2;
  }
  return 0xffffffff;
}



void fn_00304084(int param_1)

{
  fn_0017821c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(DAT_00897804 + 0xc) + 4),
               0x1db7c);
  fn_0017821c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(*(int *)(DAT_00897804 + 0x18) + 4),
               0xc88);
  return;
}



void fn_00304076(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  return;
}



bool fn_0030406c(int *param_1)

{
  return *param_1 != 0;
}



void fn_00304018(int param_1)

{
  fn_0017821c(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(DAT_00897804 + 0xc) + 4),
               0x1db7c);
  fn_0017821c(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(*(int *)(DAT_00897804 + 0x18) + 4),
               0xc88);
  return;
}


