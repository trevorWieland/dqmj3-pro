#include "001c04c4_001c132caa.h"



void fn_001c0508(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001851bc();
  if ((iVar1 != 0 && iVar1 != 10) && (*(int *)(param_1 + 0x14) < 0)) {
    fn_0015e590(*(int *)(param_1 + 0x14),0x1c0528);
  }
  if (*(code **)(DAT_008bf51c + 0xe4cc) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001c0550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_008bf51c + 0xe4cc))();
  return;
}



int fn_001c04c4(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  param_3 = (-iVar1 & 0x1fU) + param_3;
  *param_1 = param_3 + iVar1;
  *param_2 = iVar2 - param_3;
  iVar1 = iVar1 + (-iVar1 & 0x1fU);
  fn_00158f6c(iVar1);
  return iVar1;
}


