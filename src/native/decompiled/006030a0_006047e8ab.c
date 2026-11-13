#include "006030a0_006047e8ab.h"



void fn_0060348c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) goto LAB_006034d0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_006034d0:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}



void fn_00603438(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) goto LAB_00603480;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00603480:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



void fn_00603204(undefined4 *param_1)

{
  *param_1 = &DAT_0084f214;
  fn_002feef8(param_1[5]);
  fn_003953e8(param_1);
  fn_002feef8();
  return;
}



void fn_006031d4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = &DAT_0084f214;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
  *(undefined1 *)((int)puVar1 + 0x19) = 1;
  puVar1[7] = 0;
  return;
}


