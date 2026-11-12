#include "0030f244_00745064a.h"



void fn_00682a8c(void)

{
  if (DAT_00897894 != (int *)0x0) {
    (**(code **)(*DAT_00897894 + 0x58))();
  }
  DAT_00897894 = (int *)0x0;
  return;
}



void fn_0030f244(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(**(int **)(param_1 + 0x28) + 0x18))();
  fn_0023e6c8(*(undefined4 *)(param_1 + 8));
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  iVar1 = fn_0028e66c(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10));
  if (iVar1 == 0) {
    uVar2 = fn_00615ee4();
    fn_0010706c(uVar2,&LAB_001b5788,2);
    return;
  }
  return;
}


