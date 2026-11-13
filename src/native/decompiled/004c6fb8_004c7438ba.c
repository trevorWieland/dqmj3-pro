#include "004c6fb8_004c7438ba.h"



undefined4 fn_004c71f0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + 0xc);
  while (iVar3 != param_1 + 8) {
    lVar5 = fn_006d6d3c(iVar3 + 0x14);
    lVar6 = fn_006d6d3c(param_2 + 8);
    if ((lVar5 == lVar6) && (*(int *)(iVar3 + 0x28) == *(int *)(param_2 + 0x1c))) {
      pcVar1 = *(code **)(*(int *)(iVar3 + 8) + 8);
      (*pcVar1)(iVar3 + 8,pcVar1,0x8000,0);
      iVar2 = *(int *)(iVar3 + 4);
      (*(code *)**(undefined4 **)(iVar3 + 8))();
      fn_004f0c1c(param_1 + 4,iVar3);
      fn_004f0ab4(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + iVar3);
      uVar4 = 1;
      iVar3 = iVar2;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4);
    }
  }
  return uVar4;
}



int fn_004c717c(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == param_1 + 8) {
      return 0;
    }
    lVar2 = fn_006d6d3c(iVar1 + 0x14);
    lVar3 = fn_006d6d3c(param_2 + 8);
    if ((lVar2 == lVar3) && (*(int *)(iVar1 + 0x28) == *(int *)(param_2 + 0x1c))) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1 + 8;
}


