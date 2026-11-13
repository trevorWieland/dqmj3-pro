#include "0025e2b8_0025e8dcab.h"



void fn_0025e3d4(int param_1,int param_2)

{
  uint in_fpscr;
  
  if (param_2 == -1) {
    return;
  }
  *(char *)(param_1 + 0x30) = (char)param_2;
  VectorSignedToFloat(param_2 + 1,(byte)(in_fpscr >> 0x16) & 3);
  fn_0025e43c(param_1,0x22);
  fn_0025e43c(param_1,0x26);
  return;
}



void fn_0025e378(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  fn_0025e43c(param_1,0x22);
  fn_0025e43c(param_1,0x26);
  return;
}



void fn_0025e338(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(**(int **)(param_1 + 0x24) + 0x10))
            (*(int **)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x10));
  fn_0025e31c(*(undefined4 *)(param_1 + 0x24),0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x1c);
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined1 *)(iVar2 + 0x30) = 0xff;
  uVar3 = *(undefined4 *)(iVar1 + 0x40);
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined4 *)(iVar2 + 0x44) = uVar3;
  fn_0025e43c(iVar2,0x22);
  fn_0025e43c(iVar2,0x26);
  return;
}



void fn_0025e43c(int param_1,int param_2)

{
  int iVar1;
  float in_s0;
  float fVar2;
  float in_s1;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + param_2 * 4);
  fVar3 = *(float *)(iVar1 + 0x1c);
  fVar5 = *(float *)(iVar1 + 0x20);
  fVar4 = fVar3 + in_s0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + (param_2 + 1) * 4);
  fVar2 = fVar5 - in_s1;
  *(float *)(iVar1 + 0x1c) = fVar4;
  *(float *)(iVar1 + 0x20) = fVar5;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + (param_2 + 2) * 4);
  *(float *)(iVar1 + 0x1c) = fVar3;
  *(float *)(iVar1 + 0x20) = fVar2;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + (param_2 + 3) * 4);
  *(float *)(iVar1 + 0x1c) = fVar4;
  *(float *)(iVar1 + 0x20) = fVar2;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}


