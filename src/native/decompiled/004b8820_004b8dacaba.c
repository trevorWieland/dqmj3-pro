#include "004b8820_004b8dacaba.h"



void fn_004b89a0(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x18) == iVar3) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18) - iVar3;
  }
  iVar2 = iVar2 / 2;
  if (iVar2 != 0) {
    iVar1 = fn_00169f1c(param_2,iVar2);
    param_2 = (iVar1 + 1) * iVar2;
  }
  if (param_2 < 10) {
    param_2 = 10;
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x10)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  }
  fn_004b890c(param_1,param_2);
  if (param_3 != 0) {
    fn_004b8a68(param_1,param_3,param_4);
  }
  fn_004b8a68(param_1,iVar3,iVar2);
  if (iVar3 == 0) {
    return;
  }
  if (*(code **)(iVar3 + -8) == (code *)0x0) {
    fn_0030233c(iVar3 + -8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b8a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + -8))();
  return;
}


