#include "single_004ceb44_r.h"


extern undefined4 SupervisorCall;

void fn_004ceb44(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 8);
  if (param_2[8] == 0) {
                    /* WARNING: Could not recover jumptable at 0x004cecf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2,UNRECOVERED_JUMPTABLE,0x200,0);
    return;
  }
  (*UNRECOVERED_JUMPTABLE)(param_2,UNRECOVERED_JUMPTABLE,0x8000,0);
  if (*(int *)(param_1 + 0xd8) != 0) {
    iVar1 = fn_004f0a20(param_1 + 0xcc);
    if (iVar1 == 0) {
      iVar1 = 0;
      puVar2 = (undefined4 *)&SupervisorCall;
LAB_004cebb0:
      *puVar2 = &DAT_00855fc4;
      iVar3 = fn_0013d5c4(puVar2 + 1);
      iVar3 = fn_00124e48(iVar3 + 0x28);
      *(undefined4 *)(iVar3 + 0x5c) = 0;
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
    else {
      iVar1 = iVar1 - *(int *)(param_1 + 0xdc);
      puVar2 = (undefined4 *)(iVar1 + 8);
      if (puVar2 != (undefined4 *)0x0) goto LAB_004cebb0;
    }
    fn_004f0b78(param_1 + 0xbc,param_1 + 0xc0,iVar1);
    if (iVar1 != -8) {
      fn_0050d1a0(iVar1 + 0xc,param_2 + 1);
      fn_00518140(iVar1 + 0x34,param_2 + 0xb);
      *(char *)(iVar1 + 0x88) = (char)param_2[0x20];
      iVar3 = param_2[0x23];
      *(int *)(iVar1 + 0x90) = param_2[0x22];
      *(int *)(iVar1 + 0x94) = iVar3;
      *(int *)(iVar1 + 0x98) = param_2[0x24];
    }
  }
  if (((char)param_2[0x20] == '\0') || (*(int *)(param_1 + 0x10c) == 0)) goto LAB_004cecd4;
  iVar1 = fn_004f0a20(param_1 + 0x100);
  if (iVar1 == 0) {
    iVar1 = 0;
    puVar2 = (undefined4 *)&SupervisorCall;
LAB_004cec64:
    *puVar2 = &DAT_00855fc4;
    iVar3 = fn_0013d5c4(puVar2 + 1);
    iVar3 = fn_00124e48(iVar3 + 0x28);
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    *(undefined4 *)(iVar3 + 0x60) = 0;
  }
  else {
    iVar1 = iVar1 - *(int *)(param_1 + 0x110);
    puVar2 = (undefined4 *)(iVar1 + 8);
    if (puVar2 != (undefined4 *)0x0) goto LAB_004cec64;
  }
  fn_004f0b78(param_1 + 0xf0,param_1 + 0xf4,iVar1);
  if (iVar1 != -8) {
    fn_0050d1a0(iVar1 + 0xc,param_2 + 1);
    fn_00518140(iVar1 + 0x34,param_2 + 0xb);
    *(char *)(iVar1 + 0x88) = (char)param_2[0x20];
    iVar3 = param_2[0x23];
    *(int *)(iVar1 + 0x90) = param_2[0x22];
    *(int *)(iVar1 + 0x94) = iVar3;
    *(int *)(iVar1 + 0x98) = param_2[0x24];
  }
LAB_004cecd4:
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  return;
}


