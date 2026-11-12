#include "00616964_00616964.h"



void fn_00616964(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  *param_1 = &DAT_00850a9c;
  fn_0061685c(param_1);
  if ((param_1[1] & 0x80000000) == 0) {
    fn_0024d73c(param_1[0x23] + 0x44,param_1);
  }
  if (param_1[0x20] != 0) {
    for (uVar1 = 0; uVar1 < (uint)param_1[0x1f]; uVar1 = uVar1 + 1) {
    }
    fn_0019d680(param_1[0x1e],param_1[0x20] << 4);
  }
  if (param_1[0x1d] != 0) {
    uVar1 = 0;
    if (param_1[0x1c] != 0) {
      do {
        iVar2 = param_1[0x1b] + uVar1 * 0x30;
        if (((*(uint *)(iVar2 + 8) & 0x8000000) != 0) &&
           (iVar4 = *(int *)(*(int *)(iVar2 + 0xc) + 4) + -1,
           *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar4, iVar4 == 0)) {
          (**(code **)(**(int **)(iVar2 + 0xc) + 8))();
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)param_1[0x1c]);
    }
    fn_0019d680(param_1[0x1b],param_1[0x1d] * 0x30);
  }
  if (((param_1[0x16] & 0x8000000) != 0) &&
     (iVar2 = *(int *)(param_1[0x17] + 4) + -1, *(int *)(param_1[0x17] + 4) = iVar2, iVar2 == 0)) {
    (**(code **)(*(int *)param_1[0x17] + 8))();
  }
  if (((param_1[0x14] & 0x8000000) != 0) &&
     (iVar2 = *(int *)(param_1[0x15] + 4) + -1, *(int *)(param_1[0x15] + 4) = iVar2, iVar2 == 0)) {
    (**(code **)(*(int *)param_1[0x15] + 8))();
  }
  if (((param_1[0x12] & 0x8000000) != 0) &&
     (iVar2 = *(int *)(param_1[0x13] + 4) + -1, *(int *)(param_1[0x13] + 4) = iVar2, iVar2 == 0)) {
    (**(code **)(*(int *)param_1[0x13] + 8))();
  }
  if (((param_1[0x10] & 0x8000000) != 0) &&
     (iVar2 = *(int *)(param_1[0x11] + 4) + -1, *(int *)(param_1[0x11] + 4) = iVar2, iVar2 == 0)) {
    (**(code **)(*(int *)param_1[0x11] + 8))();
  }
  if (((param_1[0xe] & 0x8000000) != 0) &&
     (iVar2 = *(int *)(param_1[0xf] + 4) + -1, *(int *)(param_1[0xf] + 4) = iVar2, iVar2 == 0)) {
    (**(code **)(*(int *)param_1[0xf] + 8))();
  }
  if (param_1[0xb] != 0) {
    uVar1 = 0;
    if (param_1[10] != 0) {
      do {
        puVar3 = (uint *)(param_1[9] + uVar1 * 8);
        if (((*puVar3 & 0x8000000) != 0) &&
           (iVar2 = *(int *)(puVar3[1] + 4) + -1, *(int *)(puVar3[1] + 4) = iVar2, iVar2 == 0)) {
          (**(code **)(*(int *)puVar3[1] + 8))();
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)param_1[10]);
    }
    fn_0019d680(param_1[9],param_1[0xb] << 3);
  }
  if (param_1[8] != 0) {
    uVar1 = 0;
    if (param_1[7] != 0) {
      do {
        puVar3 = (uint *)(param_1[6] + uVar1 * 8);
        if (((*puVar3 & 0x8000000) != 0) &&
           (iVar2 = *(int *)(puVar3[1] + 4) + -1, *(int *)(puVar3[1] + 4) = iVar2, iVar2 == 0)) {
          (**(code **)(*(int *)puVar3[1] + 8))();
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)param_1[7]);
    }
    fn_0019d680(param_1[6],param_1[8] << 3);
  }
  *param_1 = &DAT_0081d020;
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = 0x1000001;
    *(undefined4 *)(param_1[2] + 0x10) = 0;
  }
  return;
}


