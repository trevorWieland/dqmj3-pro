#include "00734c5c_00737d6cabba.h"



void fn_007350e4(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0x800) {
    uVar1 = 0;
  }
  else {
    if (param_1 != 0x801) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(DAT_008bfab0 + 0xc) = uVar1;
  return;
}


