#include "00459cb0_0045a5b0abbb.h"



int fn_0045a1bc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 0x14);
  if (piVar3 != *(int **)(param_1 + 0x14)) {
    do {
      uVar1 = (**(code **)(*(int *)piVar3[2] + 0x20))();
      iVar2 = fn_00101d80(uVar1,param_2);
      if (iVar2 == 0) {
        return piVar3[2];
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0x14));
  }
  return 0;
}


