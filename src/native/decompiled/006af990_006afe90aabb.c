#include "006af990_006afe90aabb.h"



int fn_006afabc(int param_1,int param_2)

{
  return (int)*(char *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x54);
}



undefined4 fn_006afa24(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_006af668();
  switch(uVar1) {
  case 0:
    uVar1 = fn_00154ac8(0x28);
    return uVar1;
  case 1:
    uVar1 = fn_00154ac8(0x29);
    return uVar1;
  case 2:
    uVar1 = fn_00154ac8(0x2a);
    return uVar1;
  case 3:
    uVar1 = fn_00154ac8(0x2b);
    return uVar1;
  case 4:
    uVar1 = fn_00154ac8(0x2c);
    return uVar1;
  case 5:
    uVar1 = fn_00154ac8(0x2d);
    return uVar1;
  default:
    return 0;
  case 9:
    uVar1 = fn_00154ac8(0x30);
    return uVar1;
  }
}


