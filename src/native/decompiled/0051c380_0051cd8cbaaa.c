#include "0051c380_0051cd8cbaaa.h"



void fn_0051c9dc(int param_1,int param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5,
                 undefined1 param_6)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (param_2 == 0) {
    fn_005175e4(*(undefined4 *)(param_1 + 0x24));
  }
  else {
    fn_00515738(param_1 + 0x38);
    local_20 = 0;
    uStack_1c = 0;
    fn_004f01f4(&local_20);
    *(undefined4 *)(param_1 + 0x58) = local_20;
    *(undefined4 *)(param_1 + 0x5c) = uStack_1c;
    *(undefined4 *)(param_1 + 0x60) = local_20;
    *(undefined4 *)(param_1 + 100) = uStack_1c;
  }
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined1 *)(param_1 + 0x14) = param_4;
  fn_004ed810(param_1 + 4,param_5);
  *(undefined1 *)(param_1 + 0x20) = param_6;
  puVar1 = (undefined4 *)fn_0013d4ec();
  *(undefined4 *)(param_1 + 0x18) = *puVar1;
  *(undefined4 *)(param_1 + 0x1c) = puVar1[1];
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  return;
}


