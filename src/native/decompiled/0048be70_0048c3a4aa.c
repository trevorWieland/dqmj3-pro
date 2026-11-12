#include "0048be70_0048c3a4aa.h"



void fn_0048be70(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    fn_006d2e24(*(undefined4 *)(param_1 + 0x38),&local_20);
    for (uVar1 = local_20; local_1c != uVar1; uVar1 = uVar1 + 0x20) {
    }
    if (local_20 < local_1c) {
      param_3 = local_1c - local_20;
    }
    if (local_20 < local_1c) {
      param_3 = param_3 << 0x1a;
    }
    if (local_20 < local_1c) {
      param_3 = param_3 >> 0x1f;
    }
    else {
      param_3 = 0;
    }
    for (iVar2 = param_3 + 1; iVar2 < ((int)(local_1c - local_20) >> 5) + 1; iVar2 = iVar2 + 2) {
    }
    if (local_20 != 0) {
      if (*(code **)(local_20 - 8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(local_20 - 8))();
      }
    }
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    fn_006d2e24(*(undefined4 *)(param_1 + 0x3c),&local_20);
    for (uVar1 = local_20; local_1c != uVar1; uVar1 = uVar1 + 0x20) {
    }
    if (local_20 < local_1c) {
      param_3 = local_1c - local_20;
    }
    if (local_20 < local_1c) {
      param_3 = param_3 << 0x1a;
    }
    if (local_20 < local_1c) {
      param_3 = param_3 >> 0x1f;
    }
    else {
      param_3 = 0;
    }
    for (iVar2 = param_3 + 1; iVar2 < ((int)(local_1c - local_20) >> 5) + 1; iVar2 = iVar2 + 2) {
    }
    if (local_20 != 0) {
      if (*(code **)(local_20 - 8) == (code *)0x0) {
        fn_0030233c();
        return;
      }
      (**(code **)(local_20 - 8))();
    }
  }
  return;
}


