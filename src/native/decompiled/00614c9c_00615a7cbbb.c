#include "00614c9c_00615a7cbbb.h"



void fn_00615a4c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00615a7c(iVar1,param_1);
  return;
}



void fn_00615a7c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_007d47ac,2);
  *puVar1 = &DAT_00850984;
  return;
}


