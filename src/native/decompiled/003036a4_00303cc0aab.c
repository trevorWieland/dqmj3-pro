#include "003036a4_00303cc0aab.h"



undefined4 * fn_0030382c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_00821720;
  fn_002feac8(param_1);
  fn_00424a1c(param_1);
  fn_002fef70(param_1);
  fn_002ffc58(param_1);
  fn_002fee00(param_1);
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 0xa4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  fn_0037bec8(param_1[0x12]);
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xa4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  uVar2 = param_1[0x13];
  uVar3 = param_1[0x14];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar3);
    }
    param_1[0x14] = uVar3 - (uVar3 - uVar2 & 0xfffffffc);
  }
  if (param_1[0x18] != 0) {
    fn_00424c9c();
    fn_002feef8();
  }
  uVar3 = param_1[0x13];
  uVar2 = uVar3;
  if ((uint)param_1[0x14] < uVar3) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x14]);
  }
  fn_001008c4(uVar3,(int)(param_1[0x15] - uVar3) >> 2,0);
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 4))();
  }
  uVar3 = param_1[0xf];
  uVar2 = uVar3;
  if ((uint)param_1[0x10] < uVar3) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x10]);
  }
  fn_001008c4(uVar3,(int)(param_1[0x11] - uVar3) >> 2,0);
  uVar3 = param_1[0xc];
  uVar2 = uVar3;
  if ((uint)param_1[0xd] <= uVar3) {
    for (; uVar2 != param_1[0xd]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar3,(int)(param_1[0xe] - uVar3) >> 2,0);
  uVar3 = param_1[9];
  uVar2 = uVar3;
  if ((uint)param_1[10] <= uVar3) {
    for (; uVar2 != param_1[10]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar3,(int)(param_1[0xb] - uVar3) >> 2,0);
  uVar3 = param_1[6];
  uVar2 = uVar3;
  if ((uint)param_1[7] <= uVar3) {
    for (; uVar2 != param_1[7]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar3,(int)(param_1[8] - uVar3) >> 2,0);
  uVar3 = param_1[3];
  uVar2 = uVar3;
  if ((uint)param_1[4] < uVar3) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[4]);
  }
  fn_001008c4(uVar3,(int)(param_1[5] - uVar3) >> 2,0);
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



bool fn_003037d8(int param_1,ushort param_2,int param_3)

{
  return (*(ushort *)(*(int *)(param_1 + 0x14) + param_3 * 2) & param_2) != 0;
}


