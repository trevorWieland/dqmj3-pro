#include "0044889c_004496c8ba.h"



void fn_00449240(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x104,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00449688(iVar1,param_1);
  return;
}



void fn_004490bc(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_00449100;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00449100:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}



void fn_00449068(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_004490b0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_004490b0:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}


