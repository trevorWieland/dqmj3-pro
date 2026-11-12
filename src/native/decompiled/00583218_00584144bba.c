#include "00583218_00584144bba.h"



void fn_005840ac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005840dc(iVar1,param_1);
  return;
}



void fn_0058408c(int param_1)

{
  fn_0039536c();
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}


