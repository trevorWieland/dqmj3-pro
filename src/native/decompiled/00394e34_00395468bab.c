#include "00394e34_00395468bab.h"



void fn_00395380(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003953b0(iVar1,param_1);
  return;
}



void fn_0039532c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0082b7f0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}


