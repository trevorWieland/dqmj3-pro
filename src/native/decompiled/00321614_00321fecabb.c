#include "00321614_00321fecabb.h"



void fn_00321a34(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00321a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 100) + 0x14))();
  return;
}



void fn_00321974(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_008943b0) goto LAB_003219b8;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003219b8:
  *(undefined4 **)(param_1 + 0x74) = puVar2;
  fn_003f809c(puVar2);
  fn_00321a48(param_1);
  return;
}


