#include "0060b818_0060c160aba.h"



void fn_0060b968(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  uint unaff_r6;
  uint in_r12;
  
  iVar1 = fn_00147e6c(param_3,param_2,6);
  uVar2 = fn_00154ac8(param_4);
  param_1[3] = param_5 & 0xff | unaff_r6 & 0xffffff00;
  param_1[5] = param_7 & 0xffff | in_r12 & 0xffff0000;
  *param_1 = param_4;
  param_1[1] = (uVar2 & 0xff) << 8 | param_3 & 0xffff0000 | (uint)(iVar1 == 0);
  param_1[2] = param_4;
  param_1[4] = param_6;
  return;
}


