#include "005b3c1c_005b4d04baa.h"



void fn_005b4770(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b47a0(iVar1,param_1);
  return;
}



void fn_005b4758(int param_1)

{
  fn_0039536c();
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}


