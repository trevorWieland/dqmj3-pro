#include "005390a0_0053a474b.h"



void fn_0053a474(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



void fn_0053a460(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



void fn_0053a3d4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + param_4 * 4) = param_3;
  iVar1 = param_1 + param_4 * 4;
  iVar2 = param_1 + param_4;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(iVar2 + 0x34) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(iVar2 + 0x36) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(iVar2 + 0x38) = *(undefined1 *)(param_2 + 0xe);
  if (param_4 == 0) {
    *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0xf);
  }
  *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_2 + 0x18);
  if (param_4 == 0) {
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1d);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x24);
    return;
  }
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  return;
}



void fn_0053a3c8(int param_1,undefined1 param_2,int param_3)

{
  *(undefined1 *)(param_1 + param_3 + 0x20) = param_2;
  return;
}


