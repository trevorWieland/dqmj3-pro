#include "001bb744_001bbf50b.h"



void fn_001bbf50(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  do {
    if (param_1[9] != 0) {
      if (param_1[9] != 1) {
        return;
      }
      if (param_1[6] != 0) {
        *(undefined1 *)((int)param_1 + param_1[6] + 0x2c) = 0x2f;
      }
      iVar2 = param_1[1];
      if (iVar2 == 10) {
        return;
      }
      iVar3 = param_1[2];
      iVar1 = fn_00192114();
      *(undefined1 *)(iVar1 + 0xc0) = 0;
      iVar1 = fn_00192114();
      if (*(int *)(iVar1 + 200) == 0 || *(int *)(iVar1 + 200) == 10) {
        iVar1 = fn_00192114();
        *(int *)(iVar1 + 200) = iVar2;
        iVar2 = fn_00192114();
        *(int *)(iVar2 + 0xcc) = iVar3;
      }
      if ((code *)param_1[10] == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x001bc060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[10])(param_1,param_1[2]);
      return;
    }
    param_1[6] = 0;
    param_1[9] = 1;
    iVar2 = fn_001bdd9c(param_1 + 0xb);
    do {
      iVar1 = iVar2;
      iVar2 = iVar1 + -1;
      if (iVar2 < 1) goto LAB_001bbff8;
    } while (*(char *)((int)param_1 + iVar1 + 0x2b) != '/');
    param_1[6] = iVar2;
    *(undefined1 *)((int)param_1 + iVar1 + 0x2b) = 0;
LAB_001bbff8:
    if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
      iVar2 = 3;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x28))();
    }
    param_1[1] = iVar2;
    if (iVar2 == 10) {
      return;
    }
  } while( true );
}


