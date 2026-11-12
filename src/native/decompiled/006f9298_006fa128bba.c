#include "006f9298_006fa128bba.h"



void fn_006f9f20(void)

{
  uint uVar1;
  uint in_s0;
  
  uVar1 = ((in_s0 & 0x7fffffff) >> 0x17) - 0x7f;
  if (0x16 < (int)uVar1) {
    return;
  }
  if (((int)uVar1 < 0) || ((in_s0 & 0x7fffffU >> (uVar1 & 0xff)) != 0)) {
    return;
  }
  return;
}


