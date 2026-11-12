#include "single_00687fc4_r.h"


extern undefined4 _local_20;

void fn_00687fc4(int param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined3 local_20;
  undefined1 local_1d;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0x10) != 0xffff) {
      _local_20 = CONCAT13(param_2,0xffffff);
      uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
      fn_0017fc08(uVar1,*(undefined4 *)(param_1 + 0x10),&local_20);
    }
    if (*(int *)(param_1 + 0x14) != 0xffff) {
      _local_20 = CONCAT13(param_3,0xffffff);
      uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
      fn_0017fc08(uVar1,*(undefined4 *)(param_1 + 0x14),&local_20);
    }
    if (*(int *)(param_1 + 0x18) != 0xffff) {
      _local_20 = CONCAT13(param_3,0xffffff);
      uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
      fn_0017fc08(uVar1,*(undefined4 *)(param_1 + 0x18),&local_20);
    }
  }
  return;
}


