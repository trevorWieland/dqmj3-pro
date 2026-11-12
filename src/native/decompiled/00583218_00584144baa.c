#include "00583218_00584144baa.h"



void fn_00583f88(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00583fb8(iVar1,param_1);
  return;
}



void fn_00583fb8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_00894d88,7);
  *puVar1 = &DAT_00842dfc;
  return;
}


