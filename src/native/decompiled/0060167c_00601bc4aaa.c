#include "0060167c_00601bc4aaa.h"



void fn_006016ac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x128,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00601710(iVar1,param_1);
  return;
}



void fn_0060167c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 8) = 2;
  fn_0017821c(param_1 + 0xc,param_2,0x104);
  fn_007954e8(param_1 + 0x110,param_3);
  return;
}


