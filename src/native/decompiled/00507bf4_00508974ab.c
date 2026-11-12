#include "00507bf4_00508974ab.h"



void fn_00508030(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void fn_00508014(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



void fn_00507fb4(void)

{
  if (DAT_008bf4d8 != '\0') {
    if (DAT_008bf4d9 != '\0') {
      fn_00507edc();
    }
    if (DAT_008bf4e0 - 0x100000U < 0x3ff00000) {
      fn_005060e8();
      fn_0050527c();
    }
    fn_004ed284(7);
    DAT_008bf4d8 = '\0';
  }
  return;
}


