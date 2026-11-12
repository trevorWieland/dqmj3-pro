#include "00141554_00141a04babb.h"



bool fn_00141838(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  
  fn_001418e8();
  fn_00150b24(*param_1,3);
  puVar1 = (undefined4 *)fn_00150d40(*param_1,0x18,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = puVar1 + 3;
    puVar1[4] = puVar1 + 3;
    *(undefined1 *)(puVar1 + 5) = 1;
    fn_00150c68(puVar1 + 2,puVar1[3],puVar1 + 3,puVar1 + 2,unaff_r4);
    fn_0017d948(param_1 + 1,param_1 + 2,puVar1);
  }
  return puVar1 != (undefined4 *)0x0;
}


