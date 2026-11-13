#include "00338e04_003398b0ba.h"



void fn_003392a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00339850(iVar1,param_1);
  return;
}



bool fn_0033928c(int param_1)

{
  return *(char *)(param_1 + 0x90) == '\v';
}



void fn_00339254(int param_1)

{
  fn_00190e00(*(undefined4 *)(param_1 + 0x74));
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(byte *)(*(int *)(param_1 + 0x68) + 0x44) = *(byte *)(*(int *)(param_1 + 0x68) + 0x44) & 0xfe | 1
  ;
  return;
}


