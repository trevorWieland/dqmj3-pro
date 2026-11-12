#include "004d52e0_004d5ca0aba.h"



undefined4 fn_004d54d8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_2), iVar2 == 0))
  {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return uVar3;
}


