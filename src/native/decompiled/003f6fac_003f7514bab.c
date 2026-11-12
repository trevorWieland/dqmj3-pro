#include "003f6fac_003f7514bab.h"



undefined1 fn_003f71f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  
  uVar5 = 0x19;
  iVar1 = fn_0066e158(DAT_00898840);
  if ((iVar1 == 0) && (iVar1 = fn_0066e3d8(DAT_00898840), iVar1 == 0)) {
    uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
    uVar5 = 0;
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
    iVar1 = fn_006b6530(uVar3,1,uVar2);
    if ((iVar1 != 0) && (iVar1 = fn_006c7718(uVar3,uVar2), iVar1 == 0)) {
      puVar4 = (undefined1 *)fn_006c772c(uVar3,uVar2);
      uVar5 = *puVar4;
    }
  }
  return uVar5;
}


