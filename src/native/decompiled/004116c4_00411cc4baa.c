#include "004116c4_00411cc4baa.h"



void fn_00411a6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x24,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00411a9c(iVar1,param_1);
  return;
}



void fn_00411a3c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_00838a08;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}


