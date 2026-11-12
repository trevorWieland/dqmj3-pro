#include "004548bc_00454da8bba.h"



void fn_00454cdc(void)

{
  int iVar1;
  
  iVar1 = fn_00454d0c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00454cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 * fn_00454d0c(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  *param_1 = &DAT_00852740;
  piVar1 = (int *)param_1[2];
  puVar3 = (uint *)(piVar1 + 1);
  do {
    uVar2 = *puVar3 - 1;
    bVar4 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar4);
  *puVar3 = uVar2;
  bVar4 = uVar2 == 0;
  if (bVar4) {
    uVar2 = (uint)*(byte *)(piVar1 + 2);
  }
  if (bVar4 && uVar2 == 0) {
    *(undefined1 *)(piVar1 + 2) = 1;
    (**(code **)(*piVar1 + 4))();
  }
  param_1[2] = 0;
  return param_1;
}


