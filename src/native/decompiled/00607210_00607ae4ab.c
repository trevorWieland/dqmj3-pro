#include "00607210_00607ae4ab.h"



int fn_00607778(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = fn_006c4224(*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10));
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      return 1;
    }
    bVar2 = iVar1 == 4;
    if (bVar2) {
      iVar1 = 2;
    }
    if (bVar2 || iVar1 == 3) {
      return iVar1;
    }
    if (iVar1 == 7) {
      return 4;
    }
    if (iVar1 == 5 || iVar1 == 6) {
      return iVar1;
    }
    if (iVar1 == 8) {
      return 7;
    }
    if (iVar1 == 9) {
      return 8;
    }
  }
  return 0;
}



void fn_00607674(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = param_1 + 5;
  *param_1 = &PTR_LAB_0084f67c;
  piVar5 = (int *)param_1[9];
  if (piVar5 != (int *)0x0) {
    piVar3 = (int *)*piVar5;
    while (piVar3 != piVar5) {
      piVar4 = (int *)param_1[9];
      if (piVar3 != (int *)param_1[9]) {
        piVar4 = (int *)*piVar3;
        *(int **)piVar3[1] = piVar4;
        *(int *)(*piVar3 + 4) = piVar3[1];
        param_1[10] = param_1[10] + -1;
        (**(code **)piVar3[2])(piVar3 + 2);
        *piVar3 = param_1[6];
        param_1[6] = piVar3;
      }
      piVar3 = piVar4;
    }
    puVar2 = (undefined4 *)param_1[9];
    *puVar2 = param_1[6];
    param_1[6] = puVar2;
    piVar5 = (int *)*piVar1;
    while (piVar5 != (int *)0x0) {
      *piVar1 = *piVar5;
      fn_0014f1bc(piVar5[2]);
      fn_0014f1bc(piVar5);
      piVar5 = (int *)*piVar1;
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  fn_003953e8(param_1);
  return;
}


