#include "single_001c8a8c_r.h"


extern undefined4 _SupervisorCall;

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_001c8a8c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  while( true ) {
    if (puVar2 == (undefined4 *)(param_1 + 0x44)) {
      return _SupervisorCall;
    }
    if (puVar2[-6] == param_2) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  uVar1 = fn_001c8ab4(puVar2 + -6);
  return uVar1;
}


