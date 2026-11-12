#include "005302c8_00531388b.h"



undefined4 fn_00531388(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_r12;
  
  uVar4 = *(undefined4 *)(param_1 + 0x14c);
  iVar1 = *(int *)(param_1 + 0x150);
  if (*(int *)(param_1 + 0x158) == 2) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
    iVar3 = *(int *)(param_1 + 0x148);
    if (iVar3 != 0) {
      in_r12 = *(int *)(param_1 + 0x14c);
    }
    if (iVar3 == 0 || in_r12 == 0) {
      if (*(int *)(iVar1 + 0xe4) != param_1) {
        if (*(int *)(iVar1 + 0xec) != param_1) goto LAB_005314a0;
        *(int *)(iVar1 + 0xec) = iVar3;
        iVar3 = *(int *)(param_1 + 0x148);
        if (iVar3 == 0) {
          *(undefined4 *)(iVar1 + 0xe4) = 0;
          goto LAB_005314a0;
        }
        goto LAB_00531498;
      }
      *(undefined4 *)(iVar1 + 0xe4) = *(undefined4 *)(param_1 + 0x14c);
      iVar3 = *(int *)(param_1 + 0x14c);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + 0xec) = 0;
        goto LAB_005314a0;
      }
      goto LAB_00531470;
    }
LAB_005313c8:
    *(int *)(iVar3 + 0x14c) = in_r12;
    uVar2 = *(undefined4 *)(param_1 + 0x148);
    iVar3 = *(int *)(param_1 + 0x14c);
  }
  else {
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
    iVar3 = *(int *)(param_1 + 0x148);
    if (iVar3 != 0) {
      in_r12 = *(int *)(param_1 + 0x14c);
    }
    if (iVar3 != 0 && in_r12 != 0) goto LAB_005313c8;
    if (*(int *)(iVar1 + 0xe0) != param_1) {
      if (*(int *)(iVar1 + 0xe8) != param_1) goto LAB_005314a0;
      *(int *)(iVar1 + 0xe8) = iVar3;
      iVar3 = *(int *)(param_1 + 0x148);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + 0xe0) = 0;
        goto LAB_005314a0;
      }
LAB_00531498:
      *(undefined4 *)(iVar3 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
      goto LAB_005314a0;
    }
    *(undefined4 *)(iVar1 + 0xe0) = *(undefined4 *)(param_1 + 0x14c);
    iVar3 = *(int *)(param_1 + 0x14c);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0xe8) = 0;
      goto LAB_005314a0;
    }
LAB_00531470:
    uVar2 = *(undefined4 *)(param_1 + 0x148);
  }
  *(undefined4 *)(iVar3 + 0x148) = uVar2;
LAB_005314a0:
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (*(int *)(param_1 + 0x154) != 0) {
    fn_0053e98c(**(undefined4 **)(*(int *)(param_1 + 0x150) + 0x1c));
  }
  return uVar4;
}


