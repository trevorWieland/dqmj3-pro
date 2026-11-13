#include "005b329c_005b3ba8abb.h"



void fn_005b33d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &DAT_00848034;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



void fn_005b3344(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [12];
  
  iVar2 = *(int *)(DAT_00897834 + 0x18);
  *(undefined1 *)(iVar2 + 4) = 1;
  uVar1 = fn_006e979c(param_2);
  *(undefined1 *)(iVar2 + 0x10) = uVar1;
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_3 + 8);
  uVar3 = fn_006e979c(param_2);
  fn_002cefbc(DAT_00897834,*(undefined4 *)(param_3 + 8),uVar3);
  uVar3 = fn_006e979c(param_2);
  fn_003c9218(auStack_20,uVar3);
  fn_002cf33c();
  fn_002ce8dc(DAT_00897834,2);
  return;
}


