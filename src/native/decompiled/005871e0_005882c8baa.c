#include "005871e0_005882c8baa.h"



void fn_00587b00(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00587b30(iVar1,param_1);
  return;
}



int fn_00587af0(int param_1)

{
  return *(int *)(param_1 + 0xc) * 0x28;
}


