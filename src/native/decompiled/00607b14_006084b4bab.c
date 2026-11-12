#include "00607b14_006084b4bab.h"



void fn_00608388(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006083c4(iVar1,param_1);
  return;
}



void fn_00608354(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  *puVar1 = &DAT_0084fa64;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}


