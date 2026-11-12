#include "004f7270_004f8dbcaab.h"



void fn_004f8204(int param_1)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  if (iVar3 != 0) {
    fn_00656b0c(iVar3);
    fn_00656b7c(iVar3);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (iVar3 != 0) {
    fn_00656b0c(iVar3);
    fn_00656b7c(iVar3);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (iVar3 != 0) {
    uVar1 = fn_00656b0c(iVar3);
    uVar4 = 0;
    iVar2 = uVar1 * 0x4ec4ec4f;
    if (uVar1 / 0x68 != 0) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + uVar4 * 0x68))();
        uVar4 = uVar4 + 1;
        iVar2 = extraout_r1;
      } while (uVar4 < uVar1 / 0x68);
    }
    fn_00656b7c(iVar3,iVar2);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar3 != 0) {
    fn_00656b0c(iVar3);
    fn_00656b7c(iVar3);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}



undefined4 fn_004f74e4(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return 0;
}


