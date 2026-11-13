#include "005883bc_00589248bb.h"



undefined4 fn_00589248(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
  iVar4 = *(int *)(iVar5 + 0x100);
  if (0 < iVar4) {
    do {
      iVar1 = fn_006bb544(iVar5,iVar3);
      if (((iVar1 != 0) && (iVar2 = fn_001c7084(), iVar2 != 0)) && (*(int *)(iVar2 + 8) == 7))
      goto LAB_005892b0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar1 = 0;
LAB_005892b0:
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 == 0) {
    fn_0021718c(param_1,1,0x3c);
    return 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 0;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),1,4,0);
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 1;
}



void fn_0058921c(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),0);
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  return;
}



void fn_00589198(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_008437c0;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = 0xffffffff;
  return;
}


