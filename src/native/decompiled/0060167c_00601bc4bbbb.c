#include "0060167c_00601bc4bbbb.h"



int fn_00601bc4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0084ecb8;
  iVar2 = fn_006019ac(puVar1 + 2);
  *(undefined1 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  return iVar2 + -8;
}


