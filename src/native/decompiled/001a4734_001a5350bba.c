#include "001a4734_001a5350bba.h"



undefined8 fn_001a530c(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint in_r12;
  
  uVar1 = 0;
  uVar2 = in_r12 & 0xf;
  if (uVar2 == 9) {
    if ((in_r12 & 0x100000) == 0) {
      return 0x7ff8000000000000;
    }
    if ((in_r12 & 0x70000) == 0) {
      return 0x7ff8000030000000;
    }
    return CONCAT44(~(in_r12 << 0xf) << 1,8);
  }
  if (uVar2 == 10) {
    if ((in_r12 & 0x40) != 0) {
      uVar1 = 0x80000000;
    }
    return CONCAT44(0x7ff80000,uVar1);
  }
  if (uVar2 != 8) {
    return 0x7ff8000000000000;
  }
  if ((in_r12 & 0x40) != 0) {
    return 0;
  }
  if ((in_r12 & 0x10) == 0) {
    return 0x7ff800007fc00000;
  }
  return 0;
}


