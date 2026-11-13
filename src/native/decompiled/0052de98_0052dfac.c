#include "0052de98_0052dfac.h"



void fn_0052dfac(int *param_1)

{
  (**(code **)(*param_1 + 0xc))(param_1,DAT_008c356c);
                    /* WARNING: Could not recover jumptable at 0x0052dfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))(param_1,DAT_008c3570);
  return;
}



void fn_0052de98(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((0 < (int)param_1[1]) && (iVar4 = 0, 0 < param_2)) {
    do {
      iVar2 = 0;
      if (0 < (int)param_1[2]) {
        do {
          iVar3 = param_1[iVar2 + 4];
          if ((*(int *)(iVar3 + 0x24) == param_1[3]) &&
             (piVar1 = *(int **)(iVar3 + 0xd8), piVar1 != (int *)0x0)) {
            (**(code **)(*piVar1 + 8))(piVar1,iVar3);
            piVar1 = *(int **)(iVar3 + 0xd8);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x18))(piVar1,iVar3);
              if ((**(int **)(iVar3 + 0xdc) == 1) && (((*(int **)(iVar3 + 0xdc))[0x152] & 1U) != 0))
              {
                (**(code **)(**(int **)(iVar3 + 0xd8) + 0x1c))(*(int **)(iVar3 + 0xd8),iVar3);
              }
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)param_1[2]);
      }
      if ((int)param_1[1] < 1) {
        fn_0053fa7c(*param_1,param_1);
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  return;
}


