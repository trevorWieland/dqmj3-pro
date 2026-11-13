#include "005390a0_0053a474abb.h"



void fn_0053a384(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_008c3450;
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(DAT_008c3450 + 0x68) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(iVar1 + 0x60) = uVar3;
  *(undefined4 *)(iVar1 + 100) = uVar2;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  fn_0053dea0(param_1);
  fn_0053e260(param_1);
  return;
}


