#include "00234424_00234c60aa.h"



void fn_00234438(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00234450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



void fn_00234424(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(**(int **)(param_1 + 4) + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(int **)(param_1 + 4) + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00234450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}


