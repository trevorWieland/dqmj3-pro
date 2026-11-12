#include "00300420_00300950aab.h"



void fn_00300604(void)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = fn_0010048a();
  pcVar2 = *(code **)(iVar1 + 0x10);
  if (pcVar2 == (code *)0x0) {
    (**(code **)(iVar1 + 8))();
  }
  else {
    *(undefined4 *)(iVar1 + 0x10) = 0;
    (*pcVar2)();
  }
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}


