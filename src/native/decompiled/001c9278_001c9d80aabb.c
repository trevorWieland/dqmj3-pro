#include "001c9278_001c9d80aabb.h"



void fn_001c9360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  int *piVar3;
  int *piVar4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x30) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x2c) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x28));
  }
  fn_001c93c8(*(undefined4 *)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 0x28);
  fn_001c9058();
  piVar4 = (int *)*(int *)(iVar1 + 0x14);
  while (piVar3 = piVar4, piVar3 != (int *)(iVar1 + 0x14)) {
    piVar4 = (int *)*piVar3;
    iVar2 = piVar3[-1];
    if (iVar2 < 1) {
      if (iVar2 == 0) {
        fn_001c8398(iVar1,iVar1 + 0x10,piVar3 + -0xb,param_4,unaff_r4,unaff_r5,unaff_r6,in_lr);
      }
    }
    else {
      piVar3[-1] = iVar2 + -1;
    }
  }
  return;
}


