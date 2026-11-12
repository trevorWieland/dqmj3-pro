#include "004c6fb8_004c7438bbba.h"



void fn_004c738c(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 != param_1 + 8) {
    if ((*(int *)(iVar2 + 0x14) == *(int *)(param_2 + 8)) &&
       (*(int *)(iVar2 + 0x28) == *(int *)(param_2 + 0x1c))) {
      pcVar1 = *(code **)(*(int *)(iVar2 + 8) + 8);
      (*pcVar1)(iVar2 + 8,pcVar1,0x8000,0);
      iVar3 = *(int *)(iVar2 + 4);
      (*(code *)**(undefined4 **)(iVar2 + 8))();
      fn_004f0c1c(param_1 + 4,iVar2);
      fn_004f0ab4(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + iVar2);
      iVar2 = iVar3;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return;
}


