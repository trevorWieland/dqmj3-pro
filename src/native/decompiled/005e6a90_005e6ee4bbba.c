#include "005e6a90_005e6ee4bbba.h"



int fn_005e6e34(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  
  *param_1 = &DAT_00858b94;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  param_1[1] = *param_2;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  iVar1 = fn_00153930(param_1 + 6);
  local_28 = 0xf0;
  local_24 = 400;
  local_20 = 0x8058;
  local_1e = 0x88f0;
  local_1c = 0;
  local_18 = 0;
  local_28 = fn_006ec050(param_3);
  local_24 = fn_006ec05c(param_3);
  local_1c = fn_006ec038(param_3);
  local_20 = fn_006ec020(param_3);
  local_1e = 0;
  fn_0015382c(iVar1,&local_28);
  return iVar1 + -0x18;
}


