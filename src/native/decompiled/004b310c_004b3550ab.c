#include "004b310c_004b3550ab.h"



void fn_004b32c4(void)

{
  int iVar1;
  
  iVar1 = fn_0014f2b0();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b32e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 * fn_004b31c4(undefined4 *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint local_18 [2];
  
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  piVar1 = param_1 + 3;
  *param_1 = &DAT_008558c4;
  *piVar1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_18[0] = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc);
  local_18[1] = 0x20;
  puVar2 = local_18;
  if (local_18[0] < 0x20) {
    puVar2 = local_18 + 1;
  }
  uVar8 = *puVar2;
  puVar3 = (undefined1 *)fn_0015ece0(uVar8);
  *piVar1 = (int)puVar3;
  puVar7 = *(undefined1 **)(param_2 + 0x10);
  for (puVar5 = *(undefined1 **)(param_2 + 0xc); puVar5 != puVar7; puVar5 = puVar5 + 1) {
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *puVar5;
    }
    puVar3 = puVar3 + 1;
  }
  iVar6 = *(int *)(param_2 + 0xc);
  iVar4 = *(int *)(param_2 + 0x10);
  param_1[5] = *piVar1 + uVar8;
  param_1[4] = (iVar4 - iVar6) + *piVar1;
  return param_1;
}


