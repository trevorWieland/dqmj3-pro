#include "00614c9c_00615a7cba.h"



void fn_00615950(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00898eac) goto LAB_00615994;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00615994:
  if (*(char *)(puVar1 + 9) == '\0') {
    uVar3 = fn_006e6eb0(puVar1 + 10,param_2);
  }
  else {
    uVar3 = fn_006e6e60();
  }
  fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar3);
  return;
}



void fn_0061589c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00898eac) goto LAB_006158dc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_006158dc:
  if (*(char *)(puVar1 + 9) == '\0') {
    fn_006e7080(puVar1 + 10);
    return;
  }
  fn_006e6fa4();
  return;
}



int fn_006157d8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_00850818;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  iVar2 = fn_00117074();
  return iVar2 + -0x10;
}


