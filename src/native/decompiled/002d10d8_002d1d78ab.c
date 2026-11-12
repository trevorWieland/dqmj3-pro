#include "002d10d8_002d1d78ab.h"



undefined4 * fn_002d1760(undefined4 *param_1)

{
  *param_1 = &DAT_0081fdc8;
  return param_1;
}



void fn_002d16e4(int *param_1)

{
  param_1[2] = 0;
  (**(code **)(*param_1 + 0x14))(param_1);
  (**(code **)(*param_1 + 0x24))(param_1);
  fn_001433d8(param_1 + 6);
  param_1[1] = 0;
  (**(code **)(*param_1 + 0x1c))(param_1);
  if (param_1[5] != 0) {
    fn_0012d73c();
    param_1[5] = 0;
  }
  return;
}



void fn_002d15e4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [16];
  
  if (0 < param_1[2]) {
    param_1[2] = param_1[2] + 1;
    return;
  }
  param_1[2] = 1;
  if (param_1[1] < 1) {
    param_1[1] = 1;
    iVar2 = param_1[4];
    if (iVar2 != 0) {
      uVar1 = fn_001287b4();
      iVar2 = fn_0011c184(iVar2,uVar1,0x80,5);
      param_1[5] = iVar2;
    }
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  else {
    param_1[1] = param_1[1] + 1;
  }
  if (param_1[5] != 0) {
    uVar1 = fn_00145ac0();
    fn_00173a34(param_1 + 6,uVar1);
    fn_001a0b50(auStack_20,param_1 + 6,0);
    fn_0019f67c(auStack_20,param_1 + 6);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
                    /* WARNING: Could not recover jumptable at 0x002d16d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}


