#include "00535f9c_00550464bbb.h"



void fn_00550464(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  if (((0x17 < (uint)*(byte *)(param_1 + 0x30) + param_3) ||
      (0x20 < (uint)*(byte *)(param_1 + 0x31) + param_4)) ||
     (0x20 < (uint)*(byte *)(param_1 + 0x33) + param_5)) {
    if (*(byte *)(param_1 + 0x30) != 0) {
      fn_0054f158(param_1,param_2);
    }
    if (param_6 != 0) {
      *(undefined1 *)(param_1 + 0x31) = 0;
      *(undefined1 *)(param_1 + 0x32) = 0;
    }
  }
  return;
}


