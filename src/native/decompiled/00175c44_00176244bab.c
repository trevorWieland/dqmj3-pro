#include "00175c44_00176244bab.h"



undefined4 *
fn_0017603c(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  for (; 0x80 < param_5; param_5 = param_5 - 0x80) {
    *param_2 = *param_4;
    param_2[1] = param_3 | 0x7ff0000;
    fn_0017821c(param_2 + 2,param_4 + 1,0x1fc);
    param_2[0x81] = 0xead0fead;
    param_4 = param_4 + 0x80;
    param_2 = param_2 + 0x82;
  }
  *param_2 = *param_4;
  puVar2 = param_2 + 2;
  param_2[1] = param_5 * 0x100000 - 0x100000 | param_3 | 0xf0000;
  fn_0017821c(puVar2,param_4 + 1,param_5 * 4 + -4);
  puVar2 = puVar2 + param_5;
  puVar1 = puVar2 + -1;
  if ((param_5 & 1) == 0) {
    puVar2[-1] = 0xead0fead;
    puVar1 = puVar2;
  }
  return puVar1;
}


