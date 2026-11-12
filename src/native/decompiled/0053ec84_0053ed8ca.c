#include "0053ec84_0053ed8ca.h"



void fn_0053ec84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar5 = iVar1 + param_2 * 4;
  for (iVar4 = *(int *)(iVar5 + 0x20); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xd4)) {
    iVar2 = *(int *)(iVar4 + 0xe0);
    while (iVar2 != 0) {
      iVar2 = fn_00531388();
    }
    iVar2 = *(int *)(iVar4 + 0xe4);
    while (iVar2 != 0) {
      iVar2 = fn_00531388();
    }
    fn_0053a474(iVar4 + 0x240);
    *(undefined4 *)(iVar4 + 0xd8) = 0;
    *(int *)(*(int *)(iVar4 + 0x1c) + 4) = *(int *)(*(int *)(iVar4 + 0x1c) + 4) + -1;
    *(undefined4 *)(iVar4 + 0x24) = 0xffffffff;
    if (*(int *)(*(int *)(iVar4 + 0x1c) + 4) == 0) {
      *(int *)(iVar1 + 0x474) = *(int *)(iVar1 + 0x474) + -1;
    }
    *(int *)(iVar1 + 0x328) = *(int *)(iVar1 + 0x328) + 1;
    iVar2 = *(int *)(iVar4 + 0xd4);
    iVar3 = iVar1 + *(int *)(iVar4 + 0x18) * 4;
    if (*(int *)(iVar3 + 0x20) == iVar4) {
      *(int *)(iVar3 + 0x20) = iVar2;
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0xd0) = 0;
      }
    }
    else {
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(iVar4 + 0xd0);
      }
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0xd4) = *(undefined4 *)(iVar4 + 0xd4);
    }
  }
  *(undefined4 *)(iVar5 + 0x120) = 0;
  *(undefined4 *)(iVar5 + 0x220) = 0;
  return;
}


