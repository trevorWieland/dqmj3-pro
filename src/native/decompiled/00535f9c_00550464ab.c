#include "00535f9c_00550464ab.h"



void fn_00548e84(uint *param_1,uint param_2)

{
  uint uVar1;
  uint in_s0;
  uint in_s1;
  
  uVar1 = fn_0044ece8();
  param_1[1] = 0;
  param_1[2] = in_s0;
  param_1[3] = in_s1;
  *param_1 = uVar1 | (param_2 & 0x7f) << 0x18;
  return;
}



void fn_00548e34(uint *param_1,uint param_2)

{
  uint uVar1;
  uint in_s0;
  
  uVar1 = fn_0044ece8();
  param_1[1] = in_s0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  *param_1 = uVar1 | (param_2 & 0x7f) << 0x18 | 0x80000000;
  return;
}


