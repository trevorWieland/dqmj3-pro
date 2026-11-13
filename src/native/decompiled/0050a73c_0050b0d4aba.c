#include "0050a73c_0050b0d4aba.h"



int fn_0050aad4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  fn_00301f50(param_1,0x340);
  iVar1 = fn_00101a1c(param_1,&LAB_00513fc4,0x18,0x20);
  iVar1 = fn_004edc74(iVar1 + 0x340,0xffffffff);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  fn_001782b8(iVar1 + -0x38,param_2,0x1f);
  *(undefined1 *)(iVar1 + -0x19) = 0;
  return iVar1 + -0x340;
}


