#include "006d6924_006d7100ba.h"



undefined4 fn_006d6dc8(undefined4 *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *in_r12;
  bool bVar2;
  
  bVar2 = param_2 - 0x100000U < 0x3ff00000;
  uVar1 = 0xe0e14826;
  if (bVar2) {
    in_r12 = param_3 + -0x40000;
  }
  if ((bVar2 && in_r12 < (undefined4 *)0x3ff00000) && (5 < param_4)) {
    fn_004ed514(param_2,*param_1);
    fn_004ed504(param_2 + 4,*(undefined2 *)(param_1 + 1));
    *param_3 = 6;
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_006d6d78(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 >> 0x18;
  uVar2 = (*param_1 & 0xff0000) >> 0x10;
  if (uVar1 != 10) {
    if (uVar1 == 0xac) {
      if (uVar2 < 0x10) {
        return 0;
      }
      if (0x1f < uVar2) {
        return 0;
      }
    }
    else {
      if (uVar1 != 0xc0) {
        return 0;
      }
      if (uVar2 != 0xa8) {
        return 0;
      }
    }
  }
  return 1;
}



undefined4 fn_006d6d58(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((short)param_1[1] != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


