#include "0058b5ec_0058c9a0bbb.h"



void fn_0058c9a0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



void fn_0058c968(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &DAT_00843e40;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}


