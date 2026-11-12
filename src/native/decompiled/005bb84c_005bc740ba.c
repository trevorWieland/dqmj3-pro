#include "005bb84c_005bc740ba.h"



void fn_005bc590(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x42];
  if ((iVar1 == 0) || (iVar1 != 1 && iVar1 != 2)) {
    fn_002c3d68(param_1);
                    /* WARNING: Could not recover jumptable at 0x005bc5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x154))(param_1);
    return;
  }
  return;
}



void fn_005bc564(int param_1)

{
  fn_006899f4(param_1,0xdd,0,1);
  *(undefined4 *)(param_1 + 0x108) = 2;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return;
}


