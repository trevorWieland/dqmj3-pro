#include "0045616c_004566f8bb.h"



void fn_004566f8(void)

{
  int iVar1;
  
  iVar1 = fn_00456728();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00456718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



void fn_004565fc(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_00852864;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x10);
  piVar1[2] = iVar2;
  *piVar1 = param_1[5];
  piVar1[1] = 1;
  param_1[5] = piVar1;
  iVar2 = piVar1[2];
  param_1[7] = iVar2;
  param_1[8] = iVar2 + 0x10;
  param_1[9] = iVar2;
  param_1[7] = iVar2 + 0x10;
  *(int *)iVar2 = iVar2;
  *(undefined4 *)(param_1[9] + 4) = param_1[9];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &DAT_80010001;
  param_1[0xf] = &DAT_007dba44;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0xe] = &DAT_80010001;
  param_1[0xf] = &DAT_007dba44;
  param_1[0x10] = 0x71;
  param_1[0x16] = 0;
  param_1[3] = 0;
  param_1[0x17] = 0;
  return;
}


