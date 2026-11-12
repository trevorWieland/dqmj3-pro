#include "003e2a98_003e371cba.h"



void fn_003e3218(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e36e8(iVar1,param_1);
  return;
}



void fn_003e30f8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  fn_006899f4(param_1,0,0,0);
  fn_00689d04(param_1,0);
  fn_002c3d68(param_1);
  return;
}


