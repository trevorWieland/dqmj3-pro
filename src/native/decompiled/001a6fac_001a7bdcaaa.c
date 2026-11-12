#include "001a6fac_001a7bdcaaa.h"



void fn_001a6fac(undefined4 *param_1,undefined1 param_2,code *param_3,uint param_4,
                 undefined1 param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  uVar2 = fn_001a9c90(param_1 + 4);
  *param_1 = uVar2;
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *(int *)((int)param_1 + ((int)param_4 >> 1)));
  }
  (*param_3)();
  uVar2 = fn_001a9704(param_1[1]);
  uVar1 = fn_001a9704(param_1[1]);
  uVar3 = param_1[1];
  local_1b = fn_001a72b0(uVar3,0xffffffff);
  local_19 = param_5;
  local_20 = uVar2;
  local_1c = param_2;
  local_1a = uVar1;
  fn_001a759c(uVar3,&local_20);
  return;
}


