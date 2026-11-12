#include "0065ccd0_0065d440bb.h"



void fn_0065d440(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  fn_001db0b0();
  piVar1 = *(int **)(param_1 + 0x1a4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0065d46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x14))(piVar1,param_2);
  return;
}



void fn_0065d408(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1a4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xd0))(piVar1,param_2);
  }
  fn_001daaf8(param_1,param_2);
  return;
}



undefined4 fn_0065d388(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = fn_002113c8();
  uVar2 = fn_006f74f4(DAT_008977e0);
  uVar2 = fn_00360360(uVar2,0x15,s_o_Z02_01_008c6d52);
  uVar3 = fn_006f74f4(DAT_008977e0);
  uVar3 = fn_006c2de8(uVar3,s_o_Z02_01_008c6d52);
  uVar4 = fn_006f7a70(DAT_008977e0);
  fn_002fe310(uVar4,uVar3,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  uVar2 = fn_006f72b4(DAT_008977e0);
  fn_0021b714(uVar2,s_ic_tornado_00_008c6d5b,0);
  return uVar1;
}


