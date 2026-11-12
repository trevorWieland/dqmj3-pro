#include "0059e16c_0059e538bbb.h"



void fn_0059e538(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 8);
  uVar2 = param_3[1];
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  return;
}



void fn_0059e508(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0059e9a8(iVar1,param_1);
  return;
}


