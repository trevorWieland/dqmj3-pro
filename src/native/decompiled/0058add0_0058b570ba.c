#include "0058add0_0058b570ba.h"



void fn_0058b4b4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058b4e4(iVar1,param_1);
  return;
}



void fn_0058b450(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058b480(iVar1,param_1);
  return;
}



void fn_0058b480(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_007c4db4,1);
  *puVar1 = &DAT_00843a84;
  return;
}



void fn_0058b420(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039b1e0();
  *puVar1 = &DAT_00843918;
  *(undefined1 *)(puVar1 + 0x46) = 0;
  return;
}


