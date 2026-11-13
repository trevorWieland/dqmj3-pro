#include "005b3c1c_005b4d04bba.h"



void fn_005b49a4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006f6a6c();
  if (iVar1 == 1) {
    fn_00689930(param_1,0xee,0);
    *(undefined **)(param_1 + 0xf8) = &DAT_005b49a0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  return;
}



void fn_005b47f8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  *puVar1 = &DAT_008482d0;
  *(undefined1 *)(puVar1 + 4) = 3;
  *(undefined1 *)((int)puVar1 + 0x11) = 1;
  puVar1[5] = 1;
  return;
}


