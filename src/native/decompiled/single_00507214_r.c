#include "single_00507214_r.h"


extern undefined4 SupervisorCall;

void fn_00507214(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xe8) == 0) {
    return;
  }
  iVar1 = fn_004f0a20(param_1 + 0xdc);
  if (iVar1 == 0) {
    iVar1 = 0;
    puVar2 = (undefined4 *)&SupervisorCall;
  }
  else {
    iVar1 = iVar1 - *(int *)(param_1 + 0xec);
    puVar2 = (undefined4 *)(iVar1 + 8);
    if (puVar2 == (undefined4 *)0x0) goto LAB_00507260;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
LAB_00507260:
  fn_004f0b78(param_1 + 0xcc,param_1 + 0xd0,iVar1);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_2[1];
  }
  return;
}


