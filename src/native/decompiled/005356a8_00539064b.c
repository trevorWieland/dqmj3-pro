#include "005356a8_00539064b.h"



void fn_00539064(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_008c3450;
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(DAT_008c3450 + 0x60) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(iVar1 + 100) = uVar3;
  *(undefined4 *)(iVar1 + 0x68) = uVar2;
  fn_0053dea0(param_1);
  fn_0053e260(param_1);
  return;
}



undefined4 * fn_00537f8c(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  param_2[2] = 0;
  param_2[3] = 0x3f02c1;
  *param_2 = 0x80000055;
  param_2[1] = 0xf02c0;
  param_2[4] = param_3[2];
  param_2[5] = param_3[1];
  param_2[6] = *param_3;
  param_2[7] = 0;
  return param_2 + 8;
}



void fn_00537ed0(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_90 [100];
  undefined1 local_2c [36];
  
  fn_0016fd44(auStack_90);
  fn_006ced78(local_2c,param_2);
  return;
}


