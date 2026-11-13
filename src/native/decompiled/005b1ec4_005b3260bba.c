#include "005b1ec4_005b3260bba.h"



void fn_005b31bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x118,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b31ec(iVar1,param_1);
  return;
}



void fn_005b3170(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_00847ff0;
  *(undefined1 *)(puVar1 + 2) = 2;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}


