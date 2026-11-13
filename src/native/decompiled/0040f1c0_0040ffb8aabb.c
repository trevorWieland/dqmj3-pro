#include "0040f1c0_0040ffb8aabb.h"



undefined1 fn_0040f588(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar5 = 0;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  iVar3 = fn_006b6530(uVar2,param_2,uVar1);
  if ((iVar3 != 0) && (iVar3 = fn_006cb150(uVar2,uVar1), iVar3 == 1)) {
    puVar4 = (undefined1 *)fn_006cb18c(uVar2,uVar1);
    uVar5 = *puVar4;
  }
  return uVar5;
}


