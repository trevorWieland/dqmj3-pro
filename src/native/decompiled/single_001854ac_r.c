#include "single_001854ac_r.h"


extern undefined4 _PrefetchAbort;

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_001854ac(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  while( true ) {
    if (puVar2 == (undefined4 *)(param_1 + 0x44)) {
      return _PrefetchAbort;
    }
    if (puVar2[-6] == param_2) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  uVar1 = fn_001854d4(puVar2 + -6);
  return uVar1;
}


