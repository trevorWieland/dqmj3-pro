#include "0057040c_0057140cabb.h"



void fn_00570d6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00570fc8(iVar1,param_1);
  return;
}



void fn_00570aac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00840a70;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  return;
}


