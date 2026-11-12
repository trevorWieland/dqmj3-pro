#include "00401ee4_00402fccaa.h"



void fn_00401f14(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0025dbc4();
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_00401f5c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00401f5c:
  if (*(char *)(puVar2 + 0x23d) == '\0') {
    return;
  }
  fn_00401bac(param_1);
  return;
}



void fn_00401ee4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00401f7c(iVar1,param_1);
  return;
}


