#include "0061975c_00619f98b.h"



undefined4 fn_00619f98(undefined4 param_1,int param_2)

{
  if (param_2 != 0x1c4) {
    if (param_2 == 0x1d6) {
      return 0;
    }
    if (param_2 != 0x1e4 && param_2 != 0x1ea) {
      return param_1;
    }
  }
  return 5;
}



void fn_00619f64(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00654b60();
  *puVar1 = &DAT_008594a8;
  return;
}


