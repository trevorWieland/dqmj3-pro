#include "003a0410_003a1bc0ab.h"



void fn_003a0bb0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003a0be4(iVar1,param_1);
  return;
}



void fn_003a0be4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0082d69c;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  return;
}



void fn_003a0710(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0xffffffff;
  *puVar1 = &DAT_0082d58c;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return;
}


