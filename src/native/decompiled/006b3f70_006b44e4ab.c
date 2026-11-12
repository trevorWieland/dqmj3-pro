#include "006b3f70_006b44e4ab.h"



int fn_006b4240(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  do {
    iVar3 = 0;
    iVar6 = param_1 + iVar5 * 0xc;
    iVar1 = (*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4)) / 0x50;
    if (0 < iVar1) {
      do {
        iVar4 = *(int *)(*(int *)(iVar6 + 4) + iVar3 * 0x50 + 4);
        if ((iVar4 != 0) && (iVar2 = fn_006bab10(iVar4,param_2), iVar2 != 0)) {
          return iVar4;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return 0;
    }
  } while( true );
}


