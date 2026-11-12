#include "002d399c_002d4054b.h"



char fn_002d4054(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((int)*param_1 - 0x10U < 8) {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar2 = iVar2 + *param_1 * 0x418;
    iVar3 = fn_001a46f4((int)*(short *)(iVar2 + -0x4080));
    cVar1 = '\0';
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar2 + -0x4019);
    }
    if (iVar3 != 0 && cVar1 != '\0') {
      cVar1 = '\x01';
    }
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}



char fn_002d4040(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    return '\0';
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x90) + 0x3c);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x284);
  }
  if (iVar2 != 0 && cVar1 != '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}



void fn_002d3fc8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x10))();
  }
  piVar1 = (int *)fn_002d40c8(*(undefined4 *)(param_1 + 0x88),param_2);
  piVar2 = *(int **)(param_1 + 0x8c);
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int **)(param_1 + 0x8c) = piVar1;
  }
  if (*(int **)(param_1 + 0x8c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002d4038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x8c) + 8))();
  return;
}



void fn_002d3f68(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if ((param_4 & ~(int)*(char *)(iVar1 + 0x3a3)) == 0) {
    iVar1 = fn_00174828(DAT_008977e4);
    iVar1 = iVar1 + param_2 * 0x418 + -0x4080;
    if (iVar1 != 0) {
      fn_00654ce4(iVar1,param_3);
      return;
    }
  }
  return;
}


