#include "00445058_00445670aa.h"



void fn_0044517c(int param_1)

{
  fn_0037cb88(*(undefined4 *)(param_1 + 0x10));
  return;
}



void fn_00445154(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_002febd8(param_2);
  fn_001782b8(param_1 + 0x14,param_2,iVar1 + 1);
  return;
}



void fn_00445058(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x118,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00445088(iVar1,param_1);
  return;
}



void fn_00445088(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004117bc(param_1,param_2,0,0x7c);
  *puVar1 = &DAT_0083e3fc;
  return;
}


