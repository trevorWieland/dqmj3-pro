#include "003fc554_003fd1b4ba.h"



void fn_003fcefc(undefined4 *param_1)

{
  *param_1 = &DAT_0081cd10;
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



void fn_003fced4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  *puVar1 = &PTR_FUN_00836504;
  return;
}



void fn_003fcde0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_003fce8c);
  uVar3 = (**(code **)(*param_1 + 0x120))(param_1);
  fn_00688c04(uVar2,uVar3,0);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_003fcea4);
  uVar3 = (**(code **)(*param_1 + 0x124))(param_1);
  fn_00688c04(uVar2,uVar3,0);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_003fcebc);
  uVar3 = (**(code **)(*param_1 + 0x128))(param_1);
  fn_00688c04(uVar2,uVar3,0);
  return;
}



undefined4 fn_003fcd9c(int *param_1)

{
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_0089584c,DAT_00895850,DAT_00895854);
  (**(code **)(*param_1 + 0x11c))(param_1);
  return 1;
}


