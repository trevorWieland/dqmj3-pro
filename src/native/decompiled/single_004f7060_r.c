#include "single_004f7060_r.h"


extern undefined4 _local_28;

void fn_004f7060(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 local_24;
  
  if (*(byte *)(DAT_008bf4e0 + 99) < 0xc) {
    local_2c = *(undefined4 *)(param_1 + 0xc);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                      (*(int **)(param_1 + 0x10),&local_2c,param_2,8,0);
    if (iVar1 - 0x100000U < 0x3ff00000) {
      local_24 = 0;
      _local_28 = CONCAT13(param_5,CONCAT12(param_4,CONCAT11(param_3,0x24)));
      fn_004ed514(&local_24,param_6);
      fn_00516df8(iVar1,&local_28,0,8);
      fn_0050a490(*(undefined4 *)(param_1 + 0x10));
    }
  }
  return;
}


