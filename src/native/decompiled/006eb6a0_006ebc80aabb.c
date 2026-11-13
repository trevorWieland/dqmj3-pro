#include "006eb6a0_006ebc80aabb.h"



void fn_006eb824(int *param_1)

{
  uint uVar1;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  uVar1 = (uint)*(byte *)(*param_1 + 0x21);
  if (uVar1 != 0xff) {
    fn_00781854(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_8);
  }
  return;
}


