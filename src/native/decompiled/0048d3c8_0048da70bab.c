#include "0048d3c8_0048da70bab.h"



bool fn_0048d7e0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;
  
  if (param_2 == 0) {
    local_10 = 0;
    iVar1 = fn_0052b858(&local_10,2,2,0);
    if (iVar1 < 0) goto code_r0x0048d880;
LAB_0048d890:
    iVar1 = local_10;
  }
  else {
    if (param_2 != 1) {
      iVar1 = param_1[2];
      local_10 = param_4;
      goto LAB_0048d830;
    }
    local_10 = 0;
    iVar1 = fn_0052b858(&local_10,2,1,6);
    if (-1 < iVar1) goto LAB_0048d890;
code_r0x0048d880:
    iVar1 = fn_00529b0c();
  }
  param_1[2] = iVar1;
LAB_0048d830:
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x34))(param_1,0);
  }
  return -1 < iVar1;
}


