#include "single_006f9544_2.h"



void fn_006f9544(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_008bf790 + param_2 + 2 < DAT_008bf794) {
    if (param_2 != 0) {
      uVar1 = param_2 - 1;
      *DAT_008bf790 = 0;
      DAT_008bf790[1] = param_1 | uVar1 * 0x100000;
      if ((uVar1 & 1) != 0) {
        uVar1 = param_2;
      }
      DAT_008bf790 = DAT_008bf790 + uVar1 + 2;
    }
  }
  else {
    DAT_008bf790 = DAT_008bf794;
  }
  return;
}


