#include "003036a4_00303cc0ab.h"



int fn_00303b14(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0030447c(param_2);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &DAT_0085abd0;
  param_1[1] = uVar1;
  iVar2 = fn_002feeb0(param_1 + 0xb);
  *(undefined **)(iVar2 + -0x2c) = &DAT_0085aadc;
  iVar2 = fn_00304494(iVar2 + 4,param_2);
  iVar2 = fn_003040f4(iVar2 + 4,0xffffffff);
  iVar2 = fn_003040f4(iVar2 + 0xc,0xffffffff);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  fn_00104528(iVar2 + -0x40,param_3,param_4);
  return iVar2 + -0x40;
}



undefined4 fn_00303afc(int *param_1)

{
  if (*param_1 == 0) {
    *param_1 = 1;
    return 1;
  }
  return 0;
}



void fn_00303ae8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = param_2;
  *param_1 = &DAT_0085aa34;
  return;
}


