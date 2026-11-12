#include "00148b70_0015b140baba.h"



int fn_001560d8(uint *param_1,uint *param_2)

{
  int iVar1;
  uint local_18;
  uint uStack_14;
  
  iVar1 = fn_0014d7c0(&local_18,*param_1 & 0xfffffffe);
  if (iVar1 < 0) {
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    param_1[3] = local_18;
    param_1[4] = uStack_14;
    *param_2 = local_18;
    param_2[1] = uStack_14;
  }
  return iVar1;
}


