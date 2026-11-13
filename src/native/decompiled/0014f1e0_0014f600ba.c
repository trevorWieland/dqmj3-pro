#include "0014f1e0_0014f600ba.h"



void fn_0014f51c(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 + 0x48) = param_2;
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x18) = 0x5f;
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    return;
  }
  if (param_2 == 2 || param_2 == 3) {
    fn_0014f550(param_1,0x62);
    return;
  }
  fn_0014f550(param_1,0x60,0);
  return;
}



void fn_0014f510(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



void fn_0014f500(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  param_1 = param_1 + param_2 * 8;
  uVar1 = param_3[1];
  *(undefined4 *)(param_1 + 0x2d8) = *param_3;
  *(undefined4 *)(param_1 + 0x2dc) = uVar1;
  return;
}



void fn_0014f4d8(int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 == 0;
  if (!bVar1) {
    param_1 = param_1 + -4;
    bVar1 = param_1 == 0;
  }
  if (bVar1) {
    return;
  }
  if (*(code **)(param_1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0014f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + -8))();
  return;
}


