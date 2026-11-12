#include "001a6fac_001a7bdcab.h"



void fn_001a7368(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  if (*(int *)(param_1 + 0xd0) != param_2 || param_4 != 0) {
    iVar4 = *(int *)(param_1 + 100);
    if (param_3 != 0) {
      local_1c = 0;
      local_1b = 0;
      local_1a = 0;
      local_19 = 0;
      local_20 = param_2;
      fn_001a759c(param_1,&local_20);
    }
    if (*(uint *)(param_1 + 0xa4) <= *(uint *)(param_1 + 0xa0)) {
      iVar3 = *(uint *)(param_1 + 0xa0) << 1;
      if (iVar3 == 0) {
        iVar3 = 4;
      }
      uVar1 = fn_0018388c(*(undefined4 *)(param_1 + 0x9c),*(uint *)(param_1 + 0xa4) << 3,iVar3 << 3
                          );
      *(undefined4 *)(param_1 + 0x9c) = uVar1;
      *(int *)(param_1 + 0xa4) = iVar3;
    }
    piVar2 = (int *)(*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0xa0) * 8);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_2;
      piVar2[1] = iVar4;
    }
    *(int *)(param_1 + 0xd0) = param_2;
  }
  return;
}



int fn_001a72b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == -1) {
    iVar3 = param_1;
    param_2 = fn_001a94c8(param_1);
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x14)) {
      iVar4 = *(uint *)(param_1 + 0x14) << 1;
      if (iVar4 == 0) {
        iVar4 = 4;
      }
      uVar1 = fn_0018388c(*(undefined4 *)(param_1 + 0x10),*(uint *)(param_1 + 0x18) << 2,iVar4 << 2
                           ,param_4,iVar3);
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      *(int *)(param_1 + 0x18) = iVar4;
    }
    piVar2 = (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  else {
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x14)) {
      iVar3 = *(uint *)(param_1 + 0x14) << 1;
      if (iVar3 == 0) {
        iVar3 = 4;
      }
      uVar1 = fn_0018388c(*(undefined4 *)(param_1 + 0x10),*(uint *)(param_1 + 0x18) << 2,iVar3 << 2
                           ,param_4,param_1);
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      *(int *)(param_1 + 0x18) = iVar3;
    }
    piVar2 = (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_2;
  }
  return param_2;
}



void fn_001a725c(int *param_1)

{
  int iVar1;
  undefined1 auStack_10 [8];
  
  fn_0019d970(auStack_10,param_1,0);
  while (*param_1 == 0x2c) {
    fn_001a9704(param_1[1]);
    iVar1 = fn_001a9c90(param_1 + 4);
    *param_1 = iVar1;
    fn_001a725c(param_1);
  }
  return;
}


