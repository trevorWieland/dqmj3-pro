#include "0065a3bc_0065af70baa.h"



void fn_0065a7e4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1a4) != -1) {
    uVar1 = fn_006f72b4(DAT_008977e0);
    fn_0021f144(uVar1,*(undefined4 *)(param_1 + 0x1a4));
    *(undefined4 *)(param_1 + 0x1a4) = 0xffffffff;
  }
  fn_001d9f9c(param_1);
  return;
}


