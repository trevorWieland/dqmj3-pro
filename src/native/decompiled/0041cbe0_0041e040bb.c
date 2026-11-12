#include "0041cbe0_0041e040bb.h"



void fn_0041e040(int param_1)

{
  fn_002c3d68();
  fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14),1);
                    /* WARNING: Could not recover jumptable at 0x0041e074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xe4) + 0xc))();
  return;
}



void fn_0041dde0(int param_1)

{
  fn_003979d0();
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}



void fn_0041ddb0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003e734c();
  puVar1[0x40] = 0;
  *puVar1 = &DAT_00839f68;
  return;
}


