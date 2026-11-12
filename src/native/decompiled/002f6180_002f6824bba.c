#include "002f6180_002f6824bba.h"



void fn_002f672c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089711c) goto LAB_002f6774;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f6774:
  fn_006c8318(puVar1);
  return;
}



void fn_002f66b8(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = DAT_008977ec;
  fn_002f4b5c(DAT_008977ec);
  uVar3 = fn_002f8914();
  iVar4 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),uVar3);
  bVar1 = *(byte *)(iVar4 + 0x3c3);
  uVar3 = fn_002f8914();
  uVar3 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),uVar3);
  fn_003e8d3c(*(undefined4 *)(iVar2 + 0x2c),uVar3,param_1,bVar1 < 4);
  return;
}


