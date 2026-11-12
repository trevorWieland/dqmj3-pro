#include "00439e58_0043a700aba.h"



void fn_00439f9c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x5f);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895b30) goto LAB_00439fe4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00439fe4:
  if (*(int *)(param_1 + 0x8c) == 0) {
    fn_00689930(param_1,0x5f,0);
    return;
  }
  if (*(char *)(puVar1 + 2) != '\0') {
    *(code **)(param_1 + 0x80) = fn_00439f48;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}


