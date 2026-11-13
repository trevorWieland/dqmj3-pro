#include "0060481c_00604df8aba.h"



void fn_00604a04(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0xc);
  uVar1 = fn_0028a284(uVar2,param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = fn_0028aad0(uVar2,uVar1);
  fn_0024f108(uVar1,(int)*(char *)(param_1 + 0x2c));
  return;
}


