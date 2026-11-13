#include "006823b8_00683224ba.h"



void fn_00682c6c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_s0;
  
  param_1 = (undefined4 *)*param_1;
  if (*(char *)((int)param_1 + 0x17) == '\0') {
    fn_00682d14(param_1);
  }
  *(undefined1 *)((int)param_1 + 0x17) = 1;
  uVar1 = param_1[2];
  param_1[4] = in_s0;
  param_1[2] = in_s0;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[3] = uVar1;
  return;
}



undefined4 fn_00682c34(void)

{
  undefined4 uVar1;
  float in_s0;
  
  if ((in_s0 < DAT_008912a4) || (DAT_008912a4 + DAT_008912a8 < in_s0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_00682c10(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
  *(undefined1 *)(iVar1 + 0x17) = 0xff;
  return;
}


