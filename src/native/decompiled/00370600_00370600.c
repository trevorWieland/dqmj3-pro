#include "00370600_00370600.h"



bool fn_00370600(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x18))();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x2c))();
  if (iVar2 == 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))();
  }
  fn_0023e6c8(*(undefined4 *)(param_1 + 0xc));
  (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  if ((*(int *)(DAT_00897850 + 0x34) != 0) && (iVar3 = fn_0066e3bc(DAT_00897850), 0 < iVar3)) {
    piVar1 = (int *)(param_1 + 0x28);
    iVar3 = *(int *)(*piVar1 + 0x3c);
    if (iVar3 != 0) {
      param_1 = *(int *)(iVar3 + 4);
    }
    if (iVar3 == 0 || param_1 == 0) {
      iVar3 = *(int *)(*piVar1 + 0x40);
      if (iVar3 != 0) {
        param_1 = *(int *)(iVar3 + 4);
      }
      if (iVar3 != 0 && param_1 != 0) {
        fn_007464bc(param_1);
        fn_007464c4(param_1);
      }
    }
    else {
      fn_00746608(param_1);
      fn_00746610(param_1);
    }
  }
  return iVar2 == 0;
}


