#include "006cf4c4_006cfe74aab.h"



undefined4 fn_006cf878(int param_1,int param_2,int *param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_4 < *(ushort *)(param_1 + 8) + 5) {
    uVar1 = 0;
  }
  else {
    fn_00176fb0(param_2,param_1 + 5);
    fn_00301a9c(param_2 + 5,*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 8));
    if (param_3 != (int *)0x0) {
      *param_3 = *(ushort *)(param_1 + 8) + 5;
    }
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 *
fn_006cf6fc(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,uint param_5)

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


