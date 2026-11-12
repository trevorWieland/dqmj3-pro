#include "003f7d6c_003f8304bb.h"



void fn_003f8304(void)

{
  return;
}



void fn_003f82b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &PTR_LAB_00835944;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 1;
  *(undefined1 *)((int)puVar1 + 0x12) = 1;
  *(undefined1 *)((int)puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  *(undefined1 *)((int)puVar1 + 0x16) = 0;
  return;
}



void fn_003f8258(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 1;
  return;
}



void fn_003f822c(int param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x10) = *param_2;
  *(undefined1 *)(param_1 + 0x11) = param_2[1];
  *(undefined1 *)(param_1 + 0x12) = param_2[2];
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  return;
}



void fn_003f820c(int param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 8) = 0x74;
  *(undefined1 *)(param_1 + 0x10) = *param_2;
  *(undefined1 *)(param_1 + 0x11) = param_2[1];
  *(undefined1 *)(param_1 + 0x12) = param_2[2];
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  return;
}


