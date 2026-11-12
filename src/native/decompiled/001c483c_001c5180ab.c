#include "001c483c_001c5180ab.h"



undefined4 fn_001c49cc(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  if (0 < param_2) {
    uVar5 = fn_001d9f6c(param_1,0x7549);
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0x41f00000;
  param_1[0x3d] = 0;
  (**(code **)(*param_1 + 0x54))(param_1,1);
  fn_001d96a0(param_1,&DAT_007bd8c8);
  param_1[0x4e] = param_1[0x4e] | 0xc;
  iVar1 = param_1[0x5c];
  iVar3 = *(int *)(iVar1 + 0x30);
  iVar4 = *(int *)(iVar1 + 0x34);
  param_1[8] = *(int *)(iVar1 + 0x2c);
  param_1[9] = iVar3;
  param_1[10] = iVar4;
  if ((*(byte *)(iVar1 + 8) & 8) == 0) {
    param_1[0x5a] = 0;
    (**(code **)(*param_1 + 0xd8))(param_1);
    (**(code **)(*param_1 + 300))(param_1,0);
    (**(code **)(*param_1 + 0x58))(param_1,0);
    uVar2 = param_1[0x4e] | 2;
  }
  else {
    param_1[0x5a] = 2;
    (**(code **)(*param_1 + 0xd8))(param_1);
    (**(code **)(*param_1 + 300))(param_1,1);
    (**(code **)(*param_1 + 0x58))(param_1,1);
    uVar2 = param_1[0x4e] & 0xfffffffd;
  }
  param_1[0x4e] = uVar2;
  return uVar5;
}



void fn_001c4990(int *param_1)

{
  (**(code **)(*param_1 + 300))(param_1,0);
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001da39c(param_1);
  return;
}



void fn_001c4924(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if (*(int *)(*(int *)(param_1 + 0x170) + 0x28) == -1) {
      uVar1 = fn_006f72b4(DAT_008977e0);
      uVar1 = fn_0021ed50(uVar1,1,param_1 + 0x20,0);
      *(undefined4 *)(*(int *)(param_1 + 0x170) + 0x28) = uVar1;
    }
    uVar1 = fn_006f756c(DAT_008977e0);
    fn_002d8890(uVar1,**(undefined4 **)(param_1 + 0x170));
  }
  fn_001da0b0(param_1,param_2);
  return;
}


