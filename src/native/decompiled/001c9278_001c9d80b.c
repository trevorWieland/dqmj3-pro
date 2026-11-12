#include "001c9278_001c9d80b.h"



void fn_001c9d80(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x50) + param_2 * 4) != 0) {
    fn_00689b30(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x50) + param_2 * 4) = 0;
  }
  return;
}



void fn_001c9d44(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(*(int *)(param_1 + 0x50) + param_2 * 4) == 0) {
    fn_00689a00(param_1,param_3,param_4);
    *(undefined4 *)(*(int *)(param_1 + 0x50) + param_2 * 4) = param_3;
  }
  return;
}



void fn_001c9cf4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
  *(int *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x30) = param_3;
  param_2 = *(int *)(param_1 + 0x3c) * param_3 + param_2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + param_2 * 4);
  if (*(int *)(param_1 + 0x60) != iVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x94);
    *(int *)(param_1 + 100) = iVar1;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x98) = param_2;
    *(int *)(param_1 + 0x60) = iVar1;
    *(int *)(param_1 + 0x94) = param_2;
    *(undefined4 *)(param_1 + 0x9c) = uVar2;
  }
  return;
}



void fn_001c9cac(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2 != 0) {
    do {
      puVar2 = (undefined1 *)(*(int *)(param_1 + 0xd8) + uVar1 * 8);
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2));
  }
  return;
}



void fn_001c9c44(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0068b334(param_2);
  param_3 = param_4 * *(int *)(param_1 + 0x3c) + param_3;
  iVar2 = 0;
  if (0 < iVar1 + 1) {
    do {
      *(char *)(*(int *)(param_1 + 0xd8) + (iVar2 * *(int *)(param_1 + 0x3c) + param_3) * 8) =
           (char)iVar1;
      *(int *)(*(int *)(param_1 + 0xd8) + (iVar2 * *(int *)(param_1 + 0x3c) + param_3) * 8 + 4) =
           iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1 + 1);
  }
  return;
}



int fn_001c9c24(int param_1)

{
  return (int)*(char *)(*(int *)(param_1 + 0xd8) +
                       (*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x3c) +
                       *(int *)(param_1 + 0x2c)) * 8);
}



int fn_001c9c0c(int param_1,int param_2,int param_3)

{
  return (int)*(char *)(*(int *)(param_1 + 0xd8) +
                       (param_3 * *(int *)(param_1 + 0x3c) + param_2) * 8);
}



void fn_001c9ba0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4);
  if (*(int *)(param_1 + 0x60) != iVar4) {
    if (*(int *)(param_1 + 0x10) != 0) {
      fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
    }
    uVar1 = *(undefined4 *)(param_1 + 0x60);
    uVar2 = *(undefined4 *)(param_1 + 0x94);
    *(int *)(param_1 + 100) = iVar4;
    *(int *)(param_1 + 0x98) = iVar3;
    *(int *)(param_1 + 0x60) = iVar4;
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(int *)(param_1 + 0x94) = iVar3;
    *(undefined4 *)(param_1 + 0x9c) = uVar2;
  }
  return;
}


