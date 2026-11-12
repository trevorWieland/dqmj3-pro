#include "005daf5c_005db570bab.h"



void fn_005db494(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8f0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005db4c4(iVar1,param_1);
  return;
}



bool fn_005db460(int param_1,uint param_2)

{
  return ((uint)*(byte *)(param_1 + 0x8ec) & 1 << (param_2 & 0xff)) != 0;
}


