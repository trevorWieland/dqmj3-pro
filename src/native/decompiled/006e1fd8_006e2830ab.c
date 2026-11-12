#include "006e1fd8_006e2830ab.h"



void fn_006e2630(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[1];
  uVar2 = param_1[4];
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *param_2 = *param_1;
  param_2[4] = uVar4;
  param_2[1] = uVar1;
  param_2[3] = uVar2;
  *(char *)(param_2 + 2) = (char)((uint)uVar3 >> 8);
  *(byte *)((int)param_2 + 9) = (byte)((uint)uVar3 >> 0x10) & 3;
  return;
}


