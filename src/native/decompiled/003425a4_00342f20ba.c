#include "003425a4_00342f20ba.h"



void fn_00342e34(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = fn_00660e0c((int)*(short *)(param_1 + 0xf8));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    iVar1 = fn_003425a4(param_1);
    if (iVar1 == 0) {
      fn_00342448(param_1);
      return;
    }
  }
  else {
    iVar1 = fn_003631a0();
    if (iVar1 != 0) {
      fn_00689824(param_1,0);
      *(undefined1 *)(param_1 + 0xfc) = 2;
    }
  }
  return;
}



void fn_00342e04(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x104,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00342f20(iVar1,param_1);
  return;
}


