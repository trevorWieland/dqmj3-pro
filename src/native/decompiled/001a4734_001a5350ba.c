#include "001a4734_001a5350ba.h"



void fn_001a51e0(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  if ((uint)param_1[2] < param_2) {
    uVar2 = param_2;
    if (param_2 == 0) {
      uVar2 = 4;
    }
    iVar1 = fn_0018388c(*param_1,param_1[2] << 4,uVar2 << 4);
    *param_1 = iVar1;
    param_1[2] = uVar2;
  }
  if ((uint)param_1[1] < param_2) {
    do {
      puVar3 = (undefined4 *)(*param_1 + param_1[1] * 0x10);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0x1000001;
        puVar3[1] = 0;
        puVar3[2] = 0x1000001;
        puVar3[3] = 0;
        fn_0019e864(puVar3,param_3);
        fn_0019e864(puVar3 + 2,param_3 + 8);
      }
      iVar1 = param_1[1];
      param_1[1] = iVar1 + 1U;
    } while (iVar1 + 1U < param_2);
    return;
  }
  uVar2 = param_2;
  if (param_1[1] != param_2) {
    do {
      puVar4 = (uint *)(*param_1 + uVar2 * 0x10);
      if (((puVar4[2] & 0x8000000) != 0) &&
         (iVar1 = *(int *)(puVar4[3] + 4) + -1, *(int *)(puVar4[3] + 4) = iVar1, iVar1 == 0)) {
        (**(code **)(*(int *)puVar4[3] + 8))();
      }
      if (((*puVar4 & 0x8000000) != 0) &&
         (iVar1 = *(int *)(puVar4[1] + 4) + -1, *(int *)(puVar4[1] + 4) = iVar1, iVar1 == 0)) {
        (**(code **)(*(int *)puVar4[1] + 8))();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  param_1[1] = param_2;
  return;
}



void fn_001a4a68(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff | (param_2 & 0xff) << 8;
  *param_1 = uVar1 | uVar1 << 0x10;
  return;
}


