#include "005a51a0_005a6058aa.h"



void fn_005a52b4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005a52e4(iVar1,param_1);
  return;
}



void fn_005a520c(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



void fn_005a51a0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_005a51e4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005a51e4:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}


