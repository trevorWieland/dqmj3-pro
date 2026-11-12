#include "003f7d6c_003f8304aba.h"



void fn_003f7fdc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f800c(iVar1,param_1);
  return;
}



void fn_003f7eb4(int param_1,int param_2)

{
  undefined1 uVar1;
  byte bVar2;
  
  bVar2 = 0;
  do {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = fn_006b630c(*(undefined4 *)(DAT_00897804 + 8),bVar2);
    }
    *(undefined1 *)((char)bVar2 + param_1 + 0x25) = uVar1;
    bVar2 = bVar2 + 1;
  } while (bVar2 < 5);
  return;
}


