#include "001bddb8_001be674ab.h"



undefined4 fn_001be5ac(int param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = param_1 - 0x30;
  if (9 < uVar1) {
    uVar1 = param_1 - 0xff10;
  }
  if (9 < uVar1) {
    uVar1 = param_1 - 0x2160;
    if (9 < uVar1) {
      uVar1 = param_1 - 0x2170;
    }
    if (9 < uVar1) {
      uVar1 = param_1 - 0x2460;
      bVar3 = 0x12 < uVar1;
      bVar2 = uVar1 == 0x13;
      if (0x13 < uVar1) {
        bVar3 = 7 < param_1 - 0x2776U;
        bVar2 = param_1 - 0x2776U == 8;
      }
      if (bVar3 && !bVar2) {
        return 0;
      }
    }
  }
  return 1;
}


