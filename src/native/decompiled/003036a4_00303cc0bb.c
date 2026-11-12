#include "003036a4_00303cc0bb.h"



void fn_00303cc0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uStack_14;
  
  *(int *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x10) = (uint)(param_2 == 0);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0x1002;
  *(undefined4 *)(param_1 + 8) = 6;
  uStack_14 = param_4;
  fn_00303810(&uStack_14,param_1 + 0x18,0,param_4,param_3);
  piVar2 = (int *)fn_0030488c(&uStack_14,&DAT_008c3da0,1,0x20,&LAB_00104218_1);
  uVar1 = (**(code **)(*piVar2 + 0x30))(piVar2,0x20);
  fn_00303564(&uStack_14);
  *(undefined2 *)(param_1 + 0x3c) = uVar1;
  return;
}



void fn_00303cb0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003048b8();
  *puVar1 = &DAT_0085ad68;
  return;
}



int fn_00303c34(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  *param_1 = &DAT_0085ac10;
  param_1[1] = uVar1;
  iVar2 = fn_002feeb0(param_1 + 0xb);
  *(undefined **)(iVar2 + -0x2c) = &DAT_0085ab1c;
  iVar2 = fn_00304494(iVar2 + 4,param_2);
  iVar2 = fn_003040f4(iVar2 + 4,0xffffffff);
  iVar2 = fn_003040f4(iVar2 + 0xc,0xffffffff);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  fn_0010483c(iVar2 + -0x40,param_3,param_4);
  return iVar2 + -0x40;
}


