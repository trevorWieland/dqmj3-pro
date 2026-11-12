#include "005e6a90_005e6ee4a.h"



void fn_005e6b80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_005e4644(*(undefined4 *)(param_1 + 8));
  fn_00541328(uVar1,param_2);
  return;
}



void fn_005e6b64(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_005e4644(*(undefined4 *)(param_1 + 8));
  fn_00541328(uVar1,param_2);
  return;
}



void fn_005e6b44(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_001287b4();
                    /* WARNING: Could not recover jumptable at 0x005e6b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
  return;
}



void fn_005e6b18(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00858ae8;
  fn_002feef8(param_1[7]);
  fn_005df880(param_1);
  fn_002feef8();
  return;
}



void fn_005e6ae8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 0x164) = 0;
  *(undefined2 *)(iVar1 + 0x166) = 0xffff;
  *(undefined4 *)(iVar1 + 0x168) = 0;
  *(undefined4 *)(iVar1 + 0x16c) = 0;
  *(undefined4 *)(iVar1 + 0x170) = 0;
  *(undefined4 *)(iVar1 + 0x174) = 0;
  return;
}



void fn_005e6a90(undefined4 *param_1)

{
  *param_1 = &DAT_00858b00;
  if (param_1[9] != 0) {
    fn_00117528(param_1[4],0);
  }
  if (param_1[10] != 0) {
    fn_00117528(param_1[5],0);
  }
  fn_002feef8(param_1);
  return;
}


