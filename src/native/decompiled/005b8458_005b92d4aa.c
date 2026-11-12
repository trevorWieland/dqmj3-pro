#include "005b8458_005b92d4aa.h"



void fn_005b85d0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  param_1 = param_1 + param_2 * 0x18;
  *(undefined4 *)(param_1 + 0x14) = *param_3;
  iVar1 = param_3[1];
  piVar3 = (int *)(param_1 + 0x18);
  piVar2 = (int *)(iVar1 + -0xc);
  if (*piVar2 == -1) {
    if (piVar3 != param_3 + 1) {
      fn_00177c88(piVar3,0,*(undefined4 *)(*piVar3 + -4),iVar1,*(undefined4 *)(iVar1 + -4),0,
                   *(undefined4 *)(iVar1 + -4));
    }
  }
  else {
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
    if ((undefined4 *)*piVar3 != &DAT_008f9cf4) {
      piVar2 = (undefined4 *)*piVar3 + -3;
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(*piVar3 + -0xc,*(int *)(*piVar3 + -8) + 8,0);
      }
    }
    *piVar3 = param_3[1];
  }
  *(undefined4 *)(param_1 + 0x1c) = param_3[2];
  *(undefined4 *)(param_1 + 0x20) = param_3[3];
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_3 + 4);
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)((int)param_3 + 0x12);
  *(undefined4 *)(param_1 + 0x28) = param_3[5];
  return;
}



undefined4 fn_005b85a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < param_1) {
      uVar1 = 0xffffffff;
    }
    if (param_1 < param_2) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



void fn_005b8458(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0xffffffff;
  *puVar1 = &DAT_00848eb4;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 2;
  puVar1[5] = &DAT_008f9d04;
  puVar1[6] = &DAT_008f9d04;
  puVar1[7] = &DAT_008f9d04;
  return;
}


