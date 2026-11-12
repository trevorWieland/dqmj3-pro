#include "0031154c_003118bc.h"



undefined4 * fn_003118bc(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008224e4;
  if (param_1[1] != 0) {
    fn_002feef8(param_1[1]);
  }
  return param_1;
}



void fn_00311880(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008224e4;
  if (param_1[1] != 0) {
    fn_002feef8(param_1[1]);
  }
  fn_002feef8(param_1);
  return;
}



void fn_003115d8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_008224cc;
  uVar2 = param_1[5];
  uVar1 = uVar2;
  if ((uint)param_1[6] < uVar2) {
    do {
      uVar1 = uVar1 + 0xc;
    } while (uVar1 != param_1[6]);
  }
  fn_001008c4(uVar2,(int)(param_1[7] - uVar2) / 0xc,0);
  fn_002feef8(param_1);
  return;
}



void fn_00311598(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  if (iVar1 == 0) {
    iVar1 = param_1[4];
    piVar2 = (int *)(param_1[5] + iVar1 * 0xc);
    iVar3 = *piVar2;
    iVar4 = piVar2[1];
    iVar5 = piVar2[2];
    param_1[4] = iVar1 + 1;
    param_1[1] = iVar3;
    param_1[2] = iVar4;
    param_1[3] = iVar5;
  }
  return;
}



undefined4 fn_0031154c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00154ac8(0x30);
  if (iVar1 == 0) {
    iVar1 = fn_00154ac8(0x2e);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 10;
  }
  return uVar2;
}


