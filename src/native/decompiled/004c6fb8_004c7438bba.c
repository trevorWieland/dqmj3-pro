#include "004c6fb8_004c7438bba.h"



void fn_004c72c4(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0xc);
LAB_004c72d4:
  do {
    if (iVar3 == param_1 + 8) {
      return;
    }
    if (*(int *)(iVar3 + 0x28) != *(int *)(param_2 + 0x1c)) {
      lVar4 = fn_006d6d3c(iVar3 + 0x14);
      lVar5 = fn_006d6d3c(param_2 + 8);
      if (lVar4 == lVar5) {
        pcVar1 = *(code **)(*(int *)(iVar3 + 8) + 8);
        (*pcVar1)(iVar3 + 8,pcVar1,0x8000,0);
        iVar2 = *(int *)(iVar3 + 4);
        (*(code *)**(undefined4 **)(iVar3 + 8))();
        fn_004f0c1c(param_1 + 4,iVar3);
        fn_004f0ab4(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + iVar3);
        iVar3 = iVar2;
        goto LAB_004c72d4;
      }
    }
    iVar3 = *(int *)(iVar3 + 4);
  } while( true );
}


