#include "005cd920_005ce1f4aab.h"



void fn_005cd998(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*param_1 + 0x1c))(param_1);
  (**(code **)(*param_1 + 0x14))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x005cd9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,0);
  return;
}



void fn_005cd950(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0084be6c;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}


