#include "004228d0_004231f0abb.h"



undefined4 * fn_00422dcc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0083ad88;
  puVar1[0x19] = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x2f);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951c0) goto LAB_00422e2c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00422e2c:
  puVar1[0x19] = puVar2;
  return puVar1;
}



void fn_00422d9c(int param_1,uint param_2)

{
  if ((param_2 & 0x100000) == 0) {
    if ((param_2 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 100) + 0x18) = 2;
      return;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 100) + 0x18) = 1;
  }
  return;
}


