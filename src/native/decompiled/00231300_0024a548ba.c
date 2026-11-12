#include "00231300_0024a548ba.h"



void fn_0023e508(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0023e524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x3c))(piVar1,param_3);
  return;
}


