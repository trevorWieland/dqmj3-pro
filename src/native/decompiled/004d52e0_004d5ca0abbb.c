#include "004d52e0_004d5ca0abbb.h"



undefined4 fn_004d5734(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 8) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(), iVar1 == 0)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


