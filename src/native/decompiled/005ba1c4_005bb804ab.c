#include "005ba1c4_005bb804ab.h"



void fn_005bae98(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_005bc990();
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008946d4) goto LAB_005baee8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005baee8:
  *(undefined4 **)(param_1 + 0x104) = puVar1;
  return;
}



void fn_005ba2a4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005bb974();
  *puVar1 = &DAT_00849248;
  return;
}


