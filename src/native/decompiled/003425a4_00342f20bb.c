#include "003425a4_00342f20bb.h"



undefined4 * fn_00342f20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_003632b0();
  *puVar1 = &DAT_00824fb0;
  puVar1[0x40] = 0;
  puVar2 = (undefined4 *)fn_00689c1c(puVar1,0x73);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008943b0) goto LAB_00342f7c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00342f7c:
  puVar1[0x40] = puVar2;
  return puVar1;
}



void fn_00342ee0(int param_1)

{
  fn_003979ec();
  if ((*(byte *)(param_1 + 0xfc) < 2) || (*(byte *)(param_1 + 0xfc) != 2)) {
    return;
  }
  fn_006899f4(param_1,0xd6,0);
  return;
}


