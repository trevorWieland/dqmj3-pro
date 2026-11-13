#include "0023d448_0023da78b.h"



void fn_0023da78(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0023da94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x1c))();
  return;
}



void fn_0023da04(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[3];
  uVar2 = 0;
  if (param_1[4] - iVar1 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar1 + uVar2 * 4);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 8);
      }
      if (iVar1 == param_2) {
        (**(code **)(*param_1 + 0xc))(param_1,uVar2);
      }
      iVar1 = param_1[3];
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(param_1[4] - iVar1 >> 2));
  }
  return;
}



void fn_0023d9c8(int param_1,int param_2)

{
  if ((*(char *)(param_1 + 0x34) != '\0') &&
     (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + param_2 * 4) + 0xd) != '\0')) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}


