#include "003fee48_00400f34aba.h"



void fn_003ff730(int param_1,int param_2)

{
  if (param_2 == 0) {
    fn_003fee88();
    *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x18) = 0;
    return;
  }
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0xf0) = 2;
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_003ff700(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xfc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003ff840(iVar1,param_1);
  return;
}


