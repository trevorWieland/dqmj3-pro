#include "0022d168_0022d8bcaa.h"



void fn_0022d1fc(int param_1)

{
  undefined4 auStack_58 [20];
  
  fn_0017821c(auStack_58,&PTR_s_douguya_007c7274,0x4c);
  fn_0022f750(auStack_58[*(int *)(*(int *)(param_1 + 0xb0) + 0xc)]);
  return;
}



undefined4 fn_0022d168(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xbc) = 3;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  fn_003e56e4(param_1);
  fn_003e563c(param_1,0);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    do {
      uVar1 = fn_002c8df4(param_1,iVar2);
      fn_0031b78c(param_1,iVar2,0,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xbc));
  }
  fn_003e5b40(param_1);
  fn_00689efc(param_1,0x90,0);
  return 1;
}


