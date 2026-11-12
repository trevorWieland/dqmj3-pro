#include "single_006eb7c0_r.h"


extern undefined4 _local_8;

int fn_006eb7c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char local_8;
  undefined3 uStack_7;
  
  _local_8 = CONCAT31((int3)((uint)param_4 >> 8),1);
  uVar1 = (uint)*(byte *)(*param_1 + 0x24);
  if (uVar1 != 0xff) {
    fn_006e09a0(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),&local_8);
  }
  return (int)local_8;
}


