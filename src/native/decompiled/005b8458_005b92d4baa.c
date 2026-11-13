#include "005b8458_005b92d4baa.h"



void fn_005b8c4c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_0089700c) goto LAB_005b8c94;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005b8c94:
  if (*(char *)(puVar2 + 9) != '\0') {
    fn_005b8a20(param_1);
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar1 == &DAT_0089700c) goto LAB_005b8cdc;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_005b8cdc:
    *(undefined1 *)(puVar2 + 9) = 0;
  }
  return;
}



void fn_005b89f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x6c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b8cec(iVar1,param_1);
  return;
}


