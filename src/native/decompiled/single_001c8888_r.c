#include "single_001c8888_r.h"


extern undefined4 IRQ;

undefined4 fn_001c8888(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x5c);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0x5c)) {
      return 0;
    }
    if (puVar1[-6] == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  if (puVar1 == (undefined4 *)&IRQ) {
    return 0;
  }
  return puVar1[-1];
}


