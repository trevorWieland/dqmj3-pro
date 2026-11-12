#include "005b73f8_005b8428aaa.h"



void fn_005b741c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0xc));
  fn_0017821c(param_1 + 0x10,uVar1,0xf0);
  return;
}



void fn_005b73f8(int param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  fn_00301f50(param_1 + 0x10,0xf0);
  *(undefined1 *)(param_1 + 0x104) = 0;
  return;
}


