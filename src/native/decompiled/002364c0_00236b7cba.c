#include "002364c0_00236b7cba.h"



undefined1 * fn_00236ab8(undefined1 *param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (*(char *)(param_2 + 0x60) == '\0') {
    *param_1 = 0;
    fn_00176fb0(param_1 + 4,param_2 + 0xc4);
  }
  else {
    *param_1 = 1;
    fn_0017821c(param_1 + 4,param_2 + 100,0x60);
  }
  return param_1;
}



undefined * fn_00236aa8(int param_1)

{
  return &UNK_007c678c + param_1 * 8;
}


