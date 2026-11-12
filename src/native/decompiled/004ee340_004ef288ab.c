#include "004ee340_004ef288ab.h"



int fn_004eea84(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 10) {
    iVar1 = param_1 + param_2 * 0x68 + 8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 * fn_004eea3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = &DAT_00856d08;
  iVar1 = fn_004ee7b0(param_1,1,param_2,param_3);
  if (iVar1 < 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}



undefined4 * fn_004eea00(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00856d08;
  iVar1 = fn_004ee7b0(param_1);
  if (iVar1 < 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}


