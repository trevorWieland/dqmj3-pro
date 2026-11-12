#include "0059e16c_0059e538aa.h"



void fn_0059e35c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0059e38c(iVar1,param_1);
  return;
}



undefined4 * fn_0059e2ac(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00846394;
  fn_0059e16c(param_1);
  uVar1 = param_1[4];
  uVar2 = uVar1;
  if ((uint)param_1[5] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[5]);
  }
  fn_001008c4(uVar1,(int)(param_1[6] - uVar1) >> 2,0);
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] <= uVar1) {
    for (; uVar2 != param_1[2]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[3] - uVar1) >> 2,0);
  return param_1;
}



void fn_0059e16c(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2 != 0) {
    do {
      uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
      if (uVar3 <= uVar4) {
        fn_002ff628(9,&DAT_008c7657,&DAT_008c7657,uVar4,uVar3);
      }
      piVar1 = *(int **)(*(int *)(param_1 + 4) + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2));
  }
  uVar4 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 != uVar4) {
    uVar2 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar4);
    }
    *(uint *)(param_1 + 8) = uVar4 - (uVar4 - uVar3 & 0xfffffffc);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar4 != uVar3) {
    uVar2 = uVar4;
    if (uVar3 <= uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar3);
    }
    *(uint *)(param_1 + 0x14) = uVar3 - (uVar3 - uVar4 & 0xfffffffc);
  }
  return;
}


