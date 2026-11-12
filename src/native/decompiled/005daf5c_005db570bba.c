#include "005daf5c_005db570bba.h"



void fn_005db510(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x110,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005db540(iVar1,param_1);
  return;
}



undefined4 * fn_005db4c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0056a644();
  *puVar1 = &DAT_0084d200;
  fn_00301f50(puVar1 + 5,0x8d8);
  *(undefined1 *)(puVar1 + 0x23b) = 0;
  *(undefined1 *)((int)puVar1 + 0x8ed) = 0;
  return puVar1;
}


