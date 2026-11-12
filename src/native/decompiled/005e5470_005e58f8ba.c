#include "005e5470_005e58f8ba.h"



void fn_005e5874(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  return;
}



void fn_005e581c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  fn_005e6ae8(iVar2 + 8);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined2 *)(iVar2 + 0x14) = 0xffff;
  *(undefined2 *)(iVar2 + 0x16) = 0xffff;
  iVar1 = fn_005e19c8(iVar2 + 8);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  return;
}


