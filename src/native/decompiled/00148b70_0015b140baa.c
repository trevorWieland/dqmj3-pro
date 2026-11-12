#include "00148b70_0015b140baa.h"



undefined4 fn_00153d6c(void)

{
  return *DAT_008bf77c;
}



void fn_00153cc8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  
  puVar1 = (undefined4 *)fn_00153bfc();
  puVar2 = puVar1 + 2;
  *puVar1 = &DAT_00858ed8;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1[3] = in_r3;
    *puVar2 = &DAT_00858eb4;
    puVar1[4] = in_stack_00000000;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0xffffffff;
  }
  puVar1[0xe] = puVar2;
  return;
}


