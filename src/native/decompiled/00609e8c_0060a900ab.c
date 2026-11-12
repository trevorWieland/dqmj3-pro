#include "00609e8c_0060a900ab.h"



void fn_0060a1e4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  fn_005ab934();
  fn_006094f8(param_1,0);
  fn_002317d8(&local_10,(int)*(short *)(param_1[0x39] + 0x50),1);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,local_10);
  fn_001588d4(&local_10);
  fn_0060a098(param_1);
  return;
}



void fn_0060a1c4(undefined4 param_1)

{
  fn_005ab930();
  fn_00609ad8(param_1);
  fn_0060a098(param_1);
  return;
}



void fn_0060a170(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x110,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0060a288(iVar1,param_1);
  return;
}



void fn_0060a138(int param_1)

{
  fn_005ab918();
  *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x34) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x30) = 0;
  fn_00689824(param_1);
  *(undefined1 *)(param_1 + 0x100) = 0xf;
  return;
}


