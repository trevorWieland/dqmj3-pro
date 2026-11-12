#include "00445058_00445670baa.h"



void fn_004453a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004453d0(iVar1,param_1);
  return;
}



void fn_0044538c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}


