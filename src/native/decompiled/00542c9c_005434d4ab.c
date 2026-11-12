#include "00542c9c_005434d4ab.h"



int * fn_00542fec(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2,0x148,4);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00543524(iVar1,param_2,0,param_1);
  }
  (**(code **)(*piVar2 + 0x24))(piVar2,param_2);
  return piVar2;
}



uint fn_00542fb4(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fn_0054711c();
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = fn_00543048(param_1,param_2);
    uVar1 = uVar2 | uVar1;
  }
  return uVar1;
}


